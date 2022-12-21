using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class LobbyDataSource : MonoBehaviour
{
    public abstract int NumOfRooms(); // return num of rooms 
    public abstract RoomState StateOfRooms(int roomIdx); // return num of rooms 
    public abstract void UpdateData(); // it will be called when view need latest data
}

public class RoomState
{
    private int _roomId; // room id 
    private const int _maxPlayer = 6; // const
    private int _numPlayer;
    public RoomState(int roomId, int numPlayer)
    {
        _roomId = roomId;
        _numPlayer = numPlayer;
    }

    public int RoomID // only get
    {
        get { return _roomId; }
    }

    public int numPlayer // only get
    {
        get { return _numPlayer; }
    }

    public int maxPlayer // only get
    {
        get { return _maxPlayer; }
    }
}
