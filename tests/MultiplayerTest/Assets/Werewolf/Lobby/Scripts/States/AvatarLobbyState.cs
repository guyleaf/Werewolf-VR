namespace Werewolf.Lobby
{
    public class AvatarLobbyState : BaseLobbyState
    {
        private bool _isAvatarEditorOpened = false;

        public override void EnsureState(LobbyManager manager, UICollection uICollection)
        {
            uICollection.LoadingUI.SetActive(true);
            uICollection.AvatarUI.SetActive(false);
            uICollection.LobbyUI.SetActive(false);
        }

        public override void OnAvatarFoundEvent(LobbyManager manager, UICollection uICollection)
        {
            uICollection.ContinueButtonForAvatarUI.interactable = true;

            if (!this._isAvatarEditorOpened)
            {
                uICollection.TextForNewAvatar.SetActive(false);
                uICollection.TextForOldAvatar.SetActive(true);
                uICollection.AvatarUI.SetActive(true);
                this._isAvatarEditorOpened = true;
            }
        }

        public override void OnAvatarNotFoundEvent(LobbyManager manager, UICollection uICollection)
        {
            if (!this._isAvatarEditorOpened)
            {
                uICollection.TextForNewAvatar.SetActive(true);
                uICollection.TextForOldAvatar.SetActive(false);
                uICollection.ContinueButtonForAvatarUI.interactable = false;
                uICollection.AvatarUI.SetActive(true);
                this._isAvatarEditorOpened = true;
            }
        }

        public override void OnAvatarUIContinueButtonClickedEvent(LobbyManager manager, UICollection uICollection)
        {
            manager.SwitchState(manager.NetworkState);
        }
    }
}