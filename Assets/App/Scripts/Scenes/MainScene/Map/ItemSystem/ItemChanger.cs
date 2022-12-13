using UnityEngine;

namespace App.Scripts.Scenes.General.ItemSystem
{
    public class ItemChanger : MonoBehaviour
    {
        private void OnCollisionEnter(Collision collision)
        {
            if (collision.gameObject.TryGetComponent(out ItemContainer itemContainer))
            {
                ChangeItemCount(itemContainer);
                gameObject.SetActive(false);
            }
        }

        protected virtual void ChangeItemCount(ItemContainer itemContainer)
        {
            
        }
    }
}