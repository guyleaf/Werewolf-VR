using Photon.Pun;
using Photon.Realtime;

using System.Collections;
using System.Collections.Generic;

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

        PhotonView _pv;

        private LightManager dayTimer;

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
                Debug.LogError("Player :" + player);
            }
            Debug.Log("Players List:" + PhotonNetwork.PlayerList);
            Debug.Log("Master Client: " + PhotonNetwork.IsMasterClient);
        }
        #endregion

        public void CallRpcSendMessageToAll(bool _sync)
        {
            _pv.RPC("RpcSyncTimer", RpcTarget.All, _sync);
        }

        public void CallRpcSendMessageToOthers(bool _sync)
        {
            _pv.RPC("RpcSyncTimer", RpcTarget.Others, _sync);
        }

        [PunRPC]
        void RpcSyncTimer(bool sync, PhotonMessageInfo info)
        {
            dayTimer.TimeOfDay = 0;
            Debug.LogError("received: " + sync);
        }

        [PunRPC]
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

        /*        void UpdateMessage()
                {
                    messageText.text = string.Join("\n", messageList);
                }*/
    }
}
