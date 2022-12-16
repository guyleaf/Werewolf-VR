using Photon.Pun;
using Photon.Realtime;

using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;

using UnityEngine;

namespace Werewolf.Game
{
    public class GameManager : MonoBehaviourPunCallbacks
    {
        #region Public Methods & Properties
        [SerializeField]
        List<string> messageList;
        [SerializeField]
        TextAlignment messageText;

        public GameManager _gm;
        public static float deltaTime;  // get time consume of a frame
        public GameObject voteUI, blackScreen;

        private float timer = 0;
        private int dayTime = 150;
        private int nightTime = 750;

        private bool _sync = false;
        private bool _recSync = false;
        private LightManager dayTimer;
        //private bool _isMasterClient;
        private int playerCount;
        private List<int> playerList = new() { 0, 1, 2, 3, 4, 5, 6 };
        private List<int> roleList = new();
        private const string logScope = "playerAvatar";
        private int actorNumber;
        private bool action;
        private const float sectionTime = 5;
        
        private bool dayTurn = false;
        private bool broadCast = false;

        private enum Character
        {
            WEREWOLF,
            SEER,
            SAVIOR,
            VILLAGER,
        }
        private enum SpeechSeq
        {
            PLAYER1,
            PLAYER2,
            PLAYER3,
            PLAYER4,
            PLAYER5,
            PLAYER6,
            voteTime
        }
        private Character character;
        private SpeechSeq speechSeq;

        PhotonView _pv;

        public static GameManager Instance { get; private set; }

        public void LeaveRoom()
        {
            PhotonNetwork.LeaveRoom();
        }

        #endregion

        #region Unity Callbacks

        private void Awake()
        {
            Instance = this;
            _pv = this.gameObject.GetComponent<PhotonView>();
        }

        // Start is called before the first frame update
        void Start()
        {
            PhotonNetwork.ConnectUsingSettings();
            dayTimer = GameObject.FindObjectOfType<LightManager>();
            Debug.LogError("Force the build console open...");
            _gm = GameObject.FindObjectOfType<GameManager>();
            dayTimer = GameObject.FindObjectOfType<LightManager>();
            //_isMasterClient = PhotonNetwork.IsMasterClient;
            playerCount = PhotonNetwork.CountOfPlayers;
            character = Character.WEREWOLF;
            speechSeq = SpeechSeq.PLAYER1;

            //Find UI
            voteUI = GameObject.Find("Vote UI");
            blackScreen = GameObject.Find("Black Screen");
            voteUI.SetActive(false);
            blackScreen.SetActive(false);

            //random ActorNumber 1 to 6 for assign character,
            System.Random rnd = new();
            var rndNum = playerList.GetRange(1, 6).OrderBy(item => rnd.Next());
            Debug.LogError("player roleList type: " + rndNum.GetType());
            foreach (int role in rndNum)
            {
                Debug.LogError("player role: " + role);
                roleList.Add(role);
            }
        }

