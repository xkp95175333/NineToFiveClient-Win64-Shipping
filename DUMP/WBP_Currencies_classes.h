// WidgetBlueprintGeneratedClass WBP_Currencies.WBP_Currencies_C
// Size: 0x342 (Inherited: 0x268)
struct UWBP_Currencies_C : UHWWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UImage* AbbBooster_Grey; // 0x270(0x08)
	struct UImage* AbbBooster_Orange; // 0x278(0x08)
	struct UButton* Button_ActiveBooster_AddMore; // 0x280(0x08)
	struct UButton* Button_AddBooster_NotActive; // 0x288(0x08)
	struct UButton* Credits; // 0x290(0x08)
	struct UWBP_RichTextLabel_C* CreditsAmount; // 0x298(0x08)
	struct UImage* CreditsIcon; // 0x2a0(0x08)
	struct UMenuAnchor* FullCurrenciesPanelAnchor; // 0x2a8(0x08)
	struct UHorizontalBox* HorizontalBox_2; // 0x2b0(0x08)
	struct UButton* Materials; // 0x2b8(0x08)
	struct UWBP_RichTextLabel_C* MaterialsAmount; // 0x2c0(0x08)
	struct UVerticalBox* MaterialsPage; // 0x2c8(0x08)
	struct UWBP_RichTextLabel_C* MaterialsTitle; // 0x2d0(0x08)
	struct UWidgetSwitcher* ModeSwitcher; // 0x2d8(0x08)
	struct UWBP_RichTextLabel_C* PlatinumAmount; // 0x2e0(0x08)
	struct UImage* PlatinumIcon; // 0x2e8(0x08)
	struct UVerticalBox* PlatinumPage; // 0x2f0(0x08)
	struct UWBP_RichTextLabel_C* WBP_RichTextLabel; // 0x2f8(0x08)
	struct UWBP_RichTextLabel_C* WBP_RichTextLabel_2; // 0x300(0x08)
	struct UWBP_RichTextLabel_C* WBP_RichTextLabel_183; // 0x308(0x08)
	struct UWBP_Wallet_TimerShield_C* WBP_Wallet_TimerShield; // 0x310(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_AddBooster; // 0x318(0x08)
	struct FString TooltipStr; // 0x320(0x10)
	struct FMulticastInlineDelegate OnWalletClicked; // 0x330(0x10)
	enum class EHWVendor CurrentMaterialsVendor; // 0x340(0x01)
	enum class EHWRarity CurrentMaterialsRarity; // 0x341(0x01)

	struct UWidget* Get_VouchersPage_ToolTipWidget_1(); // Function WBP_Currencies.WBP_Currencies_C.Get_VouchersPage_ToolTipWidget_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	struct UWidget* Get_MaterialsPage_ToolTipWidget_1(); // Function WBP_Currencies.WBP_Currencies_C.Get_MaterialsPage_ToolTipWidget_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	struct UWidget* GetCreditsToolTip(); // Function WBP_Currencies.WBP_Currencies_C.GetCreditsToolTip // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	struct UWidget* On Full Currencies Panel Anchor Get Menu Content 0(); // Function WBP_Currencies.WBP_Currencies_C.On Full Currencies Panel Anchor Get Menu Content 0 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	struct UWidget* FullCurrencyPanel_GetMenuContent(); // Function WBP_Currencies.WBP_Currencies_C.FullCurrencyPanel_GetMenuContent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	struct UWidget* GetToolTipWidget_1(); // Function WBP_Currencies.WBP_Currencies_C.GetToolTipWidget_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void OnCanReconnectToMatch(); // Function WBP_Currencies.WBP_Currencies_C.OnCanReconnectToMatch // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnCanReconnectToQueue(); // Function WBP_Currencies.WBP_Currencies_C.OnCanReconnectToQueue // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnFriendsListUpdated(bool Success, struct FHWFetchFriendsResponse Response); // Function WBP_Currencies.WBP_Currencies_C.OnFriendsListUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnGetWeekInfo(struct FHWWeekInfoResponse Response); // Function WBP_Currencies.WBP_Currencies_C.OnGetWeekInfo // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnGetWeekInfoFailed(); // Function WBP_Currencies.WBP_Currencies_C.OnGetWeekInfoFailed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnLogoutCompleted(); // Function WBP_Currencies.WBP_Currencies_C.OnLogoutCompleted // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMasterDataLoaded(); // Function WBP_Currencies.WBP_Currencies_C.OnMasterDataLoaded // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMasterDataLoadFailed(enum class EHWErrorMessage Error, struct FString Message); // Function WBP_Currencies.WBP_Currencies_C.OnMasterDataLoadFailed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMatchStatusMatched(); // Function WBP_Currencies.WBP_Currencies_C.OnMatchStatusMatched // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMatchStatusOpen(); // Function WBP_Currencies.WBP_Currencies_C.OnMatchStatusOpen // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMatchStatusStarted(); // Function WBP_Currencies.WBP_Currencies_C.OnMatchStatusStarted // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMatchStatusWaiting(); // Function WBP_Currencies.WBP_Currencies_C.OnMatchStatusWaiting // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnReconnectableMatchLost(); // Function WBP_Currencies.WBP_Currencies_C.OnReconnectableMatchLost // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnServerPingsDone(); // Function WBP_Currencies.WBP_Currencies_C.OnServerPingsDone // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnShopCampaignsLoaded(); // Function WBP_Currencies.WBP_Currencies_C.OnShopCampaignsLoaded // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeamInviteAcceptProcessed(bool Success, enum class EHWErrorMessage ErrorMessage); // Function WBP_Currencies.WBP_Currencies_C.OnTeamInviteAcceptProcessed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnUpdateRequired(); // Function WBP_Currencies.WBP_Currencies_C.OnUpdateRequired // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnUserLoadFailed(struct FString SessionIdLoadedUser); // Function WBP_Currencies.WBP_Currencies_C.OnUserLoadFailed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnUserStored(); // Function WBP_Currencies.WBP_Currencies_C.OnUserStored // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnUserStoreFailed(); // Function WBP_Currencies.WBP_Currencies_C.OnUserStoreFailed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnWholePartyReady(); // Function WBP_Currencies.WBP_Currencies_C.OnWholePartyReady // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnUserLoaded(struct FString SessionIdLoadedUser); // Function WBP_Currencies.WBP_Currencies_C.OnUserLoaded // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_Currencies.WBP_Currencies_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__Button_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function WBP_Currencies.WBP_Currencies_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__Button_Wallet_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function WBP_Currencies.WBP_Currencies_C.BndEvt__Button_Wallet_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__Button_Wallet_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function WBP_Currencies.WBP_Currencies_C.BndEvt__Button_Wallet_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void ShowMaterials(enum class EHWRarity Rarity, enum class EHWVendor Vendor); // Function WBP_Currencies.WBP_Currencies_C.ShowMaterials // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ShowVouchers(); // Function WBP_Currencies.WBP_Currencies_C.ShowVouchers // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Update(); // Function WBP_Currencies.WBP_Currencies_C.Update // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__Button_AddBooster_Orange_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function WBP_Currencies.WBP_Currencies_C.BndEvt__Button_AddBooster_Orange_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__Button_AddBooster_Orange_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(); // Function WBP_Currencies.WBP_Currencies_C.BndEvt__Button_AddBooster_Orange_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Currencies(int32_t EntryPoint); // Function WBP_Currencies.WBP_Currencies_C.ExecuteUbergraph_WBP_Currencies // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
	void OnWalletClicked__DelegateSignature(); // Function WBP_Currencies.WBP_Currencies_C.OnWalletClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

