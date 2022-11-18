using Photon.Pun;
using Photon.Realtime;

using UnityEngine;
using UnityEngine.Assertions;
using UnityEngine.SceneManagement;

namespace Leaf.PhotonTutorial
{
    public class GameManager : MonoBehaviourPunCallbacks
    {
        #region public functions & variables

        public static GameManager Instance { get; private set; }

        public void LeaveRoom()
        {
            PhotonNetwork.LeaveRoom();
        }

        #endregion

        #region MonoBehavior Callbacks

        private void Start()
        {
            Assert.IsNotNull(this.playerPrefab, "<Color=Red><a>Missing</a></Color> playerPrefab Reference. Please set it up in GameObject 'Game Manager'");
            Instance = this;
            
            if (Player.PlayerManager.LocalPlayerInstance == null)
            {
                Debug.LogFormat("We are Instantiating LocalPlayer from {0}", SceneManagerHelper.ActiveSceneName);
                // we're in a room. spawn a character for the local player. it gets synced by using PhotonNetwork.Instantiate
                PhotonNetwork.Instantiate(this.playerPrefab.name, new Vector3(0f, 5f, 0f), Quaternion.identity, 0);
            }
            else
            {
                Debug.LogFormat("Ignoring scene load for {0}", SceneManagerHelper.ActiveSceneName);
            }
        }

        private void Awake()
        {
        }

        #endregion

        #region photon functions
        public override void OnLeftRoom()
        {
            Debug.Log("OnLeftRoom()");
            SceneManager.LoadScene(0);
        }

        public override void OnJoinedRoom()
        {
            Debug.Log("OnJoinedRoom()");
        }

        public override void OnPlayerEnteredRoom(Photon.Realtime.Player newPlayer)
        {
            Debug.LogFormat("OnPlayerEnteredRoom() {0}", newPlayer.NickName); // not seen if you're the player connecting

            if (PhotonNetwork.IsMasterClient)
            {
                Debug.LogFormat("OnPlayerEnteredRoom IsMasterClient {0}", PhotonNetwork.IsMasterClient); // called before OnPlayerLeftRoom


                this.LoadArena();
            }
        }

        public override void OnPlayerLeftRoom(Photon.Realtime.Player otherPlayer)
        {
            Debug.LogFormat("OnPlayerLeftRoom() {0}", otherPlayer.NickName); // seen when other disconnects

            if (PhotonNetwork.IsMasterClient)
            {
                Debug.LogFormat("OnPlayerLeftRoom IsMasterClient {0}", PhotonNetwork.IsMasterClient); // called before OnPlayerLeftRoom


                this.LoadArena();
            }
        }
        #endregion

        #region private functions & variables

        private void LoadArena()
        {
            if (!PhotonNetwork.IsMasterClient)
            {
                Debug.LogError("PhotonNetwork : Trying to Load a level but we are not the master Client");
                return;
            }

            Debug.LogFormat("PhotonNetwork : Loading Level : {0}", PhotonNetwork.CurrentRoom.PlayerCount);
            PhotonNetwork.LoadLevel("Room for " + PhotonNetwork.CurrentRoom.PlayerCount);
        }

        [Tooltip("The prefab to use for representing the player")]
        [SerializeField]
        private GameObject playerPrefab;

        #endregion
    }
}
