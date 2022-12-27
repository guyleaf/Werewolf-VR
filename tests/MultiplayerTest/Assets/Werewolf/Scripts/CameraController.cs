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
    public class CameraController : MonoBehaviour
    {
        #region Private Fields

        private bool _isFollowing = false;

        // cached transform of the target
        private Transform _cameraTransform;

        #endregion

        #region MonoBehaviour Callbacks

        private void Start()
        {
            var ovrCameraRig = FindObjectOfType<OVRCameraRig>();
            Assert.IsTrue(ovrCameraRig, "The OVRCameraRig component is not found.");

            _cameraTransform = ovrCameraRig.transform;
        }

        private void LateUpdate()
        {
            if (_isFollowing)
            {
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
            _isFollowing = true;
            var ovrCameraRig = FindObjectOfType<OVRCameraRig>();
            Assert.IsTrue(ovrCameraRig, "The OVRCameraRig component is not found.");

            _cameraTransform = ovrCameraRig.transform;
            // we don't smooth anything, we go straight to the right camera shot
            Follow();
        }

        public void OnStopFollowing()
        {
            _isFollowing = false;
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

        #endregion
    }
}