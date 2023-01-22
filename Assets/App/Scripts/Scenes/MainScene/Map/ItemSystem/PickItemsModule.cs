using System;
using UnityEngine;

namespace App.Scripts.Scenes.General.ItemSystem
{
    public class PickItemsModule : MonoBehaviour
    {
        [SerializeField] private ItemContainer _itemContainer;
        [SerializeField] private CollisionObject _playerCollisionObject;
        [SerializeField] private AudioSource _audioSource;

        private void OnEnable()
        {
            _playerCollisionObject.CollisionEnter += HandleCollisionEnter;
        }

        private void OnDisable()
        {
            _playerCollisionObject.CollisionEnter -= HandleCollisionEnter;
        }
        
        private void HandleCollisionEnter(Collision collision)
        {
            if (collision.gameObject.TryGetComponent(out PickableItem pickableItem))
            {
                if (pickableItem.CanPick == false) return;
                
                pickableItem.OnLocalMoveAnimationComplete += FinalizePickableItem;
                pickableItem.LocalMoveToPosition(_itemContainer.GetLocalPositionToNextItem());
                
                _itemContainer.AddPickableItemWithoutTeleport(pickableItem);
                _audioSource.Play();
            }
        }

        private void FinalizePickableItem(PickableItem pickableItem) 
        {
            pickableItem.OnLocalMoveAnimationComplete -= FinalizePickableItem;
            
            pickableItem.gameObject.SetActive(_itemContainer.IsItemByIndexVisible(pickableItem.ItemIndexInContainer));
        }
    }
}