using System;
using App.Scripts.General.Singleton;
using App.Scripts.General.Utils;
using GooglePlayGames;
using GooglePlayGames.BasicApi;
using UnityEngine;

namespace App.Scripts.General.Google
{
    public class GoogleInitializer : MonoSingleton<GoogleInitializer>
    {
        public event Action OnAuthenticationSuccess;
        
        private void Start() 
        { 
            if (PlayGamesPlatform.Instance.IsAuthenticated() == false) 
            {
                PlayGamesPlatform.Instance.ManuallyAuthenticate(ProcessAuthentication);
            }
        }  
        
        private void ProcessAuthentication(SignInStatus status)
        {
            if (status == SignInStatus.Success)
            {
                OnAuthenticationSuccess?.Invoke();
                DebugUtils.Instance.Log("Google initialize finished");
            }
            else
            {
                DebugUtils.Instance.Log($"Google initialize error: {status}");
            }
        }
    }
}