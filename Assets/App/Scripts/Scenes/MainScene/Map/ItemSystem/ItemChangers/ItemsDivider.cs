using UnityEngine;

namespace App.Scripts.Scenes.General.ItemSystem.ItemChangers
{
    public class ItemsDivider : ItemChanger
    {
        [SerializeField] private float _divider;
        
        protected override void ChangeItemCount(ItemContainer itemContainer)
        {
            int currentItemCount = itemContainer.CurrentPickableItems;
            int newItemCount = (int)(currentItemCount / _divider);
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
        
        protected override string GetChangeText()
        {
            return $"÷{_divider}";
        }
        
        protected override bool IsEquationPositive()
        {
            return _divider < 1;
        }
    }
}