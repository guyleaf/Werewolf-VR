using System;
using System.Collections;
using System.Collections.Generic;

using Oculus.Avatar2;

using UnityEngine;

using CAPI = Oculus.Avatar2.CAPI;

using Photon.Pun;

using UnityEngine.Assertions;

using System.Linq;
using Werewolf.Game;
#if UNITY_EDITOR
using UnityEditor;
#endif

namespace Werewolf.Player
{
    public class PlayerAvatarEntity : OvrAvatarEntity, IPunObservable
    {
        public GameManager _gm;
        public static float deltaTime;  // get time consume of a frame
        private float timer = 0;
        private float recTimer = 0;
        private bool _sync = false;
        private bool _recSync = false;
        private LightManager dayTimer;
        private bool _isMasterClient;
        private int playerCount;
        private List<int> playerList = new(){1, 2, 3, 4, 5, 6};
        private List<int> roleList = new();
        private const string logScope = "playerAvatar";

        public enum AssetSource
        {
            /// Load from one of the preloaded .zip files
            Zip,

            /// Load a loose glb file directly from StreamingAssets
            StreamingAssets,
        }

        [Header("Custom Events")]
        public AvatarStateEvent OnUserAvatarFoundEvent = new();

        public AvatarStateEvent OnUserAvatarNotFoundEvent = new();

        [Serializable]
        private struct AssetData
        {
            public AssetSource source;
            public string path;
        }

        [Header("Initialization")]
        [SerializeField]
        private bool _autoLoad = true;

        [Header("Assets")]
        [Tooltip("Asset paths to load, and whether each asset comes from a preloaded zip file or directly from StreamingAssets. See Preset Asset settings on OvrAvatarManager for how this maps to the real file name.")]
        [SerializeField]
        private List<AssetData> _assets = new() { new AssetData { source = AssetSource.Zip, path = "0" } };

        [Tooltip("Adds an underscore between the path and the postfix.")]
        [SerializeField]
        private bool _underscorePostfix = true;

        [Tooltip("Filename Postfix (WARNING: Typically the postfix is Platform specific, such as \"_rift.glb\")")]
        [SerializeField]
        private string _overridePostfix = string.Empty;

        [Header("CDN")]
        [Tooltip("Automatically retry LoadUser download request on failure")]
        [SerializeField]
        protected bool _autoCdnRetry = true;

        [Tooltip("Automatically check for avatar changes")]
        [SerializeField]
        protected bool _autoCheckChanges = true;

        [Tooltip("How frequently to check for avatar changes")]
        [SerializeField]
        [Range(4.0f, 320.0f)]
        private float _changeCheckInterval = 8.0f;

#pragma warning disable CS0414
        [Header("Debug Drawing")]
        [Tooltip("Draw debug visualizations for avatar gaze targets")]
        [SerializeField]
        private bool _debugDrawGazePos;

        [Tooltip("Color for gaze debug visualization")]
        [SerializeField]
        private Color _debugDrawGazePosColor = Color.magenta;
#pragma warning restore CS0414

        protected bool HasLocalAvatarConfigured => _assets.Count > 0;

        private PhotonView _photonView;

        private List<byte[]> _streamedDataList = new();

        private List<float> _streamedTimeList = new();

        protected override void Awake()
        {
            
            InitializeAvatarEntity();
            base.Awake();
            // OvrAvatarEntity.Awake calls OvrAvatarEntity.CreateEntity sets eye and face tracking contexts (which asks user permission).
            // On Oculus SDK version >= v46 Eye tracking and Face tracking need to be explicitely started by the application after permission has been requested.
            // Note: This API doesn't exist pre v46. If you require to support both v46 and earlier versions, one option is leveraging reflection:
            OVRPlugin.StartEyeTracking();
            OVRPlugin.StartFaceTracking();
            OVRPlugin.StartBodyTracking();
            // We use reflection here so that there are not compiler errors when using Oculus SDK v45 or below.
            // typeof(OVRPlugin).GetMethod("StartFaceTracking", BindingFlags.Public | BindingFlags.Static)?.Invoke(null, null);
            // typeof(OVRPlugin).GetMethod("StartEyeTracking", BindingFlags.Public | BindingFlags.Static)?.Invoke(null, null);
        }

