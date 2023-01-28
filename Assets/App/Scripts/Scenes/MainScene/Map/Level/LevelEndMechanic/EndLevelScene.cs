using UnityEngine;

namespace Assets.App.Scripts.Scenes.MainScene.Map.Level.LevelEndMechanic
{
    public class EndLevelScene : MonoBehaviour
    {
        [SerializeField] private Transform _endLevelSceneGround;
        
        public void Initialize(Transform levelGround)
        {
            Vector3 boundOfLevelCube = GetPointBoundOfCubeByZ(levelGround);
            boundOfLevelCube.z += _endLevelSceneGround.transform.lossyScale.z / 2; 
            transform.position = boundOfLevelCube;
        }

        public Vector3 GetPointBoundOfCubeByZ(Transform cubeTransform)
        {
            float halfScaleZ = cubeTransform.lossyScale.z/2;
            float positionZ = cubeTransform.transform.position.z;

            float offsetZ = halfScaleZ - positionZ;

            Vector3 pointBoundPosition = cubeTransform.position;
            pointBoundPosition.z = cubeTransform.lossyScale.z - offsetZ;

            return pointBoundPosition;
        }
    }
}