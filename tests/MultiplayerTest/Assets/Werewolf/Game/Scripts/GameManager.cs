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
        //private bool _isMasterClient;
        private int playerCount;
        private List<int> playerList = new() { 1, 2, 3, 4, 5, 6 };
        private List<int> roleList = new();
        private const string logScope = "playerAvatar";
        private int actorNumber;
        private bool action;
        private const float sectionTime = 5;
        
        private bool dayTurn = false;

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
            PLAYER6
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

            //random ActorNumber 1 to 6 for assign character,
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
            if (PhotonNetwork.IsMasterClient)
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
                    if (dayTurn == false)
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
                                    _gm.CallRpcSyncTimeToAll(150);  //sync time to daylight
                                }
                                break;
                        }
                    }
                    else
                    {
                        switch (speechSeq)  // Speech in sequence from  player 1 to player 6
                        {
                            case SpeechSeq.PLAYER1:
                                _gm.CallRpcGameControlToAll(playerList[0]);
                                if (timer >= sectionTime)
                                {
                                    timer = 0;
                                    speechSeq = SpeechSeq.PLAYER2;
                                }
                                break;
                            case SpeechSeq.PLAYER2:
                                _gm.CallRpcGameControlToAll(playerList[1]);
                                if (timer >= sectionTime)
                                {
                                    timer = 0;
                                    speechSeq = SpeechSeq.PLAYER3;
                                }
                                break;
                            case SpeechSeq.PLAYER3:
                                _gm.CallRpcGameControlToAll(playerList[2]);
                                if (timer >= sectionTime)
                                {
                                    timer = 0;
                                    speechSeq = SpeechSeq.PLAYER4;
                                }
                                break;
                            case SpeechSeq.PLAYER4:
                                _gm.CallRpcGameControlToAll(playerList[3]);
                                if (timer >= sectionTime)
                                {
                                    timer = 0;
                                    speechSeq = SpeechSeq.PLAYER5;
                                }
                                break;
                            case SpeechSeq.PLAYER5:
                                _gm.CallRpcGameControlToAll(playerList[4]);
                                if (timer >= sectionTime)
                                {
                                    timer = 0;
                                    speechSeq = SpeechSeq.PLAYER6;
                                }
                                break;
                            case SpeechSeq.PLAYER6:
                                _gm.CallRpcGameControlToAll(playerList[5]);
                                if (timer >= sectionTime)
                                {
                                    timer = 0;
                                    speechSeq = SpeechSeq.PLAYER1;
                                    dayTurn = false;
                                    _gm.CallRpcSyncTimeToAll(750); //sync time to night
                                }
                                break;
                        }
                    }
                    timer += Time.deltaTime;
                }
            }
            
            // player action 
            if (action)
            {
                Debug.LogError("received update: my turn! ");
            }
            else
            {
                Debug.LogError("received update: not my turn! ");
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
        }

        public void CallRpcGameControlToAll(int role)
        {
            _pv.RPC("RpcGameControl", RpcTarget.AllViaServer, role);
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
