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
        [SerializeField] private CollisionObject _collisionObject;
        [SerializeField] private Trigger _trigger;
        [SerializeField] private Collider _collider;
        [SerializeField] private TextMeshProUGUI _itemsCountForDestroyText;

        #region Events

        private void OnEnable()
        {
            _itemsCountForDestroyText.text = _itemsCountForDestroy.ToString();
            
            _collisionObject.CollisionEnter += HandleCollisionEnter;
            _trigger.TriggerEnter += HandleTriggerEnter;
        }

        private void OnDisable()
        {
            _collisionObject.CollisionEnter -= HandleCollisionEnter;
            _trigger.TriggerEnter -= HandleTriggerEnter;
        }

        #endregion

        public void Initialize(MainItem mainItem)
        {
            _collider.isTrigger = mainItem.CurrentItemsCount >= _itemsCountForDestroy;
        }

        private void HandleTriggerEnter(Collider target)
        {
            if (target.TryGetComponent(out MainItem mainItem))
            {
                DestroyWall();
            }
        }
        
        private void HandleCollisionEnter(Collision collision)
        {
            if (collision.gameObject.TryGetComponent(out MainItem mainItem))
            {
                mainItem.StartGameOverAnimation();
            }
        }
        
        private void DestroyWall()
        {
            _collisionObject.gameObject.SetActive(false);
            _destroyEffect.gameObject.SetActive(true);
            _destroyEffect.DORestart();
        }
    }
}