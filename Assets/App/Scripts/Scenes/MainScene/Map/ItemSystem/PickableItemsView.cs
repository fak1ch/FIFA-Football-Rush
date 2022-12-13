using System;
using TMPro;
using UnityEngine;

namespace App.Scripts.Scenes.General.ItemSystem
{
    public class PickableItemsView : MonoBehaviour
    {
        [SerializeField] private TextMeshProUGUI _text;
        [SerializeField] private ItemContainer _itemContainer;

        private void Update()
        {
            _text.text = _itemContainer.CurrentPickableItems.ToString();
        }
    }
}