using Photon.Pun;
using UnityEngine;

namespace Werewolf.Lobby
{
    public class InRoomState : BaseLobbyState
    {
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
        }

        public override void OnConnectedToMaster(LobbyManager manager)
        {
        }

        public override void OnJoinedLobby(LobbyManager manager)
        {
        }
    }
}