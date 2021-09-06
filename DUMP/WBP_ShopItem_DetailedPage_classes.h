// WidgetBlueprintGeneratedClass WBP_ShopItem_DetailedPage.WBP_ShopItem_DetailedPage_C
// Size: 0x380 (Inherited: 0x260)
struct UWBP_ShopItem_DetailedPage_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWBP_ShopItem_3DItemView_C* 3DItemView; // 0x268(0x08)
	struct UWBP_MainButton_C* BackButton; // 0x270(0x08)
	struct UImage* Background; // 0x278(0x08)
	struct UWBP_ShopItem_DetailInfo_C* DetailInfo; // 0x280(0x08)
	struct UOverlay* Discount; // 0x288(0x08)
	struct UImage* DiscountBackground; // 0x290(0x08)
	struct USizeBox* DiscountBox; // 0x298(0x08)
	struct UWBP_RichTextLabel_C* DiscountPercentage; // 0x2a0(0x08)
	struct UImage* Icon; // 0x2a8(0x08)
	struct UImage* ItemImage; // 0x2b0(0x08)
	struct UWidgetSwitcher* ItemViewSwitcher; // 0x2b8(0x08)
	struct UOverlay* Timer; // 0x2c0(0x08)
	struct UImage* TimerBackground; // 0x2c8(0x08)
	struct USizeBox* TimerBox; // 0x2d0(0x08)
	struct UWBP_RichTextLabel_C* TimerText; // 0x2d8(0x08)
	struct FMulticastInlineDelegate BackButtonPressed; // 0x2e0(0x10)
	struct FHWShopItem ItemData; // 0x2f0(0x78)
	struct FDateTime ExpiryDateTime; // 0x368(0x08)
	struct TArray<struct FHWRewardBoxesData> BoxRewardData; // 0x370(0x10)

	void SetExpiry(float ExpiryDuration, bool IsExpired, struct FString CampaignId); // Function WBP_ShopItem_DetailedPage.WBP_ShopItem_DetailedPage_C.SetExpiry // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetBackground(); // Function WBP_ShopItem_DetailedPage.WBP_ShopItem_DetailedPage_C.SetBackground // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Weapon Part Hovered(bool IsHovered, struct UWBP_Shop_AssembledWeaponPart_C* WeaponPart); // Function WBP_ShopItem_DetailedPage.WBP_ShopItem_DetailedPage_C.Weapon Part Hovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetContent(struct FHWShopItem Item, struct FString SubsectionId, struct FString CampaignId, float ExpiryDuration, bool IsExpired); // Function WBP_ShopItem_DetailedPage.WBP_ShopItem_DetailedPage_C.SetContent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_ShopItem_DetailedPage.WBP_ShopItem_DetailedPage_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(struct UWBP_MainButton_C* Button); // Function WBP_ShopItem_DetailedPage.WBP_ShopItem_DetailedPage_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void RunTimer(); // Function WBP_ShopItem_DetailedPage.WBP_ShopItem_DetailedPage_C.RunTimer // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateTimer(); // Function WBP_ShopItem_DetailedPage.WBP_ShopItem_DetailedPage_C.UpdateTimer // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_ShopItem_DetailedPage(int32_t EntryPoint); // Function WBP_ShopItem_DetailedPage.WBP_ShopItem_DetailedPage_C.ExecuteUbergraph_WBP_ShopItem_DetailedPage // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
	void BackButtonPressed__DelegateSignature(); // Function WBP_ShopItem_DetailedPage.WBP_ShopItem_DetailedPage_C.BackButtonPressed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

