using System.Collections.Concurrent;
using System.Collections.Generic;
using System.Linq;
using Photon.Pun;
using Photon.Realtime;
using UnityEngine;
using Werewolf.UI;

namespace Werewolf.Lobby
{
    public class InLobbyState : BaseLobbyState
    {
        private readonly ConcurrentDictionary<string, RoomInfo> _cachedRoomList = new();

        public override void EnsureState(LobbyManager manager)
        {
            Debug.Log("Enter InLobbyState");

            if (PhotonNetwork.InRoom)
            {
                manager.SwitchState(manager.InRoomState);
                return;
            }

            var uICollection = manager.UICollection;
            uICollection.LoadingUI.SetActive(true);
            uICollection.AvatarUI.SetActive(false);
            uICollection.LobbyUI.SetActive(false);

            if (!PhotonNetwork.IsConnected)
            {
                PhotonNetwork.ConnectUsingSettings();
            }
        }

        public override void LeaveState(LobbyManager manager)
        {
            var uICollection = manager.UICollection;
            uICollection.LoadingUI.SetActive(false);
            uICollection.AvatarUI.SetActive(false);
            uICollection.LobbyUI.SetActive(false);
        }

        public override void OnConnectedToMaster(LobbyManager manager)
        {
            PhotonNetwork.JoinLobby();
        }

        public override void OnJoinedLobby(LobbyManager manager)
        {
            _cachedRoomList.Clear();

            Debug.Log("OnJoinedLobby");
            var uICollection = manager.UICollection;
            uICollection.LoadingUI.SetActive(false);
            uICollection.LobbyUI.SetActive(true);
        }

        public override void OnRoomListUpdate(LobbyManager manager, List<RoomInfo> roomList)
        {
            roomList
            .AsParallel()
            .ForAll(room =>
            {
                if (room.RemovedFromList)
                {
                    if (!_cachedRoomList.TryRemove(room.Name, out var _))
                    {
                        Debug.LogWarning("Cannot remove room from room list.");
                    }
                }
                else
                {
                    _cachedRoomList.AddOrUpdate(room.Name, room, (_, _) => room);
                }
            });
            manager.RoomListController.InjectDataSource(new PhotonRoomListDataSource(_cachedRoomList.Values.ToList()));
        }
    }
}