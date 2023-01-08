using UnityEngine;

namespace App.Scripts.General.Utils
{
    public static class MathUtils
    {
        public static float GetPercent(float min, float max, float value)
        {
            value = Mathf.Clamp(value, min, max);
            
            return (value - min) / (max - min);
        }

        public static bool IsProbability(float percent)
        {
            return Random.Range(0f, 101f) <= percent;
        }
    }
}