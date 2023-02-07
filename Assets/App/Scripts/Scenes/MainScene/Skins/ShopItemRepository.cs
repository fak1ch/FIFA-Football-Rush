using System;
using App.Scripts.General.Google;
using UnityEngine;

namespace App.Scripts.Scenes.MainScene.Skins
{
    public class ShopItemRepository
    {
        private readonly string ItemPurchasedKey = "PurchasedKey";
        private ShopItemConfig _shopItemConfig;
        
        public bool IsPurchased { get; private set; }

        public ShopItemRepository(ShopItemConfig shopItemConfig)
        {
            _shopItemConfig = shopItemConfig;
            ItemPurchasedKey += _shopItemConfig.itemName;
            IsPurchased = PlayerPrefs.GetInt(ItemPurchasedKey, 0) == 1;
        }

        public void SetItemAsPurchased()
        {
            IsPurchased = true;
            SaveRepositoryData();
            FirebaseAnalysis.Instance.SendSkinWasPurchased(_shopItemConfig.itemName);
        }

        private void SaveRepositoryData()
        {
            PlayerPrefs.SetInt(ItemPurchasedKey, Convert.ToInt32(IsPurchased));
        }
    }
}