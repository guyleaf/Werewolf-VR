using Photon.Pun;
using Photon.Realtime;
using Photon.Voice.Unity;
using Photon.Voice.PUN;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.Serialization.Formatters.Binary;
using System.Runtime.Serialization;
using System.IO;
using TMPro;
using UnityEngine;
using VoteUI.Btn;
using Werewolf;
using Werewolf.Player;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
//using NUnit.Framework;

namespace Werewolf.Game
{
    public class GameManager : MonoBehaviourPunCallbacks
    {
        #region Public Methods & Properties
        // sync time
        private LightManager dayTimer;
        public float timer = 0;
        private int dayTime = 1000;
        private int nightTime = 3500;
        public bool dayTurn = false;
        public bool syncTime = false;
        public static float deltaTime;  // get time consume of a frame
        // public TextMeshProUGUI timeText;
        public Progressbar voteProgressBar;
        public TextMeshProUGUI messageText;
        public TextMeshProUGUI sectionMessageText;
        public TextMeshProUGUI endGameMessageText;

        //player setting
        private int playerCount;
        private int werewolfCount = 2;
        public List<int> playerList = new() { 0, 1, 2, 3, 4, 5, 6 };
        public List<int> roleList = new();
        public int actorNumber;

        private const string logScope = "playerAvatar";

        //Game Control
        public GameManager _gm;
        public PlayerSpawner _playerSpawner;
        public CameraController _playerCamera;
        public ButtonClick _voteUI;
        public GameObject voteUI, blackScreen, hudUI, notifyUI, endGameUI, localAvatar, voice;
        public Recorder recorder;
        private bool action;
        private bool syncList = false;
        private bool seerTime = false;
        private bool broadCast = false;
        private bool deadTime = false;
        private bool localDead = false;
        public bool endGame = false;
        public float sectionTime;

        // Check if clients are ready
        private bool areAllClientsReady = false;

        private int numOfClientsReady = 0;

        private PunVoiceClient punVoiceClient;

        private enum Character
        {
            SHOWROLE,
            ENDGAME,
            WEREWOLF,
            SEER,
            SAVIOR,
            VILLAGER,
        }
        private enum SpeechSeq
        {
            VOTETIME,
            PLAYER1,
            PLAYER2,
            PLAYER3,
            PLAYER4,
            PLAYER5,
            PLAYER6,
            NOTIFYTIME
        }
        private Character character;
        private SpeechSeq speechSeq;
        private string message = "";
        private string sectionMessage = "";
        private string voteMessage = "";

        //vote
        private Dictionary<int, List<int>> voteDict = new();
        private List<int> voteList = new();
        public bool voted = false;
        public bool allVoted = false;
        //private int noPlayer = 10;
        public int myvote = 0;
        private int votedPlayer = 0;
        private int maxVotePlayer = 0;
        private int seerSelected = 0;
        private int saviorSelected = 0;

        public static GameManager Instance { get; private set; }

        public void GoBackToLobby()
        {
            PhotonNetwork.LeaveRoom();
            SceneManager.LoadScene(Metadata.Scenes.Lobby);
        }

        public void GoBackToWaitingRoom()
        {
            SceneManager.LoadScene(Metadata.Scenes.Lobby);
        }

        public void PlayerDead()
        {
            var player = PhotonNetwork.LocalPlayer.TagObject as GameObject;
            _playerCamera = player.GetComponent<CameraController>();
            _playerCamera.OnStopFollowing();
            PhotonNetwork.Destroy(PhotonNetwork.LocalPlayer.TagObject as GameObject);
            Debug.Log($"Gameflow: destroy avatar!");
        }

        #endregion

        #region Photon Callbacks

        public override void OnDisconnected(DisconnectCause cause)
        {
            Debug.LogWarning(cause);
            Reconnect();
        }

        public void CallRpcClientIsReadyToAll()
        {
            photonView.RPC(nameof(RpcClientIsReady), RpcTarget.AllViaServer);
        }

        public void CallRpcClientsAreAllReadyToAll()
        {
            photonView.RPC(nameof(RpcClientsAreAllReady), RpcTarget.AllViaServer);
        }

        // Message send to others/all, 
        public void CallRpcSyncDayNightTimeToAll(int _daytimer)
        {
            photonView.RPC("RpcSyncDayNightTimer", RpcTarget.AllViaServer, _daytimer);  // sync time to client
            photonView.RPC("RpcSyncDayNight", RpcTarget.AllViaServer, dayTurn);  // send Day or night message to clients
        }

        public void CallRpcStartGameToAll(int role1, int role2, float timerToAll, float totalTime, string sectionMessage)
        {
            photonView.RPC("RpcGameControl", RpcTarget.AllViaServer, role1, role2);
            photonView.RPC("RpcSyncTimer", RpcTarget.AllViaServer, timerToAll, totalTime);
            photonView.RPC("RpcSendSectionMessage", RpcTarget.AllViaServer, sectionMessage);
            photonView.RPC("RpcStartGameMessageToAll", RpcTarget.AllViaServer);
        }
        public void CallRpcGameControlToAll(int role1, int role2, float timerToAll, float totalTime, string message, string sectionMessage)
        {
            photonView.RPC("RpcGameControl", RpcTarget.AllViaServer, role1, role2);
            photonView.RPC("RpcSyncTimer", RpcTarget.AllViaServer, timerToAll, totalTime);
            photonView.RPC("RpcSendMessage", RpcTarget.AllViaServer, message);
            photonView.RPC("RpcSendSectionMessage", RpcTarget.AllViaServer, sectionMessage);
        }

