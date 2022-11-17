using Photon.Pun;

using System.Collections;
using System.Collections.Generic;

using UnityEngine;
using UnityEngine.Assertions;

namespace Leaf.PhotonTutorial.Player
{
    public class PlayerManager : MonoBehaviourPunCallbacks
    {
        #region Public Callbacks & Fields

        [Tooltip("The current Health of our player")]
        public float Health { get; private set; } = 1f;

        #endregion

        #region MonoBehavior Callbacks

        // Start is called before the first frame update
        private void Start()
        {
        }

        private void Awake()
        {
            Assert.IsNotNull(this.beams, "<Color=Red><a>Missing</a></Color> Beams Reference.");
            this.beams.SetActive(false);
        }

        // Update is called once per frame
        private void Update()
        {
            if (photonView.IsMine)
            {
                this.ProcessInputs();
                if (this.Health <= 0f)
                {
                    GameManager.Instance.LeaveRoom();
                }
            }

            // trigger beams active state
            if (this.isFiring != this.beams.activeInHierarchy)
            {
                this.beams.SetActive(this.isFiring);
            }
        }

        /// <summary>
        /// MonoBehaviour method called when the Collider 'other' enters the trigger.
        /// Affect Health of the Player if the collider is a beam
        /// Note: when jumping and firing at the same, you'll find that the player's own beam intersects with itself
        /// One could move the collider further away to prevent this or check if the beam belongs to the player.
        /// </summary>
        /// <param name="other">Other.</param>
        private void OnTriggerEnter(Collider other)
        {
            // We are only interested in Beamers
            // we should be using tags but for the sake of distribution, let's simply check by name.
            if (!this.photonView.IsMine || !other.name.Contains("Beam"))
            {
                return;
            }

            this.Health -= 0.1f;
        }

        /// <summary>
        /// MonoBehaviour method called once per frame for every Collider 'other' that is touching the trigger.
        /// We're going to affect health while the beams are touching the player
        /// </summary>
        /// <param name="other">Other.</param>
        private void OnTriggerStay(Collider other)
        {
            // We are only interested in Beamers
            // we should be using tags but for the sake of distribution, let's simply check by name.
            if (!this.photonView.IsMine || !other.name.Contains("Beam"))
            {
                return;
            }

            this.Health -= 0.1f * Time.deltaTime;
        }

        #endregion

        #region Custom Callbacks

        private void ProcessInputs()
        {
            if (Input.GetButtonDown("Fire1"))
            {
                if (!this.isFiring)
                {
                    this.isFiring = true;
                }
            }
            if (Input.GetButtonUp("Fire1"))
            {
                if (this.isFiring)
                {
                    this.isFiring = false;
                }
            }
        }

        #endregion

        #region Private Fields

        [Tooltip("The beams GameObject to control")]
        [SerializeField]
        private GameObject beams;

        private bool isFiring = false;

        #endregion
    }
}
