using System;
using App.Scripts.General.Google;
using AppodealStack.Monetization.Api;
using AppodealStack.Monetization.Common;

namespace App.Scripts.General.Ads.AppodealAdvertisement
{
    public class AppodealRewardVideo : IAd, IRewardedVideoAdListener
    {
        public event Action OnShowAdFinished;
        public event Action OnShowAdNotFinished;

        public bool CanShow => Appodeal.CanShow(AppodealAdType.RewardedVideo);

        public void Initialize()
        {
            Appodeal.SetRewardedVideoCallbacks(this);
        }

        public void ShowAd()
        {
            Appodeal.Show(AppodealAdType.RewardedVideo);
        }

        #region Callbacks
        
        public void OnRewardedVideoLoaded(bool isPrecache)
        {
            
        }

        public void OnRewardedVideoFailedToLoad()
        {
            
        }

        public void OnRewardedVideoShowFailed()
        {
            
        }

        public void OnRewardedVideoShown()
        {
            
        }

        public void OnRewardedVideoFinished(double amount, string currency)
        {
            
        }

        public void OnRewardedVideoClosed(bool finished)
        {
            if (finished)
            {
                FirebaseAnalysis.Instance.SendFinishedRewardAdEventTrue();
                OnShowAdFinished?.Invoke();
            }
            else
            {
                FirebaseAnalysis.Instance.SendFinishedRewardAdEventFalse();
                OnShowAdNotFinished?.Invoke();
            }
        }

        public void OnRewardedVideoExpired()
        {
            
        }

        public void OnRewardedVideoClicked()
        {
            
        }
        
        #endregion
    }
}