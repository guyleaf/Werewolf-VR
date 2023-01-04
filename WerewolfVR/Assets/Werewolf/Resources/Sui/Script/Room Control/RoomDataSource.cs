using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class RoomDataSource : MonoBehaviour
{
    public int roomId;
    public abstract void UpdateData(); // it will be called when view need latest room data
    public abstract RoomState RoomState {get;} // if room doesn't exist, it should return null
}
