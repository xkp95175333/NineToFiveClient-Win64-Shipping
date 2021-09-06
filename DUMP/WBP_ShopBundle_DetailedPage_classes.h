// WidgetBlueprintGeneratedClass WBP_ShopBundle_DetailedPage.WBP_ShopBundle_DetailedPage_C
// Size: 0x3d0 (Inherited: 0x260)
struct UWBP_ShopBundle_DetailedPage_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* RightHover; // 0x268(0x08)
	struct UWidgetAnimation* LeftHover; // 0x270(0x08)
	struct UWBP_ShopItem_3DItemView_C* 3DItemView; // 0x278(0x08)
	struct UWBP_MainButton_C* BackButton; // 0x280(0x08)
	struct UImage* Background; // 0x288(0x08)
	struct UWidgetSwitcher* BackgroundSwitcher; // 0x290(0x08)
	struct UWidgetSwitcher* BundleInfoItemSwitcher; // 0x298(0x08)
	struct UOverlay* Discount; // 0x2a0(0x08)
	struct UImage* DiscountBackground; // 0x2a8(0x08)
	struct USizeBox* DiscountBox; // 0x2b0(0x08)
	struct UWBP_RichTextLabel_C* DiscountPercentage; // 0x2b8(0x08)
	struct UImage* Icon; // 0x2c0(0x08)
	struct UHorizontalBox* ItemIdentifierHBox; // 0x2c8(0x08)
	struct UImage* ItemImage; // 0x2d0(0x08)
	struct UWBP_ImageButton_C* LeftButton; // 0x2d8(0x08)
	struct UWBP_ImageButton_C* RightButton; // 0x2e0(0x08)
	struct UOverlay* Timer; // 0x2e8(0x08)
	struct UImage* TimerBackground; // 0x2f0(0x08)
	struct USizeBox* TimerBox; // 0x2f8(0x08)
	struct UWBP_RichTextLabel_C* TimerText; // 0x300(0x08)
	struct UWBP_ImageButton_C* WBP_ImageButton; // 0x308(0x08)
	struct UWBP_RichTextLabel_C* WBP_RichTextLabel; // 0x310(0x08)
	struct UWBP_SectionHeaderBlack_C* WBP_SectionHeaderBlack; // 0x318(0x08)
	struct UWBP_ShopItem_DetailInfo_C* WBP_ShopItem_DetailInfo; // 0x320(0x08)
	struct FMulticastInlineDelegate CloseButtonPressed; // 0x328(0x10)
	struct TArray<struct FHWRewardBoxesData> BoxRewardData; // 0x338(0x10)
	int32_t CurrentItemIndex; // 0x348(0x04)
	char pad_34C[0x4]; // 0x34c(0x04)
	struct FHWShopItem ItemData; // 0x350(0x78)
	struct FDateTime ExpiryDateTime; // 0x3c8(0x08)

	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function WBP_ShopBundle_DetailedPage.WBP_ShopBundle_DetailedPage_C.OnKeyDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetExpiry(float Duration, bool IsExpired, struct FString CampaignId); // Function WBP_ShopBundle_DetailedPage.WBP_ShopBundle_DetailedPage_C.SetExpiry // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void WeaponPartHovered(bool IsHovered, struct UWBP_Shop_AssembledWeaponPart_C* WeaponPart); // Function WBP_ShopBundle_DetailedPage.WBP_ShopBundle_DetailedPage_C.WeaponPartHovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetItemIdentifier(); // Function WBP_ShopBundle_DetailedPage.WBP_ShopBundle_DetailedPage_C.SetItemIdentifier // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetBackground(); // Function WBP_ShopBundle_DetailedPage.WBP_ShopBundle_DetailedPage_C.SetBackground // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void EnableDisableArrows(); // Function WBP_ShopBundle_DetailedPage.WBP_ShopBundle_DetailedPage_C.EnableDisableArrows // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetContent(struct FHWShopItem Item, struct FString SubsectionId, struct FString CampaignId, int32_t OpenedIndex, float ExpiryDuration, bool IsExpired); // Function WBP_ShopBundle_DetailedPage.WBP_ShopBundle_DetailedPage_C.SetContent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_ShopBundle_DetailedPage.WBP_ShopBundle_DetailedPage_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__LeftButton_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature(struct UWBP_ImageButton_C* Button); // Function WBP_ShopBundle_DetailedPage.WBP_ShopBundle_DetailedPage_C.BndEvt__LeftButton_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__RightButton_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature(struct UWBP_ImageButton_C* Button); // Function WBP_ShopBundle_DetailedPage.WBP_ShopBundle_DetailedPage_C.BndEvt__RightButton_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_ImageButton_K2Node_ComponentBoundEvent_5_OnClick__DelegateSignature(struct UWBP_ImageButton_C* Button); // Function WBP_ShopBundle_DetailedPage.WBP_ShopBundle_DetailedPage_C.BndEvt__WBP_ImageButton_K2Node_ComponentBoundEvent_5_OnClick__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_ImageButton_K2Node_ComponentBoundEvent_0_OnHover__DelegateSignature(bool IsHovered); // Function WBP_ShopBundle_DetailedPage.WBP_ShopBundle_DetailedPage_C.BndEvt__WBP_ImageButton_K2Node_ComponentBoundEvent_0_OnHover__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void RunTimer(); // Function WBP_ShopBundle_DetailedPage.WBP_ShopBundle_DetailedPage_C.RunTimer // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateTimer(); // Function WBP_ShopBundle_DetailedPage.WBP_ShopBundle_DetailedPage_C.UpdateTimer // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__BackButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(struct UWBP_MainButton_C* Button); // Function WBP_ShopBundle_DetailedPage.WBP_ShopBundle_DetailedPage_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void ShowPreviousItem(); // Function WBP_ShopBundle_DetailedPage.WBP_ShopBundle_DetailedPage_C.ShowPreviousItem // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ShowNextItem(); // Function WBP_ShopBundle_DetailedPage.WBP_ShopBundle_DetailedPage_C.ShowNextItem // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_ShopBundle_DetailedPage(int32_t EntryPoint); // Function WBP_ShopBundle_DetailedPage.WBP_ShopBundle_DetailedPage_C.ExecuteUbergraph_WBP_ShopBundle_DetailedPage // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
	void CloseButtonPressed__DelegateSignature(); // Function WBP_ShopBundle_DetailedPage.WBP_ShopBundle_DetailedPage_C.CloseButtonPressed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

