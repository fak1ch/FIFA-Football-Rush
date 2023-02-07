using System;

namespace App.Scripts.General.Ads
{
    public interface IAd
    {
        public event Action OnShowAdFinished;
        public event Action OnShowAdNotFinished;

        public bool CanShow { get; }

        public void Initialize();

        public void TryShowAd()
        {
            if (CanShow)
            {
                ShowAd();
            }
        }
        public void ShowAd();
    }
}