        public void CallRpcRecorderControlToAll(int maxVotePlayer)
        {
            photonView.RPC("RpcSendDeadPlayer", RpcTarget.AllViaServer, maxVotePlayer);
        }

        public void CallRpcRecorderEnableToAll(List<int> playerList)
        {
            var o = new MemoryStream(); //Create something to hold the data
            var bf = new BinaryFormatter(); //Create a formatter
            bf.Serialize(o, playerList);
            var data = Convert.ToBase64String(o.GetBuffer()); //Convert the data to a string
            photonView.RPC("RpcRecorderEnableToAll", RpcTarget.AllViaServer, data);
        }

        public void CallRpcSyncPlayerRoleToAll(List<int> playerList, List<int> roleList)
        {
            var playerObject = new MemoryStream(); //Create something to hold the data
            var playerBF = new BinaryFormatter(); //Create a formatter
            playerBF.Serialize(playerObject, playerList);
            var playerData = Convert.ToBase64String(playerObject.GetBuffer()); //Convert the data to a string
            var roleObject = new MemoryStream(); //Create something to hold the data
            var roleBF = new BinaryFormatter(); //Create a formatter
            roleBF.Serialize(roleObject, roleList);
            var roleData = Convert.ToBase64String(roleObject.GetBuffer()); //Convert the data to a string
            photonView.RPC("RpcSyncPlayerRoleToAll", RpcTarget.AllViaServer, playerData, roleData);
        }

        public void CallRpcSendMyVote(int role, int myvote)
        {
            photonView.RPC("RpcSendMyVote", RpcTarget.MasterClient, role, myvote);
        }

        public void CallRpcSeerTime(bool seerTime)
        {
            photonView.RPC("RpcSeerTime", RpcTarget.AllViaServer, seerTime);
        }

        public void CallRpcEndGame(bool endGame, string message)
        {
            photonView.RPC("RpcEndGame", RpcTarget.AllViaServer, endGame, message);
        }

        [PunRPC]
        void RpcClientIsReady(PhotonMessageInfo info)
        {
            numOfClientsReady++;
            if (PhotonNetwork.IsMasterClient)
            {
                Debug.LogWarning("Number of clients ready: " + numOfClientsReady);
                if (numOfClientsReady == PhotonNetwork.CurrentRoom.MaxPlayers)
                {
                    CallRpcClientsAreAllReadyToAll();
                }
            }
        }

        [PunRPC]
        void RpcClientsAreAllReady(PhotonMessageInfo info)
        {
            areAllClientsReady = true;
        }

        //others/all will received at the same location
        [PunRPC]  // sync time
        void RpcSyncDayNightTimer(int _dayTimer, PhotonMessageInfo info)
        {
            dayTimer.TimeOfDay = _dayTimer;
            timer = 0;
            Debug.LogWarning("Gameflow received time: " + _dayTimer);
        }

        [PunRPC] // sync day night
        void RpcSyncDayNight(bool _dayTurn, PhotonMessageInfo info)
        {
            dayTurn = _dayTurn;
            Debug.LogWarning($"Gameflow received Day turn: {dayTurn} {_dayTurn}");
        }

        [PunRPC] //send timer to players
        void RpcSyncTimer(float timerToAll, float totalTime, PhotonMessageInfo info)
        {
            //Debug.Log($"Gameflow received timer: {timerToAll}, totalTime: {totalTime}");
            //timeText.SetText(((int)timerToAll).ToString());
            voteProgressBar.remainTime = timerToAll;
            voteProgressBar.totalTime = totalTime;
        }

        [PunRPC] //send first message to players
        void RpcShowRole(PhotonMessageInfo info)
        {
            messageText.SetText($"{message}");
        }

        [PunRPC] //send message to players
        void RpcSendMessage(string _message, PhotonMessageInfo info)
        {
            messageText.SetText($"{_message}");
        }

        [PunRPC] //send section message to players
        void RpcSendSectionMessage(string _sectionMessage, PhotonMessageInfo info)
        {
            sectionMessageText.SetText($"{_sectionMessage}");
        }

        [PunRPC] //send enable recorder to player
        void RpcSendDeadPlayer(int _maxVotePlayer, PhotonMessageInfo info)
        {
            if (PhotonNetwork.LocalPlayer.ActorNumber == _maxVotePlayer)
            {
                recorder.RecordingEnabled = true;

                //PlayerDead();
            }
            else
            {
                //recorder.StopRecordingWhenPaused = false;
                recorder.RecordingEnabled = false;
            }
            Debug.LogWarning($"Gameflow received maxVotePlayer: {_maxVotePlayer}, myActorNumber{PhotonNetwork.LocalPlayer.ActorNumber}, recorder.RecordingEnabled: {recorder.RecordingEnabled}");
        }

