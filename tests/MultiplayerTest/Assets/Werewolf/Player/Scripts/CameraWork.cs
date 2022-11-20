// --------------------------------------------------------------------------------------------------------------------
// <copyright file="CameraWork.cs" company="Exit Games GmbH">
//   Part of: Photon Unity Networking Demos
// </copyright>
// <summary>
//  Used in PUN Basics Tutorial to deal with the Camera work to follow the player
// </summary>
// <author>developer@exitgames.com</author>
// --------------------------------------------------------------------------------------------------------------------

using UnityEngine;

namespace Werewolf.Player
{
	/// <summary>
	/// Camera work. Follow a target
	/// </summary>
	public class CameraWork : MonoBehaviour
	{
        #region Private Fields

	    [Tooltip("Set this as false if a component of a prefab being instanciated by Photon Network, and manually call OnStartFollowing() when and if needed.")]
	    [SerializeField]
	    private bool followOnStart = false;

		private bool isFollowing = false;

        // cached transform of the target
        Transform cameraTransform;


		#endregion

		#region MonoBehaviour Callbacks

        /// <summary>
        /// MonoBehaviour method called on GameObject by Unity during initialization phase
        /// </summary>
        private void Start()
		{
            cameraTransform = OVRManager.instance.transform;
            // Start following the target if wanted.
            if (followOnStart)
			{
				isFollowing = true;
            }
		}

        private void LateUpdate()
		{
			// The transform target may not destroy on level load, 
			// so we need to cover corner cases where the Main Camera is different everytime we load a new scene, and reconnect when that happens
			if (cameraTransform == null && isFollowing)
			{
                OnStartFollowing();
            }

			// only follow is explicitly declared
			if (isFollowing) {
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
            cameraTransform = OVRManager.instance.transform;
            isFollowing = true;
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
            cameraTransform.position = this.transform.position;
	    }
		#endregion
	}
}