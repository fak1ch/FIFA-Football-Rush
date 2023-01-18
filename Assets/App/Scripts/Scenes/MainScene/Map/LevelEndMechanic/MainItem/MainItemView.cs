using System;
using App.Scripts.Scenes.General.ItemSystem;
using Cinemachine;
using TMPro;
using UnityEngine;

namespace App.Scripts.Scenes.MainScene.Map.LevelEndMechanic
{
    [Serializable]
    public class MainItemViewConfig
    {
        [Space(10)]
        public float scaleValueForOnePickableItem = 0.01f;
        public float massValueForOnePickableItem = 0.01f;
        public float cinemachineDistanceForOnePickableItemValue = 0.001f;
    }
    
    public class MainItemView : MonoBehaviour
    {
        private MainItemViewConfig _config;
        private Cinemachine3rdPersonFollow _cinemachine3RdPersonFollow;
        private TextMeshProUGUI _itemsCountText;
        private PickableItem _pickableItem;

        public void Initialize(MainItemViewConfig mainItemViewConfig, MainItem mainItem, 
            CinemachineVirtualCamera virtualCamera, TextMeshProUGUI text, PickableItem pickableItem)
        {
            _config = mainItemViewConfig;
            _cinemachine3RdPersonFollow = virtualCamera.GetCinemachineComponent<Cinemachine3rdPersonFollow>();
            _itemsCountText = text;
            _pickableItem = pickableItem;
            mainItem.OnAddedItem += UpdateView;
        }

        private void UpdateView(int currentItemsCount)
        {
            _itemsCountText.text = currentItemsCount.ToString();

            AddMassToItem();
            ScaleMainItem();
            ChangeCameraDistance();
        }

        private void AddMassToItem()
        {
            _pickableItem.AddMass(_config.massValueForOnePickableItem);
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