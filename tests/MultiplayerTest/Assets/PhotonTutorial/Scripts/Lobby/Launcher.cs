using Photon.Pun;
using Photon.Realtime;

using UnityEngine;

namespace Leaf.PhotonTutorial
{
    public class Launcher : MonoBehaviourPunCallbacks
    {
        #region public functions and properties

        // UI trigger
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
                this.isConnecting = PhotonNetwork.ConnectUsingSettings();
                PhotonNetwork.GameVersion = this.gameVersion;
            }
        }
        #endregion

        #region photon functions

        // we don't want to do anything if we are not attempting to join a room.
        // this case where isConnecting is false is typically when you lost or quit the game, when this level is loaded, OnConnectedToMaster will be called, in that case
        // we don't want to do anything.
        public override void OnConnectedToMaster()
        {
            Debug.Log("PUN Basics Tutorial/Launcher: OnConnectedToMaster() was called by PUN");

            if (this.isConnecting)
            {
                this.JoinRoom();
                this.isConnecting = false;
            }
        }

        public override void OnJoinedLobby()
        {
            Debug.Log("PUN Basics Tutorial/Launcher: OnJoinedLobby() was called by PUN");
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

            if (PhotonNetwork.CurrentRoom.PlayerCount == 1)
            {
                Debug.Log("We load the 'Room for 1' ");

                // #Critical
                // Load the Room Level.
                PhotonNetwork.LoadLevel("Room for 1");
            }
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

        /// <summary>
        /// Keep track of the current process. Since connection is asynchronous and is based on several callbacks from Photon,
        /// we need to keep track of this to properly adjust the behavior when we receive call back by Photon.
        /// Typically this is used for the OnConnectedToMaster() callback.
        /// </summary>
        private bool isConnecting = false;

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