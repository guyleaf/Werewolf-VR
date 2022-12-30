using System.Collections;
using System.Collections.Generic;
using Photon.Pun;
using TMPro;
using UnityEngine;
using UnityEngine.Assertions;
using UnityEngine.Events;
using UnityEngine.UI;

namespace Werewolf.UI
{
    public class RoomController : MonoBehaviour
    {
        public UnityEvent OnCountDownEvent;

        [SerializeField]
        private TextMeshProUGUI playerText;

        [SerializeField]
        private TextMeshProUGUI roomText;

        [SerializeField]
        private Button leaveButton;

        [SerializeField]
        private TextMeshProUGUI counterText;

        [SerializeField]
        private float totalSeconds;

        [Header("Development Only")]
        [SerializeField]
        private Button startButton;

        private float counter;

        private bool isFull = false;

        private bool isCountDown = false;

        // Start is called before the first frame update
        void Start()
        {
            Assert.IsNotNull(playerText);
            Assert.IsNotNull(roomText);
            Assert.IsNotNull(leaveButton);
            Assert.IsNotNull(counterText);
        }

        void OnEnable()
        {
            ResetCounter();
            leaveButton.interactable = true;
            isFull = false;
#if UNITY_EDITOR
            startButton.gameObject.SetActive(true);
#else
            startButton.gameObject.SetActive(false);
#endif
        }

        // Update is called once per frame
        void Update()
        {
            var currentRoom = PhotonNetwork.CurrentRoom;

            if (currentRoom != null)
            {
                var numOfPlayers = currentRoom.PlayerCount;
                var numOfMaxPlayers = currentRoom.MaxPlayers;

                isFull = numOfPlayers == numOfMaxPlayers;
                if (isFull)
                {
                    leaveButton.interactable = false;
                    counterText.transform.parent.gameObject.SetActive(true);
                    counterText.text = string.Format("{0:0.00}s...", counter);
                }
                else
                {
                    leaveButton.interactable = true;
                    ResetCounter();
                }

                var color = isFull ? "green" : "red";
                playerText.text = $"Players: <color={color}>{numOfPlayers}</color>/<color=green>{numOfMaxPlayers}</color>";
                roomText.text = $"Room Name: {currentRoom.Name}";
            }
        }

        void LateUpdate()
        {
            if (isFull)
            {
                if (counter > 0)
                {
                    counter -= Time.deltaTime;
                }

                if (counter <= 0)
                {
                    counter = 0;
                    if (!isCountDown)
                    {
                        isCountDown = true;
                        OnCountDownEvent?.Invoke();
                    }
                }
            }
        }

        public void EnterGame()
        {
            OnCountDownEvent?.Invoke();
        }

        private void ResetCounter()
        {
            counterText.transform.parent.gameObject.SetActive(false);
            counter = totalSeconds;
            counterText.text = "";
        }
    }
}
