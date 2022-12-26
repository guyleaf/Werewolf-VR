using Photon.Pun;
using Photon.Pun.Demo.PunBasics;

using System;
using System.Collections;
using System.Collections.Generic;

using Unity.VisualScripting;

using UnityEngine;
using UnityEngine.Assertions;
using UnityEngine.SceneManagement;

namespace Leaf.PhotonTutorial.Player
{
    public class PlayerManager : MonoBehaviourPunCallbacks, IPunObservable
    {
        #region Public Callbacks & Fields

        [Tooltip("The local player instance. Use this to know if the local player is represented in the Scene")]
        public static GameObject LocalPlayerInstance { get; private set; }

        public event EventHandler<float> HealthChanged;

        #endregion

        #region MonoBehavior Callbacks

        public override void OnEnable()
        {
            base.OnEnable();
#if UNITY_5_4_OR_NEWER
            SceneManager.sceneLoaded += this.OnSceneLoaded;
#endif
        }

        public override void OnDisable()
        {
            // Always call the base to remove callbacks
            base.OnDisable();
#if UNITY_5_4_OR_NEWER
            SceneManager.sceneLoaded -= this.OnSceneLoaded;
#endif
        }

        // Start is called before the first frame update
        private void Start()
        {
            var cameraWork = this.gameObject.GetComponent<CameraWork>();
            Assert.IsNotNull(cameraWork, "<Color=Red><a>Missing</a></Color> CameraWork Component on playerPrefab.");
            Assert.IsNotNull(this.playerUIPrefab, "<Color=Red><a>Missing</a></Color> PlayerUiPrefab reference on player Prefab.");

            if (this.photonView.IsMine)
            {
                cameraWork.OnStartFollowing();
            }

            this.InitializePlayerUI();
        }

        private void Awake()
        {
            Assert.IsNotNull(this.beams, "<Color=Red><a>Missing</a></Color> Beams Reference.");
            this.beams.SetActive(false);

            // #Important
            // used in GameManager.cs: we keep track of the localPlayer instance to prevent instantiation when levels are synchronized
            if (this.photonView.IsMine)
            {
                LocalPlayerInstance = this.gameObject;
            }

            // we flag as don't destroy on load so that instance survives level synchronization, thus giving a seamless experience when levels load.
            DontDestroyOnLoad(this.gameObject);
        }

        // Update is called once per frame
        private void Update()
        {
            if (photonView.IsMine)
            {
                this.ProcessInputs();
                if (this.health <= 0f && !this.isLeaving)
                {
                    this.isLeaving = true;
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
        /// Affect health of the Player if the collider is a beam
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

            this.health -= 0.1f;
            this.OnHealthChanged(this.health);
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

            this.health -= 0.1f * Time.deltaTime;
            this.OnHealthChanged(this.health);
        }

#if !UNITY_5_4_OR_NEWER
/// <summary>See CalledOnLevelWasLoaded. Outdated in Unity 5.4.</summary>
void OnLevelWasLoaded(int level)
{
    this.CalledOnLevelWasLoaded(level);
}
#endif

        #endregion

        #region IPunObservable implementation

        public void OnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info)
        {
            if (stream.IsWriting)
            {
                stream.SendNext(this.isFiring);
                stream.SendNext(this.health);
            }
            else
            {
                this.isFiring = (bool)stream.ReceiveNext();
                this.health = (float)stream.ReceiveNext();
                this.OnHealthChanged(this.health);
            }
        }

        #endregion

        #region Private Fields & Callbacks

        private void ProcessInputs()
        {
            if (Input.GetButtonDown("Fire1"))
            {
                this.isFiring = true;
            }
            else if (Input.GetButtonUp("Fire1"))
            {
                this.isFiring = false;
            }
        }

        private void InitializePlayerUI()
        {
            Debug.Log("InitializePlayerUI");
            GameObject ui = Instantiate(this.playerUIPrefab);
            // ui.SendMessage("SetTarget", this, SendMessageOptions.RequireReceiver);
            var controller = ui.GetComponent<PlayerUI>();
            controller.SetTarget(this);
            this.OnHealthChanged(this.health);
        }

#if UNITY_5_4_OR_NEWER
        private void OnSceneLoaded(Scene scene, LoadSceneMode loadingMode)
        {
            if (!Physics.Raycast(this.transform.position, Vector3.down, 5f))
            {
                this.transform.position = new Vector3(0f, 5f, 0f);
            }

            this.InitializePlayerUI();
        }
#endif 

        private void OnHealthChanged(float health)
        {
            this.HealthChanged?.Invoke(this, health);
        }

        [Tooltip("The beams GameObject to control")]
        [SerializeField]
        private GameObject beams;

        [Tooltip("The Player's UI GameObject Prefab")]
        [SerializeField]
        private GameObject playerUIPrefab;

        [Tooltip("The initial health of our player")]
        [SerializeField]
        private float health = 1f;

        private bool isFiring = false;

        private bool isLeaving = false;

        #endregion
    }
}
