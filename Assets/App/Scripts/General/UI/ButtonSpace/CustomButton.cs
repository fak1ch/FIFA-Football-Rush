    using ButtonSpace;
using DG.Tweening;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace App.Scripts.General.UI.ButtonSpace
{
    public class CustomButton : MonoBehaviour, IPointerDownHandler, IPointerUpHandler, IPointerEnterHandler, IPointerExitHandler, IPointerClickHandler
    {
        public bool interactable = true;
        
        [Space(10)]
        [SerializeField] private Transform _button;
        [SerializeField] private Image _buttonImage;
        [SerializeField] private ButtonScriptableObject _settings;

        [Space(10)] 
        [SerializeField] private bool _playButtonClickSound = true;
        [SerializeField] private bool _waitTillTheEndAnimation = true;

        public UnityEvent onClickOccurred;
        
        private Vector3 _startScale;
        private Color _startColor;
        private Tween _scaleTween;
        private Tween _colorTween;
        
        private bool _onPointerClickOpen = false;
        private bool _pointerExit = false;
        private bool _isPressed = false;
        private bool _pointerOverButton;

        public bool IsButtonPressed => _isPressed;
        public bool PointerOverButton => _pointerOverButton;
        
        private void Awake()
        {
            _startScale = _button.transform.localScale;
            _startColor = _buttonImage.color;
        }

        public void OnPointerDown(PointerEventData eventData)
        {
            if (!interactable) return;
            
            _scaleTween = _button.transform.DOScale(
                _startScale * _settings.pressedScalePercent, + _settings.scaleDuration);
            _colorTween = _buttonImage.DOColor(_settings.pressedColor, _settings.changeColorDuration);

            _isPressed = true;
            _onPointerClickOpen = false;
            _pointerExit = false;
        }

        public void OnPointerUp(PointerEventData eventData)
        {
            if (!interactable) return;
            
            _scaleTween = _button.transform.DOScale(
                _startScale, _settings.scaleDuration);
            _colorTween = _buttonImage.DOColor(_startColor, _settings.changeColorDuration);

            if (_pointerExit) return;
            
            _onPointerClickOpen = true;
            _isPressed = false;
        }

        public void OnPointerEnter(PointerEventData eventData)
        {
            _pointerOverButton = true;
        }
        
        public void OnPointerExit(PointerEventData eventData)
        {
            if (!interactable) return;
            
            _scaleTween = _button.transform.DOScale(
                _startScale, _settings.scaleDuration);
            _colorTween = _buttonImage.DOColor(_startColor, _settings.changeColorDuration);

            _onPointerClickOpen = false;
            _pointerExit = true;
            _isPressed = false;
            _pointerOverButton = false;
        }

        public void OnPointerClick(PointerEventData eventData)
        {
            if (!interactable) return;
            
            if (_onPointerClickOpen)
            {
                interactable = false;
                
                if (_playButtonClickSound)
                {
                    ButtonClickSoundHandler.Instance.PlayCustomButtonClickSound();
                }

                if (_waitTillTheEndAnimation)
                {
                    _scaleTween.OnComplete(ClickHappened);
                }
                else
                {
                    ClickHappened();
                }
            }
        }

        private void ClickHappened()
        {
            interactable = true;
            onClickOccurred?.Invoke();
        }
    }
}