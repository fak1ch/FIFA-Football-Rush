using System;
using App.Scripts.General.PopUpSystemSpace;
using App.Scripts.General.Utils;
using App.Scripts.Scenes.MainScene.UI.PopUps;
using UnityEngine;

namespace App.Scripts.Installers
{
    public class MainSceneInstaller : Installer
    {
        [SerializeField] private ShopPopUp _shopPopUp;
        
        private void Awake()
        {
            PopUpSystem.Instance.enabled = true;
            DebugUtils.Instance.enabled = true;
            MoneyWallet.Instance.enabled = true;
            
            _shopPopUp.Initialize();
        }
    }
}