using Photon.Pun;

using TMPro;

using UnityEngine;
using UnityEngine.Assertions;
using UnityEngine.UI;

using WebSocketSharp;

namespace Leaf.PhotonTutorial
{
    [RequireComponent(typeof(TMP_InputField))]
    public class PlayerNameInputField : MonoBehaviour
    {
        #region public functions
        public void SetPlayerName(string name)
        {
            var isNameEmpty = string.IsNullOrEmpty(name);
            if (this.playButton != null)
            {
                this.playButton.interactable = !isNameEmpty;
            }
            if (isNameEmpty)
            {
                Debug.LogWarning("Player name is null or empty.");
                return;
            }

            PhotonNetwork.NickName = name;
            PlayerPrefs.SetString(PLAYER_NAME_PREF_KEY, name);
        }
        #endregion

        #region unity functions
        private void Start()
        {
            Assert.IsNotNull(this.playerNameInputField, "Please specify input field for player name.");

            var playerName = PlayerPrefs.GetString(PLAYER_NAME_PREF_KEY, string.Empty);

            this.playerNameInputField.text = playerName;
            PhotonNetwork.NickName = playerName;
            if (this.playButton != null)
            {
                this.playButton.interactable = !string.IsNullOrEmpty(playerName);
            }
        }
        #endregion

        #region private functions
        private const string PLAYER_NAME_PREF_KEY = "playerName";

        [SerializeField]
        private Button playButton;
        [SerializeField]
        private TMP_InputField playerNameInputField;
        #endregion
    }
}