        [PunRPC] //send recorder enable to all players
        private void RpcRecorderEnableToAll(string _data, PhotonMessageInfo info)
        {
            var bf = new BinaryFormatter();
            var ins = new MemoryStream(Convert.FromBase64String(_data)); //Create an input stream from the string
            List<int> _playerList = (List<int>)bf.Deserialize(ins);
            string result = "";
            foreach (var listMember in _playerList)
            {
                result += listMember.ToString() + ", ";
            }
            Debug.LogWarning($" Gameflow RpcRecorderEnableToAll playerList: {result}\n");
            if (_playerList.Contains(PhotonNetwork.LocalPlayer.ActorNumber))
            {
                recorder.RecordingEnabled = true;
                Debug.LogWarning($"Gameflow received playList contain: True, recorder.RecordingEnabled: {recorder.RecordingEnabled}");
            }
            else
            {
                recorder.RecordingEnabled = false;
                blackScreen.SetActive(false);
                //PlayerDead();
                Debug.LogWarning($"Gameflow received playList contain: False, recorder.RecordingEnabled: {recorder.RecordingEnabled}");
            }
        }

        [PunRPC] //send recorder enable to all players
        private void RpcSyncPlayerRoleToAll(string _playerData, string _roleData, PhotonMessageInfo info)
        {
            var playerBF = new BinaryFormatter();
            var playerIns = new MemoryStream(Convert.FromBase64String(_playerData)); //Create an input stream from the string
            List<int> _playerList = (List<int>)playerBF.Deserialize(playerIns);
            var roleBF = new BinaryFormatter();
            var roleIns = new MemoryStream(Convert.FromBase64String(_roleData)); //Create an input stream from the string
            List<int> _roleList = (List<int>)roleBF.Deserialize(roleIns);
            string result = "";
            foreach (var listMember in _playerList)
            {
                result += listMember.ToString() + ", ";
            }
            Debug.LogWarning($" Gameflow received RpcSyncPlayerRoleToAll playerList: {result}\n");
            result = "";
            foreach (var listMember in _roleList)
            {
                result += listMember.ToString() + ", ";
            }
            Debug.LogWarning($" Gameflow received RpcSyncPlayerRoleToAll roleList: {result}\n");
            roleList = _roleList;
            playerList = _playerList;
        }

        [PunRPC] //send start game message to all players
        private void RpcStartGameMessageToAll(PhotonMessageInfo info)
        {
            StartGame();
        }

        [PunRPC] //send role to player to confirm action of player
        void RpcGameControl(int _role1, int _role2, PhotonMessageInfo info)
        {
            Debug.Log($"Gameflow received: {_role1}, {_role2}");
            if (_role1 == 0) broadCast = true;
            else broadCast = false;
            if (_role1 == 7) deadTime = true;
            else deadTime = false;
            if (!(playerList.Contains(PhotonNetwork.LocalPlayer.ActorNumber)))
            {
                Debug.LogWarning($"Gameflow received playerList not contains: {PhotonNetwork.LocalPlayer.ActorNumber} ");
                action = false;
            }
            else if (_role2 == 0)
            {
                if (PhotonNetwork.LocalPlayer.ActorNumber == _role1 || _role1 == 0 || _role1 == 7)  //speechSeq voteTime & deadTime
                {
                    Debug.LogWarning("Gameflow received: " + _role1 + ", role is mine! ");
                    action = true;
                }
                else
                {
                    Debug.LogWarning("Gameflow received: " + _role1 + ", not my role: " + PhotonNetwork.LocalPlayer.ActorNumber);
                    action = false;
                }
            }
            else
            {
                if (PhotonNetwork.LocalPlayer.ActorNumber == _role1 || PhotonNetwork.LocalPlayer.ActorNumber == _role2)  //for werewolf round
                {
                    Debug.LogWarning($"Gameflow received: {_role1}, {_role2}, role is mine! ");
                    action = true;
                }
                else
                {
                    Debug.LogWarning($"Gameflow received: {_role1}, {_role2}, not my role: " + PhotonNetwork.LocalPlayer.ActorNumber);
                    action = false;
                }
            }
        }

        [PunRPC]  //receive vote from others to MasterClient, used in buttonClick script
        public void RpcSendMyVote(int _role, int _myvote, PhotonMessageInfo info)
        {
            if (dayTurn == false)  //night
            {
                if (_role == roleList[0] || _role == roleList[1])
                {
                    if (playerList.Contains(roleList[0])) werewolfCount = 1;
                    else werewolfCount = 0;
                    if (playerList.Contains(roleList[1])) werewolfCount += 1;
                    voteSystem(_role, _myvote, werewolfCount);
                    if (votedPlayer == werewolfCount) allVoted = true;
                    Debug.LogWarning($"Gamflow received votedPlayer: {votedPlayer}, werewolfCount: {werewolfCount}, voted: {allVoted}");
                    //votedPlayer = 0;
                }
                else if (_role == roleList[2])
                {
                    voting(_role, _myvote);
                    //voted = true;
                }
                else if (_role == roleList[3])
                {
                    voting(_role, _myvote);
                    //voted = true;
                }
            }
            else  //day
            {
                voteSystem(_role, _myvote, playerCount);
                if (votedPlayer == playerCount) allVoted = true;
                Debug.LogWarning($"Gamflow received votedPlayer: {votedPlayer}, playerCount: {playerCount}, voted: {allVoted}");
                //votedPlayer = 0;
            }

        }

        [PunRPC]  //Send SeerTime to all players
        void RpcSeerTime(bool _seerTime, PhotonMessageInfo info)
        {
            Debug.LogWarning($"Gameflow received bool seerTime! {seerTime} {_seerTime}");
            //endGameMessageText.SetText($"{_message}");
            seerTime = _seerTime;
            Debug.LogWarning($"Gameflow received bool seerTime updated! {seerTime} {_seerTime}");
        }

