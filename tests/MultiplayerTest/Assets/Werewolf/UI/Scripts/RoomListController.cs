using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Werewolf.Lobby;

namespace Werewolf.UI
{
    public class RoomListController : MonoBehaviour
    {
        /*
            If DataSource is dynamic, the page view only be updated when Start and Enabel.
            DataSoure should maintain there order.
        */

        // Current State
        private int currentPage = 0;

        // Data Source
        private IRoomListDataSource dataSource;

        [SerializeField] private TMPro.TextMeshProUGUI pageText;

        // Room Buttons
        [SerializeField] private List<TMPro.TextMeshProUGUI> roomsText;

        [SerializeField] private float fontSize = 30f;

        void OnEnable()
        {
            currentPage = 0;
        }

        void Update()
        {
            UpdatePage();
        }

        private void UpdatePage()
        {
            var roomStates = dataSource.RoomStates;

            // update page count
            pageText.text = (currentPage + 1).ToString() + "/" + PageCount.ToString();
            // update page button
            for (int i = 0; i < roomsText.Count; ++i)
            {
                int roomIdx = currentPage * roomsText.Count + i;
                RoomState roomState = roomStates[roomIdx];
                roomsText[i].fontSize = fontSize;
                roomsText[i].text = $"ID: {roomState.RoomID}\nPlayers: {roomState.NumPlayer} / {roomState.MaxPlayer}";
            }
        }

        public int PageCount
        {
            get
            {
                int pageCount = (dataSource.NumOfRooms + roomsText.Count - 1) / roomsText.Count;
                return Mathf.Max(pageCount, 1); // at least 1 page
            }
        }

        public void InjectDataSource(IRoomListDataSource source)
        {
            dataSource = source;
        }

        public void NextPage()
        {
            currentPage = Mathf.Min(++currentPage, PageCount - 1);
        }

        public void PreviousPage()
        {
            currentPage = Mathf.Max(--currentPage, 0);
        }
    }
}