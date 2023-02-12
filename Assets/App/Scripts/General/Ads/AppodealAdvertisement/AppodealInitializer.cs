using System;
using App.Scripts.General.Utils;
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

            int adTypes = AppodealAdType.Interstitial | AppodealAdType.Banner | AppodealAdType.RewardedVideo;
            string appKey = "2d45e6977d8a584d64bd6f890425116bcd648f7948aa7fa8";
            
            Appodeal.Initialize(appKey, adTypes);

            Appodeal.Show(AppodealShowStyle.BannerBottom);
        }

        private void InitializeFinishedCallback(object sender, SdkInitializedEventArgs e)
        {
            OnInitializeFinished?.Invoke();
            DebugUtils.Instance.Log("Appodeal initialize finished");
        }
    }
}