        [PunRPC]  //End Game message from master
        void RpcEndGame(bool _endGame, string _message, PhotonMessageInfo info)
        {
            Debug.LogWarning($"Gameflow received bool End Game! {endGame} {_endGame}");
            endGameMessageText.SetText($"{_message}");
            endGame = _endGame;
            Debug.LogWarning($"Gameflow received bool End Game Updated! {endGame} {_endGame}, message: {message}, {_message}");
        }


        //vote system
        void voting(int _role, int _myvote) //add vote in to dictionary
        {
            Debug.LogWarning($"Gameflow received dict key Player: {_role}, vote: {_myvote}");
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
            Debug.LogWarning($"Gameflow received dict voteDict key myvote: {_myvote}, this vote contain total of value: {voteDict[_myvote].Count}");
        }

        //calculate votes and eject
        void voteEnd(int maxVote = 0, int maxVoteCount = 0)
        {
            maxVotePlayer = 0;
            foreach (var dictItem in voteDict)  //voteDict: key(player), value(voted player)
            {
                voteMessage += $"Player {dictItem.Key} got voted from Player ";
                Debug.Log($"dict Foreach key voteMessage: {dictItem.Key}");
                foreach (var listItem in dictItem.Value.ToList())
                {
                    voteMessage += $"{listItem}, ";
                    Debug.Log($"Gameflow received dict Foreach key: {dictItem.Key}, value: {listItem}");  //, count: {dictItem.Value.Count} ");
                }
                voteMessage += "\n";
                Debug.LogWarning($"Gameflow received dict key {dictItem.Key} have votes count: {dictItem.Value.ToList().Count}");
                if (maxVote < dictItem.Value.ToList().Count)  // count player have max votes
                {
                    maxVote = dictItem.Value.ToList().Count;
                    maxVotePlayer = dictItem.Key;
                    maxVoteCount = 1;
                }
                else if (maxVote == dictItem.Value.ToList().Count)  // check how many player have max votes
                {
                    maxVoteCount += 1;
                    maxVotePlayer = 0;  //no player should be eject
                }
            }

            //check vote over half player or not, if so, eject player
            int halfPlayer = (int)Math.Round(votedPlayer / 2.0f, 0, MidpointRounding.AwayFromZero);
            Debug.LogWarning($"Gameflow received dict maxVote{maxVote},  halfPlayer: {halfPlayer}, maxVotePlayer: {maxVotePlayer}");
            if (maxVote >= halfPlayer && maxVotePlayer > 0)  // player have more or equal to half of vote and maxVotePlayer != 0, eject player
            {
                Debug.LogWarning($"Gameflow received dict Player {maxVotePlayer} have {maxVote} votes, he/she will be ejected!");
                //votedPlayer = 0;
                //maxVotePlayer = 0;
            }
            else
            {
                //message = "no one will be ejected";
                Debug.LogWarning($"Gameflow received dict Player {maxVotePlayer} have {maxVote} votes, maxVoteCount: {maxVoteCount}, {message}!");
            }
            voteDict = new();  //reset dict
            //votedPlayer = 0;
        }
        //day vote
        void voteSystem(int _role, int _myvote, int totalVotes)
        {
            if (_myvote != 0)
            {
                votedPlayer += 1; // count how many player voted
                voting(_role, _myvote);
            }

            Debug.LogWarning($"Gameflow received dict totalVotes {totalVotes} have votedPlayer {votedPlayer}");
            if (totalVotes == votedPlayer)  // if all player voted
            {
                voteEnd();
            }
        }

        #endregion

        #region Unity Callbacks

        void OnApplicationPause(bool isPaused)
        {
            if (!isPaused)
            {
                if (!PhotonNetwork.InRoom)
                {
                    Reconnect();
                }

                if (this.punVoiceClient != null)
                {
                    if (this.punVoiceClient.ClientState == ClientState.PeerCreated || this.punVoiceClient.ClientState == ClientState.Disconnected)
                    {
                        this.punVoiceClient.ConnectAndJoinRoom();
                    }
                }
            }
        }

        public void Awake()
        {
            Instance = this;

            //random ActorNumber 1 to 6 for assign character,
            System.Random rnd = new();
            var rndNum = playerList.GetRange(1, 6).OrderBy(item => rnd.Next());
            Debug.Log("player roleList type: " + rndNum.GetType());
            foreach (int role in rndNum)
            {
                Debug.Log("player role: " + role);
                roleList.Add(role);
            }
            // roleList = new() { 1, 3, 5, 2, 4, 6 };
        }

