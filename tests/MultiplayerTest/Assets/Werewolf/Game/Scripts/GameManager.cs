using Photon.Pun;
using Photon.Realtime;

using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using TMPro;
using UnityEngine;

namespace Werewolf.Game
{
    public class GameManager : MonoBehaviourPunCallbacks
    {
        #region Public Methods & Properties
        // sync time
        private LightManager dayTimer;
        public float timer = 0;
        private int dayTime = 150;
        private int nightTime = 750;
        public bool dayTurn = false;
        public static float deltaTime;  // get time consume of a frame
        public TextMeshProUGUI timeText;
        public TextMeshProUGUI messageText;

        //player setting
        private int playerCount;
        private int werewolfCount = 2;
        public List<int> playerList = new() { 0, 1, 2, 3, 4, 5, 6 };
        private List<int> roleList = new();
        public int actorNumber;

        private const string logScope = "playerAvatar";

        //Game Control
        public GameManager _gm;
        public GameObject voteUI, blackScreen, resultUI, lobbyButton, localAvatar, recorder;
        private bool action;
        private bool findRecorder = false;
        private bool seerTime = false;
        private bool broadCast = false;
        private bool deadTime = false;
        private bool localDead = false;
        public bool endGame = false;
        private const float sectionTime = 15;
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
            deadTime
        }
        private Character character;
        private SpeechSeq speechSeq;
        private string message = "";

