using System;
using App.Scripts.Scenes.General.Map;
using Cinemachine;
using TMPro;
using UnityEngine;

namespace Assets.App.Scripts.Scenes.MainScene.Map.Level.LevelEndMechanic
{
    [Serializable]
    public class MainItemViewConfig
    {
        [Space(10)]
        public float scaleValueForOnePickableItem = 0.01f;
        public float massValueForOnePickableItem = 0.01f;
        public float cinemachineDistanceForOnePickableItem = 0.001f;
        public Vector3 cameraTargetPointOffsetForOnePickableItem;
    }

    [Serializable]
    public class MainItemViewData
    {
        public CinemachineVirtualCamera virtualCamera;
        public TextMeshProUGUI itemsCountText;
        public CopyPositionObject cameraTargetPoint;
    }
    
    public class MainItemView : MonoBehaviour
    {
        private MainItemViewConfig _config;
        private MainItemViewData _data;
        private MainItem _mainItem;
        private Cinemachine3rdPersonFollow _cinemachine3RdPersonFollow;

        public void Initialize(MainItemViewConfig mainItemViewConfig, MainItemViewData data, MainItem mainItem)
        {
            _config = mainItemViewConfig;
            _data = data;
            
            _data.itemsCountText.gameObject.SetActive(true);
            _cinemachine3RdPersonFollow = _data.virtualCamera.GetCinemachineComponent<Cinemachine3rdPersonFollow>();
            _mainItem = mainItem;
            _mainItem.OnAddedItem += UpdateView;
        }

        private void UpdateView(int currentItemsCount)
        {
            _data.itemsCountText.text = currentItemsCount.ToString();

            AddMassToItem();
            ScaleMainItem();
            ChangeCameraDistance();
            AddOffsetToCameraTarget();
        }

        private void AddMassToItem()
        {
            _mainItem.PickableItem.AddMass(_config.massValueForOnePickableItem);
        }

        private void ScaleMainItem()
        {
            float value = _config.scaleValueForOnePickableItem;
            Vector3 addScaleValue = new Vector3(value, value, value);
            transform.localScale += addScaleValue;
        }

        private void ChangeCameraDistance()
        {
            _cinemachine3RdPersonFollow.CameraDistance += _config.cinemachineDistanceForOnePickableItem;
        }
        
        private void AddOffsetToCameraTarget()
        {
            _data.cameraTargetPoint.AddOffsetToPosition(_config.cameraTargetPointOffsetForOnePickableItem);
        }
    }
}