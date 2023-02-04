using System;
using System.Collections.Generic;
using App.Scripts.Scenes.General.ItemSystem;
using App.Scripts.Scenes.MainScene.Skins;
using UnityEngine;

namespace App.Scripts.Scenes.General.LevelCreation
{
    public class PickableItemsSkinSetuper : MonoBehaviour
    {
        [SerializeField] private BallsScriptableObject _ballsConfig;
        [SerializeField] private List<PickableItem> _pickableItems;

        private ItemContainer _itemContainer;

        private BallConfig _selectedBallConfig => 
            _ballsConfig.GetShopItemConfigByIndex(_ballsConfig.SelectedItemIndex);

        public void Initialize(ItemContainer itemContainer)
        {
            _itemContainer = itemContainer;
            _itemContainer.OnAddedItemVisible += SetSelectedSkitToItem;
            SetSelectedSkinToAllItems();
        }
        
        public void SetPickableItemList(List<PickableItem> pickableItems)
        {
            _pickableItems = pickableItems;
        }

        public void SetSelectedSkinToAllItems()
        {
            foreach (var pickableItem in _pickableItems)
            {
                SetSelectedSkitToItem(pickableItem);
            }
        }

        private void SetSelectedSkitToItem(PickableItem pickableItem)
        {
            pickableItem.SetSkin(_selectedBallConfig);
        }

        private void OnDestroy()
        {
            if (_itemContainer != null)
            {
                _itemContainer.OnAddedItemVisible -= SetSelectedSkitToItem;
            }
        }
    }
}