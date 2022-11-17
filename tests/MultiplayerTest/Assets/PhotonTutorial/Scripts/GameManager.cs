using Photon.Pun;

using UnityEngine;
using UnityEngine.SceneManagement;

namespace Leaf.PhotonTutorial
{
    public class GameManager : MonoBehaviourPunCallbacks
    {
        #region public functions
        public void LeaveRoom()
        {
            PhotonNetwork.LeaveRoom();
        }
        #endregion

        #region photon functions
        public override void OnLeftRoom()
        {
            SceneManager.LoadScene(0);
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
        #endregion
    }
}