        //vote
        private Dictionary<int, List<int>> voteDict = new();
        private List<int> voteList = new();
        public bool voted = false;
        //private int noPlayer = 10;
        public int myvote = 0;
        private int votedPlayer = 0;
        private int maxVotePlayer = 0;
        private int seerSelected = 0;
        private int saviorSelected = 0;

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
            //playerCount = PhotonNetwork.CountOfPlayers;
        }

        // Message send to others/all, 
        public void CallRpcSyncDayNightTimeToAll(int _daytimer)
        {
            _pv.RPC("RpcSyncDayNightTimer", RpcTarget.AllBufferedViaServer, _daytimer);  // sync time to client
            _pv.RPC("RpcSyncDayNight", RpcTarget.AllBufferedViaServer, dayTurn);  // send Day or night message to clients
        }

        public void CallRpcGameControlToAll(int role1, int role2, float timerToAll, int maxVotePlayer, string message)
        {
            _pv.RPC("RpcGameControl", RpcTarget.AllViaServer, role1, role2);
            _pv.RPC("RpcSyncTimer", RpcTarget.AllViaServer, timerToAll);
            _pv.RPC("RpcSendMessage", RpcTarget.AllViaServer, message);
        }

        public void CallRpcSpeckerControlToAll(int maxVotePlayer)
        {
            _pv.RPC("RpcSendDeadPlayer", RpcTarget.AllViaServer, maxVotePlayer);
        }

        public void CallRpcSendMyVote(int role, int myvote)
        {
            _pv.RPC("RpcSendMyVote", RpcTarget.MasterClient, role, myvote);
        }

        public void CallRpcEndGame(bool endGame)
        {

            voteDict = new();
            _pv.RPC("RpcEndGame", RpcTarget.AllViaServer, endGame);
        }

        //others/all will received at the same location
        [PunRPC]  // sync time
        void RpcSyncDayNightTimer(int _dayTimer, PhotonMessageInfo info)
        {
            dayTimer.TimeOfDay = _dayTimer;
            timer = 0;
            Debug.LogError("Gameflow received time: " + _dayTimer);
        }

        [PunRPC] // sync day night
        void RpcSyncDayNight(bool _dayTurn, PhotonMessageInfo info)
        {
            dayTurn = _dayTurn;
            Debug.LogError($"Gameflow received Day turn: {dayTurn} {_dayTurn}");
        }

        [PunRPC] //send timer to players
        void RpcSyncTimer(float timerToAll, PhotonMessageInfo info)
        {
            //Debug.Log($"Gameflow received timer: {timerToAll}");
            timeText.SetText((timerToAll).ToString("#.0"));
        }

        [PunRPC] //send message to players
        void RpcSendMessage(int _maxVotePlayer, string _message, PhotonMessageInfo info)
        {
            //Debug.Log($"Gameflow received timer: {timerToAll}");
            if (PhotonNetwork.LocalPlayer.ActorNumber == _maxVotePlayer) localDead=true;
            messageText.SetText($"{_message}");
        }

        [PunRPC] //send message to players
        void RpcSendDeadPlayer(int _maxVotePlayer, PhotonMessageInfo info)
        {
            //Debug.Log($"Gameflow received timer: {timerToAll}");
            if (PhotonNetwork.LocalPlayer.ActorNumber == _maxVotePlayer) localDead = true;
        }

        [PunRPC] //send role to player to confirm action of player
        void RpcGameControl(int _role1, int _role2, PhotonMessageInfo info)
        {
            Debug.Log($"Gameflow received: {_role1}, {_role2}");
            if (_role1 == 0) broadCast = true;
            else broadCast = false;
            if (_role1 == 7) deadTime = true;
            else deadTime = false;
            if (_role2 == 0)
            {
                if (PhotonNetwork.LocalPlayer.ActorNumber == _role1 || _role1 == 0 || _role1 == 7)  //speechSeq voteTime & deadTime
                {
                    Debug.LogError("Gameflow received: " + _role1 + ", role is mine! ");
                    action = true;
                }
                else
                {
                    Debug.LogError("Gameflow received: " + _role1 + ", not my role: " + PhotonNetwork.LocalPlayer.ActorNumber);
                    action = false;
                }
            }
            else
            {
                if (PhotonNetwork.LocalPlayer.ActorNumber == _role1 || PhotonNetwork.LocalPlayer.ActorNumber == _role2)  //for werewolf round
                {
                    Debug.LogError($"Gameflow received: {_role1}, {_role2}, role is mine! ");
                    action = true;
                }
                else
                {
                    Debug.LogError($"Gameflow received: {_role1}, {_role2}, not my role: " + PhotonNetwork.LocalPlayer.ActorNumber);
                    action = false;
                }
            }
        }

        [PunRPC]  //receive vote from others to MasterClient, used in buttonClick script
        void RpcSendMyVote(int _role, int _myvote, PhotonMessageInfo info)
        {
            if (dayTurn == false)  //night
            {
                if (_role == roleList[0] || _role == roleList[1])
                {
                    if (playerList.Contains(roleList[0])) werewolfCount = 1;
                    else werewolfCount = 0;
                    if (playerList.Contains(roleList[1])) werewolfCount += 1;
                    voteSystem(_role, _myvote, werewolfCount);
                    voted = true;
                }
                else if(_role == roleList[2])
                {
                    voting(_role, _myvote);
                    voted = true;
                }
                else if(_role == roleList[3])
                {
                    voting(_role, _myvote);
                    voted = true;
                }
            }
            else  //day
            {
                voteSystem(_role, _myvote, playerCount);
                voted = true;
            }
            
        }

        [PunRPC]  //End Game message from master
        void RpcEndGame(bool _endGame)
        {
            Debug.LogError($"Gameflow received bool End Game! {endGame} {_endGame}");
            endGame = _endGame;
        }

        //vote system
        void voting(int _role, int _myvote) //add vote in to dictionary
        {
            Debug.LogError($"Gameflow received dict key Player: {_role}, vote: {_myvote}");
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
            Debug.Log($"Gameflow received dict voteList added value: {_role}");
            Debug.LogError($"Gameflow received dict voteDict key myvote: {_myvote}, this vote contain total of value: {voteDict[_myvote].Count}");
        }

        //calculate votes and eject
        void voteEnd(int maxVote = 0, int maxVoteCount = 0)
        {
            maxVotePlayer = 0;
            foreach (var dictItem in voteDict)  //voteDict: key(player), value(voted player)
            {
                //Debug.Log($"dict Foreach key: {dictItem.Key}");
                foreach (var listItem in dictItem.Value)
                {
                    Debug.Log($"Gameflow received dict Foreach key: {dictItem.Key}, value: {listItem}");  //, count: {dictItem.Value.Count} ");
                }
                Debug.LogError($"Gameflow received dict {dictItem.Key} have votes count: {dictItem.Value.Count}");
                if (maxVote < dictItem.Value.Count)  // count player have max votes
                {
                    maxVote = dictItem.Value.Count;
                    maxVotePlayer = dictItem.Key;
                    maxVoteCount = 1;
                }
                else if(maxVote == dictItem.Value.Count)  // check how many player have max votes
                {
                    maxVoteCount += 1;
                    maxVotePlayer = 0;  //no player should be eject
                }
            }

            //check vote over half player or not, if so, eject player
            int halfPlayer = (int)Math.Round(votedPlayer / 2.0f, 0, MidpointRounding.AwayFromZero);
            Debug.LogError($"Gameflow received dict maxVote{maxVote},  halfPlayer: {halfPlayer}, maxVotePlayer: {maxVotePlayer}");
            if (maxVote >= halfPlayer && maxVotePlayer > 0)  // player have more or equal to half of vote and maxVotePlayer != 0, eject player
            {
                Debug.LogError($"Gameflow received dict Player {maxVotePlayer} have {maxVote} votes, he/she will be ejected!");
                //votedPlayer = 0;
                //maxVotePlayer = 0;
            }
            else
            {
                //message = "no one will be ejected";
                Debug.LogError($"Gameflow received dict Player {maxVotePlayer} have {maxVote} votes, maxVoteCount: {maxVoteCount}, {message}!");
            }
            voteDict = new();  //reset dict
            votedPlayer = 0;
        }
        //day vote
        void voteSystem(int _role, int _myvote, int totalVotes)
        {

            votedPlayer += 1; // count how many player voted
            voting(_role, _myvote);
            Debug.LogError($"Gameflow received dict totalVotes {totalVotes} have votedPlayer {votedPlayer}");
            if (totalVotes == votedPlayer)  // if all player voted
            {
                voteEnd();
            }
        }
        
        #endregion

        #region Unity Callbacks
        public void Awake()
        {
            Instance = this;
            _pv = this.gameObject.GetComponent<PhotonView>();

            //random ActorNumber 1 to 6 for assign character,
            System.Random rnd = new();
            /*var rndNum = playerList.GetRange(1, 6).OrderBy(item => rnd.Next());
            Debug.Log("player roleList type: " + rndNum.GetType());
            foreach (int role in rndNum)
            {
                Debug.Log("player role: " + role);
                roleList.Add(role);
            }*/
            roleList = new() { 1, 3, 5, 4, 2, 6 };
        }

        // Start is called before the first frame update
        void Start()
        {
            PhotonNetwork.ConnectUsingSettings();
            Debug.LogError("Force the build console open...");
            _gm = GameObject.FindObjectOfType<GameManager>();
            dayTimer = GameObject.FindObjectOfType<LightManager>();
            //_isMasterClient = PhotonNetwork.IsMasterClient;
            //playerCount = PhotonNetwork.CountOfPlayers;

            //Find UI
            //localAvatar = GameObject.Find("LocalAvatar");
            //speaker = GameObject.Find("LocalAvatar/Speaker(Clone)");
            recorder = GameObject.Find("voice");
            voteUI = GameObject.Find("Vote UI");
            resultUI = GameObject.Find("Result UI");
            lobbyButton = GameObject.Find("Button-Lobby");
            blackScreen = GameObject.Find("Black Screen");
            timeText = GameObject.Find("Text (TMP)-Time").GetComponent<TextMeshProUGUI>();
            timeText.SetText(sectionTime.ToString("#.0"));
            messageText = GameObject.Find("Text (TMP)-Message").GetComponent<TextMeshProUGUI>();
            messageText.SetText("Player X is dead, here is the last message!");
            voteUI.SetActive(false);
            resultUI.SetActive(false);
            lobbyButton.SetActive(false);
            blackScreen.SetActive(false);

            character = Character.WEREWOLF;
            speechSeq = SpeechSeq.PLAYER1;
        }

        private void Update()
        {
            Debug.LogError($"Gameflow received playerList {roleList[0]}: {playerList.Contains(roleList[0])}, {roleList[1]}: {playerList.Contains(roleList[1])}, {roleList[2]}: {playerList.Contains(roleList[2])}, " +
                $" {roleList[3]}: {playerList.Contains(roleList[3])}, {roleList[4]}: {playerList.Contains(roleList[4])}, {roleList[5]}: {playerList.Contains(roleList[5])}");
            string result = "";
            foreach (var listMember in playerList)
            {
                result += listMember.ToString() + ", ";
            }
            Debug.LogError($" Gameflow playerList: {result}\n");
            Debug.Log("PhotonNetwork.CountOfPlayers: " + PhotonNetwork.CountOfPlayers);  // no update
            if (PhotonNetwork.IsMasterClient) // && PhotonNetwork.CountOfPlayers > 1)
            {
                playerCount = 0;
                //playerCount = PhotonNetwork.PlayerList.Count;
                //playerList.Clear();
                foreach (Photon.Realtime.Player player in PhotonNetwork.PlayerList)
                {
                    //playerList.Add(player.ActorNumber);
                    Debug.Log("Gameflow foreach player ActorNumber: " + player.ActorNumber);
                    playerCount += 1;
                }
                Debug.LogError("Gameflow update player: " + playerCount);
                if(playerCount >= 1)
                {
                    float timerToAll = sectionTime - timer;  //send section timer to all player
                    if (dayTurn == false)  // At night
                    {
                        switch (character)
                        {
                            case Character.WEREWOLF:
                                if (playerList.Contains(roleList[0]) || playerList.Contains(roleList[1]))
                                {
                                    //message = "dead";
                                    _gm.CallRpcGameControlToAll(roleList[0], roleList[1], timerToAll, maxVotePlayer, message);
                                    if (timer >= sectionTime || voted)
                                    {
                                        timer = 0;
                                        character = Character.SEER;
                                        if (voteDict.Count > 0)  //vote for kill
                                        {
                                            voteEnd();
                                        }
                                        voted = false;
                                    }
                                }
                                else
                                {
                                    timer = 0;
                                    character = Character.SEER;
                                    Debug.Log($" Gameflow skip: WEREWOLF\n");
                                }
                                break;
                            case Character.SEER:
                                if (playerList.Contains(roleList[2]))
                                {
                                    _gm.CallRpcGameControlToAll(roleList[2], 0, timerToAll, seerSelected, message);
                                    if (timer >= sectionTime || voted)
                                    {
                                        if(seerTime == false)
                                        {
                                            timer = sectionTime / 2;
                                            seerTime = true;
                                            if (voteDict.Count > 0) foreach (var dictItem in voteDict) seerSelected = dictItem.Key;
                                            else seerSelected = 0;
                                            if (seerSelected == roleList[0] || seerSelected == roleList[1])
                                            {
                                                message = $"Player {seerSelected} is Werewolf";
                                            }
                                            else if (seerSelected == roleList[2])
                                            {
                                                message = $"Player {seerSelected} is Seer";
                                            }
                                            else if (seerSelected == roleList[3])
                                            {
                                                message = $"Player {seerSelected} is Savior";
                                            }
                                            else if(seerSelected == roleList[4] || seerSelected == roleList[5])
                                            {
                                                message = $"Player {seerSelected} is Villager";
                                            }
                                            else message = "no one has been selected!";
                                            voted = false;
                                        }
                                        else
                                        {
                                            timer = 0;
                                            character = Character.SAVIOR;
                                            seerTime = false;
                                            voteDict = new();  //reset dict
                                        }
                                    }
                                }
                                else
                                {
                                    timer = 0;
                                    character = Character.SAVIOR;
                                    Debug.Log($" Gameflow skip: SEER\n");
                                }
                                break;
                            case Character.SAVIOR:
                                if (playerList.Contains(roleList[3]))
                                {
                                    _gm.CallRpcGameControlToAll(roleList[3], 0, timerToAll, saviorSelected, message);
                                    if (timer >= sectionTime || voted)
                                    {
                                        timer = 0;
                                        character = Character.VILLAGER;

                                        if (voteDict.Count > 0) foreach (var dictItem in voteDict) saviorSelected = dictItem.Key;
                                        else saviorSelected = 0;
                                        if (maxVotePlayer == saviorSelected || maxVotePlayer == 0)
                                        {
                                            maxVotePlayer = 0;
                                            message = "no one dead tonight";
                                        }
                                        else
                                        {
                                            message = $"Player {maxVotePlayer} was dead tonight!";
                                        }
                                        voted = false;
                                    }
                                }
                                else
                                {
                                    timer = 0;
                                    character = Character.VILLAGER;
                                    Debug.Log($" Gameflow skip: SAVIOR\n");
                                }
                                break;
                            case Character.VILLAGER:  // used to announce dead message
                                _gm.CallRpcGameControlToAll((int)SpeechSeq.deadTime, 0, timerToAll, maxVotePlayer, message);
                                if (timer >= sectionTime/2)
                                {
                                    timer = 0;
                                    character = Character.WEREWOLF;
                                    dayTurn = true;
                                    _gm.CallRpcSyncDayNightTimeToAll(dayTime);  //sync time to daylight
                                    if(maxVotePlayer >0) playerList.Remove(maxVotePlayer);
                                    endGameCheck();
                                }
                                break;
                        }
                    }
                    else  //at daytime
                    {
                        switch (speechSeq)  // Speech in sequence from  player 1 to player 6
                        {
                            case SpeechSeq.PLAYER1:
                                if (playerList.Contains((int)SpeechSeq.PLAYER1))
                                {
                                    _gm.CallRpcGameControlToAll((int)SpeechSeq.PLAYER1, 0, timerToAll, maxVotePlayer, message);
                                    if (timer >= sectionTime)
                                    {
                                        timer = 0;
                                        speechSeq = SpeechSeq.PLAYER2;
                                    }
                                }
                                else
                                {
                                    timer = 0;
                                    speechSeq = SpeechSeq.PLAYER2;
                                }
                                break;
                            case SpeechSeq.PLAYER2:
                                if (playerList.Contains((int)SpeechSeq.PLAYER2))
                                {
                                    _gm.CallRpcGameControlToAll((int)SpeechSeq.PLAYER2, 0, timerToAll, maxVotePlayer, message);
                                    if (timer >= sectionTime)
                                    {
                                        timer = 0;
                                        speechSeq = SpeechSeq.PLAYER3;
                                    }
                                }
                                else
                                {
                                    timer = 0;
                                    speechSeq = SpeechSeq.PLAYER3;
                                }
                                break;
                            case SpeechSeq.PLAYER3:
                                if (playerList.Contains((int)SpeechSeq.PLAYER3))
                                {
                                    _gm.CallRpcGameControlToAll((int)SpeechSeq.PLAYER3, 0, timerToAll, maxVotePlayer, message);
                                    if (timer >= sectionTime)
                                    {
                                        timer = 0;
                                        speechSeq = SpeechSeq.PLAYER4;
                                    }
                                }
                                else
                                {
                                    timer = 0;
                                    speechSeq = SpeechSeq.PLAYER4;
                                }
                                break;
                            case SpeechSeq.PLAYER4:
                                if (playerList.Contains((int)SpeechSeq.PLAYER4))
                                {
                                    _gm.CallRpcGameControlToAll((int)SpeechSeq.PLAYER4, 0, timerToAll, maxVotePlayer, message);
                                    if (timer >= sectionTime)
                                    {
                                        timer = 0;
                                        speechSeq = SpeechSeq.PLAYER5;
                                    }
                                }
                                else
                                {
                                    timer = 0;
                                    speechSeq = SpeechSeq.PLAYER5;
                                }
                                break;
                            case SpeechSeq.PLAYER5:
                                if (playerList.Contains((int)SpeechSeq.PLAYER5))
                                {
                                    _gm.CallRpcGameControlToAll((int)SpeechSeq.PLAYER5, 0, timerToAll, maxVotePlayer, message);
                                    if (timer >= sectionTime)
                                    {
                                        timer = 0;
                                        speechSeq = SpeechSeq.PLAYER6;
                                    }
                                }
                                else
                                {
                                    timer = 0;
                                    speechSeq = SpeechSeq.PLAYER6;
                                }
                                break;
                            case SpeechSeq.PLAYER6:
                                if (playerList.Contains((int)SpeechSeq.PLAYER6))
                                {
                                    _gm.CallRpcGameControlToAll((int)SpeechSeq.PLAYER6, 0, timerToAll, maxVotePlayer, message);
                                    if (timer >= sectionTime)
                                    {
                                        timer = 0;
                                        speechSeq = SpeechSeq.voteTime;
                                    }
                                }
                                else
                                {
                                    timer = 0;
                                    speechSeq = SpeechSeq.voteTime;
                                }
                                break;
                            case SpeechSeq.voteTime:
                                _gm.CallRpcGameControlToAll((int)SpeechSeq.voteTime, 0, timerToAll, maxVotePlayer, message);
                                if (timer >= sectionTime)
                                {
                                    timer = 0;
                                    speechSeq = SpeechSeq.deadTime;
                                    if (voteDict.Count > 0) voteEnd();
                                    if (maxVotePlayer == 0)
                                    {
                                        message = $"No one was ejected!";
                                    }
                                    else
                                    {
                                        message = $"Player {maxVotePlayer} was ejected, here is the last message!";
                                    }
                                    voted = false;
                                }
                                break;
                            case SpeechSeq.deadTime:
                                _gm.CallRpcGameControlToAll((int)SpeechSeq.deadTime, 0, timerToAll, maxVotePlayer, message);
                                _gm.CallRpcSpeckerControlToAll(maxVotePlayer);
                                if (timer >= sectionTime)
                                {
                                    timer = 0;
                                    speechSeq = SpeechSeq.PLAYER1;
                                    dayTurn = false;
                                    localDead = false;
                                    _gm.CallRpcSyncDayNightTimeToAll(nightTime); //sync time to night
                                    if (maxVotePlayer > 0) playerList.Remove(maxVotePlayer);
                                    endGameCheck();
                                }
                                break;
                    }
                    }
                    timer += Time.deltaTime;
                }
            }

            // find speaker
/*            if (!findSpeaker)
            {
                localAvatar = GameObject.Find("LocalAvatar");
                speaker = GameObject.Find("LocalAvatar/Speaker(Clone)");
                //Debug.LogWarning($"Gameflow update: {localAvatar}");
                //Debug.LogWarning("Gameflow update: find speaker! ");
                if (localAvatar != null) findSpeaker = true;
            }*/

            // player action 
            if (endGame)
            {
                blackScreen.SetActive(false);
                voteUI.SetActive(false);
                resultUI.SetActive(true);
                lobbyButton.SetActive(true);
                Debug.Log("Gameflow update: Night End Game! ");
            }
            else if (dayTurn == false)  // At night
            {
                if (action)
                {
                    blackScreen.SetActive(false);
                    if (seerTime)
                    {
                        resultUI.SetActive(true);
                        voteUI.SetActive(false);
                        Debug.Log("Gameflow update: Night Seer Time! ");
                    }
                    else if (deadTime)
                    {
                        resultUI.SetActive(true);
                        voteUI.SetActive(false);
                        voted = false;
                        Debug.Log("Gameflow update: Night dead Time! ");
                    }
                    else if(!voted)
                    {
                        Debug.Log("Gameflow update: NIGHT my turn! "); 
                        resultUI.SetActive(false);
                        voteUI.SetActive(true);
                    }
                    else
                    {
                        Debug.Log("Gameflow update: NIGHT my turn! ");
                        resultUI.SetActive(false);
                        voteUI.SetActive(false);
                    }
                }
                else
                {
                    Debug.Log("Gameflow update: NIGHT not my turn! black screen set");
                    blackScreen.SetActive(true);
                    voteUI.SetActive(false);
                }
                
            }
            else  //at daytime
            {
                blackScreen.SetActive(false);
                if (action)
                {
                    if (broadCast && !voted)
                    {
                        voteUI.SetActive(true);
                        resultUI.SetActive(false);
                        Debug.Log("Gameflow update: DAY Vote Time! ");
                    }
                    else if (deadTime)
                    {
                        resultUI.SetActive(true);
                        voteUI.SetActive(false);
                        //if (localDead)speaker.SetActive(true);
                        //else speaker.SetActive(false);
                        voted = false;
                        Debug.Log("Gameflow update: DAY ejected Time! ");
                    }
                    else
                    {
                        Debug.Log("Gameflow update: DAY my turn! ");
                        voteUI.SetActive(false);
                        resultUI.SetActive(false);
                        //speaker.SetActive(true);
                    }
                }
                else
                {
                    Debug.Log("Gameflow update: DAY not my turn! ");
                    voteUI.SetActive(false);
                    resultUI.SetActive(false);
                    //speaker.SetActive(false);
                }
            }
            
        }

        private void endGameCheck()
        {
            if(!(playerList.Contains(roleList[0]) || playerList.Contains(roleList[1])))
            {
                endGame = true;
                message = $"All werewolfs dead, villagers win! ";
            }
            else if (!(playerList.Contains(roleList[2]) || playerList.Contains(roleList[3])))
            {
                endGame = true;
                message = $"All special roles dead, werewolf win! ";
            }
            else if (!(playerList.Contains(roleList[4]) || playerList.Contains(roleList[5])))
            {
                endGame = true;
                message = $"All villagers dead, werewolf win! ";
            }
            _gm.CallRpcEndGame(endGame);
        }
        #endregion

    }
}
