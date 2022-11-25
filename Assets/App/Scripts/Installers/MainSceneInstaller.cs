using System;
using App.Scripts.General.PopUpSystemSpace;
using App.Scripts.General.Utils;

namespace App.Scripts.Installers
{
    public class MainSceneInstaller : Installer
    {
        private void Awake()
        {
            PopUpSystem.Instance.enabled = true;
            DebugUtils.Instance.enabled = true;
            MoneyWallet.Instance.enabled = true;
        }
    }
}