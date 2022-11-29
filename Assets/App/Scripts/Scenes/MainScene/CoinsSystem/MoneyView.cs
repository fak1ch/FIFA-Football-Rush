using System;
using App.Scripts.General.PopUpSystemSpace;
using DG.Tweening;
using TMPro;
using UnityEngine;

namespace App.Scripts.Scenes.General.CoinsSystem
{
    public class MoneyView : MonoBehaviour
    {
        [SerializeField] private TextMeshProUGUI _coinsText;

        private void OnEnable()
        {
            MoneyWallet.Instance.OnMoneyCountChanged += RefreshMoneyView;

            _coinsText.text = MoneyWallet.Instance.CurrentMoneyCount.ToString();
        }

        private void OnDisable()
        {
            if (MoneyWallet.Instance == null) return;
            
            MoneyWallet.Instance.OnMoneyCountChanged -= RefreshMoneyView;
        }

        private void RefreshMoneyView(int moneyDelta)
        {
            _coinsText.text = MoneyWallet.Instance.CurrentMoneyCount.ToString();
        }
    }
}