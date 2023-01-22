using App.Scripts.General.Singleton;
using StarterAssets.InputSystems;
using UnityEngine;

namespace App.Scripts.General.VibrateSystem
{
    public class Vibrator : MonoSingleton<Vibrator>
    {
        
    #if UNITY_ANDROID && !UNITY_EDITOR 
        private static AndroidJavaClass unityPlayer = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
        private static AndroidJavaObject currentActivity = unityPlayer.GetStatic<AndroidJavaObject>("currentActivity");
        private static AndroidJavaObject vibrator = currentActivity.Call<AndroidJavaObject>("getSystemService", "vibrator");
    #else
        private static AndroidJavaClass unityPlayer;
        private static AndroidJavaObject currentActivity; 
        private static AndroidJavaObject vibrator;
    #endif

        
        public void Vibrate(long milliseconds)
        {
            if (IsAndroid())
            {
                vibrator.Call("vibrate", milliseconds);
            }
            else
            {
                Handheld.Vibrate();
            }
        }

        public bool IsAndroid()
        {
            #if UNITY_ANDROID && !UNITY_EDITOR
                return true;
            #else
                return false;
            #endif
        }
    }
}