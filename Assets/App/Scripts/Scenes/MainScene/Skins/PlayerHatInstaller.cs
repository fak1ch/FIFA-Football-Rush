using UnityEngine;

namespace App.Scripts.Scenes.MainScene.Skins
{
    public class PlayerHatInstaller : MonoBehaviour
    {
        [SerializeField] private HatsScriptableObject _hatsConfig;
        [SerializeField] private Transform _playerHatPoint;
        
        private GameObject _currentHat;

        public void PutOnSelectedHat()
        {
            if (_currentHat != null)
            {
                Destroy(_currentHat);
            }

            GameObject hatPrefab = _hatsConfig.GetShopItemConfigByIndex(_hatsConfig.SelectedItemIndex).hatPrefab;

            _currentHat = Instantiate(hatPrefab, _playerHatPoint);
            _currentHat.transform.localPosition = Vector3.zero;
        }
    }
}