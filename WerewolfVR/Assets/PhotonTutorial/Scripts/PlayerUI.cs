using System.Collections;
using System.Collections.Generic;

using TMPro;

using UnityEngine;
using UnityEngine.Assertions;
using UnityEngine.UI;

using static UnityEngine.GraphicsBuffer;

namespace Leaf.PhotonTutorial.Player
{
    public class PlayerUI : MonoBehaviour
    {
        #region Private Fields & Callbacks

        [Tooltip("Pixel offset from the player target")]
        [SerializeField]
        private Vector3 screenOffset = new(0f, 30f, 0f);

        [Tooltip("UI Text to display Player's Name")]
        [SerializeField]
        private TMP_Text playerNameText;


        [Tooltip("UI Slider to display Player's Health")]
        [SerializeField]
        private Slider playerHealthSlider;

        [SerializeField]
        private CanvasGroup canvasGroup;

        private float sliderValue;

        private float targetHeight = 0f;
		private PlayerManager target;
        private Transform targetTransform;
        private Renderer targetRenderer;

        private void HandleSliderValueChanged(object sender, float value)
        {
            this.sliderValue = value;
        }

        #endregion


        #region MonoBehaviour Callbacks
		
		private void OnDisable()
		{
			if (this.target != null)
			{
				this.target.HealthChanged -= this.HandleSliderValueChanged;
			}
		}

        private void Awake()
        {
            this.transform.SetParent(GameObject.Find("Canvas").GetComponent<Transform>(), false);
        }

        private void Update()
        {
            // Destroy itself if the target is null, It's a fail safe when Photon is destroying Instances of a Player over the network
            if (this.target == null)
            {
                Destroy(this.gameObject);
                return;
            }

            if (this.playerHealthSlider != null)
            {
                this.playerHealthSlider.value = sliderValue;
            }
        }

        private void LateUpdate()
        {
            // Do not show the UI if we are not visible to the camera, thus avoid potential bugs with seeing the UI, but not the player itself.
            if (this.targetRenderer != null)
            {
                this.canvasGroup.alpha = targetRenderer.isVisible ? 1f : 0f;
            }

            // #Critical
            // Follow the Target GameObject on screen.
            if (this.targetTransform != null)
            {
                var targetPosition = this.targetTransform.position;
                targetPosition.y += this.targetHeight;
                this.transform.position = Camera.main.WorldToScreenPoint(targetPosition) + this.screenOffset;
            }
        }

        #endregion

        #region Public Methods

        public void SetTarget(PlayerManager target)
        {
            Assert.IsNotNull(target, "<Color=Red><a>Missing</a></Color> PlayMakerManager target for PlayerUI.SetTarget.");

			this.target = target;
            this.target.HealthChanged += this.HandleSliderValueChanged;

            if (this.playerNameText != null)
            {
                var photonView = this.target.photonView;
                this.playerNameText.text = photonView.Owner.NickName;
                this.playerNameText.color = photonView.IsMine ? Color.blue : Color.red;
            }

            this.targetTransform = this.target.GetComponent<Transform>();
            this.targetRenderer = this.target.GetComponent<Renderer>();

            if (target.TryGetComponent<CharacterController>(out var characterController))
            {
                this.targetHeight = characterController.height;
            }
        }

        #endregion
    }
}
