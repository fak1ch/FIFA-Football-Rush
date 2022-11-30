using System;
using System.Collections.Generic;
using Pool;
using UnityEngine;

namespace App.Scripts.Scenes.General.ItemSystem
{
    public class ItemContainer : MonoBehaviour
    {
        [SerializeField] private PoolData<PickableItem> _poolData;

        [Space(10)] 
        [SerializeField] private float _offsetY = 0.7f;
        
        private ObjectPool<PickableItem> _itemsPool;
        private Stack<PickableItem> _activePickableItems;

        public int CurrentPickableItems => _activePickableItems.Count;
        
        private void Start()
        {
            _itemsPool = new ObjectPool<PickableItem>(_poolData);
            _activePickableItems = new Stack<PickableItem>();
        }

        public void AddOnePickableItem(PickableItem pickableItem)
        {
            pickableItem.transform.SetParent(_poolData.container);
            pickableItem.transform.localPosition = new Vector3(0, _activePickableItems.Count * _offsetY, 0);
            _activePickableItems.Push(pickableItem);
            
            pickableItem.gameObject.SetActive(true);
        }

        private void RemoveOnePickableItem()
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
                RemoveOnePickableItem();
            }
        }
    }
}