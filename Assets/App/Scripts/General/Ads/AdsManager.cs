using App.Scripts.General.Ads.YandexAdvertisement;
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
            _adInitializer = new YandexInitializer();
            _rewardAd = new YandexRewarded();
            _interstitialAd = new YandexInterstitial();
            
            _adInitializer.Initialize();
            _rewardAd.Initialize();
            _interstitialAd.Initialize();
        }
    }
}