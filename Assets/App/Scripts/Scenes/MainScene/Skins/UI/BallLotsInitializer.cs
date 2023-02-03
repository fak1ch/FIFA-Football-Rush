using App.Scripts.Scenes.General.LevelCreation;
using UnityEngine;

namespace App.Scripts.Scenes.MainScene.Skins.UI
{
    public class BallLotsInitializer : ShopLotsInitializer<BallConfig>
    {
        private PickableItemsSkinSetuper _pickableItemsSkinSetuper;

        public void Initialize(PickableItemsSkinSetuper pickableItemsSkinSetuper)
        {
            _pickableItemsSkinSetuper = pickableItemsSkinSetuper;
        }
        
        protected override void SelectShopLotItem(ShopLot shopLot)
        {
            base.SelectShopLotItem(shopLot);
            _pickableItemsSkinSetuper.SetSelectedSkinToAllItems();
        }
    }
}