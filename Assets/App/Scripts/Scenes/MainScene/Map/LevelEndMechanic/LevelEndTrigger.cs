using System;
using StarterAssets.Animations;
using UnityEngine;

namespace App.Scripts.Scenes.General.LevelEndMechanic
{
    public class LevelEndTrigger : MonoBehaviour
    {
        public event Action OnCollisionEnterWithStickman;
        
        private void OnCollisionEnter(Collision collision)
        {
            if (collision.gameObject.TryGetComponent(out StickmanView stickmanView))
            {
                OnCollisionEnterWithStickman?.Invoke();
            }
        }
    }
}