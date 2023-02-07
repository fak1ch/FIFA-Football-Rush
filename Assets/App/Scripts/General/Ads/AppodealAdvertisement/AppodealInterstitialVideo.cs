using System;
using AppodealStack.Monetization.Api;
using AppodealStack.Monetization.Common;

namespace App.Scripts.General.Ads.AppodealAdvertisement
{
    public class AppodealInterstitialVideo : IAd, IInterstitialAdListener
    {
        public event Action OnShowAdFinished;
        public event Action OnShowAdNotFinished;

        public bool CanShow => Appodeal.CanShow(AppodealAdType.Interstitial);
        
        public void Initialize()
        {
            Appodeal.SetInterstitialCallbacks(this);
        }

        public void ShowAd()
        {
            Appodeal.Show(AppodealAdType.Interstitial);
        }

        public void OnInterstitialLoaded(bool isPrecache)
        {
            
        }

        public void OnInterstitialFailedToLoad()
        {
            
        }

        public void OnInterstitialShowFailed()
        {
            
        }

        public void OnInterstitialShown()
        {
            OnShowAdFinished?.Invoke();
        }

        public void OnInterstitialClosed()
        {
            
        }

        public void OnInterstitialClicked()
        {
            
        }

        public void OnInterstitialExpired()
        {
            
        }
    }
}