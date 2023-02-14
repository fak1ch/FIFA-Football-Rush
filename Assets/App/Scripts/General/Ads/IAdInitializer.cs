using System;

namespace App.Scripts.General.Ads
{
    public interface IAdInitializer
    {
        public event Action OnInitializeFinished;

        public void Initialize();
    }
}