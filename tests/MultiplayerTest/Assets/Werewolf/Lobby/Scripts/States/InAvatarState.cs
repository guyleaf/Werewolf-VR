using UnityEngine;

namespace Werewolf.Lobby
{
    public class InAvatarState : BaseLobbyState
    {
        private bool _isAvatarEditorOpened = false;

        private bool IsEnteredLobbyBefore
        {
            get
            {
                return PlayerPrefs.GetInt(Metadata.PlayerPrefs.IsEnteredLobbyBefore, 0) == 1;
            }
            set
            {
                PlayerPrefs.SetInt(Metadata.PlayerPrefs.IsEnteredLobbyBefore, value ? 1 : 0);
            }
        }

        public override void EnsureState(LobbyManager manager)
        {
            Debug.Log("Enter InAvatarState");

            if (IsEnteredLobbyBefore)
            {
                manager.SwitchState(manager.InLobbyState);
                manager.StartCoroutine(manager.PlayerAvatarEntity.LoadAvatar());
                return;
            }

            var uICollection = manager.UICollection;
            uICollection.LoadingUI.SetActive(true);
            uICollection.AvatarUI.SetActive(false);
            uICollection.LobbyUI.SetActive(false);
            manager.StartCoroutine(manager.PlayerAvatarEntity.LoadAvatar());
        }

        public override void LeaveState(LobbyManager manager)
        {
            var uICollection = manager.UICollection;
            uICollection.AvatarUI.SetActive(false);
        }

        public override void OnAvatarFound(LobbyManager manager)
        {
            var uICollection = manager.UICollection;
            uICollection.ContinueButtonForAvatarUI.interactable = true;

            if (!this._isAvatarEditorOpened)
            {
                uICollection.TextForNewAvatar.SetActive(false);
                uICollection.TextForOldAvatar.SetActive(true);
                uICollection.AvatarUI.SetActive(true);
                this._isAvatarEditorOpened = true;
            }
        }

        public override void OnAvatarNotFound(LobbyManager manager)
        {
            if (!this._isAvatarEditorOpened)
            {
                var uICollection = manager.UICollection;
                uICollection.TextForNewAvatar.SetActive(true);
                uICollection.TextForOldAvatar.SetActive(false);
                uICollection.ContinueButtonForAvatarUI.interactable = false;
                uICollection.AvatarUI.SetActive(true);
                this._isAvatarEditorOpened = true;
            }
        }

        public override void OnAvatarUIContinueButtonClicked(LobbyManager manager)
        {
            IsEnteredLobbyBefore = true;
            manager.SwitchState(manager.InLobbyState);
        }
    }
}