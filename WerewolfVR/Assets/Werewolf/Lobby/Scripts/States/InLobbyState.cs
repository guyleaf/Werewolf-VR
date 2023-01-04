using System.Collections;
using System.Collections.Concurrent;
using System.Collections.Generic;
using System.Linq;
using Photon.Pun;
using Photon.Realtime;
using UnityEngine;

namespace Werewolf.Lobby
{
    public sealed class InLobbyState : BaseLobbyState
    {
        private readonly TypedLobby lobby = new("Werewolf-VR", LobbyType.Default);
        private readonly RandomNameGeneratorLibrary.PlaceNameGenerator generator = new();

        private readonly byte maxPlayers;

        private IEnumerator Connect()
        {
            while (!PhotonNetwork.ConnectUsingSettings())
            {
                Debug.LogWarning("Connect failed, trying...");
                yield return new WaitForSeconds(3);
            }

            if (!MetaPlatform.IsUserLoggedIn)
            {
                yield return MetaPlatform.Instance.LogIn();
            }

            PhotonNetwork.NickName = MetaPlatform.UserName;
            PhotonNetwork.AutomaticallySyncScene = true;
        }

        private void RecoverConnection(LobbyManager manager)
        {
            if (!PhotonNetwork.Reconnect())
            {
                Debug.LogWarning("Reconnect failed, trying ConnectUsingSettings");
                manager.StartCoroutine(Connect());
            }
        }

        private void SwitchLobbyUI(LobbyManager manager, bool on)
        {
            var uICollection = manager.UICollection;
            uICollection.LoadingUI.SetActive(!on);
            uICollection.LobbyUI.SetActive(on);
        }

        
        public InLobbyState(byte maxPlayers)
        {
            this.maxPlayers = maxPlayers;
        }

        public override void Update(LobbyManager manager)
        {
#if UNITY_EDITOR
            Debug.Log($"Is Connected: {PhotonNetwork.IsConnected}");
            Debug.Log($"In Lobby: {PhotonNetwork.InLobby}");
#endif
        }

        public override void OnApplicationPause(LobbyManager manager, bool isPaused)
        {
            if (!isPaused)
            {
                if (!PhotonNetwork.IsConnected)
                {
                    RecoverConnection(manager);
                }
                else if (!PhotonNetwork.InLobby)
                {
                    PhotonNetwork.JoinLobby(lobby);
                }
            }
        }

        public override void EnsureState(LobbyManager manager)
        {
            Debug.Log("Enter InLobbyState");

            if (PhotonNetwork.InRoom)
            {
                manager.SwitchState(manager.InRoomState);
                return;
            }

            var inRoom = PhotonNetwork.InLobby;
            if (!PhotonNetwork.IsConnected)
            {
                manager.StartCoroutine(Connect());
            }
            else if (!inRoom)
            {
                PhotonNetwork.JoinLobby(lobby);
            }

            var uICollection = manager.UICollection;
            uICollection.LoadingUI.SetActive(!inRoom);
            uICollection.AvatarUI.SetActive(false);
            uICollection.LobbyUI.SetActive(inRoom);
        }

        public override void LeaveState(LobbyManager manager)
        {
            SwitchLobbyUI(manager, false);
        }

        public override void OnConnectedToMaster(LobbyManager manager)
        {
            PhotonNetwork.JoinLobby(lobby);
        }

        public override void OnJoinedLobby(LobbyManager manager)
        {
            Debug.Log("OnJoinedLobby");
            SwitchLobbyUI(manager, true);
        }

        public override void OnRoomListUpdate(LobbyManager manager, List<RoomInfo> roomList)
        {
            roomList.Sort((room1, room2) => room1.Name.CompareTo(room2.Name));
            manager.RoomListController.UpdateRoomList(roomList);
        }

        public override void OnJoinRoom(LobbyManager manager, RoomInfo roomInfo)
        {
            SwitchLobbyUI(manager, false);
            PhotonNetwork.JoinRoom(roomInfo.Name);
        }

        public override void OnJoinedRoom(LobbyManager manager)
        {
            manager.SwitchState(manager.InRoomState);
        }

        public override void OnJoinRoomFailed(LobbyManager manager, short returnCode, string message)
        {
            Debug.LogWarning(message);
            SwitchLobbyUI(manager, true);
        }

        public override void OnCreateRoom(LobbyManager manager)
        {
            SwitchLobbyUI(manager, false);

            var roomName = generator.GenerateRandomPlaceName();
            var roomOptions = new RoomOptions
            {
                MaxPlayers = this.maxPlayers,
                PlayerTtl = 10000,
                EmptyRoomTtl = 100,
                PublishUserId = true
            };
            PhotonNetwork.CreateRoom(roomName, roomOptions, lobby);
        }

        public override void OnCreatedRoom(LobbyManager manager)
        {
            manager.SwitchState(manager.InRoomState);
        }

        public override void OnCreateRoomFailed(LobbyManager manager, short returnCode, string message)
        {
            Debug.LogWarning(message);
            SwitchLobbyUI(manager, true);
        }

        public override void OnDisconnected(LobbyManager manager, DisconnectCause cause)
        {
            Debug.LogWarning(cause);
            SwitchLobbyUI(manager, false);
            RecoverConnection(manager);
        }
    }
}