using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace App.Scripts.Scenes.MainScene.Skins.UI
{
    public class ShopLotsInitializer<T> : MonoBehaviour where T : ShopItemConfig
    {
        [SerializeField] private ShopItemsScriptableObject<T> _shopItemsConfig;
        [SerializeField] private ShopLot _shopLotPrefab;
        [SerializeField] private GridLayoutGroup _shopLotContainer;

        private readonly List<ShopLot> _shopLots = new List<ShopLot>();

        public void Initialize()
        {
            for (int i = 0; i < _shopItemsConfig.ShopItemCount; i++)
            {
                ShopLot shopLot = Instantiate(_shopLotPrefab, _shopLotContainer.transform);
                shopLot.Initialize(_shopItemsConfig.GetShopItemConfigByIndex(i));
                shopLot.SetActiveItemSelectedView(false);
                shopLot.OnItemSelected += SelectShopLotItem;
                
                _shopLots.Add(shopLot);
            }
            
            SelectShopLotItem(_shopLots[_shopItemsConfig.SelectedItemIndex]);
        }

        protected virtual void SelectShopLotItem(ShopLot shopLot)
        {
            SwitchOffAllItemSelectedViews();
            shopLot.SetActiveItemSelectedView(true);
            _shopItemsConfig.SelectItemByConfig((T)shopLot.ShopItemConfig);
        }

        private void SwitchOffAllItemSelectedViews()
        {
            foreach (ShopLot shopLot in _shopLots)
            {
                shopLot.SetActiveItemSelectedView(false);
            }
        }
    }
}