        // Start is called before the first frame update
        void Start()
        {
            //Debug.LogWarning("Force the build console open...");
            _gm = GameObject.FindObjectOfType<GameManager>();
            _voteUI = GameObject.FindObjectOfType<ButtonClick>();
            _playerSpawner = GameObject.FindObjectOfType<PlayerSpawner>();
            //_playerCamera = GameObject.FindObjectOfType<CameraController>();
            dayTimer = GameObject.FindObjectOfType<LightManager>();
            sectionTime = 30;
            dayTime = (int)(sectionTime * 600);
            nightTime = (int)(sectionTime * 230);
            Debug.Log($"Timer: sectionTime: {sectionTime}, timer: {timer}");
            //dayTimer.end = dayTime + nightTime;
            //_isMasterClient = PhotonNetwork.IsMasterClient;
            //playerCount = PhotonNetwork.CountOfPlayers;

            //Find UI
            localAvatar = GameObject.Find("LocalAvatar");
            //voice = GameObject.Find("Voice");
            recorder = GameObject.Find("Voice").GetComponent<Recorder>();
            voteUI = GameObject.Find("Vote UI");
            hudUI = GameObject.Find("HUD UI");
            notifyUI = GameObject.Find("Result UI");
            //notifyUI = GameObject.Find("Notify UI");
            endGameUI = GameObject.Find("EndGame UI");
            blackScreen = GameObject.Find("Black Screen");

            //timeText = GameObject.Find("Text (TMP)-Time").GetComponent<TextMeshProUGUI>();
            //timeText.SetText(sectionTime.ToString("#.0"));

            voteProgressBar = GameObject.Find("VoteProgressbar").GetComponent<Progressbar>();
            // You Need To Re-Set Your Total Time When Stage Is Change 
            // Otherwise The Bar Will Not Show Correctly
            voteProgressBar.totalTime = 30;

            messageText = GameObject.Find("Text (TMP)-ResultMessage").GetComponent<TextMeshProUGUI>();
            //messageText = GameObject.Find("Text (TMP)-NotifyMessage").GetComponent<TextMeshProUGUI>();

            //messageText.SetText("Player X is dead, here is the last message!");
            sectionMessageText = GameObject.Find("Text (TMP)-SectionMessage").GetComponent<TextMeshProUGUI>();
            //sectionMessageText.SetText("Section: X Turn \nTimer: X s");
            endGameMessageText = GameObject.Find("Text (TMP)-EndGameMessage").GetComponent<TextMeshProUGUI>();
            endGameMessageText.SetText("End Game");
            voteUI.SetActive(false);
            notifyUI.SetActive(false);
            endGameUI.SetActive(false);
            blackScreen.SetActive(false);

            character = Character.SHOWROLE;
            speechSeq = SpeechSeq.PLAYER1;

            this.punVoiceClient = PunVoiceClient.Instance;

            CallRpcClientIsReadyToAll();
        }

        private void Update()
        {
            Debug.LogWarning($"Gameflow received playerList {roleList[0]}: {playerList.Contains(roleList[0])}, {roleList[1]}: {playerList.Contains(roleList[1])}, {roleList[2]}: {playerList.Contains(roleList[2])}, " +
                $" {roleList[3]}: {playerList.Contains(roleList[3])}, {roleList[4]}: {playerList.Contains(roleList[4])}, {roleList[5]}: {playerList.Contains(roleList[5])}");
            string result = "";
            foreach (var listMember in playerList)
            {
                result += listMember.ToString() + ", ";
            }
            Debug.LogWarning($" Gameflow playerList: {result}\n");
            Debug.Log("PhotonNetwork.CountOfPlayers: " + PhotonNetwork.CountOfPlayers);  // no update

            if (areAllClientsReady)
            {
                ProceedUserActionLogic();
            }
            else
            {
                blackScreen.SetActive(true);
                notifyUI.SetActive(false);
                voteUI.SetActive(false);
            }
        }

        private void ProceedUserActionLogic()
        {
            if (PhotonNetwork.IsMasterClient)
            {
                ProceedGameLogic();
            }

            // player action 
            if (endGame)
            {
                blackScreen.SetActive(false);
                voteUI.SetActive(false);
                hudUI.SetActive(false);
                endGameUI.SetActive(true);
                notifyUI.SetActive(false);
                //dayTurn = true;
                character = Character.ENDGAME;
                speechSeq = SpeechSeq.PLAYER1;
                timer = 0;
                Debug.Log("Gameflow update: Night End Game! ");
            }
            else if (deadTime)
            {
                blackScreen.SetActive(false);
                notifyUI.SetActive(true);
                voteUI.SetActive(false);
                voted = false;
                Debug.Log("Gameflow update: Day/Night dead/eject Time! ");
            }
            else if (dayTurn == false)  // At night
            {
                hudUI.SetActive(true);
                if (action)
                {
                    blackScreen.SetActive(false);
                    if (seerTime)
                    {
                        notifyUI.SetActive(true);
                        voteUI.SetActive(false);
                        Debug.Log("Gameflow update: Night Seer Time! ");
                    }
                    else if (!voted)
                    {
                        Debug.Log("Gameflow update: NIGHT my turn not voted! ");
                        notifyUI.SetActive(false);
                        voteUI.SetActive(true);
                    }
                    else
                    {
                        Debug.Log("Gameflow update: NIGHT my turn! ");
                        notifyUI.SetActive(false);
                        voteUI.SetActive(false);
                    }
                }
                else
                {
                    Debug.Log("Gameflow update: NIGHT not my turn! black screen set");
                    blackScreen.SetActive(true);
                    notifyUI.SetActive(false);
                    voteUI.SetActive(false);
                }

            }
            else  //at daytime
            {
                hudUI.SetActive(true);
                blackScreen.SetActive(false);
                if (action)
                {
                    if (broadCast && !voted)
                    {
                        voteUI.SetActive(true);
                        notifyUI.SetActive(false);
                        Debug.Log("Gameflow update: DAY Vote Time! ");
                    }
                    /*else if (deadTime)
                    {
                        notifyUI.SetActive(true);
                        voteUI.SetActive(false);
                        //if (localDead)speaker.SetActive(true);
                        //else speaker.SetActive(false);
                        voted = false;
                        Debug.Log("Gameflow update: DAY ejected Time! ");
                    }*/
                    else
                    {
                        Debug.Log("Gameflow update: DAY my turn! ");
                        voteUI.SetActive(false);
                        notifyUI.SetActive(false);
                        //speaker.SetActive(true);
                    }
                }
                else
                {
                    Debug.Log("Gameflow update: DAY not my turn! ");
                    voteUI.SetActive(false);
                    notifyUI.SetActive(false);
                    //speaker.SetActive(false);
                }
            }
        }

