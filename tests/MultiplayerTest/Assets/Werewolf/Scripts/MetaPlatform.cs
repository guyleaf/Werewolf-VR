using System;
using System.Collections;
using Oculus.Avatar2;
using Oculus.Platform;
using UnityEngine;

namespace Werewolf
{
    public static class MetaPlatform
    {
        public static bool IsUserLoggedIn = false;

        // cached user profile data
        public static Oculus.Platform.Models.User UserProfile
        {
            get; private set;
        }

        public static ulong UserId
        {
            get
            {
                return IsUserLoggedIn ? UserProfile.ID : 0;
            }
        }

        public static string UserName
        {
            get
            {
                return IsUserLoggedIn ? UserProfile.DisplayName : null;
            }
        }

        public static string UserImageUrl
        {
            get
            {
                return IsUserLoggedIn ? UserProfile.SmallImageUrl : null;
            }
        }

        public static IEnumerator LogIn()
        {
            Debug.Log("LogIn()");
            if (IsUserLoggedIn)
            {
                Debug.LogWarning("You are already logged in");
                yield break;
            }

            if (OvrPlatformInit.status == OvrPlatformInitStatus.NotStarted)
            {
                OvrPlatformInit.InitializeOvrPlatform();
            }

            while (OvrPlatformInit.status != OvrPlatformInitStatus.Succeeded)
            {
                if (OvrPlatformInit.status == OvrPlatformInitStatus.Failed)
                {
                    Debug.LogError("OVR Platform failed to initialise");
                    yield break;
                }
                yield return null;
            }

            bool getUserIdComplete = false;
            Users.GetLoggedInUser().OnComplete(message =>
            {
                if (message.IsError)
                {
                    OvrAvatarLog.LogError("Getting Logged in user error " + message.GetError());
                }
                else
                {
                    UserProfile = message.Data;
                    IsUserLoggedIn = true;
                }
                getUserIdComplete = true;
            });

            Debug.Log("Wait LogIn()");
            while (!getUserIdComplete) { yield return null; }
            UnityEngine.Debug.Log(UserProfile.ID);
        }
    }
}