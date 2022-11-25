using UnityEngine;

namespace App.Scripts.General.Utils
{
    public static class MathUtils
    {
        public static float GetPercent(float a, float b, float value)
        {
            return (value - a) / (b - a);
        }

        public static Vector3 RandomRangeVector3(Vector3 firstVector3, Vector3 secondVector3)
        {
            Vector3 resultVector = new Vector3();

            resultVector.x = Random.Range(firstVector3.x, secondVector3.x);
            resultVector.y = Random.Range(firstVector3.y, secondVector3.y);
            resultVector.z = Random.Range(firstVector3.z, secondVector3.z);

            return resultVector;
        }
    }
}