        private void ProceedGameLogic()
        {
            float timerToAll = sectionTime - timer;  //send section timer to all player
                                                     //Debug.Log($"Timer: timerToAll: {timerToAll}, sectionTime: {sectionTime}, timer: {timer}");
            if (dayTurn == false)  // At night
            {
                switch (character)
                {
                    case Character.SHOWROLE:
                        sectionMessage = $"Section: SHOWROLE Turn\nTimer: {(int)timerToAll} s";
                        _gm.CallRpcSyncPlayerRoleToAll(playerList, roleList);
                        _gm.CallRpcStartGameToAll((int)SpeechSeq.NOTIFYTIME, 0, timerToAll, sectionTime, sectionMessage);
                        //_gm.CallRpcGameControlToAll((int)SpeechSeq.deadTime, 0, timerToAll, sectionTime, message, sectionMessage);
                        if (timer >= sectionTime)
                        {
                            timer = 0;
                            character = Character.WEREWOLF;
                            _gm.CallRpcSyncDayNightTimeToAll(nightTime);  //sync time to daylight
                        }
                        break;
                    case Character.ENDGAME:
                        sectionMessage = $"";
                        _gm.CallRpcSyncPlayerRoleToAll(playerList, roleList);
                        _gm.CallRpcStartGameToAll((int)SpeechSeq.NOTIFYTIME, 0, timerToAll, sectionTime, sectionMessage);
                        if (timer >= sectionTime)
                        {
                            timer = 0;
                            character = Character.WEREWOLF;
                            _gm.CallRpcSyncDayNightTimeToAll(nightTime);  //sync time to daylight
                        }
                        break;
                    case Character.WEREWOLF:
                        timerToAll = sectionTime * 4 - timer;
                        sectionMessage = $"Section: Werewolf Turn\nTimer: {(int)timerToAll} s";
                        _gm.CallRpcGameControlToAll(roleList[0], roleList[1], timerToAll, sectionTime * 4, message, sectionMessage);
                        if (playerList.Contains(roleList[0]) || playerList.Contains(roleList[1]))
                        {
                            if (timer >= sectionTime * 4) // || allVoted)
                            {
                                timer = 0;
                                character = Character.SEER;
                                if (voteDict.Count > 0)  //vote for kill
                                {
                                    voteEnd();
                                }
                                votedPlayer = 0;
                                voted = false;
                                allVoted = false;
                                Debug.Log($" Gameflow werewolf voted: {voted}, allVoted{allVoted}");
                            }
                        }
                        else if (timer >= sectionTime * 4)
                        {
                            timer = 0;
                            character = Character.SEER;
                            Debug.Log($" Gameflow skip: WEREWOLF\n");
                        }
                        break;
                    case Character.SEER:
                        sectionMessage = $"Section: Seer Turn\nTimer: {(int)timerToAll} s";
                        _gm.CallRpcGameControlToAll(roleList[2], 0, timerToAll, sectionTime, message, sectionMessage);
                        if (playerList.Contains(roleList[2]))
                        {
                            //_gm.CallRpcSeerTime(seerTime);
                            if (timer >= sectionTime)
                            {
                                Debug.Log($"Gameflow received: seerTime {seerTime}, voted: {voted}");
                                if (seerTime == false)
                                {
                                    timer = 0;
                                    sectionTime = sectionTime / 6;
                                    seerTime = true;
                                    _gm.CallRpcSeerTime(seerTime);
                                    Debug.Log($"Gameflow received: seerTime false {seerTime}, voted: {voted}");
                                    if (voteDict.Count > 0) foreach (var dictItem in voteDict) seerSelected = dictItem.Key;
                                    else seerSelected = 0;
                                    if (seerSelected == roleList[0] || seerSelected == roleList[1])
                                    {
                                        message = $"Player {seerSelected} is Werewolf";
                                    }
                                    else if (seerSelected == roleList[2]) //Seer
                                    {
                                        message = $"Player {seerSelected} is not Werewolf";
                                    }
                                    else if (seerSelected == roleList[3])  //Savior
                                    {
                                        message = $"Player {seerSelected} is not Werewolf";
                                    }
                                    else if (seerSelected == roleList[4] || seerSelected == roleList[5])  //Villager
                                    {
                                        message = $"Player {seerSelected} is not Werewolf";
                                    }
                                    else message = "no one has been selected!";
                                    voted = false;
                                }
                                else
                                {
                                    timer = 0;
                                    character = Character.SAVIOR;
                                    seerTime = false;
                                    sectionTime = sectionTime * 6;
                                    _gm.CallRpcSeerTime(seerTime);
                                    voteDict = new();  //reset dict
                                    Debug.Log($"Gameflow received: seerTime true {seerTime}, voted: {voted}");
                                }
                            }
                        }
                        else if (timer >= sectionTime)
                        {
                            timer = 0;
                            seerTime = false;
                            character = Character.SAVIOR;
                            Debug.Log($" Gameflow skip: SEER\n");
                        }
                        break;
                    case Character.SAVIOR:
                        sectionMessage = $"Section: Savior Turn\nTimer: {(int)timerToAll} s";
                        _gm.CallRpcGameControlToAll(roleList[3], 0, timerToAll, sectionTime, message, sectionMessage);
                        if (playerList.Contains(roleList[3]))
                        {
                            if (timer >= sectionTime)
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
                                    Debug.Log($"Player {maxVotePlayer} was dead tonight!");
                                    playerList.Remove(maxVotePlayer);
                                    if (PhotonNetwork.LocalPlayer.ActorNumber == maxVotePlayer) PlayerDead();
                                    _voteUI.ButtonDisable(maxVotePlayer);
                                    _gm.CallRpcSyncPlayerRoleToAll(playerList, roleList);
                                    maxVotePlayer = 0;
                                }
                                voteMessage = "";
                                voteDict = new();
                                Debug.Log($"Gameflow: votemessage {voteMessage}, message {message}");
                                voted = false;
                                _gm.CallRpcRecorderEnableToAll(playerList);
                            }
                        }
                        else if (timer >= sectionTime)
                        {
                            timer = 0;
                            character = Character.VILLAGER;
                            if (maxVotePlayer > 0)
                            {
                                playerList.Remove(maxVotePlayer);
                                if (PhotonNetwork.LocalPlayer.ActorNumber == maxVotePlayer) PlayerDead();
                                message = $"Player {maxVotePlayer} was dead tonight!";
                                Debug.Log($"elseif Player {maxVotePlayer} was dead tonight!");
                                _voteUI.ButtonDisable(maxVotePlayer);
                                _gm.CallRpcSyncPlayerRoleToAll(playerList, roleList);
                                maxVotePlayer = 0;
                            }
                            voteMessage = "";
                            voteDict = new();
                            _gm.CallRpcRecorderEnableToAll(playerList);
                            Debug.Log($" Gameflow skip: SAVIOR\n");
                        }
                        break;
                    case Character.VILLAGER:  // used to announce dead message
                        sectionMessage = $"Section: dead time \nTimer: {(int)timerToAll} s";
                        _gm.CallRpcGameControlToAll((int)SpeechSeq.NOTIFYTIME, 0, timerToAll, sectionTime, message, sectionMessage);
                        if (timer >= sectionTime / 2)
                        {
                            timer = 0;
                            character = Character.WEREWOLF;
                            dayTurn = true;
                            //message = "no one dead tonight";
                            _gm.CallRpcSyncDayNightTimeToAll(dayTime);  //sync time to daylight
                            EndGameCheck();
                        }
                        break;
                }
            }
            else  //at daytime
            {
                switch (speechSeq)  // Speech in sequence from  player 1 to player 6
                {
                    case SpeechSeq.PLAYER1:
                        sectionMessage = $"Section: Player1 Turn \nTimer: {(int)timerToAll} s";
                        if (playerList.Contains((int)SpeechSeq.PLAYER1))
                        {
                            _gm.CallRpcGameControlToAll((int)SpeechSeq.PLAYER1, 0, timerToAll, sectionTime, message, sectionMessage);
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
                        sectionMessage = $"Section: Player2 Turn \nTimer: {(int)timerToAll} s";
                        if (playerList.Contains((int)SpeechSeq.PLAYER2))
                        {
                            _gm.CallRpcGameControlToAll((int)SpeechSeq.PLAYER2, 0, timerToAll, sectionTime, message, sectionMessage);
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
                        sectionMessage = $"Section: Player3 Turn \nTimer: {(int)timerToAll} s";
                        if (playerList.Contains((int)SpeechSeq.PLAYER3))
                        {
                            _gm.CallRpcGameControlToAll((int)SpeechSeq.PLAYER3, 0, timerToAll, sectionTime, message, sectionMessage);
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
                        sectionMessage = $"Section: Player4 Turn \nTimer: {(int)timerToAll} s";
                        if (playerList.Contains((int)SpeechSeq.PLAYER4))
                        {
                            _gm.CallRpcGameControlToAll((int)SpeechSeq.PLAYER4, 0, timerToAll, sectionTime, message, sectionMessage);
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
                        sectionMessage = $"Section: Player5 Turn \nTimer: {(int)timerToAll} s";
                        if (playerList.Contains((int)SpeechSeq.PLAYER5))
                        {
                            _gm.CallRpcGameControlToAll((int)SpeechSeq.PLAYER5, 0, timerToAll, sectionTime, message, sectionMessage);
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
                        sectionMessage = $"Section: Player6 Turn \nTimer: {(int)timerToAll} s";
                        if (playerList.Contains((int)SpeechSeq.PLAYER6))
                        {
                            _gm.CallRpcGameControlToAll((int)SpeechSeq.PLAYER6, 0, timerToAll, sectionTime, message, sectionMessage);
                            if (timer >= sectionTime)
                            {
                                timer = 0;
                                speechSeq = SpeechSeq.VOTETIME;
                            }
                        }
                        else
                        {
                            timer = 0;
                            speechSeq = SpeechSeq.VOTETIME;
                        }
                        break;
                    case SpeechSeq.VOTETIME:
                        sectionMessage = $"Section: Voting Time \nTimer: {(int)timerToAll} s";
                        _gm.CallRpcGameControlToAll((int)SpeechSeq.VOTETIME, 0, timerToAll, sectionTime, message, sectionMessage);
                        if (timer >= sectionTime || allVoted)
                        {
                            timer = 0;
                            speechSeq = SpeechSeq.NOTIFYTIME;
                            if (voteDict.Count > 0)
                            {
                                voteEnd();
                            }
                            votedPlayer = 0;
                            if (maxVotePlayer == 0)
                            {
                                message = $"{voteMessage}No one was ejected!";
                            }
                            else
                            {
                                message = $"{voteMessage}Player {maxVotePlayer} was ejected, here is the last message!";
                                playerList.Remove(maxVotePlayer);
                                //if(PhotonNetwork.LocalPlayer.ActorNumber == maxVotePlayer) PlayerDead();
                                _voteUI.ButtonDisable(maxVotePlayer);
                                _gm.CallRpcSyncPlayerRoleToAll(playerList, roleList);
                                //maxVotePlayer = 0;
                                Debug.Log($"Gameflow votetime: {voteMessage}Player {maxVotePlayer} was ejected, here is the last message!");
                            }
                            voteMessage = "";
                            Debug.Log($"Gameflow: votemessage {voteMessage}, message: {message}");
                            voted = false;
                            allVoted = false;
                            _gm.CallRpcRecorderControlToAll(maxVotePlayer);
                            //maxVotePlayer = 0;
                        }
                        break;
                    case SpeechSeq.NOTIFYTIME:
                        sectionMessage = $"Section: Ejection \nTimer: {(int)timerToAll} s";
                        _gm.CallRpcGameControlToAll((int)SpeechSeq.NOTIFYTIME, 0, timerToAll, sectionTime, message, sectionMessage);
                        _gm.CallRpcRecorderControlToAll(maxVotePlayer);
                        if (timer >= sectionTime)
                        {
                            timer = 0;
                            speechSeq = SpeechSeq.PLAYER1;
                            dayTurn = false;
                            localDead = false;
                            if (PhotonNetwork.LocalPlayer.ActorNumber == maxVotePlayer) PlayerDead();
                            maxVotePlayer = 0;
                            _gm.CallRpcSyncDayNightTimeToAll(nightTime); //sync time to night
                            _gm.CallRpcRecorderEnableToAll(playerList);
                            EndGameCheck();
                        }
                        break;
                }
            }
            timer += Time.deltaTime;
        }

        private void StartGame()
        {
            Debug.Log(PhotonNetwork.NickName);
            if (PhotonNetwork.LocalPlayer.ActorNumber == roleList[0] || PhotonNetwork.LocalPlayer.ActorNumber == roleList[1])
            {
                message = $"Hi {PhotonNetwork.LocalPlayer.NickName}, you are Player {PhotonNetwork.LocalPlayer.ActorNumber}, you role is Werewolf!\n Please kill all special roles or all villagers by voting at night or day to Win!";
            }
            else if (PhotonNetwork.LocalPlayer.ActorNumber == roleList[2])
            {
                message = $"Hi {PhotonNetwork.LocalPlayer.NickName}, you are Player {PhotonNetwork.LocalPlayer.ActorNumber}, you role is Seer!\n Please select a suspicious werewolf at night to confirm and help villager eject all werewolf at voting turn to Win!";
            }
            else if (PhotonNetwork.LocalPlayer.ActorNumber == roleList[3])
            {
                message = $"Hi {PhotonNetwork.LocalPlayer.NickName}, you are Player {PhotonNetwork.LocalPlayer.ActorNumber}, you role is Savior!\n Please select a suspicious victim at night to protect and help villager eject all werewolf at voting turn to Win!";
            }
            else
            {
                message = $"Hi {PhotonNetwork.LocalPlayer.NickName}, you are Player {PhotonNetwork.LocalPlayer.ActorNumber}, you role is Villagers!\n Please eject all werewolf at voting turn to Win!";
            }
            messageText.SetText($"{message}");
            Debug.Log($"Gameflow start message: {message}");
            Debug.Log($"Gameflow start message nick name: {PhotonNetwork.LocalPlayer.NickName}");
        }

        private void EndGameCheck()
        {
            if (!(playerList.Contains(roleList[0]) || playerList.Contains(roleList[1])))
            {
                endGame = true;
                message = $"All werewolfs dead, villagers win! ";
                Debug.Log("All werewolfs dead, villagers win! ");
            }
            else if (!(playerList.Contains(roleList[2]) || playerList.Contains(roleList[3])))
            {
                endGame = true;
                message = $"All special roles dead, werewolf win! ";
                Debug.Log("All special roles dead, werewolf win! ");
            }
            else if (!(playerList.Contains(roleList[4]) || playerList.Contains(roleList[5])))
            {
                endGame = true;
                message = $"All villagers dead, werewolf win! ";
                Debug.Log("All villagers dead, werewolf win! ");
            }
            _gm.CallRpcEndGame(endGame, message);
        }

        private void Reconnect()
        {
            if (!PhotonNetwork.ReconnectAndRejoin())
            {
                Debug.LogWarning("ReconnectAndRejoin failed, go back to lobby");
                SceneManager.LoadScene(Metadata.Scenes.Lobby);
            }
        }
        #endregion
    }
}
