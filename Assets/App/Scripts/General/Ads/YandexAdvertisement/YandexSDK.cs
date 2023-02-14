using System;
using System.Runtime.InteropServices;
using App.Scripts.General.Singleton;

namespace App.Scripts.General.Ads.YandexAdvertisement
{
    public class YandexSDK : MonoSingleton<YandexSDK>
    {
        [DllImport("__Internal")]
        private static extern void ShowInterstitialAd();
        
        [DllImport("__Internal")]
        private static extern void ShowRewardedAd();
        
        public event Action<bool> OnRewardedAdClosed;

        private bool _rewarded;

        public void ShowInterstitialVideo()
        {
            ShowInterstitialAd();
        }

        public void ShowRewardedVideo()
        {
            _rewarded = false;
            ShowRewardedAd();
        }
        
        public void SendRewardedAdClosedEvent()
        {
            OnRewardedAdClosed?.Invoke(_rewarded);
        }

        public void SendRewardedAdRewarded()
        {
            _rewarded = true;
        }
    }
}