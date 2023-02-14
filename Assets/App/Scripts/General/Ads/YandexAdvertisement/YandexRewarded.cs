using System;

namespace App.Scripts.General.Ads.YandexAdvertisement
{
    public class YandexRewarded : IAd
    {
        public event Action OnShowAdFinished;
        public event Action OnShowAdNotFinished;

        public bool CanShow => true;
        
        public void Initialize()
        {
            YandexSDK.Instance.OnRewardedAdClosed += HandleRewardedAdClosed;
        }

        public void ShowAd()
        {
            YandexSDK.Instance.ShowRewardedVideo();
        }

        private void HandleRewardedAdClosed(bool rewarded)
        {
            if (rewarded)
            {
                OnShowAdFinished?.Invoke();
            }
            else
            {
                OnShowAdNotFinished?.Invoke();
            }
        }
    }
}