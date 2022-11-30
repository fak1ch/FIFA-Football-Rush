using UnityEngine;

namespace App.Scripts.Scenes.General.ItemSystem.ItemChangers
{
    public class ItemsMinus : ItemChanger
    {
        [SerializeField] private int _minusItemsValue;
        
        protected override void ChangeItemCount(ItemContainer itemContainer)
        {
            itemContainer.RemoveSomePickableItems(_minusItemsValue);
        }
    }
}