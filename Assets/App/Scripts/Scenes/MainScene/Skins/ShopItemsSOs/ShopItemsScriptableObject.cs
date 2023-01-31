using System;
using System.Collections.Generic;
using UnityEngine;

namespace App.Scripts.Scenes.MainScene.Skins
{
    public class ShopItemsScriptableObject<T> : ScriptableObject where T : ShopItemConfig
    {
        [SerializeField] private List<T> _shopItemConfigs;

        public int SelectedItemIndex { get; private set; }
        public int ShopItemCount => _shopItemConfigs.Count;

        public virtual T GetShopItemConfigByIndex(int index)
        {
            return _shopItemConfigs[index];
        }

        public void SelectItemByConfig(T shopItemConfig)
        {
            for(int i = 0; i < _shopItemConfigs.Count; i++)
            {
                if (_shopItemConfigs[i] == shopItemConfig)
                {
                    SelectedItemIndex = i;
                }
            }
        }
    }

    [Serializable]
    public class ShopItemConfig
    {
        public Sprite itemLotSprite;
        public int price;
        public string itemName;
    }
}