using System;
using UnityEngine;

namespace App.Scripts.Scenes.General.ItemSystem
{
    public class PickableItem : MonoBehaviour
    {
        private void OnCollisionEnter(Collision collision)
        {
            if (collision.gameObject.TryGetComponent(out ItemContainer itemContainer))
            {
                itemContainer.AddOnePickableItem(this);
            }
        }
    }
}