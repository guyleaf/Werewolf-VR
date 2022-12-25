using System.Collections;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using UnityEngine;
using Werewolf.Lobby;

namespace Werewolf.UI
{
    public interface IRoomListDataSource
    {
        int NumOfRooms { get; } // return num of rooms

        ReadOnlyCollection<RoomState> RoomStates { get; } // return room state
    }
}
