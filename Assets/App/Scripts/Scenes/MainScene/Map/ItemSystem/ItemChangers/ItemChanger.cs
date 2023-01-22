using System;
using DG.Tweening;
using StarterAssets;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace App.Scripts.Scenes.General.ItemSystem
{
    [Serializable]
    public class ItemChangerConfig
    {
        public Color positiveColor;
        public Color negativeColor;
    }
    
    public abstract class ItemChanger : MonoBehaviour
    {
        public event Action CollisionWithPlayer;
        
        [SerializeField] private GameConfigScriptableObject _gameConfig;
        private ItemChangerConfig _config;
        
        [SerializeField] private Image _backgroundImage;
        [SerializeField] private TextMeshProUGUI _changeText;
        [SerializeField] private GameObject _meshObject;
        [SerializeField] private ParticleSystem _pickEffect;
        [SerializeField] private AudioSource _audioSource;

        private int _itemsCountBeforeChange; 

        private void Start()
        {
            _config = _gameConfig.itemChangerConfig;
            
            _changeText.text = GetChangeText();
            _backgroundImage.color = IsEquationPositive() ? _config.positiveColor : _config.negativeColor;
        }

        private void OnCollisionEnter(Collision collision)
        {
            if (collision.gameObject.TryGetComponent(out Player player))
            {
                CollisionWithPlayer?.Invoke();
                
                _audioSource.Play();
                ChangeItemCount(player.ItemContainer);
                ShowPickEffect();
                HideItemChanger();
            }
        }

        public void HideItemChanger()
        {
            _meshObject.SetActive(false);
        }

        private void ShowPickEffect()
        {
            _pickEffect.gameObject.SetActive(true);
            _pickEffect.DORestart();
        }
        
        protected abstract void ChangeItemCount(ItemContainer itemContainer);
        protected abstract string GetChangeText();
        protected abstract bool IsEquationPositive();
    }
}