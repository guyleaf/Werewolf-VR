using Photon.Pun;
using Photon.Realtime;
using UnityEngine;

namespace Werewolf.Lobby
{
    public class InRoomState : BaseLobbyState
    {
        private void RecoverConnection(LobbyManager manager)
        {
            if (!PhotonNetwork.ReconnectAndRejoin())
            {
                Debug.LogWarning("ReconnectAndRejoin failed, trying Reconnect");

                PhotonNetwork.Reconnect();
                manager.SwitchState(manager.InLobbyState);
            }
        }

        public override void Update(LobbyManager manager)
        {
#if UNITY_EDITOR
            Debug.Log($"Is Connected: {PhotonNetwork.IsConnected}");
            Debug.Log($"In Room: {PhotonNetwork.InRoom}");
#endif
        }

        public override void OnApplicationPause(LobbyManager manager, bool isPaused)
        {
            if (!isPaused)
            {
                if (!PhotonNetwork.InRoom)
                {
                    RecoverConnection(manager);
                }
            }
        }

        public override void EnsureState(LobbyManager manager)
        {
            Debug.Log("Enter InRoomState");

            var uICollection = manager.UICollection;
            uICollection.LoadingUI.SetActive(false);
            uICollection.AvatarUI.SetActive(false);
            uICollection.LobbyUI.SetActive(false);
            uICollection.RoomUI.SetActive(true);
        }

        public override void LeaveState(LobbyManager manager)
        {
            var uICollection = manager.UICollection;
            uICollection.LoadingUI.SetActive(true);
            uICollection.RoomUI.SetActive(false);
        }

        public override void OnPlayerEnteredRoom(LobbyManager manager, Photon.Realtime.Player newPlayer)
        {
        }

        public override void OnPlayerLeftRoom(LobbyManager manager, Photon.Realtime.Player otherPlayer)
        {
        }

        public override void OnJoinRoomFailed(LobbyManager manager, short returnCode, string message)
        {
            Debug.LogWarning(message);
        }

        public override void OnDisconnected(LobbyManager manager, DisconnectCause cause)
        {
            Debug.LogWarning(cause);
            RecoverConnection(manager);
        }
    }
}