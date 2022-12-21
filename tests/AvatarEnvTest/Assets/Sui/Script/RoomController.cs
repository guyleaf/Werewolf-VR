using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RoomController : MonoBehaviour
{
    public int roomId = -1;
    [SerializeField] private LobbyDataSource dataSource;
    [SerializeField] private TMPro.TextMeshProUGUI waitingMessageText;

    // Update is called once per frame
    void Update()
    {
        dataSource.UpdateData();
        ShowRoom();
    }

    private void ShowRoom()
    {
        RoomState roomState = dataSource.GetRoomStateByID(roomId);
        if(roomState == null)
        {
            waitingMessageText.text = "The room(ID: " + roomId + ") is not exist";
        }
        else
        {
            waitingMessageText.text = "Waiting Other Player Join " 
                + roomState.numPlayer.ToString() + "/" + roomState.maxPlayer.ToString();
        }
    }
}
