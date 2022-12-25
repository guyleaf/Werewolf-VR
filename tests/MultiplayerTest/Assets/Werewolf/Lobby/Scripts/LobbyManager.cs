using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using Photon.Pun;
using UnityEngine.Assertions;
using System.Linq;
using UnityEngine.UI;
using Photon.Realtime;

namespace Werewolf.Lobby
{
    [System.Serializable]
    public struct UICollection
    {
        public GameObject LoadingUI;

        public GameObject AvatarUI;

        public GameObject TextForNewAvatar;

        public GameObject TextForOldAvatar;

        public Button ContinueButtonForAvatarUI;

        public GameObject LobbyUI;
    }

    public sealed class LobbyManager : MonoBehaviourPunCallbacks
    {
        [SerializeField]
        private UICollection _uICollection;

        private BaseLobbyState _state;

        public AvatarLobbyState AvatarState => new();

        public NetworkLobbyState NetworkState => new();

        #region Unity Callbacks

        void Awake()
        {
            var isAllValid = _uICollection
                .GetType().GetProperties()
                .AsParallel()
                .All(ui => ui != null);
            Assert.IsTrue(isAllValid);
        }

        // Start is called before the first frame update
        void Start()
        {
            _state = AvatarState;
            _state.EnsureState(this, _uICollection);
        }

        #endregion

        #region Photon Callbacks
        public override void OnConnectedToMaster()
        {
            _state.OnConnectedToMaster(this, _uICollection);
        }

        public override void OnJoinedLobby()
        {
            base.OnJoinedLobby();
        }

        public override void OnCreatedRoom()
        {
            base.OnCreatedRoom();
        }

        public override void OnJoinedRoom()
        {
            base.OnJoinedRoom();
        }

        public override void OnLeftRoom()
        {
            base.OnLeftRoom();
        }

        public override void OnDisconnected(DisconnectCause cause)
        {
            base.OnDisconnected(cause);
        }

        public override void OnCreateRoomFailed(short returnCode, string message)
        {
            base.OnCreateRoomFailed(returnCode, message);
        }

        public override void OnJoinRoomFailed(short returnCode, string message)
        {
            base.OnJoinRoomFailed(returnCode, message);
        }
        #endregion

        #region Public Methods
        public void OnAvatarFoundEvent()
        {
            _state.OnAvatarFoundEvent(this, _uICollection);
        }

        public void OnAvatarNotFoundEvent()
        {
            _state.OnAvatarNotFoundEvent(this, _uICollection);
        }

        public void OnAvatarUIEditButtonClickedEvent()
        {
            _state.OnAvatarUIEditButtonClickedEvent(this, _uICollection);
        }

        public void OnAvatarUIContinueButtonClickedEvent()
        {
            _state.OnAvatarUIContinueButtonClickedEvent(this, _uICollection);
        }

        public void SwitchState(BaseLobbyState state)
        {
            _state = state;
            _state.EnsureState(this, _uICollection);
        }

        public void RaiseError(string message)
        {
            // TODO: Add a dialog box for showing error message
        }
        #endregion

        #region Private Methods
        #endregion
    }
}
