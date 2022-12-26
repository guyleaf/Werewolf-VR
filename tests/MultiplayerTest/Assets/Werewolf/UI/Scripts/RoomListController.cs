using System;
using System.Collections;
using System.Collections.Generic;
using System.Collections.Specialized;
using Photon.Realtime;
using UnityEngine;
using UnityEngine.Assertions;
using UnityEngine.Events;
using Werewolf.Lobby;

namespace Werewolf.UI
{
    public class RoomListController : MonoBehaviour
    {
        /*
            If DataSource is dynamic, the page view only be updated when Start and Enabel.
            DataSoure should maintain there order.
        */

        [Serializable]
        public class OnJoinRoomEvent : UnityEvent<RoomInfo> { }

        public OnJoinRoomEvent OnJoinRoom;

        public int RoomCount
        {
            get
            {
                return roomListCells.Count;
            }
        }

        // Current State
        private int currentPage = -1;

        // Data Source
        private OrderedDictionary roomListCells = new();

        private List<GameObject> pages = new();

        [SerializeField]
        private TMPro.TextMeshProUGUI pageText;

        [SerializeField]
        private int pageSize = 15;

        [SerializeField]
        private RoomListCell cellPrototype;

        [SerializeField]
        private GameObject pagePrototype;

        [SerializeField]
        private GameObject transitionUI;

        [SerializeField]
        private GameObject emptyUI;

        [SerializeField]
        private GameObject canvas;

        private int PageCount
        {
            get
            {
                // int pageCount = (roomListCells.Count + pageSize - 1) / pageSize;
                return pages.Count; // at least 1 page
            }
        }

        void Awake()
        {
            Assert.IsNotNull(cellPrototype);
            Assert.IsNotNull(pagePrototype);
            Assert.IsNotNull(transitionUI);
            Assert.IsNotNull(emptyUI);
        }

        void OnEnable()
        {
            currentPage = -1;
            cellPrototype.gameObject.SetActive(false);
            pagePrototype.SetActive(false);
            transitionUI.SetActive(true);
            pageText.text = "0/0";
            ResetRoomList();
        }

        void Update()
        {
            // update page count
            pageText.text = $"{currentPage + 1}/{PageCount}";

            if (PageCount == 0)
            {
                emptyUI.SetActive(true);
                transitionUI.SetActive(false);
                return;
            }
            UpdatePage();
        }

        private void ResetRoomList()
        {
            foreach (var page in pages)
            {
                Destroy(page);
            }

            pages = new();
            roomListCells = new();
        }

        private void UpdatePage()
        {
            emptyUI.SetActive(false);
            transitionUI.SetActive(false);

            var prevPage = currentPage - 1;
            if (prevPage >= 0)
            {
                pages[prevPage].SetActive(false);
            }

            pages[currentPage].SetActive(true);

            var nextPage = currentPage + 1;
            if (nextPage < PageCount)
            {
                pages[nextPage].SetActive(false);
            }
        }

        public void OnRoomCellJoinButtonClick(RoomInfo roomInfo)
        {
            OnJoinRoom.Invoke(roomInfo);
        }

        public void UpdateRoomList(List<RoomInfo> roomList)
        {
            var numOfRemoved = 0;

            for (int i = 0; i < roomList.Count; i++)
            {
                var pageIndex = (i - numOfRemoved) / pageSize;
                if (pageIndex >= PageCount)
                {
                    var newPage = Instantiate(pagePrototype, transform, false);
                    newPage.SetActive(false);
                    newPage.name = $"Room Page {pageIndex}";
                    newPage.transform.SetSiblingIndex(canvas.transform.childCount - 3);
                    pages.Add(newPage);
                }

                var page = pages[pageIndex];
                var room = roomList[i];
                var cell = roomListCells[room.Name] as RoomListCell;

                if (room.RemovedFromList)
                {
                    if (cell != null)
                    {
                        roomListCells.Remove(room.Name);
                        Destroy(cell.gameObject);
                        numOfRemoved++;
                    }
                }
                else
                {
                    if (cell == null)
                    {
                        cell = Instantiate(cellPrototype);
                        cell.UpdateInfo(room);
                        roomListCells.Add(room.Name, cell);
                    }
                    else
                    {
                        cell.UpdateInfo(room);
                    }

                    // Move the cell to previous page if others are removed.
                    cell.transform.SetParent(page.transform, false);
                    cell.gameObject.SetActive(true);
                }
            }

            // Remove pages if there is no cells.
            var totalPages = (roomListCells.Count + pageSize - 1) / pageSize;
            for (int i = PageCount; i > totalPages; i--)
            {
                Destroy(pages[i - 1]);
                pages.RemoveAt(i - 1);
            }

            if (currentPage >= PageCount)
            {
                PreviousPage();
            }
            else if (currentPage == -1)
            {
                NextPage();
            }
        }

        public void NextPage()
        {
            currentPage = Mathf.Min(currentPage + 1, PageCount - 1);
        }

        public void PreviousPage()
        {
            currentPage = Mathf.Min(Mathf.Max(currentPage - 1, -1), PageCount - 1);
        }
    }
}