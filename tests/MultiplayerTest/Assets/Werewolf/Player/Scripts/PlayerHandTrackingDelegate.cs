using System.Collections;
using System.Collections.Generic;
using System.Linq;
using Oculus.Avatar2;
using Oculus.Interaction.Input;
using UnityEngine;

namespace Werewolf.Player
{
    public class PlayerHandTrackingDelegate : IOvrAvatarHandTrackingDelegate
    {
        private class HandStates
        {
            /// Transform for the left wrist.
            public CAPI.ovrAvatar2Transform wristPosLeft;

            /// Transform for the right wrist.
            public CAPI.ovrAvatar2Transform wristPosRight;

            /// Arrays of rotations for both hand bones.
            public CAPI.ovrAvatar2Quatf[] leftBoneRotations = new CAPI.ovrAvatar2Quatf[TOTAL_HAND_JOIN_ID];

            public CAPI.ovrAvatar2Quatf[] rightBoneRotations = new CAPI.ovrAvatar2Quatf[TOTAL_HAND_JOIN_ID];

            /// Tracked uniform scale for the left hand.
            public float handScaleLeft;

            /// Tracked uniform scale for the right hand.
            public float handScaleRight;

            /// True if the left hand is being tracked.
            public bool isTrackedLeft;

            /// True if the right hand is being tracked.
            public bool isTrackedRight;

            /// True if the tracking confidence is high for the left hand.
            public bool isConfidentLeft;

            /// True if the tracking confidence is high for the right hand.
            public bool isConfidentRight;
        }

        // For Interaction HandJointId
        private const int START_HAND_JOIN_ID = (int)HandJointId.HandThumb0;
        private const int END_HAND_JOIN_ID = (int)HandJointId.HandPinky3;
        private const int TOTAL_HAND_JOIN_ID = END_HAND_JOIN_ID - START_HAND_JOIN_ID + 1;

        private readonly IHand _leftHand;

        private readonly IHand _rightHand;

        private readonly HandStates _handData = new();

        public PlayerHandTrackingDelegate(IHand leftHand, IHand rightHand)
        {
            _leftHand = leftHand;
            _rightHand = rightHand;
            _leftHand.WhenHandUpdated += UpdateLeftHandState;
            _rightHand.WhenHandUpdated += UpdateRightHandState;
        }

        private void UpdateLeftHandState()
        {
            _handData.isTrackedLeft = _leftHand.IsTrackedDataValid;
            _handData.handScaleLeft = _leftHand.Scale;
            _handData.isConfidentLeft = _leftHand.IsHighConfidence;

            if (_leftHand.GetRootPose(out var pose))
            {
                // The inputs should be in tracking space.
                // So, we need to convert pose back.
                pose = ToTrackingSpace(pose, _leftHand.TrackingToWorldSpace);
                _handData.wristPosLeft = new CAPI.ovrAvatar2Transform(pose.position, pose.rotation).ConvertSpace();
            }

            if (_leftHand.GetJointPosesLocal(out var poses))
            {
                _handData.leftBoneRotations = ConvertHandJointPoseRotationsIntoMetaAvatarSpace(poses);
            }
        }

        private void UpdateRightHandState()
        {
            _handData.isTrackedRight = _rightHand.IsTrackedDataValid;
            _handData.handScaleRight = _rightHand.Scale;
            _handData.isConfidentRight = _rightHand.IsHighConfidence;

            if (_rightHand.GetRootPose(out var pose))
            {
                // The inputs should be in tracking space.
                // So, we need to convert pose back.
                pose = ToTrackingSpace(pose, _rightHand.TrackingToWorldSpace);
                _handData.wristPosRight = new CAPI.ovrAvatar2Transform(pose.position, pose.rotation).ConvertSpace();
            }

            if (_rightHand.GetJointPosesLocal(out var poses))
            {
                _handData.rightBoneRotations = ConvertHandJointPoseRotationsIntoMetaAvatarSpace(poses);
            }
        }

        private CAPI.ovrAvatar2Quatf[] ConvertHandJointPoseRotationsIntoMetaAvatarSpace(ReadOnlyHandJointPoses poses)
        {
            return poses
                .Skip(START_HAND_JOIN_ID)
                .Take(TOTAL_HAND_JOIN_ID)
                .AsParallel().AsOrdered()
                .Select(pose =>
                {
                    var result = (CAPI.ovrAvatar2Quatf)pose.rotation;
                    result.y = -result.y;
                    result.z = -result.z;
                    return result;
                })
                .ToArray();
        }

        private Pose ToTrackingSpace(in Pose worldPose, Transform worldSpace)
        {
            Vector3 position = worldSpace.InverseTransformPoint(worldPose.position);
            Quaternion rotation = Quaternion.Inverse(worldSpace.rotation) * worldPose.rotation;

            return new Pose(position, rotation);
        }

        bool IOvrAvatarHandTrackingDelegate.GetHandData(OvrAvatarTrackingHandsState handData)
        {
            handData.isTrackedLeft = _handData.isTrackedLeft;
            handData.isTrackedRight = _handData.isTrackedRight;
            handData.isConfidentLeft = _handData.isConfidentLeft;
            handData.isConfidentRight = _handData.isConfidentRight;
            handData.handScaleLeft = _handData.handScaleLeft;
            handData.handScaleRight = _handData.handScaleRight;
            handData.wristPosLeft = _handData.wristPosLeft;
            handData.wristPosRight = _handData.wristPosRight;

            // both hands
            for (int i = 0; i < TOTAL_HAND_JOIN_ID; i++)
            {
                handData.boneRotations[i] = _handData.leftBoneRotations[i];
                handData.boneRotations[i + TOTAL_HAND_JOIN_ID] = _handData.rightBoneRotations[i];
            }

            return true;
        }
    }
}
