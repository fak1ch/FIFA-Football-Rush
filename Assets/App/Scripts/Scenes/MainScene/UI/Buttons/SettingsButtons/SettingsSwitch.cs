using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace App.Scripts.Scenes.General.UI.Buttons
{
    public class SettingsSwitch : MonoBehaviour, IPointerClickHandler
    {
        [SerializeField] private Image _image;
        [SerializeField] private Sprite _switchOn;
        [SerializeField] private Sprite _switchOff;

        private bool _isOn;
        public bool IsOn => _isOn;
        
        public virtual void OnPointerClick(PointerEventData eventData)
        {
            _isOn = !_isOn;

            Sprite newSprite = _isOn ? _switchOn : _switchOff;
            _image.sprite = newSprite;
        }
    }
}