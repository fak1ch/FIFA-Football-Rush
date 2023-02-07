using System;
using App.Scripts.General.Singleton;
using GooglePlayGames;
using GooglePlayGames.BasicApi;

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
            }
        }
    }
}