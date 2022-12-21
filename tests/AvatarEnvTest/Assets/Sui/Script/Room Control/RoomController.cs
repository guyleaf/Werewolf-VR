using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RoomController : MonoBehaviour
{
    [SerializeField] private RoomDataSource dataSource;
    [SerializeField] private TMPro.TextMeshProUGUI waitingMessageText;

    // Update is called once per frame
    void Update()
    {
        dataSource.UpdateData();
        ShowRoom();
    }

    private void ShowRoom()
    {
        RoomState roomState = dataSource.RoomState;
        if(roomState == null)
        {
            waitingMessageText.text = "The room(ID: " + dataSource.roomId + ") is not exist";
        }
        else
        {
            waitingMessageText.text = "Room " + dataSource.roomId + "\nWaiting Other Player Join " 
                + roomState.numPlayer.ToString() + "/" + roomState.maxPlayer.ToString();
        }
    }
}
