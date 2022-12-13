using App.Scripts.Scenes.General.LevelEndMechanic;
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
        [SerializeField] private CollisionEnterTrigger _collisionEnterTrigger;
        [SerializeField] private TextMeshProUGUI _itemsCountForDestroyText;

        private void OnEnable()
        {
            _itemsCountForDestroyText.text = _itemsCountForDestroy.ToString();
            
            _collisionEnterTrigger.OnCollisionEnterAction += CheckCollisionWithPlayer;
        }

        private void OnDisable()
        {
            _collisionEnterTrigger.OnCollisionEnterAction -= CheckCollisionWithPlayer;
        }

        private void CheckCollisionWithPlayer(Collision collision)
        {
            if (collision.gameObject.TryGetComponent(out MainItem mainItem))
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
            _collisionEnterTrigger.gameObject.SetActive(false);
            _destroyEffect.gameObject.SetActive(true);
            _destroyEffect.DORestart();
        }
    }
}