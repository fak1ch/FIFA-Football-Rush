using System;
using System.Collections.Generic;
using Pool;
using UnityEngine;

namespace App.Scripts.Scenes.General.ItemSystem
{
    [Serializable]
    public class ItemContainerConfig
    {
        public PoolData<PickableItem> poolData;
        public float offsetY = 0.7f;
    }
    
    public class ItemContainer : MonoBehaviour
    {
        [SerializeField] private Transform _containerForPool;
        [SerializeField] private GameConfigScriptableObject _gameConfig;

        private ItemContainerConfig _config;
        private ObjectPool<PickableItem> _itemsPool;
        private Stack<PickableItem> _activePickableItems;

        public int CurrentPickableItems => _activePickableItems.Count;
        
        private void Start()
        {
            _config = _gameConfig.itemContainerConfig;
            _config.poolData.container = _containerForPool;
            _itemsPool = new ObjectPool<PickableItem>(_config.poolData);
            _activePickableItems = new Stack<PickableItem>();
        }

        public void AddOnePickableItem(PickableItem pickableItem)
        {
            pickableItem.transform.SetParent(_config.poolData.container);
            pickableItem.transform.localPosition = new Vector3(
                0, _activePickableItems.Count * _config.offsetY, 0);
            _activePickableItems.Push(pickableItem);
            
            pickableItem.gameObject.SetActive(true);
        }

        private void RemoveLastPickableItem()
        {
            PickableItem pickableItem = _activePickableItems.Pop();
            pickableItem.gameObject.SetActive(false);
            _itemsPool.ReturnElementToPool(pickableItem);
        }
        
        public void AddSomePickableItems(int value)
        {
            for (int i = 0; i < value; i++)
            {
                AddOnePickableItem(_itemsPool.GetElement());
            }
        }
        
        public void RemoveSomePickableItems(int value)
        {
            if (_activePickableItems.Count < value)
            {
                value = _activePickableItems.Count;
            }

            for (int i = 0; i < value; i++)
            {
                RemoveLastPickableItem();
            }
        }
    }
}