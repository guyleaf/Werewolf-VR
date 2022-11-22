// --------------------------------------------------------------------------------------------------------------------
// <copyright file="CameraWork.cs" company="Exit Games GmbH">
//   Part of: Photon Unity Networking Demos
// </copyright>
// <summary>
//  Used in PUN Basics Tutorial to deal with the Camera work to follow the player
// </summary>
// <author>developer@exitgames.com</author>
// --------------------------------------------------------------------------------------------------------------------

using Oculus.Avatar2;

using Photon.Pun;

using UnityEngine;
using UnityEngine.Assertions;

namespace Werewolf.Player
{
	/// <summary>
	/// Camera work. Follow a target
	/// </summary>
	[RequireComponent(typeof(PhotonView))]
	public class CameraController : MonoBehaviourPun
	{
        #region Private Fields

	    [Tooltip("Set this as false if a component of a prefab being instanciated by Photon Network, and manually call OnStartFollowing() when and if needed.")]
	    [SerializeField]
	    private bool _followOnStart = false;

		private bool _isFollowing = false;

        // cached transform of the target
        private Transform _cameraTransform;

		#endregion

		#region MonoBehaviour Callbacks

		private void Awake()
		{
            var playerAvatarEntity = GetComponent<PlayerAvatarEntity>();
            if (!PhotonNetwork.IsConnected)
			{
				playerAvatarEntity.OnDefaultAvatarLoadedEvent.AddListener(OpenCamera);
            }
            else if (photonView.IsMine)
			{
                playerAvatarEntity.OnUserAvatarLoadedEvent.AddListener(OpenCamera);
            }
        }

		/// <summary>
		/// MonoBehaviour method called on GameObject by Unity during initialization phase
		/// </summary>
		private void Start()
		{
			Assert.IsNotNull(OVRManager.instance, "The OVRManager instance is not created.");

            // Start following the target if wanted.
            if (_followOnStart || photonView.IsMine)
			{
                OnStartFollowing();
            }
		}

        private void LateUpdate()
		{
			// The transform target may not destroy on level load, 
			// so we need to cover corner cases where the Main Camera is different everytime we load a new scene, and reconnect when that happens
			if (_cameraTransform == null && _isFollowing)
			{
                OnStartFollowing();
            }

			// only follow is explicitly declared
			if (_isFollowing) {
				Follow();
			}
		}

		#endregion

		#region Public Methods

		/// <summary>
		/// Raises the start following event. 
		/// Use this when you don't know at the time of editing what to follow, typically instances managed by the photon network.
		/// </summary>
		public void OnStartFollowing()
		{
            _cameraTransform = OVRManager.instance.transform;
            _isFollowing = true;
            // we don't smooth anything, we go straight to the right camera shot
            Follow();
		}

		#endregion

		#region Private Methods

		/// <summary>
		/// Follow the target smoothly
		/// </summary>
		private void Follow()
		{
            _cameraTransform.SetPositionAndRotation(this.transform.position, this.transform.rotation);
        }

		private void OpenCamera(OvrAvatarEntity playerAvatarEntity)
		{
			Debug.Log("Opening camera");
			// Camera.main.enabled = true;
			// OVRScreenFade.instance.FadeIn();
			playerAvatarEntity.OnDefaultAvatarLoadedEvent.RemoveListener(OpenCamera);
            playerAvatarEntity.OnUserAvatarLoadedEvent.RemoveListener(OpenCamera);
        }
		#endregion
	}
}