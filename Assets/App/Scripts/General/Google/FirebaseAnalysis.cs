using System;
using App.Scripts.General.Singleton;
using App.Scripts.General.Utils;
using Firebase;
using Firebase.Analytics;

namespace App.Scripts.General.Google
{
    public class FirebaseAnalysis : MonoSingleton<FirebaseAnalysis>
    {
        private FirebaseApp _firebaseApp;
        
        protected override void Awake()
        {
            base.Awake();

            GoogleInitializer.Instance.OnAuthenticationSuccess += Initialize;
        }

        private void Initialize()
        {
            FirebaseApp.CheckAndFixDependenciesAsync().ContinueWith(task => {
                var dependencyStatus = task.Result;
                if (dependencyStatus == DependencyStatus.Available) 
                {
                    _firebaseApp = FirebaseApp.DefaultInstance;
                    
                    DebugUtils.Instance.Log("Firebase Initialized");
                } 
                else 
                {
                    DebugUtils.Instance.Log(String.Format(
                        "Could not resolve all Firebase dependencies: {0}", dependencyStatus));
                }
            });
        }
        
        public void SendLevelStartEvent(int levelIndex)
        {
            FirebaseAnalytics.LogEvent("level_start", 
                new Parameter("level_start_index", levelIndex));
        }
        
        public void SendLevelEndEvent(int levelIndex)
        {
            FirebaseAnalytics.LogEvent("level_end",
                new Parameter("level_end_index", levelIndex));
        }
        
        public void SendPlayerDieOnLevel(int levelIndex)
        {
            FirebaseAnalytics.LogEvent("player_die",
                new Parameter("level_die_index", levelIndex));
        }
        
        public void SendFinishedRewardAdEventTrue()
        {
            FirebaseAnalytics.LogEvent("finished_show_ad_true");
        }
        
        public void SendFinishedRewardAdEventFalse()
        {
            FirebaseAnalytics.LogEvent("finished_show_ad_false");
        }
        
        public void SendSkinWasPurchased(string skinName)
        {
            FirebaseAnalytics.LogEvent("skins_was_purchased",
                new Parameter("skin_name", skinName));
        }
    }
}