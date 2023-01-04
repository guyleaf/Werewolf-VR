using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class LobbyDataSource : MonoBehaviour
{
    public abstract int NumOfRooms(); // return num of rooms 
    public abstract RoomState GetRoomStateByIndex(int roomIdx); // return state of rooms
    public abstract RoomState GetRoomStateByID(int roomId); // return num of rooms
    public abstract void UpdateData(); // it will be called when view need latest lobby data
}
