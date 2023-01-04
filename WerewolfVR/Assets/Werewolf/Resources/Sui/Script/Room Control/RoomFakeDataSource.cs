using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RoomFakeDataSource : RoomDataSource
{
    private RoomState _roomState;

    void Start()
    {
        _roomState = new RoomState(roomId, 5);
    }
    override public void UpdateData() 
    {
        return;
    } 
    override public RoomState RoomState {
        get { 
            if (roomId >= 0) { return _roomState; }
            else { return null; }
        }
    }
}
