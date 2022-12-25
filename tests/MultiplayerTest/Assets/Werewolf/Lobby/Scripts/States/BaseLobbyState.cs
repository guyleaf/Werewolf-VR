namespace Werewolf.Lobby
{
    public abstract class BaseLobbyState
    {
        public abstract void EnsureState(LobbyManager manager, UICollection uICollection);

        #region Network
        public virtual void OnConnectedToMaster(LobbyManager manager, UICollection uICollection)
        {
            
        }
        #endregion

        #region Avatar
        public virtual void OnAvatarFoundEvent(LobbyManager manager, UICollection uICollection)
        {
            return;
        }

        public virtual void OnAvatarNotFoundEvent(LobbyManager manager, UICollection uICollection)
        {
            return;
        }

        public virtual void OnAvatarUIEditButtonClickedEvent(LobbyManager manager, UICollection uICollection)
        {
            AvatarEditorDeeplink.LaunchAvatarEditor();
        }

        public virtual void OnAvatarUIContinueButtonClickedEvent(LobbyManager manager, UICollection uICollection)
        {
            return;
        }
        #endregion
    }
}