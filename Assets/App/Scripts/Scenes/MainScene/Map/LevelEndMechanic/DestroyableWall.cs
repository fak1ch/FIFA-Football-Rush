using App.Scripts.Scenes.MainScene.Map.LevelEndMechanic;
using DG.Tweening;
using TMPro;
using UnityEngine;

namespace App.Scripts.Scenes.General.Map
{
    public class DestroyableWall : MonoBehaviour
    {
        [SerializeField] private int _itemsCountForDestroy = 10;

        [Space(10)]
        [SerializeField] private ParticleSystem _destroyEffect;
        [SerializeField] private Trigger _trigger;
        [SerializeField] private TextMeshProUGUI _itemsCountForDestroyText;

        private void OnEnable()
        {
            _itemsCountForDestroyText.text = _itemsCountForDestroy.ToString();
            
            _trigger.TriggerEnter += HandleTriggerEnter;
        }

        private void OnDisable()
        {
            _trigger.TriggerEnter -= HandleTriggerEnter;
        }

        private void HandleTriggerEnter(Collider collider)
        {
            if (collider.TryGetComponent(out MainItem mainItem))
            {
                if (mainItem.CurrentItemsCount >= _itemsCountForDestroy)
                {
                    DestroyWall();
                }
                else
                {
                    mainItem.StartGameOverAnimation();
                }
            }
        }
        
        private void DestroyWall()
        {
            _trigger.gameObject.SetActive(false);
            _destroyEffect.gameObject.SetActive(true);
            _destroyEffect.DORestart();
        }
    }
}