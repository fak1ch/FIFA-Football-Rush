using UnityEngine;

namespace App.Scripts.Scenes.General.ItemSystem.ItemChangers
{
    public class ItemsMultiplier : ItemChanger
    {
        [SerializeField] private float _multiplier;
        
        protected override void ChangeItemCount(ItemContainer itemContainer)
        {
            int currentItemCount = itemContainer.CurrentPickableItems;
            int newItemCount = (int)(currentItemCount * _multiplier);
            int delta = newItemCount - currentItemCount;

            if (delta > 0)
            {
                itemContainer.AddSomePickableItems(delta);
            }
            else
            {
                itemContainer.RemoveSomePickableItems(delta * -1);
            }
        }
    }
}