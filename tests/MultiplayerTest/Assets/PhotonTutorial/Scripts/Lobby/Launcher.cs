using Photon.Pun;
using Photon.Realtime;

using UnityEngine;

namespace Leaf.PhotonTutorial
{
    public class Launcher : MonoBehaviourPunCallbacks
    {
        #region public functions and properties
        public void Connect()
        {
            progressLabel.SetActive(true);
            controlPanel.SetActive(false);

            if (PhotonNetwork.IsConnected)
            {
                this.JoinRoom();
            }
            else
            {
                Debug.Log("Connect to the master server...");
                PhotonNetwork.ConnectUsingSettings();
                PhotonNetwork.GameVersion = this.gameVersion;
            }
        }
        #endregion

        #region photon functions
        public override void OnConnectedToMaster()
        {
            Debug.Log("PUN Basics Tutorial/Launcher: OnConnectedToMaster() was called by PUN");
            JoinRoom();
        }

        public override void OnDisconnected(DisconnectCause cause)
        {
            Debug.LogWarningFormat("PUN Basics Tutorial/Launcher: OnDisconnected() was called by PUN with reason {0}", cause);
            progressLabel.SetActive(false);
            controlPanel.SetActive(true);
        }

        public override void OnJoinRandomFailed(short returnCode, string message)
        {
            Debug.Log("PUN Basics Tutorial/Launcher:OnJoinRandomFailed() was called by PUN. No random room available, so we create one.\nCalling: PhotonNetwork.CreateRoom");

            PhotonNetwork.CreateRoom(null, new RoomOptions
            {
                MaxPlayers = this.maxPlayersPerRoom
            });
        }

        public override void OnJoinedRoom()
        {
            Debug.Log("PUN Basics Tutorial/Launcher: OnJoinedRoom() called by PUN. Now this client is in a room.");
        }

        #endregion

        #region unity functions
        private void Start()
        {
            progressLabel.SetActive(false);
            controlPanel.SetActive(true);
        }

        private void Awake()
        {
            PhotonNetwork.AutomaticallySyncScene = true;
        }
        #endregion

        #region private functions and fields
        private void JoinRoom()
        {
            Debug.Log("Join the room...");
            PhotonNetwork.JoinRandomRoom();
        }

        [SerializeField]
        private string gameVersion = "1";

        [SerializeField]
        private byte maxPlayersPerRoom = 4;

        [SerializeField]
        private GameObject controlPanel;

        [SerializeField]
        private GameObject progressLabel;
        #endregion
    }
}