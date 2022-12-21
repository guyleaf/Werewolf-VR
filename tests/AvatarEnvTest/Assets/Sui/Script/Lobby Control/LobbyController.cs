using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class LobbyController : MonoBehaviour
{
    /*
     If DataSource is dynamic, the page view only be updated when Start and Enabel.
     DataSoure should maintain there order.
    */

    // Current State
    private int currentPage = 0;
    // Data Source
    [SerializeField] private LobbyDataSource dataSource;
    // Room Buttons
    [SerializeField] private TMPro.TextMeshProUGUI pageText;
    [SerializeField] private List<TMPro.TextMeshProUGUI> roomsText;

    // Font Setting
    const int fontSize = 50;
    const int fontSizeNA = 120;

    void Start()
    {
        currentPage = 0;
        dataSource.UpdateData();
        ShowPage();
    }

    void OnEnable()
    {
        currentPage = 0;
        dataSource.UpdateData();
        ShowPage();
    }

    private void ShowPage()
    {
        // update page count
        pageText.text = (currentPage + 1).ToString() + "/" + PageCount.ToString();
        // update page button
        for (int i = 0; i < roomsText.Count; ++i)
        {
            int roomIdx = currentPage * roomsText.Count + i;
            RoomState roomState = dataSource.GetRoomStateByIndex(roomIdx);
            if (roomState != null)
            {
                roomsText[i].fontSize = fontSize;
                roomsText[i].text = "ID: " + roomState.RoomID + "\n"
                                  + "Players: " + roomState.numPlayer + "/" + roomState.maxPlayer;
            }
            else
            {
                roomsText[i].fontSize = fontSizeNA;
                roomsText[i].text = "N/A";
            }
        }
    }

    public int PageCount
    {
        get{
            int pageCount = (dataSource.NumOfRooms() + roomsText.Count - 1) / roomsText.Count;
            return Mathf.Max(pageCount, 1); // at least 1 page
        }
    }

    public void NextPage()
    {
        currentPage = Mathf.Min(++currentPage, PageCount-1);
        ShowPage();
    }

    public void PreviousPage()
    {
        currentPage = Mathf.Max(--currentPage, 0);
        ShowPage();
    }
}