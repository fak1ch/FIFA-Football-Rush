using App.Scripts.Scenes.General.Map;
using Cinemachine;
using UnityEngine;

namespace App.Scripts.Scenes.MainScene.Map.LevelEndMechanic
{
    public class CameraTargetSetuper : MonoBehaviour
    {
        [SerializeField] private CinemachineVirtualCamera _followMainItemCamera;
        [SerializeField] private CopyPositionObject _copyPositionObject;

        public void SetupTarget(Transform target)
        {
            _copyPositionObject.SetupTarget(target);
            _followMainItemCamera.m_Follow = _copyPositionObject.transform;
        }
    }
}