        protected virtual IEnumerator Start()
        {
/*            OvrAvatarLog.LogError("Force the build console open...");
            _gm = GameObject.FindObjectOfType<GameManager>();
            dayTimer = GameObject.FindObjectOfType<LightManager>();
            _isMasterClient = PhotonNetwork.IsMasterClient;
            playerCount = PhotonNetwork.CountOfPlayers;
            System.Random rnd = new();
            var rndNum = playerList.OrderBy(item => rnd.Next());
            OvrAvatarLog.LogError("player roleList type: " + rndNum.GetType());
            foreach (int role in rndNum)
            {
                OvrAvatarLog.LogError("player role: " + role);
                roleList.Add(role);
            }*/

            if (_autoLoad)
            {
                if (PhotonNetwork.InRoom)
                {
                    GetUserIdFromPhotonInstantiationData();
                }
                else
                {
                    yield return GetUserIdFromMeta();
                }

                yield return LoadUserAvatar();
            }

#if UNITY_EDITOR
            SceneView.duringSceneGui += OnSceneGUI;
#endif
        }

        protected override void OnDestroyCalled()
        {
#if UNITY_EDITOR
            SceneView.duringSceneGui -= OnSceneGUI;
#endif
        }

        #region Loading Callbacks

        private void InitializeAvatarEntity()
        {
            if (PhotonNetwork.InRoom)
            {
                _photonView = GetComponent<PhotonView>();
                Assert.IsNotNull(_photonView, "The PhotonView script is not attached to the player.");

                var viewId = _photonView.ViewID;
                if (_photonView.IsMine)
                {
                    InitializeLocalAvatar(viewId);
                }
                else
                {
                    InitializeRemoteAvatar(viewId);
                }
            }
            else
            {
                InitializeLocalAvatar(0);
            }

            ForceStreamLod(StreamLOD.Medium);
        }

        private void InitializeLocalAvatar(int viewId)
        {
            SetIsLocal(true);
            _creationInfo.features = CAPI.ovrAvatar2EntityFeatures.Preset_Default | CAPI.ovrAvatar2EntityFeatures.Rendering_ObjectSpaceTransforms;
            var playerInputManager = FindObjectOfType<PlayerAvatarInput2>();
            SetBodyTracking(playerInputManager);
            var lipSyncInput = FindObjectOfType<OvrAvatarLipSyncContext>();
            SetLipSync(lipSyncInput);
            // gameObject.name = $"{viewId}_LocalAvatar";
            gameObject.name = $"LocalAvatar";
        }

        private void InitializeRemoteAvatar(int viewId)
        {
            SetIsLocal(false);
            _creationInfo.features = CAPI.ovrAvatar2EntityFeatures.Preset_Remote | CAPI.ovrAvatar2EntityFeatures.Rendering_ObjectSpaceTransforms;
            gameObject.name = $"{viewId}_RemoteAvatar";
        }

        private IEnumerator LoadUserAvatar()
        {
            if (_userId == 0)
            {
                LoadLocalAvatar();
                yield break;
            }

            yield return LoadCdnAvatar();
        }

        private void LoadLocalAvatar()
        {
            if (!HasLocalAvatarConfigured)
            {
                OvrAvatarLog.LogInfo("No local avatar asset configured", logScope, this);
                return;
            }

            // Zip asset paths are relative to the inside of the zip.
            // Zips can be loaded from the OvrAvatarManager at startup or by calling OvrAvatarManager.Instance.AddZipSource
            // Assets can also be loaded individually from Streaming assets
            var path = new string[1];
            foreach (var asset in _assets)
            {
                bool isFromZip = asset.source == AssetSource.Zip;

                string assetPostfix = (_underscorePostfix ? "_" : "")
                    + OvrAvatarManager.Instance.GetPlatformGLBPostfix(isFromZip)
                    + OvrAvatarManager.Instance.GetPlatformGLBVersion(_creationInfo.renderFilters.highQualityFlags != CAPI.ovrAvatar2EntityHighQualityFlags.None, isFromZip)
                    + OvrAvatarManager.Instance.GetPlatformGLBExtension(isFromZip);
                if (!String.IsNullOrEmpty(_overridePostfix))
                {
                    assetPostfix = _overridePostfix;
                }

                path[0] = asset.path + assetPostfix;
                if (isFromZip)
                {
                    LoadAssetsFromZipSource(path);
                }
                else
                {
                    LoadAssetsFromStreamingAssets(path);
                }
            }
        }

