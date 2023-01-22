using UnityEngine;

namespace App.Scripts.Scenes.General.ItemSystem.ItemChangers
{
    public class ItemsAdder : ItemChanger
    {
        [SerializeField] private int _addItemsValue;

        protected override void ChangeItemCount(ItemContainer itemContainer)
        {
            itemContainer.AddSomePickableItems(_addItemsValue);
        }

        protected override string GetChangeText()
        {
            return $"+{_addItemsValue}";
        }

        protected override bool IsEquationPositive()
        {
            return true;
        }
    }
}