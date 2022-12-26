using System.Collections.Generic;
using Photon.Realtime;

namespace Werewolf.Lobby
{
    public abstract class BaseLobbyState
    {
        public abstract void EnsureState(LobbyManager manager);

        public abstract void LeaveState(LobbyManager manager);

        public virtual void Update(LobbyManager manager)
        {
        }

        public virtual void OnApplicationPause(LobbyManager manager, bool isPaused)
        {
        }

        #region Network
        public virtual void OnConnectedToMaster(LobbyManager manager)
        {
        }

        public virtual void OnJoinedLobby(LobbyManager manager)
        {
        }

        public virtual void OnRoomListUpdate(LobbyManager manager, List<RoomInfo> roomList)
        {
        }

        public virtual void OnCreatedRoom(LobbyManager manager)
        {
        }

        public virtual void OnJoinedRoom(LobbyManager manager)
        {
        }

        public virtual void OnLeftRoom(LobbyManager manager)
        {
        }

        public virtual void OnDisconnected(LobbyManager manager, DisconnectCause cause)
        {
        }

        public virtual void OnCreateRoomFailed(LobbyManager manager, short returnCode, string message)
        {
        }

        public virtual void OnJoinRoomFailed(LobbyManager manager, short returnCode, string message)
        {
        }

        public virtual void OnJoinRoom(LobbyManager manager, RoomInfo roomInfo)
        {
        }

        public virtual void OnCreateRoom(LobbyManager manager)
        {
        }

        public virtual void OnPlayerEnteredRoom(LobbyManager manager, Photon.Realtime.Player newPlayer)
        {
        }

        public virtual void OnPlayerLeftRoom(LobbyManager manager, Photon.Realtime.Player otherPlayer)
        {
        }
        #endregion

        #region Avatar
        public virtual void OnAvatarFound(LobbyManager manager)
        {
        }

        public virtual void OnAvatarNotFound(LobbyManager manager)
        {
        }

        public virtual void OnEditAvatar(LobbyManager manager)
        {
            AvatarEditorDeeplink.LaunchAvatarEditor();
        }

        public virtual void OnAvatarUIContinueButtonClicked(LobbyManager manager)
        {
        }
        #endregion
    }
}