        private void Update()
        {
            Debug.LogError("PhotonNetwork.CountOfPlayers: " + PhotonNetwork.CountOfPlayers);
            if (PhotonNetwork.IsMasterClient) // && PhotonNetwork.CountOfPlayers > 1)
            {
                if (playerCount != PhotonNetwork.CountOfPlayers)
                {
                    playerCount = PhotonNetwork.CountOfPlayers;
                    playerList.Clear();
                    foreach (Photon.Realtime.Player player in PhotonNetwork.PlayerList)
                    {
                        playerList.Add(player.ActorNumber);
                    }
                    Debug.LogError("update player: " + playerCount);
                }
                else  // master client control game flow
                {
                    if (dayTurn == false)  // At night
                    {
                        switch (character)
                        {
                            case Character.WEREWOLF:
                                _gm.CallRpcGameControlToAll(roleList[0]);
                                _gm.CallRpcGameControlToAll(roleList[1]);
                                if (timer >= sectionTime)
                                {
                                    timer = 0;
                                    character = Character.SEER;
                                }
                                break;
                            case Character.SEER:
                                _gm.CallRpcGameControlToAll(roleList[2]);
                                if (timer >= sectionTime)
                                {
                                    timer = 0;
                                    character = Character.SAVIOR;
                                }
                                break;
                            case Character.SAVIOR:
                                _gm.CallRpcGameControlToAll(roleList[3]);
                                if (timer >= sectionTime)
                                {
                                    timer = 0;
                                    character = Character.WEREWOLF;
                                    dayTurn = true;
                                    _gm.CallRpcSyncTimeToAll(dayTime);  //sync time to daylight
                                }
                                break;
                        }
                    }
                    else  //at daytime
                    {
                        switch (speechSeq)  // Speech in sequence from  player 1 to player 6
                        {
                            case SpeechSeq.PLAYER1:
                                _gm.CallRpcGameControlToAll(playerList[1]);
                                if (timer >= sectionTime)
                                {
                                    timer = 0;
                                    speechSeq = SpeechSeq.PLAYER2;
                                }
                                break;
                            case SpeechSeq.PLAYER2:
                                _gm.CallRpcGameControlToAll(playerList[2]);
                                if (timer >= sectionTime)
                                {
                                    timer = 0;
                                    speechSeq = SpeechSeq.PLAYER3;
                                }
                                break;
                            case SpeechSeq.PLAYER3:
                                _gm.CallRpcGameControlToAll(playerList[3]);
                                if (timer >= sectionTime)
                                {
                                    timer = 0;
                                    speechSeq = SpeechSeq.PLAYER4;
                                }
                                break;
                            case SpeechSeq.PLAYER4:
                                _gm.CallRpcGameControlToAll(playerList[4]);
                                if (timer >= sectionTime)
                                {
                                    timer = 0;
                                    speechSeq = SpeechSeq.PLAYER5;
                                }
                                break;
                            case SpeechSeq.PLAYER5:
                                _gm.CallRpcGameControlToAll(playerList[5]);
                                if (timer >= sectionTime)
                                {
                                    timer = 0;
                                    speechSeq = SpeechSeq.PLAYER6;
                                }
                                break;
                            case SpeechSeq.PLAYER6:
                                _gm.CallRpcGameControlToAll(playerList[6]);
                                if (timer >= sectionTime)
                                {
                                    timer = 0;
                                    speechSeq = SpeechSeq.voteTime;
                                }
                                break;
                            case SpeechSeq.voteTime:
                                _gm.CallRpcGameControlToAll(playerList[0]);
                                if (timer >= sectionTime)
                                {
                                    timer = 0;
                                    speechSeq = SpeechSeq.PLAYER1;
                                    dayTurn = false;
                                    _gm.CallRpcSyncTimeToAll(nightTime); //sync time to night
                                }
                                break;
                        }
                    }
                    timer += Time.deltaTime;
                }
            }

            // player action 
            if (dayTurn == false)  // At night
            {
                if (action)
                {
                    Debug.LogError("received update: NIGHT my turn! ");
                    blackScreen.SetActive(false);
                }
                else
                {
                    Debug.LogError("received update: NIGHT not my turn! black screen set");
                    blackScreen.SetActive(true);
                }
            }
            else  //at daytime
            {
                blackScreen.SetActive(false);
                if (action)
                {
                    if (broadCast)
                    {
                        voteUI.SetActive(true);
                        Debug.LogError("received update: DAY Vote Time! ");
                    }
                    else
                    {
                        Debug.LogError("received update: DAY my turn! ");
                        voteUI.SetActive(false);
                    }
                }
                else
                {
                    Debug.LogError("received update: DAY not my turn! ");
                    voteUI.SetActive(false);
                }
            }
            
        }

        #endregion

        #region Photon Callbacks

