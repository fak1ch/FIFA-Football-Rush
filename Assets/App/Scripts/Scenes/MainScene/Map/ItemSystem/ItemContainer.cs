﻿using System;
using System.Collections.Generic;
using System.Linq;
using Pool;
using UnityEngine;

namespace App.Scripts.Scenes.General.ItemSystem
{
    [Serializable]
    public class ItemContainerConfig
    {
        public PoolData<PickableItem> poolData;
        public float offsetY = 0.7f;
        public int visibleItemCount = 15;
    }
    
    public class ItemContainer : MonoBehaviour
    {
        [SerializeField] private Transform _containerForPool;
        [SerializeField] private Transform _containerForCantPickItems;
        [SerializeField] private GameEvents _gameEvents;
        [SerializeField] private GameConfigScriptableObject _gameConfig;

        private ItemContainerConfig _config;
        private ObjectPool<PickableItem> _itemsPool;
        private Stack<PickableItem> _pickableItems;

        public int CurrentPickableItems => _pickableItems.Count;
        private bool IsNextItemVisible => CurrentPickableItems <= _config.visibleItemCount;
        
        private void Start()
        {
            _config = _gameConfig.itemContainerConfig;
            _config.poolData.container = _containerForPool;
            _itemsPool = new ObjectPool<PickableItem>(_config.poolData);
            _pickableItems = new Stack<PickableItem>();
        }

        public bool IsItemByIndexVisible(int indexInContainer)
        {
            return indexInContainer <= _config.visibleItemCount 
                   && indexInContainer <= _pickableItems.Count;
        }
        
        public Vector3 GetLocalPositionToNextItem()
        {
            float itemsCount = IsNextItemVisible ? _pickableItems.Count : _config.visibleItemCount;
            
            return new Vector3(0, itemsCount * _config.offsetY, 0);
        }

        public void AddPickableItemWithoutTeleport(PickableItem pickableItem)
        {
            pickableItem.SetActiveGravity(false);
            pickableItem.SetActiveCollider(false);
            _pickableItems.Push(pickableItem);
            pickableItem.ItemIndexInContainer = _pickableItems.Count;
            pickableItem.transform.SetParent(_config.poolData.container);
        }
        
        private void AddPickableItem(PickableItem pickableItem)
        {
            Vector3 newLocalPosition = GetLocalPositionToNextItem();
            
            AddPickableItemWithoutTeleport(pickableItem);

            pickableItem.transform.localPosition = newLocalPosition;
            pickableItem.gameObject.SetActive(IsNextItemVisible);
        }

        private void RemovePickableItem(PickableItem pickableItem)
        {
            pickableItem.gameObject.SetActive(false);
            _itemsPool.ReturnElementToPool(pickableItem);
        }
        
        public void AddSomePickableItems(int value)
        {
            for (int i = 0; i < value; i++)
            {
                AddPickableItem(_itemsPool.GetElement());
            }
        }
        
        public void RemoveSomePickableItems(int value)
        {
            if (CurrentPickableItems <= 0)
            {
                _gameEvents.EndLevelWithLose();
                return;
            }
            
            if (_pickableItems.Count < value)
            {
                value = _pickableItems.Count;
            }

            for (int i = 0; i < value; i++)
            {
                RemovePickableItem(GetPickableItem());
            }
        }

        public void RemoveSomePickableItemsWithAnimation(int value)
        {
            if (CurrentPickableItems <= 0)
            {
                _gameEvents.EndLevelWithLose();
                return;
            }
            
            while (value > 0 && CurrentPickableItems > 0)
            {
                PickableItem pickableItem = GetPickableItem();
                RemovePickableItem(pickableItem);
                pickableItem.CanPick = false;

                pickableItem.transform.localPosition = GetLocalPositionToNextItem();
                pickableItem.transform.SetParent(_containerForCantPickItems);
                pickableItem.SetActiveCollider(true);
                pickableItem.SetActiveGravity(true);
                pickableItem.gameObject.SetActive(true);
                
                value--;
            }
        }

        public PickableItem GetPickableItem()
        {
            return _pickableItems.Pop();
        }
    }
}