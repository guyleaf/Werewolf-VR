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
                MaxPlayers = 6
            };
            PhotonNetwork.JoinOrCreateRoom("room", roomOptions, TypedLobby.Default);
        }

        public override void OnJoinedRoom()
        {
            string roomName = PhotonNetwork.CurrentRoom.Name;
            Debug.Log("Joined room with name " + roomName);
            Debug.Log("Number of Player:" + PhotonNetwork.CurrentRoom.Players.Count);
            Debug.Log("Master Client: " + PhotonNetwork.IsMasterClient);
        }
        #endregion

        public void CallRpcSendMessageToAll(float timer)
        {
            _pv.RPC("RpcSendMessage", RpcTarget.All, timer);
        }

        [PunRPC]
        void RpcSendMessage(float timer, PhotonMessageInfo info)
        {
            Debug.LogError("received: " + timer.ToString("0.00"));
            //messageList.Add(timer.ToString("0.00"));
/*            if(messageList.Count >= 10)
            {
                messageList.RemoveAt(0);
            }
            messageList.Add(message);
            UpdateMessage();*/
        }

/*        void UpdateMessage()
        {
            messageText.text = string.Join("\n", messageList);
        }*/
    }
}