        public override void OnConnectedToMaster()
        {
            PhotonNetwork.JoinLobby();
            Debug.Log("Connecting to Lobby...");
        }

        public override void OnJoinedLobby()
        {
            var roomOptions = new RoomOptions
            {
                MaxPlayers = 6,
                PublishUserId = true
            };
            PhotonNetwork.JoinOrCreateRoom("room", roomOptions, TypedLobby.Default);
        }

        public override void OnJoinedRoom()
        {
            string roomName = PhotonNetwork.CurrentRoom.Name;
            Debug.Log("Joined room with name " + roomName);
            Debug.Log("Number of Player:" + PhotonNetwork.CurrentRoom.Players.Count);
            foreach(Photon.Realtime.Player player in PhotonNetwork.PlayerList)
            {
                Debug.LogError("Player: " + player);
                Debug.LogError("Player isLocal: " + player.IsLocal);
                Debug.LogError("Player actorNumber: " + player.ActorNumber);
                Debug.LogError("Player userID: " + player.UserId);
                Debug.LogError("Next Player: " + player.GetNext());
                Debug.LogError("Next Player: " + PhotonNetwork.LocalPlayer);
                if (player.IsLocal)
                {
                    actorNumber = player.ActorNumber;
                }


            }
            actorNumber = PhotonNetwork.LocalPlayer.ActorNumber;
            Debug.Log("Players List:" + PhotonNetwork.PlayerList);
            Debug.Log("Master Client: " + PhotonNetwork.IsMasterClient);
            //_isMasterClient = PhotonNetwork.IsMasterClient;
            playerCount = PhotonNetwork.CountOfPlayers;
        }


        public void CallRpcSyncTimeToAll(int _daytimer)
        {
            _pv.RPC("RpcSyncTimer", RpcTarget.AllViaServer, _daytimer);
            _pv.RPC("RpcSyncDayNight", RpcTarget.AllViaServer, dayTurn);
        }

        public void CallRpcGameControlToAll(int role)
        {
            _pv.RPC("RpcGameControl", RpcTarget.AllViaServer, role);
        }

        public void CallRpcBlackScreenToAll(int role)
        {
            _pv.RPC("RpcBlackScreen", RpcTarget.AllViaServer, role);
        }

        [PunRPC]  //Message send to others/all, others/all will received at the same location
        void RpcSyncTimer(int _dayTimer, PhotonMessageInfo info)
        {
            dayTimer.TimeOfDay = _dayTimer;
            timer = 0;
            Debug.LogError("received time: " + _dayTimer);
        }

        [PunRPC]  //Message send to others/all, others/all will received at the same location
        void RpcSyncDayNight(bool _dayTurn, PhotonMessageInfo info)
        {
            dayTurn = _dayTurn;
            Debug.LogError($"received turn: {dayTurn} {_dayTurn}");
        }

        [PunRPC]  //Message send to others/all, others/all will received at the same location
        void RpcGameControl(int role, PhotonMessageInfo info)
        {
            Debug.LogError("received: " + role);
            if(PhotonNetwork.LocalPlayer.ActorNumber == role  || role == 0)
            {
                Debug.LogError("received: " + role + ", role is mine! ");
                action = true;
                if (role == 0) broadCast = true;
                else broadCast = false;
            }
            else
            {
                Debug.LogError("received: " + role + ", not my role: " + actorNumber);
                action = false;
            }

        }

        [PunRPC]  //Message send to others/all, others/all will received at the same location
        void RpcBlackScreen(int role, PhotonMessageInfo info)
        {
            Debug.LogError("received: " + role);
            if (PhotonNetwork.LocalPlayer.ActorNumber == role)
            {
                Debug.LogError("received: " + role + ", role is mine! ");
                action = true;
            }
            else
            {
                Debug.LogError("received: " + role + ", not my role: " + actorNumber);
                action = false;
            }

        }
        #endregion
    }
}
