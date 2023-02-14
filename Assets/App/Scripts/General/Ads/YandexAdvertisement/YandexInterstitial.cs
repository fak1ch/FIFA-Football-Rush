using System;

namespace App.Scripts.General.Ads.YandexAdvertisement
{
    public class YandexInterstitial : IAd
    {
        public event Action OnShowAdFinished;
        public event Action OnShowAdNotFinished;
        
        public bool CanShow => true;
        
        public void Initialize()
        {
            
        }

        public void ShowAd()
        {
            YandexSDK.Instance.ShowInterstitialVideo();
        }
    }
}