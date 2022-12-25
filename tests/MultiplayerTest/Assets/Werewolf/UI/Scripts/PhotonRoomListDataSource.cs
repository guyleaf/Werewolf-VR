using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Linq;
using Photon.Realtime;
using Werewolf.Lobby;

namespace Werewolf.UI
{
    public class PhotonRoomListDataSource : IRoomListDataSource
    {
        private readonly List<RoomState> _roomStates;

        int IRoomListDataSource.NumOfRooms => _roomStates.Count;

        ReadOnlyCollection<RoomState> IRoomListDataSource.RoomStates => _roomStates.AsReadOnly();

        public PhotonRoomListDataSource(List<RoomInfo> roomList)
        {
            roomList.Sort((room1, room2) => room1.Name.CompareTo(room2.Name));
            _roomStates = roomList
                .AsParallel().AsOrdered()
                .Select(room => new RoomState(room.Name, room.PlayerCount, room.MaxPlayers))
                .ToList();
        }
    }
}