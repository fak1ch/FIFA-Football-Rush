using System;
using UnityEngine;

namespace App.Scripts.Scenes.General.Map
{
    public class CollisionEnterTrigger : MonoBehaviour
    {
        public event Action<Collision> OnCollisionEnterAction;
        
        private void OnCollisionEnter(Collision collision)
        {
            OnCollisionEnterAction?.Invoke(collision);
        }
    }
}