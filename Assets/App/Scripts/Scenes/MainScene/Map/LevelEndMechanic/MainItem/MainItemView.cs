using System;
using Cinemachine;
using TMPro;
using UnityEngine;

namespace App.Scripts.Scenes.MainScene.Map.LevelEndMechanic
{
    [Serializable]
    public class MainItemViewConfig
    {
        public CinemachineVirtualCamera mainItemCamera;
        public TextMeshProUGUI itemsCountText;

        [Space(10)]
        public float scaleValueForOnePickableItem = 0.01f;
        public float cinemachineDistanceForOnePickableItemValue = 0.001f;
    }
    
    public class MainItemView : MonoBehaviour
    {
        private MainItemViewConfig _config;
        private Cinemachine3rdPersonFollow _cinemachine3RdPersonFollow;

        public void Initialize(MainItemViewConfig mainItemViewConfig, MainItem mainItem)
        {
            _config = mainItemViewConfig;
            _cinemachine3RdPersonFollow = _config.mainItemCamera.GetCinemachineComponent<Cinemachine3rdPersonFollow>();
            mainItem.OnAddedItem += UpdateView;
        }

        private void UpdateView(int currentItemsCount)
        {
            _config.itemsCountText.text = currentItemsCount.ToString();
            
            ScaleMainItem();
            ChangeCameraDistance();
        }

        private void ScaleMainItem()
        {
            float value = _config.scaleValueForOnePickableItem;
            Vector3 addScaleValue = new Vector3(value, value, value);
            transform.localScale += addScaleValue;
        }

        private void ChangeCameraDistance()
        {
            _cinemachine3RdPersonFollow.CameraDistance += _config.cinemachineDistanceForOnePickableItemValue;
        }
    }
}