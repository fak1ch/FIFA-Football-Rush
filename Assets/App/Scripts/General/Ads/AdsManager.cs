using App.Scripts.General.Ads.AppodealAdvertisement;
using App.Scripts.General.Singleton;


namespace App.Scripts.General.Ads
{
    public class AdsManager : MonoSingleton<AdsManager>
    {
        private IAdInitializer _adInitializer;
        private IAd _rewardAd;
        private IAd _interstitialAd;

        public IAd RewardAd => _rewardAd;
        public IAd InterstitialAd => _interstitialAd;

        private void Start()
        {
            // _adInitializer = new AppodealInitializer();
            // _rewardAd = new AppodealRewardVideo();
            // _interstitialAd = new AppodealInterstitialVideo();
            
            _adInitializer.Initialize();
            _rewardAd.Initialize();
            _interstitialAd.Initialize();
        }
    }
}