        private IEnumerator LoadCdnAvatar()
        {
            const float HAS_AVATAR_RETRY_WAIT_TIME = 5.0f;

            int totalAttempts = 0;
            bool continueRetries = _autoCdnRetry;

            bool hasFoundAvatar = false;
            bool requestComplete = false;
            do
            {
                var hasAvatarRequest = OvrAvatarManager.Instance.UserHasAvatarAsync(_userId);
                while (!hasAvatarRequest.IsCompleted) { yield return null; }

                switch (hasAvatarRequest.Result)
                {
                    case OvrAvatarManager.HasAvatarRequestResultCode.HasAvatar:
                        hasFoundAvatar = true;
                        requestComplete = true;
                        continueRetries = false;

                        OnUserAvatarFoundEvent?.Invoke(this);

                        // Now attempt download
                        yield return LoadUser(true);
                        // End coroutine - do not load default
                        break;

                    case OvrAvatarManager.HasAvatarRequestResultCode.HasNoAvatar:
                        OnUserAvatarNotFoundEvent?.Invoke(this);

                        OvrAvatarLog.LogDebug(
                            "User has no avatar. Keep retrying."
                            , logScope, this);
                        break;

                    case OvrAvatarManager.HasAvatarRequestResultCode.SendFailed:
                        OvrAvatarLog.LogError(
                            "Unable to send avatar status request."
                            , logScope, this);
                        break;

                    case OvrAvatarManager.HasAvatarRequestResultCode.RequestFailed:
                        OvrAvatarLog.LogError(
                            "An error occurred while querying avatar status."
                            , logScope, this);
                        break;

                    case OvrAvatarManager.HasAvatarRequestResultCode.BadParameter:
                        continueRetries = false;

                        OvrAvatarLog.LogError(
                            "Attempted to load invalid userId."
                            , logScope, this);
                        break;

                    case OvrAvatarManager.HasAvatarRequestResultCode.RequestCancelled:
                        continueRetries = false;

                        OvrAvatarLog.LogInfo(
                            "HasAvatar request cancelled."
                            , logScope, this);
                        break;

                    case OvrAvatarManager.HasAvatarRequestResultCode.UnknownError:
                    default:
                        OvrAvatarLog.LogError(
                            $"An unknown error occurred {hasAvatarRequest.Result}. Falling back to local avatar."
                            , logScope, this);
                        break;
                }

                if (continueRetries)
                {
                    yield return new WaitForSecondsRealtime(HAS_AVATAR_RETRY_WAIT_TIME);
                }
                totalAttempts++;

                OvrAvatarLog.LogInfo($"Request Attempts: {totalAttempts}");
            } while (continueRetries);

            if (!requestComplete)
            {
                OvrAvatarLog.LogError(
                    $"Unable to query UserHasAvatar {totalAttempts} attempts"
                    , logScope, this);
            }

            if (!hasFoundAvatar)
            {
                // We cannot find an avatar, use local fallback
                UserHasNoAvatarFallback();
            }

            // Check for changes, user could create one later
            if (_autoCheckChanges && hasFoundAvatar)
            {
                yield return PollForAvatarChange();
            }
        }

        private IEnumerator GetUserIdFromMeta()
        {
            _userId = MetaPlatform.UserId;
            if (_userId == 0)
            {
                yield return MetaPlatform.Instance.LogIn();
                _userId = MetaPlatform.UserId;
            }
        }

        #endregion

        #region Public Methods

        /// <summary>
        /// Use User ID provided by the current device to load avatar
        /// </summary>
        /// <returns></returns>
        public IEnumerator LoadAvatar()
        {
            yield return GetUserIdFromMeta();
            yield return LoadUserAvatar();
        }

        /// <summary>
        /// Use provided User ID to load avatar
        /// </summary>
        /// <param name="userId"></param>
        /// <returns></returns>
        public IEnumerator LoadAvatar(ulong userId)
        {
            _userId = userId;
            yield return LoadUserAvatar();
        }

        public Transform GetSkeletonTransform(CAPI.ovrAvatar2JointType jointType)
        {
            if (!_criticalJointTypes.Contains(jointType))
            {
                OvrAvatarLog.LogError($"Can't access joint {jointType} unless it is in critical joint set");
                return null;
            }

            return GetSkeletonTransformByType(jointType);
        }

        public CAPI.ovrAvatar2JointType[] GetCriticalJoints()
        {
            return _criticalJointTypes;
        }

        #endregion

        #region Retry
        protected void UserHasNoAvatarFallback()
        {
            OvrAvatarLog.LogError(
                $"Unable to find user avatar with userId {_userId}. Falling back to local avatar.", logScope, this);

            LoadLocalAvatar();
        }

