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
        [SerializeField] private CollisionObject _collisionObject;
        [SerializeField] private TextMeshProUGUI _itemsCountForDestroyText;

        private void OnEnable()
        {
            _itemsCountForDestroyText.text = _itemsCountForDestroy.ToString();
            
            _collisionObject.CollisionEnter += CheckCollisionWithPlayer;
        }

        private void OnDisable()
        {
            _collisionObject.CollisionEnter -= CheckCollisionWithPlayer;
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
            _collisionObject.gameObject.SetActive(false);
            _destroyEffect.gameObject.SetActive(true);
            _destroyEffect.DORestart();
        }
    }
}