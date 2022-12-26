using Photon.Realtime;
using TMPro;
using UnityEngine;

namespace Werewolf.UI
{
    public class RoomListCell : MonoBehaviour
    {
        [SerializeField]
        private RoomListController controller;

        private RoomInfo info;

        [SerializeField]
        private TextMeshProUGUI nameText;

        [SerializeField]
        private TextMeshProUGUI playerText;

        [SerializeField]
        private TextMeshProUGUI statusText;

        public void OnButtonClicked()
        {
            controller.OnRoomCellJoinButtonClick(info);
        }

        public void UpdateInfo(RoomInfo info)
        {
            this.info = info;
            if (info.IsOpen)
            {
                statusText.text = "ON";
                statusText.color = Color.green;
            }
            else
            {
                statusText.text = "OFF";
                statusText.color = Color.red;
            }

            nameText.text = $"Name: {info.Name}";
            playerText.text = $"Players: {info.PlayerCount}/{info.MaxPlayers}";
        }
    }
}