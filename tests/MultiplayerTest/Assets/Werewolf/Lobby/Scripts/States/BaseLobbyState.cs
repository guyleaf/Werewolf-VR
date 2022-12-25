using System.Collections.Generic;
using Photon.Realtime;

namespace Werewolf.Lobby
{
    public abstract class BaseLobbyState
    {
        public abstract void EnsureState(LobbyManager manager);

        public abstract void LeaveState(LobbyManager manager);

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
        #endregion

        #region Avatar
        public virtual void OnAvatarFoundEvent(LobbyManager manager)
        {
        }

        public virtual void OnAvatarNotFoundEvent(LobbyManager manager)
        {
        }

        public virtual void OnAvatarUIEditButtonClickedEvent(LobbyManager manager)
        {
            AvatarEditorDeeplink.LaunchAvatarEditor();
        }

        public virtual void OnAvatarUIContinueButtonClickedEvent(LobbyManager manager)
        {
        }
        #endregion
    }
}