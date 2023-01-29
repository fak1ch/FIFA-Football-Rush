using System.Collections.Generic;
using App.Scripts.Scenes;
using App.Scripts.Scenes.General;
using UnityEngine;

namespace Assets.App.Scripts.Scenes.MainScene.Map.Level.LevelEndMechanic
{
    public class SoccerGate : MonoBehaviour
    {
        [SerializeField] private Trigger _trigger;
        [SerializeField] private GameEvents _gameEvents;

        [Space(10)]
        [SerializeField] private ExplosiveGenerator _explosiveGenerator;
        [SerializeField] private List<Rigidbody> _rigidbodiesForExplosive;

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
            if (inputCollider.TryGetComponent(out MainItem.MainItem mainItem))
            {
                _gameEvents.EndLevel(true);
                _rigidbodiesForExplosive.Add(mainItem.GetComponent<Rigidbody>());
                _explosiveGenerator.Explode(_rigidbodiesForExplosive);
            }
        }
    }
}