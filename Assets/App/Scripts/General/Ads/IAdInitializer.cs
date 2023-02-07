using System;

namespace App.Scripts.General.Ads.AppodealAdvertisement
{
    public interface IAdInitializer
    {
        public event Action OnInitializeFinished;

        public void Initialize();
    }
}