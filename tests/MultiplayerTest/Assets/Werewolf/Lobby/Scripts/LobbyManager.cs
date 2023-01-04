using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using Photon.Pun;
using UnityEngine.Assertions;
using System.Linq;
using UnityEngine.UI;
using Photon.Realtime;
using Werewolf.UI;
using Werewolf.Player;
using System;

namespace Werewolf.Lobby
{
    [Serializable]
    public struct UICollection
    {
        public GameObject LoadingUI;

        public GameObject AvatarUI;

        public GameObject TextForNewAvatar;

        public GameObject TextForOldAvatar;

        public Button ContinueButtonForAvatarUI;

        public GameObject LobbyUI;

        public GameObject RoomUI;
    }

    public sealed class LobbyManager : MonoBehaviourPunCallbacks
    {
        [SerializeField]
        private UICollection _uICollection;

        [SerializeField]
        private RoomListController _roomListController;

        [SerializeField]
        private PlayerAvatarEntity _playerAvatarEntity;

        [SerializeField]
        private byte _maxPlayers = 6;

        [Header("Development Only")]
        [SerializeField]
        private bool _jumpToLobby = false;

        private BaseLobbyState _state;

        // FIXME: Bad smell, this breaks ecapsulation
        public UICollection UICollection => _uICollection;

        public RoomListController RoomListController => _roomListController;

        public PlayerAvatarEntity PlayerAvatarEntity => _playerAvatarEntity;

        public InAvatarState InAvatarState => new();

        public InLobbyState InLobbyState => new(_maxPlayers);

        public InRoomState InRoomState => new();

        #region Unity Callbacks
        void Awake()
        {
            var isAllValid = UICollection
                .GetType().GetProperties()
                .AsParallel()
                .All(ui => ui != null);
            Assert.IsTrue(isAllValid);
            Assert.IsNotNull(_roomListController);

            _state = InAvatarState;

#if UNITY_EDITOR
            if (_jumpToLobby)
            {
                _state = InLobbyState;
            }

            PlayerPrefs.DeleteAll();
#endif
        }

        // Start is called before the first frame update
        void Start()
        {
            if (_jumpToLobby)
            {
                StartCoroutine(PlayerAvatarEntity.LoadAvatar());
            }

            _state.EnsureState(this);
        }

        void Update()
        {
            _state.Update(this);
        }

        void OnApplicationPause(bool isPaused)
        {
            _state.OnApplicationPause(this, isPaused);
        }

        void OnApplicationQuit()
        {
            PlayerPrefs.DeleteAll();
        }
        #endregion

        #region Photon Callbacks
        public override void OnConnectedToMaster()
        {
            _state.OnConnectedToMaster(this);
        }

        public override void OnJoinedLobby()
        {
            _state.OnJoinedLobby(this);
        }

        public override void OnRoomListUpdate(List<RoomInfo> roomList)
        {
            _state.OnRoomListUpdate(this, roomList);
        }

        public override void OnCreatedRoom()
        {
            _state.OnCreatedRoom(this);
        }

        public override void OnJoinedRoom()
        {
            _state.OnJoinedRoom(this);
        }

        public override void OnLeftRoom()
        {
            _state.OnLeftRoom(this);
        }

        public override void OnDisconnected(DisconnectCause cause)
        {
            _state.OnDisconnected(this, cause);
        }

        public override void OnCreateRoomFailed(short returnCode, string message)
        {
            _state.OnCreateRoomFailed(this, returnCode, message);
        }

        public override void OnJoinRoomFailed(short returnCode, string message)
        {
            _state.OnJoinRoomFailed(this, returnCode, message);
        }

        public override void OnPlayerEnteredRoom(Photon.Realtime.Player newPlayer)
        {
            _state.OnPlayerEnteredRoom(this, newPlayer);
        }

        public override void OnPlayerLeftRoom(Photon.Realtime.Player otherPlayer)
        {
            _state.OnPlayerLeftRoom(this, otherPlayer);
        }
        #endregion

        #region Public Methods
        public void OnAvatarFound()
        {
            _state.OnAvatarFound(this);
        }

        public void OnAvatarNotFound()
        {
            _state.OnAvatarNotFound(this);
        }

        public void OnEditAvatar()
        {
            _state.OnEditAvatar(this);
        }

        public void OnAvatarUIContinueButtonClicked()
        {
            _state.OnAvatarUIContinueButtonClicked(this);
        }

        public void OnJoinRoom(RoomInfo roomInfo)
        {
            _state.OnJoinRoom(this, roomInfo);
        }

        public void OnCreateRoom()
        {
            _state.OnCreateRoom(this);
        }

        public void OnLeaveRoom()
        {
            _state.OnLeaveRoom(this);
        }

        public void OnEnterGame()
        {
            _state.OnEnterGame(this);
        }

        public void SwitchState(BaseLobbyState state)
        {
            _state.LeaveState(this);
            _state = state;
            _state.EnsureState(this);
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
