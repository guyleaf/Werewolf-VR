using System;
using System.Collections;
using Oculus.Avatar2;
using Oculus.Platform;
using UnityEngine;

namespace Werewolf
{
    public class MetaPlatform
    {
        private static MetaPlatform _instance;

        public static bool IsUserLoggedIn = false;

        // cached user profile data
        public static Oculus.Platform.Models.User UserProfile
        {
            get; private set;
        }

        public static MetaPlatform Instance
        {
            get
            {
                _instance ??= new MetaPlatform();
                return _instance;
            }
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

        public IEnumerator LogIn()
        {
            if (IsUserLoggedIn)
            {
                Debug.LogWarning("You are already logged in");
                yield break;
            }

            yield return InitializeOvrPlatform();

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

            while (!getUserIdComplete) { yield return null; }
        }

        private IEnumerator InitializeOvrPlatform()
        {
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
        }
    }
}