        protected IEnumerator LoadUser(bool loadFallbackOnFailure)
        {
            const float LOAD_USER_POLLING_INTERVAL = 4.0f;
            const float LOAD_USER_BACKOFF_FACTOR = 1.618033988f;
            const int CDN_RETRY_ATTEMPTS = 13;

            int totalAttempts = _autoCdnRetry ? CDN_RETRY_ATTEMPTS : 1;
            int remainingAttempts = totalAttempts;
            bool didLoadAvatar = false;
            var currentPollingInterval = LOAD_USER_POLLING_INTERVAL;

            do
            {
                // Initiate user spec load (ie: CDN Avatar)
                LoadUser();

                CAPI.ovrAvatar2Result status;
                do
                {
                    // Wait for retry interval before taking any action
                    yield return new WaitForSecondsRealtime(currentPollingInterval);

                    // Check current `entity` status
                    status = this.entityStatus;
                    if (status.IsSuccess() || HasNonDefaultAvatar)
                    {
                        didLoadAvatar = true;
                        // Finished downloading - no more retries
                        remainingAttempts = 0;

                        OvrAvatarLog.LogDebug(
                            "Load user retry check found successful download, ending retry routine"
                            , logScope, this);
                        break;
                    }

                    // Increase backoff interval
                    currentPollingInterval *= LOAD_USER_BACKOFF_FACTOR;

                    // `while` status is still pending, keep polling the current attempt
                    // Do not start a new request - do not decrement retry attempts
                } while (status == CAPI.ovrAvatar2Result.Pending);
                // Decrement retry attempts now that load failure has been confirmed (status != Pending)
            } while (--remainingAttempts > 0);

            if (loadFallbackOnFailure && !didLoadAvatar)
            {
                OvrAvatarLog.LogError(
                    $"Unable to download user after {totalAttempts} retry attempts",
                    logScope, this);

                // We cannot download an avatar, use local fallback (ie: Preset Avatar)
                UserHasNoAvatarFallback();
            }
        }

        #endregion // Retry

        #region Change Check

        protected IEnumerator PollForAvatarChange()
        {
            var waitForPollInterval = new WaitForSecondsRealtime(_changeCheckInterval);

            bool continueChecking = true;
            do
            {
                yield return waitForPollInterval;

                var checkTask = HasAvatarChangedAsync();
                while (!checkTask.IsCompleted) { yield return null; }

                switch (checkTask.Result)
                {
                    case OvrAvatarManager.HasAvatarChangedRequestResultCode.UnknownError:
                        OvrAvatarLog.LogError(
                            "Check avatar changed unknown error, aborting."
                            , logScope, this);

                        // Stop retrying or we'll just spam this error
                        continueChecking = false;
                        break;
                    case OvrAvatarManager.HasAvatarChangedRequestResultCode.BadParameter:
                        OvrAvatarLog.LogError(
                            "Check avatar changed invalid parameter, aborting."
                            , logScope, this);

                        // Stop retrying or we'll just spam this error
                        continueChecking = false;
                        break;

                    case OvrAvatarManager.HasAvatarChangedRequestResultCode.SendFailed:
                        OvrAvatarLog.LogWarning(
                            "Check avatar changed send failed."
                            , logScope, this);
                        break;

                    case OvrAvatarManager.HasAvatarChangedRequestResultCode.RequestFailed:
                        OvrAvatarLog.LogError(
                            "Check avatar changed request failed."
                            , logScope, this);
                        break;

                    case OvrAvatarManager.HasAvatarChangedRequestResultCode.RequestCancelled:
                        OvrAvatarLog.LogInfo(
                            "Check avatar changed request cancelled."
                            , logScope, this);

                        // Stop retrying, this entity has most likely been destroyed
                        continueChecking = false;
                        break;

                    case OvrAvatarManager.HasAvatarChangedRequestResultCode.AvatarHasNotChanged:
                        OvrAvatarLog.LogVerbose(
                            "Avatar has not changed."
                            , logScope, this);
                        break;

                    case OvrAvatarManager.HasAvatarChangedRequestResultCode.AvatarHasChanged:
                        // Load new avatar!
                        OvrAvatarLog.LogInfo(
                            "Avatar has changed, loading new spec."
                            , logScope, this);

                        yield return LoadUser(false);
                        break;
                }
            } while (continueChecking);
        }

        #endregion // Change Check

        #region Photon Callbacks

        private void GetUserIdFromPhotonInstantiationData()
        {
            object[] instantiationData = _photonView.InstantiationData;
            _userId = Convert.ToUInt64(instantiationData[0]);
        }

