using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LobbyDataFakeSource : LobbyDataSource
{
    private int roomNum = 15;
    override public int NumOfRooms()
    {
        return roomNum;
    }
    override public RoomState StateOfRooms(int roomIdx)
    {
        if(roomIdx >= roomNum || roomIdx < 0)
        {
            return null;
        }
        return new RoomState(roomIdx, roomIdx%6 + 1);
    }
    public override void UpdateData()
    {
        ++roomNum;
        return;
    }
}
