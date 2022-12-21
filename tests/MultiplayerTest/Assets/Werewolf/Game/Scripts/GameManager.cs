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

        // sync time
        private LightManager dayTimer;
        private float timer = 0;
        private int dayTime = 150;
        private int nightTime = 750;
        private bool dayTurn = false;
        public static float deltaTime;  // get time consume of a frame

        //player setting
        private int playerCount;
        private List<int> playerList = new() { 0, 1, 2, 3, 4, 5, 6 };
        private List<int> roleList = new();
        public int actorNumber;

        private const string logScope = "playerAvatar";

        //Game Control
        public GameManager _gm;
        public GameObject voteUI, blackScreen;
        private bool action;
        private bool broadCast = false;
        private const float sectionTime = 5;
        private enum Character
        {
            WEREWOLF,
            SEER,
            SAVIOR,
            VILLAGER,
        }
        private enum SpeechSeq
        {
            voteTime,
            PLAYER1,
            PLAYER2,
            PLAYER3,
            PLAYER4,
            PLAYER5,
            PLAYER6,
        }
        private Character character;
        private SpeechSeq speechSeq;

        //vote
        private Dictionary<int, List<int>> voteDict = new();
        private List<int> voteList = new();
        public bool voted = false;
        private int noPlayer = 10;
        public int myvote = 0;
        private int votedPlayer = 0;

        //photon network
        PhotonView _pv;

        public static GameManager Instance { get; private set; }

        public void LeaveRoom()
        {
            PhotonNetwork.LeaveRoom();
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
                Debug.Log("Player: " + player);
                Debug.Log("Player isLocal: " + player.IsLocal);
                Debug.Log("Player actorNumber: " + player.ActorNumber);
                Debug.Log("Player userID: " + player.UserId);
                Debug.Log("Next Player: " + player.GetNext());
                Debug.Log("Next Player: " + PhotonNetwork.LocalPlayer);
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

        // Message send to others/all, 
        public void CallRpcSyncTimeToAll(int _daytimer)
        {
            _pv.RPC("RpcSyncTimer", RpcTarget.AllBufferedViaServer, _daytimer);  // sync time to client
            _pv.RPC("RpcSyncDayNight", RpcTarget.AllBufferedViaServer, dayTurn);  // send Day or night message to clients
        }

        public void CallRpcGameControlToAll(int role)
        {
            _pv.RPC("RpcGameControl", RpcTarget.AllViaServer, role);
        }

        public void CallRpcSendMyVote(int role, int myvote)
        {
            _pv.RPC("RpcSendMyVote", RpcTarget.MasterClient, role, myvote);
        }

        public void CallRpcEndVoted(int role)
        {

            voteDict = new();
            _pv.RPC("RpcEndVoted", RpcTarget.AllViaServer, role);
        }

        //others/all will received at the same location
        [PunRPC]  // sync time
        void RpcSyncTimer(int _dayTimer, PhotonMessageInfo info)
        {
            dayTimer.TimeOfDay = _dayTimer;
            timer = 0;
            Debug.LogError("received time: " + _dayTimer);
        }

        [PunRPC] // sync day night
        void RpcSyncDayNight(bool _dayTurn, PhotonMessageInfo info)
        {
            dayTurn = _dayTurn;
            Debug.LogError($"received turn: {dayTurn} {_dayTurn}");
        }

        [PunRPC] //send role to player to confirm action of player
        void RpcGameControl(int _role, PhotonMessageInfo info)
        {
            Debug.Log("received: " + _role);
            if(PhotonNetwork.LocalPlayer.ActorNumber == _role || _role == 0)
            {
                Debug.LogError("received: " + _role + ", role is mine! ");
                action = true;
                if (_role == 0) broadCast = true;
                else broadCast = false;
            }
            else
            {
                Debug.LogError("received: " + _role + ", not my role: " + actorNumber);
                action = false;
            }

        }

        [PunRPC]  //receive vote from others to MasterClient
        void RpcSendMyVote(int _role, int _myvote, PhotonMessageInfo info)
        {
            int maxVote = 0, maxVotePlayer = 0;
            votedPlayer += 1; // count how many player voted

            Debug.LogError($"received dict: {_role}, vote: {_myvote}");
            if (voteDict.TryGetValue(_myvote, out voteList))  //key: myvote, value: list of player voted at this number
            {
                voteList.Add(_role);
            }
            else
            {
                voteList = new List<int>();
                voteList.Add(_role);
            }
            voteDict[_myvote] = voteList;
            Debug.Log($"received dict voteList added value: {_role}");
            Debug.LogError($"received dict voteDict key myvote: {_myvote}, this vote contain total of value: {voteDict[_myvote].Count}");

            if (playerCount == votedPlayer)  // if all player voted
            {
                foreach (var dictItem in voteDict)  //voteDict: key(player), value(voted player)
                {
                    //Debug.Log($"dict Foreach key: {dictItem.Key}");
                    foreach (var listItem in dictItem.Value)
                    {
                        Debug.Log($"received dict Foreach key: {dictItem.Key}, value: {listItem}");  //, count: {dictItem.Value.Count} ");
                    }
                    Debug.LogError($"received dict {dictItem.Key} have votes count: {dictItem.Value.Count}");
                    if (maxVote < dictItem.Value.Count)
                    {
                        maxVote = dictItem.Value.Count;
                        maxVotePlayer = dictItem.Key;
                    }
                }

                //check vote over half player or not, if so, eject player
                int halfPlayer = (int)Math.Round(votedPlayer / 2.0f, 0, MidpointRounding.AwayFromZero);
                Debug.LogError($"received dict maxVote{maxVote},  halfPlayer: {halfPlayer}, maxVotePlayer: {maxVotePlayer}");
                if (maxVote >= halfPlayer && maxVotePlayer > 0)
                {
                    Debug.LogError($"received dict Player {maxVotePlayer} have {maxVote} votes, he/she will be eject!");
                    playerList.Remove(maxVotePlayer);
                    votedPlayer = 0;
                    maxVotePlayer = 0;
                    voteDict = new();
                }
            }
        }

        [PunRPC]  //End vote and send message to reset vote UI
        void RpcEndVoted(int _dayTimer, PhotonMessageInfo info)
        {
            dayTimer.TimeOfDay = _dayTimer;
            timer = 0;
            Debug.LogError("received time: " + _dayTimer);
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
            Debug.Log("player roleList type: " + rndNum.GetType());
            foreach (int role in rndNum)
            {
                Debug.LogError("player role: " + role);
                roleList.Add(role);
            }
        }

        private void Update()
        {
            Debug.Log($"received playerList {roleList[0]}: {playerList.Contains(roleList[0])}, {roleList[1]}: {playerList.Contains(roleList[1])}, {roleList[2]}: {playerList.Contains(roleList[2])}, " +
                $" {roleList[3]}: {playerList.Contains(roleList[3])}, {roleList[4]}: {playerList.Contains(roleList[4])}, {roleList[5]}: {playerList.Contains(roleList[5])}");
            string result = "";
            foreach (var listMember in playerList)
            {
                result += listMember.ToString() + ", ";
            }
            Debug.Log($" received playerList: {result}\n");
            Debug.Log("PhotonNetwork.CountOfPlayers: " + PhotonNetwork.CountOfPlayers);
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
                    Debug.Log("update player: " + playerCount);
                }
                else  // master client control game flow
                {
                    if (dayTurn == false)  // At night
                    {
                        switch (character)
                        {
                            case Character.WEREWOLF:
                                if (playerList.Contains(roleList[0]) || playerList.Contains(roleList[1]))
                                {
                                    _gm.CallRpcGameControlToAll(roleList[0]);
                                    _gm.CallRpcGameControlToAll(roleList[1]);
                                    if (timer >= sectionTime)
                                    {
                                        timer = 0;
                                        character = Character.SEER;
                                    }
                                }
                                else
                                {
                                    character = Character.SEER;
                                    Debug.Log($" received skip: WEREWOLF\n");
                                }
                                break;
                            case Character.SEER:
                                if (playerList.Contains(roleList[2]))
                                {
                                    _gm.CallRpcGameControlToAll(roleList[2]);
                                    if (timer >= sectionTime)
                                    {
                                        timer = 0;
                                        character = Character.SAVIOR;
                                    }
                                }
                                else
                                {
                                    character = Character.SAVIOR;
                                    Debug.Log($" received skip: SEER\n");
                                }
                                break;
                            case Character.SAVIOR:
                                if (playerList.Contains(roleList[3]))
                                {
                                    _gm.CallRpcGameControlToAll(roleList[3]);
                                    if (timer >= sectionTime)
                                    {
                                        timer = 0;
                                        character = Character.WEREWOLF;
                                        dayTurn = true;
                                        _gm.CallRpcSyncTimeToAll(dayTime);  //sync time to daylight
                                    }
                                }
                                else
                                {
                                    character = Character.WEREWOLF;
                                    dayTurn = true;
                                    _gm.CallRpcSyncTimeToAll(dayTime);  //sync time to daylight
                                    Debug.Log($" received skip: SAVIOR\n");
                                }
                                break;
                        }
                    }
                    else  //at daytime
                    {
                        switch (speechSeq)  // Speech in sequence from  player 1 to player 6
                        {
                            case SpeechSeq.PLAYER1:
                                _gm.CallRpcGameControlToAll((int)SpeechSeq.PLAYER1);
                                if (timer >= sectionTime)
                                {
                                    timer = 0;
                                    speechSeq = SpeechSeq.PLAYER2;
                                }
                                break;
                            case SpeechSeq.PLAYER2:
                                _gm.CallRpcGameControlToAll((int)SpeechSeq.PLAYER2);
                                if (timer >= sectionTime)
                                {
                                    timer = 0;
                                    speechSeq = SpeechSeq.PLAYER3;
                                }
                                break;
                            case SpeechSeq.PLAYER3:
                                _gm.CallRpcGameControlToAll((int)SpeechSeq.PLAYER3);
                                if (timer >= sectionTime)
                                {
                                    timer = 0;
                                    speechSeq = SpeechSeq.PLAYER4;
                                }
                                break;
                            case SpeechSeq.PLAYER4:
                                _gm.CallRpcGameControlToAll((int)SpeechSeq.PLAYER4);
                                if (timer >= sectionTime)
                                {
                                    timer = 0;
                                    speechSeq = SpeechSeq.PLAYER5;
                                }
                                break;
                            case SpeechSeq.PLAYER5:
                                _gm.CallRpcGameControlToAll((int)SpeechSeq.PLAYER5);
                                if (timer >= sectionTime)
                                {
                                    timer = 0;
                                    speechSeq = SpeechSeq.PLAYER6;
                                }
                                break;
                            case SpeechSeq.PLAYER6:
                                _gm.CallRpcGameControlToAll((int)SpeechSeq.PLAYER6);
                                if (timer >= sectionTime)
                                {
                                    timer = 0;
                                    speechSeq = SpeechSeq.voteTime;
                                }
                                break;
                            case SpeechSeq.voteTime:
                                _gm.CallRpcGameControlToAll((int)SpeechSeq.voteTime);
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
                    Debug.Log("received update: NIGHT my turn! ");
                    blackScreen.SetActive(false);
                }
                else
                {
                    Debug.Log("received update: NIGHT not my turn! black screen set");
                    blackScreen.SetActive(true);
                }
                voted = false;
            }
            else  //at daytime
            {
                blackScreen.SetActive(false);
                if (action)
                {
                    if (broadCast && !voted)
                    {
                        voteUI.SetActive(true);
                        Debug.Log("received update: DAY Vote Time! ");
                    }
                    else
                    {
                        Debug.Log("received update: DAY my turn! ");
                        //voteUI.SetActive(false);
                    }
                }
                else
                {
                    Debug.Log("received update: DAY not my turn! ");
                    //voteUI.SetActive(false);
                }
            }

        }

        #endregion

    }
}
