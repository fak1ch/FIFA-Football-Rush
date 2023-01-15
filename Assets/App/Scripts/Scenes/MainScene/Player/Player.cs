using App.Scripts.Scenes.General.ItemSystem;
using StarterAssets.Animations;
using StarterAssets.NewMovement;
using UnityEngine;

namespace StarterAssets
{
    public class Player : MonoBehaviour
    {
        [SerializeField] private ItemContainer _playerItemContainer;
        [SerializeField] private StickmanView _stickmanView;
        [SerializeField] private ForwardSmoothMovement _forwardSmoothMovement;

        public ItemContainer PlayerItemContainer => _playerItemContainer;

        public void SetPlayerCanMove(bool value)
        {
            _stickmanView.SetCanMove(value);
            _forwardSmoothMovement.SetCanMove(value);
        }
    }
}