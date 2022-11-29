using System;
using App.Scripts.General.Singleton;
using UnityEngine;

public class MoneyWallet : MonoSingleton<MoneyWallet>
{
    private const string MoneyKey = "MoneyCount";
    public event Action<int> OnMoneyCountChanged;
    
    [SerializeField] private int _currentMoneyCount = 0;

    public int CurrentMoneyCount => _currentMoneyCount;
    
    protected override void Awake()
    {
        base.Awake();
        
        _currentMoneyCount = PlayerPrefs.GetInt(MoneyKey, 0);
    }

    public void AddMoney(int count)
    {
        _currentMoneyCount += count;
        MoneyCountChanged(count);
    }

    public void TakeMoney(int count)
    {
        if (!IsMoneyEnough(count)) return;
        
        _currentMoneyCount -= count;
        MoneyCountChanged(-count);
    }

    public bool IsMoneyEnough(int count)
    {
        return _currentMoneyCount >= count;
    }

    private void MoneyCountChanged(int moneyDelta)
    {
        PlayerPrefs.SetInt(MoneyKey, _currentMoneyCount);
        OnMoneyCountChanged?.Invoke(moneyDelta);
    }
}
