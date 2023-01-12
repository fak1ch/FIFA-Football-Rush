using System;
using UnityEngine;

namespace App.Scripts.Scenes.MainScene.Map.LevelEndMechanic
{
    public class SoccerGate : MonoBehaviour
    {
        [SerializeField] private Trigger _trigger;

        private void OnEnable()
        {
            _trigger.TriggerEnter += HandleTriggerEnter;
        }

        private void OnDisable()
        {
            _trigger.TriggerEnter -= HandleTriggerEnter;
        }

        private void HandleTriggerEnter(Collider inputCollider)
        {
            if (inputCollider.TryGetComponent(out MainItem mainItem))
            {
                mainItem.StartLevelPassedAnimation();
            }
        }
    }
}