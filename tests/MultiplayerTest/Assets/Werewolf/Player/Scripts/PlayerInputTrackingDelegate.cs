using Oculus.Avatar2;

using UnityEngine;
using UnityEngine.Assertions;

using Node = UnityEngine.XR.XRNode;

namespace Werewolf.Player
{
    public class PlayerInputTrackingDelegate : OvrAvatarInputTrackingDelegate
    {
        private readonly OVRCameraRig _ovrCameraRig = null;
        private readonly OVRHand _ovrLeftHand = null;
        private readonly OVRHand _ovrRightHand = null;

        public PlayerInputTrackingDelegate(OVRCameraRig ovrCameraRig)
        {
            _ovrCameraRig = ovrCameraRig;
            if (ovrCameraRig != null)
            {
                this.GetHandCached(ref _ovrLeftHand, ovrCameraRig.leftHandAnchor);
                this.GetHandCached(ref _ovrRightHand, ovrCameraRig.rightHandAnchor);
            }
        }

        public override bool GetRawInputTrackingState(out OvrAvatarInputTrackingState inputTrackingState)
        {
            inputTrackingState = default;
            bool leftControllerActive = false;
            bool rightControllerActive = false;
            if (OVRInput.GetActiveController() != OVRInput.Controller.Hands)
            {
                leftControllerActive = OVRInput.GetControllerOrientationTracked(OVRInput.Controller.LTouch);
                rightControllerActive = OVRInput.GetControllerOrientationTracked(OVRInput.Controller.RTouch);
            }

            if (_ovrCameraRig)
            {
                inputTrackingState.headsetActive = true;
                inputTrackingState.leftControllerActive = leftControllerActive;
                inputTrackingState.rightControllerActive = rightControllerActive;
                inputTrackingState.leftControllerVisible = false;
                inputTrackingState.rightControllerVisible = false;
                inputTrackingState.headset = (CAPI.ovrAvatar2Transform)_ovrCameraRig.centerEyeAnchor;
                inputTrackingState.leftController = (CAPI.ovrAvatar2Transform)_ovrLeftHand.transform;
                inputTrackingState.rightController = (CAPI.ovrAvatar2Transform)_ovrRightHand.transform;
                return true;
            }
            else if (OVRNodeStateProperties.IsHmdPresent())
            {
                inputTrackingState.headsetActive = true;
                inputTrackingState.leftControllerActive = leftControllerActive;
                inputTrackingState.rightControllerActive = rightControllerActive;
                inputTrackingState.leftControllerVisible = true;
                inputTrackingState.rightControllerVisible = true;

                if (OVRNodeStateProperties.GetNodeStatePropertyVector3(Node.CenterEye, NodeStatePropertyType.Position,
                    OVRPlugin.Node.EyeCenter, OVRPlugin.Step.Render, out var headPos))
                {
                    inputTrackingState.headset.position = headPos;
                }
                else
                {
                    inputTrackingState.headset.position = Vector3.zero;
                }

                if (OVRNodeStateProperties.GetNodeStatePropertyQuaternion(Node.CenterEye, NodeStatePropertyType.Orientation,
                    OVRPlugin.Node.EyeCenter, OVRPlugin.Step.Render, out var headRot))
                {
                    inputTrackingState.headset.orientation = headRot;
                }
                else
                {
                    inputTrackingState.headset.orientation = Quaternion.identity;
                }

                inputTrackingState.headset.scale = Vector3.one;

                inputTrackingState.leftController.position = OVRInput.GetLocalControllerPosition(OVRInput.Controller.LTouch);
                inputTrackingState.rightController.position = OVRInput.GetLocalControllerPosition(OVRInput.Controller.RTouch);
                inputTrackingState.leftController.orientation = OVRInput.GetLocalControllerRotation(OVRInput.Controller.LTouch);
                inputTrackingState.rightController.orientation = OVRInput.GetLocalControllerRotation(OVRInput.Controller.RTouch);
                inputTrackingState.leftController.scale = Vector3.one;
                inputTrackingState.rightController.scale = Vector3.one;
                return true;
            }

            return false;
        }

        private void GetHandCached(ref OVRHand cachedValue, Transform handAnchor)
        {
            if (cachedValue != null)
            {
                return;
            }

            cachedValue = handAnchor.GetComponentInChildren<OVRHand>(true);
            Assert.IsNotNull(cachedValue);
        }
    }
}