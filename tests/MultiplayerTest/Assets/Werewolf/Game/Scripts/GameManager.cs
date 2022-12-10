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

        private float timer = 0;
        private float recTimer = 0;
        private bool _sync = false;
        private bool _recSync = false;
        private LightManager dayTimer;
        private bool _isMasterClient;
        private int playerCount;
        private List<int> playerList = new() { 1, 2, 3, 4, 5, 6 };
        private List<int> roleList = new();
        private const string logScope = "playerAvatar";
        private int actorNumber;
        private bool action;

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
            _isMasterClient = PhotonNetwork.IsMasterClient;
            playerCount = PhotonNetwork.CountOfPlayers;

            System.Random rnd = new();
            var rndNum = playerList.OrderBy(item => rnd.Next());
            Debug.LogError("player roleList type: " + rndNum.GetType());
            foreach (int role in rndNum)
            {
                Debug.LogError("player role: " + role);
                roleList.Add(role);
            }
        }

        private void Update()
        {
            if (_isMasterClient)
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
                else
                {
                    if (timer > 50)
                    {
                        _gm.CallRpcSyncTimeToAll(750);
                    }
                    
                    if(timer < 5)  //use enum
                    {
                        _gm.CallRpcGameControlToAll(roleList[0]);
                    }
                    else if(timer < 10) 
                    {
                        _gm.CallRpcGameControlToAll(roleList[1]);
                    }
                    else if (timer < 15)
                    {
                        _gm.CallRpcGameControlToAll(roleList[2]);
                    }
                    else if (timer < 20)
                    {
                        _gm.CallRpcGameControlToAll(roleList[3]);
                    }
                    else if (timer < 25)
                    {
                        _gm.CallRpcGameControlToAll(roleList[4]);
                    }
                    else if (timer < 30)
                    {
                        _gm.CallRpcGameControlToAll(roleList[5]);
                    }
                }

            }

            if (action)
            {
                Debug.LogError("received update: my turn! ");
            }
            else
            {
                Debug.LogError("received update: not my turn! ");
            }
            timer += Time.deltaTime;
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
            _isMasterClient = PhotonNetwork.IsMasterClient;
            playerCount = PhotonNetwork.CountOfPlayers;
        }


        public void CallRpcSyncTimeToAll(int _daytimer)
        {
            _pv.RPC("RpcSyncTimer", RpcTarget.All, _daytimer);
        }

        public void CallRpcGameControlToAll(int _sync)
        {
            _pv.RPC("RpcGameControl", RpcTarget.AllViaServer, _sync);
        }

        [PunRPC]  //Message send to others/all, others/all will received at the same location
        void RpcSyncTimer(int _dayTimer, PhotonMessageInfo info)
        {
            dayTimer.TimeOfDay = _dayTimer;
            timer = 0;
            Debug.LogError("received: " + _dayTimer);
        }

        [PunRPC]  //Message send to others/all, others/all will received at the same location
        void RpcGameControl(int role, PhotonMessageInfo info)
        {
            Debug.LogError("received: " + role);
            if(PhotonNetwork.LocalPlayer.ActorNumber == role)
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



        [PunRPC]  //Message send to others/all, others/all will received at the same location
        void RpcSendMessage(float timer, PhotonMessageInfo info)
        {
            Debug.LogError("received: " + timer.ToString("0.00"));

            //messageList.Add(timer.ToString("0.00"));
            //if (messageList.Count >= 10)
            //{
            //    messageList.RemoveAt(0);
            //}
            //messageList.Add(message);
            //UpdateMessage();
        }
        #endregion
    }
}
