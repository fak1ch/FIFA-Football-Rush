using System;
using System.Collections.Generic;
using UnityEngine;

namespace App.Scripts.Scenes.MainScene.Skins
{
    public class ShopItemsScriptableObject<T> : ScriptableObject where T : ShopItemConfig
    {
        [SerializeField] private string SelectedItemIndexKey = "SelectedItemIndexKey";
        
        [SerializeField] private List<T> _shopItemConfigs;

        private int _selectedItemIndex = 0;
        
        public int SelectedItemIndex => _selectedItemIndex;
        public int ShopItemCount => _shopItemConfigs.Count;

        public void LoadSaves()
        {
            _selectedItemIndex = PlayerPrefs.GetInt(SelectedItemIndexKey, 0);
        }

        private void SaveSaves()
        {
            PlayerPrefs.SetInt(SelectedItemIndexKey, _selectedItemIndex);
        }
        
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
                    _selectedItemIndex = i;
                }
            }
            
            SaveSaves();
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