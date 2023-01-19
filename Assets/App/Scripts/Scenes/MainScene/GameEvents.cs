using StarterAssets;
using UnityEngine;

namespace App.Scripts.Scenes.General
{
    public class GameEvents : MonoBehaviour
    {
        [SerializeField] private Player _player;
        [SerializeField] private GameObject _mainMenuUI;

        public bool IsLevelEnd { get; private set; }
        
        public void StartLevel()
        {
            RestartLevel();
            
            _player.SetPlayerCanMove(true);
            _mainMenuUI.SetActive(false);
        }

        public void RestartLevel()
        {
            IsLevelEnd = false;
        }

        public void EndLevelWithWin()
        {
            IsLevelEnd = true;
            
            Debug.Log("Victory");
        }

        public void EndLevelWithLose()
        {
            IsLevelEnd = true;
            
            Debug.Log("GameOver");
        }
    }
}