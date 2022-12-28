using App.Scripts.Scenes.General.ItemSystem;
using UnityEngine;

namespace StarterAssets
{
    public class Player : MonoBehaviour
    {
        [SerializeField] private ItemContainer _playerItemContainer;

        public ItemContainer GetPlayerItemContainer => _playerItemContainer;
    }
}