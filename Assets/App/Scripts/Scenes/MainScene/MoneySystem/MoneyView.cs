using System;
using DG.Tweening;
using TMPro;
using UnityEngine;

namespace App.Scripts.Scenes.General.CoinsSystem
{
    [Serializable]
    public class MoneyViewConfig
    {
        public float animationDuration;
    }
    
    public class MoneyView : MonoBehaviour
    {
        [SerializeField] private GameConfigScriptableObject _gameConfig;
        [SerializeField] private TextMeshProUGUI _moneyCountText;

        private MoneyViewConfig _moneyViewConfig;
        private Tween _changeIntTween;
        private int _currentMoneyCount;

        #region Events

        private void OnEnable()
        {
            MoneyWallet.Instance.OnMoneyCountChanged += RefreshMoneyView;

            _moneyCountText.text = MoneyWallet.Instance.MoneyCount.ToString();
        }

        private void OnDisable()
        {
            if (MoneyWallet.Instance == null) return;
            
            MoneyWallet.Instance.OnMoneyCountChanged -= RefreshMoneyView;
        }

        #endregion

        private void Start()
        {
            _moneyViewConfig = _gameConfig.moneyViewConfig;
        }

        private void RefreshMoneyView(int moneyCount)
        {
            ChangeMoneyCountRoutine(moneyCount);
        }

        private void ChangeMoneyCountRoutine(int currentMoneyCount)
        {
            int pastMoneyCount = Convert.ToInt32(_moneyCountText.text);
            _changeIntTween = DOTween.To(() => pastMoneyCount, 
                x => _moneyCountText.text = x.ToString(),
                currentMoneyCount, _moneyViewConfig.animationDuration);
        }

        private void OnDestroy()
        {
            _changeIntTween.Kill();
        }
    }
}