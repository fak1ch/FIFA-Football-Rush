using System;
using StarterAssets.InputSystems;
using UnityEngine;

namespace StarterAssets.Animations
{
    public class StickmanView : MonoBehaviour
    {
        [SerializeField] private float _rotateSpeed;
        [SerializeField] private PlayerMovement _playerMovement;

        private void Update()
        {
            if (_playerMovement.MoveDirection != Vector3.zero)
            {
                Quaternion newRotation = Quaternion.LookRotation(_playerMovement.MoveDirection, Vector3.up);
                transform.rotation = Quaternion.RotateTowards(transform.rotation, newRotation, 
                    _rotateSpeed * Time.deltaTime);
            }
        }
    }
}