using System;
using System.Collections.Generic;
using App.Scripts.Scenes;
using UnityEngine;

namespace Assets.App.Scripts.Scenes.MainScene.Map.Level.LevelEndMechanic
{
    [Serializable]
    public class ExplosiveGeneratorConfig
    {
        public float ExplosionForce;
        public float ExplosionRadius;
    }

    public class ExplosiveGenerator : MonoBehaviour
    {
        [SerializeField] private GameConfigScriptableObject _gameConfig;
        private ExplosiveGeneratorConfig _config;

        [SerializeField] private ParticleSystem _explosiveTrails;
        [SerializeField] private AudioSource _audioSource;

        private void Start()
        {
            _config = _gameConfig.levelObjectConfigs.ExplosiveGeneratorConfig;
        }

        public void Explode(List<Rigidbody> rigidbodies)
        {
            _explosiveTrails.gameObject.SetActive(true);
            _explosiveTrails.Play();
            
            _audioSource.Play();
            
            foreach (var rb in rigidbodies)
            {
                rb.AddExplosionForce(_config.ExplosionForce, transform.position, _config.ExplosionRadius);
            }
        }
    }
}