using UnityEngine;

namespace App.Scripts.Scenes.MainScene.Skins.UI
{
    public class HatLotsInitializer : ShopLotsInitializer<HatConfig>
    {
        [SerializeField] private PlayerHatInstaller _playerHatInstaller;

        protected override void SelectShopLotItem(ShopLot shopLot)
        {
            base.SelectShopLotItem(shopLot);
            _playerHatInstaller.PutOnSelectedHat();
        }
    }
}