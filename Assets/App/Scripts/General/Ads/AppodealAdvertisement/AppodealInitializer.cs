using System;
using AppodealStack.Monetization.Api;
using AppodealStack.Monetization.Common;
 

namespace App.Scripts.General.Ads.AppodealAdvertisement
{
    public class AppodealInitializer : IAdInitializer
    {
        public event Action OnInitializeFinished; 

        public void Initialize()
        { 
            Appodeal.SetTesting(false);
            Appodeal.MuteVideosIfCallsMuted(true);
            AppodealCallbacks.Sdk.OnInitialized += InitializeFinishedCallback;

            int adTypes = AppodealAdType.Interstitial | AppodealAdType.RewardedVideo;
            string appKey = "e5d8073f1aeddb5b7b88159308648938b1fe881c20bdc50e";
            
            Appodeal.Initialize(appKey, adTypes);
        }

        private void InitializeFinishedCallback(object sender, SdkInitializedEventArgs e)
        {
            OnInitializeFinished?.Invoke();
        }
    }
}