        public void OnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info)
        {
            // TODO: use a better way to check avatar state 
            if (CurrentState == AvatarState.UserAvatar)
            {
                if (stream.IsWriting)
                {
                    var data = RecordStreamData(activeStreamLod);
                    stream.SendNext(data);
/*                    if (_isMasterClient)
                    {
                        //stream.SendNext(timer);
                        //OvrAvatarLog.LogError("Send timer: " + timer.ToString("0.00"));
                        stream.SendNext(_sync);
                        //OvrAvatarLog.LogError("Send sync: " + _sync);
                        //if (_sync)
                        //{
                        //    dayTimer.TimeOfDay = 0;
                        //    _sync = false;
                        //}
                    }
                    stream.SendNext(timer);
                    OvrAvatarLog.LogError("Send timer: " + timer.ToString("0.00"));*/
                }
                else
                {
                    _streamedDataList.Add((byte[])stream.ReceiveNext());
                    // ApplyStreamData(memStream.ToArray());
                    /*                    timer = (float)stream.ReceiveNext();
                                        OvrAvatarLog.LogError("Received timer: " + timer.ToString("0.00"));*/
                    //recTimer = (float)stream.ReceiveNext();
                    //OvrAvatarLog.LogError("Received timer: " + recTimer.ToString("0.00"));
                    //if (!_isMasterClient) { 
                    //    _recSync = (bool)stream.ReceiveNext();
                    //    OvrAvatarLog.LogError("Received sync: " + _recSync);
                    //}
                }
            }
            // using var memStream = new MemoryStream();
/*            if (stream.IsWriting)
            {
                stream.SendNext(timer);
                OvrAvatarLog.LogError("Send timer: " + timer.ToString("0.00"));
            }
            else
            {
                this.timer = (float)stream.ReceiveNext();
                OvrAvatarLog.LogError("Received timer: " + this.timer.ToString("0.00"));
            }*/
        }

        #endregion

        #region Unity Callbacks

        private void Update()
        {
            byte[] firstBytesInList = _streamedDataList.FirstOrDefault();
            if (firstBytesInList != null)
            {
                ApplyStreamData(firstBytesInList);
                _streamedDataList.RemoveAt(0);
            }

/*            if (_isMasterClient)
            {
                if (timer > 500  && PhotonNetwork.CurrentRoom.Players.Count > 1)
                {
                    timer = 0;
                    _gm.CallRpcSendMessageToAll(750);  //timer
                    //_gm.CallRpcSendMessageToOthers(true);  //timer
                    //dayTimer.TimeOfDay = 0;
                    //timer = 0;
                }
                
            
                if (playerCount != PhotonNetwork.CountOfPlayers)
                {
                    playerCount = PhotonNetwork.CountOfPlayers;
                    playerList.Clear();
                    foreach (Photon.Realtime.Player player in PhotonNetwork.PlayerList)
                    {
                        playerList.Add(player.ActorNumber);
                    }
                }

                foreach (int role in roleList)
                {
                    //werewolf:
                    _gm.CallRpcSendMessageToAll(role);
                }
            }
            timer += Time.deltaTime;*/
            /*if (_photonView.IsMine)
            {
                timer += Time.deltaTime;
                OvrAvatarLog.LogError("Timer: " + timer.ToString("0.00"));  //LogInfo, LogError
                if (timer > 30)
                {
                    timer = 0;
                    _sync = true;
                }
            }
            else
            {
                //timer = recTimer;
                //OvrAvatarLog.LogError("recTimer: " + recTimer.ToString("0.00"));  //LogInfo, LogError
                if (_recSync)
                {
                    timer = 0;
                    dayTimer.TimeOfDay = 0;
                    OvrAvatarLog.LogError("reset Timer: " + timer.ToString("0.00"));  //LogInfo, LogError
                    OvrAvatarLog.LogError("reset sync: " + _recSync);
                }

            }*/
        }

        #endregion
        // Debug
        #region Debug

#if UNITY_EDITOR
        private void OnSceneGUI(SceneView sceneView)
        {
            if (_debugDrawGazePos)
            {
                DrawDebugGazePos();
            }
        }

        private void DrawDebugGazePos()
        {
            if (!IsCreated) { return; }

            var gazePos = GetGazePosition();
            if (gazePos.HasValue)
            {
                Handles.color = _debugDrawGazePosColor;
                Handles.DrawWireCube(gazePos.Value, new Vector3(0.25f, 0.25f, 0.25f));
            }
            else
            {
                OvrAvatarLog.LogError("Failed to get gaze pos");
            }
        }
#endif
        #endregion
    }
}
