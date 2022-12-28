using StarterAssets;
using UnityEngine;

namespace App.Scripts.Scenes.General.ItemSystem
{
    public abstract class ItemChanger : MonoBehaviour
    {
        private void OnCollisionEnter(Collision collision)
        {
            if (collision.gameObject.TryGetComponent(out Player player))
            {
                ChangeItemCount(player.GetPlayerItemContainer);
                gameObject.SetActive(false);
            }
        }

        protected abstract void ChangeItemCount(ItemContainer itemContainer);
    }
}