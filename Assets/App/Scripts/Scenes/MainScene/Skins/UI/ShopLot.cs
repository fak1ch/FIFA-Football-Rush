using System;
using App.Scripts.General.UI.ButtonSpace;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace App.Scripts.Scenes.MainScene.Skins.UI
{
    public class ShopLot : MonoBehaviour
    {
        public event Action<ShopLot> OnItemSelected;

        [SerializeField] private TextMeshProUGUI _priceText;
        [SerializeField] private Image _lotImage;
        [SerializeField] private CustomButton _interactButton;

        [Space(10)] 
        [SerializeField] private GameObject _notPurchasedView;
        [SerializeField] private GameObject _itemSelectedView;
        
        private ShopItemRepository _shopItemRepository;
        
        public ShopItemConfig ShopItemConfig { get; private set; }

        #region Events

        private void OnEnable()
        {
            _interactButton.onClickOccurred.AddListener(HandleInteractWithShopLot);
        }

        private void OnDisable()
        {
            _interactButton.onClickOccurred.RemoveListener(HandleInteractWithShopLot);
        }

        #endregion

        public void Initialize(ShopItemConfig shopItemConfig)
        {
            ShopItemConfig = shopItemConfig;
            _shopItemRepository = new ShopItemRepository(ShopItemConfig);
            
            _priceText.text = ShopItemConfig.price.ToString();
            _lotImage.sprite = ShopItemConfig.itemLotSprite;
            
            _notPurchasedView.SetActive(!_shopItemRepository.IsPurchased);
        }
        
        private void HandleInteractWithShopLot()
        {
            if (!_shopItemRepository.IsPurchased)
            {
                if (MoneyWallet.Instance.IsMoneyEnough(ShopItemConfig.price))
                {
                    ItemWasPurchased();
                }
            }
            else
            {
                OnItemSelected?.Invoke(this);
            }
        }

        private void ItemWasPurchased()
        {
            MoneyWallet.Instance.TakeMoney(ShopItemConfig.price);
            _shopItemRepository.SetItemAsPurchased();
            _notPurchasedView.SetActive(!_shopItemRepository.IsPurchased);
            OnItemSelected?.Invoke(this);
        }
        
        public void SetActiveItemSelectedView(bool value)
        {
            _itemSelectedView.SetActive(value);
        }
    }
}