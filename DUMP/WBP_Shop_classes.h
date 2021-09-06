// WidgetBlueprintGeneratedClass WBP_Shop.WBP_Shop_C
// Size: 0x450 (Inherited: 0x270)
struct UWBP_Shop_C : UWBP_MenuScreenBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct UImage* Background_2; // 0x278(0x08)
	struct UWidgetSwitcher* ContentSwitcher; // 0x280(0x08)
	struct UWidgetSwitcher* DetailedPageSwitcher; // 0x288(0x08)
	struct UWBP_NavigationBar_C* ShopCategoryNavigationBar; // 0x290(0x08)
	struct UVerticalBox* SubsectionsLayout; // 0x298(0x08)
	struct UOverlay* SubsectionsPage; // 0x2a0(0x08)
	struct UWBP_MainButton_C* WBP_MainButton; // 0x2a8(0x08)
	struct UWBP_ScreenHeader_C* WBP_ScreenHeader; // 0x2b0(0x08)
	struct UWBP_Shop_BonusCode_C* WBP_Shop_BonusCode; // 0x2b8(0x08)
	struct UWBP_ShopBundle_DetailedPage_C* WBP_ShopBundle_DetailedPage; // 0x2c0(0x08)
	struct UWBP_ShopItem_DetailedPage_C* WBP_ShopItemDetailedPage; // 0x2c8(0x08)
	struct TMap<struct FString, struct UWBP_Subsection_ContentContainner_C*> CategoriesToContent; // 0x2d0(0x50)
	struct TArray<struct FHWShopSubsection> ShopSubsectionData; // 0x320(0x10)
	struct TArray<struct FString> Categories; // 0x330(0x10)
	struct FMulticastInlineDelegate NotifyFreeShopItem; // 0x340(0x10)
	struct UBP_LocalGameState_C* LocalPlayerShopProfile; // 0x350(0x08)
	struct TMap<struct FString, int32_t> CategoryNewOrFreeItems; // 0x358(0x50)
	struct TArray<struct FBP_ShopSubsectionWithCampaignId> Subsections; // 0x3a8(0x10)
	struct TArray<struct FHWShopItemPurchaseTestInfo> ShopItemsToTest; // 0x3b8(0x10)
	struct FHWShopItemPurchaseTestInfo ShopItemToTest; // 0x3c8(0x40)
	struct TArray<struct FHWShopItemPurchaseTestInfo> ShopItemsTested; // 0x408(0x10)
	struct TArray<struct FHWShopSubsection> SortedSubsections; // 0x418(0x10)
	struct TArray<struct FString> CampaignIdsForSubsection; // 0x428(0x10)
	bool IsBackendTimeSet; // 0x438(0x01)
	char pad_439[0x7]; // 0x439(0x07)
	struct TArray<struct UBP_ShopSubsection_C*> SubsectionsToAppear; // 0x440(0x10)

	void GetShopItemDataForReceiver(struct FName ReceiverId, struct FHWShopItem ItemData, bool Found, struct FBP_ShopSubsectionWithCampaignId Subsection); // Function WBP_Shop.WBP_Shop_C.GetShopItemDataForReceiver // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void RemoveCategoryIfNoChildren(struct FString Category, bool Removed); // Function WBP_Shop.WBP_Shop_C.RemoveCategoryIfNoChildren // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void RemoveEmptyCategories(); // Function WBP_Shop.WBP_Shop_C.RemoveEmptyCategories // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnBack(bool IsHandled); // Function WBP_Shop.WBP_Shop_C.OnBack // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SaveDurationToProfile(struct FString CategoryId); // Function WBP_Shop.WBP_Shop_C.SaveDurationToProfile // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Get Duration Expiry Seconds(struct FString CampaignId, float Seconds, bool IsExpired); // Function WBP_Shop.WBP_Shop_C.Get Duration Expiry Seconds // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void OpenCategory(struct FString Category); // Function WBP_Shop.WBP_Shop_C.OpenCategory // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void IsYetToBegin(struct FString CampaignId, bool IsYetToBegin); // Function WBP_Shop.WBP_Shop_C.IsYetToBegin // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void UpdateNotificationOnCategory(struct FString CategoryId, bool DoShow); // Function WBP_Shop.WBP_Shop_C.UpdateNotificationOnCategory // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void RefreshItemsNotification(); // Function WBP_Shop.WBP_Shop_C.RefreshItemsNotification // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void RemoveSubsectionsWithCampaignId(struct FString CampaignId, struct FString Category); // Function WBP_Shop.WBP_Shop_C.RemoveSubsectionsWithCampaignId // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void CategoryClicked(struct FName ID); // Function WBP_Shop.WBP_Shop_C.CategoryClicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetShopCategories(struct TArray<struct FString> StringValues); // Function WBP_Shop.WBP_Shop_C.GetShopCategories // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void OnCanReconnectToMatch(); // Function WBP_Shop.WBP_Shop_C.OnCanReconnectToMatch // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnCanReconnectToQueue(); // Function WBP_Shop.WBP_Shop_C.OnCanReconnectToQueue // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnFriendsListUpdated(bool Success, struct FHWFetchFriendsResponse Response); // Function WBP_Shop.WBP_Shop_C.OnFriendsListUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnGetWeekInfo(struct FHWWeekInfoResponse Response); // Function WBP_Shop.WBP_Shop_C.OnGetWeekInfo // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnGetWeekInfoFailed(); // Function WBP_Shop.WBP_Shop_C.OnGetWeekInfoFailed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnLogoutCompleted(); // Function WBP_Shop.WBP_Shop_C.OnLogoutCompleted // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMasterDataLoaded(); // Function WBP_Shop.WBP_Shop_C.OnMasterDataLoaded // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMasterDataLoadFailed(enum class EHWErrorMessage Error, struct FString Message); // Function WBP_Shop.WBP_Shop_C.OnMasterDataLoadFailed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMatchStatusMatched(); // Function WBP_Shop.WBP_Shop_C.OnMatchStatusMatched // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMatchStatusOpen(); // Function WBP_Shop.WBP_Shop_C.OnMatchStatusOpen // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMatchStatusStarted(); // Function WBP_Shop.WBP_Shop_C.OnMatchStatusStarted // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMatchStatusWaiting(); // Function WBP_Shop.WBP_Shop_C.OnMatchStatusWaiting // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnReconnectableMatchLost(); // Function WBP_Shop.WBP_Shop_C.OnReconnectableMatchLost // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnServerPingsDone(); // Function WBP_Shop.WBP_Shop_C.OnServerPingsDone // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeamInviteAcceptProcessed(bool Success, enum class EHWErrorMessage ErrorMessage); // Function WBP_Shop.WBP_Shop_C.OnTeamInviteAcceptProcessed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnUpdateRequired(); // Function WBP_Shop.WBP_Shop_C.OnUpdateRequired // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnUserLoaded(struct FString SessionIdLoadedUser); // Function WBP_Shop.WBP_Shop_C.OnUserLoaded // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnUserLoadFailed(struct FString SessionIdLoadedUser); // Function WBP_Shop.WBP_Shop_C.OnUserLoadFailed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnUserStored(); // Function WBP_Shop.WBP_Shop_C.OnUserStored // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnUserStoreFailed(); // Function WBP_Shop.WBP_Shop_C.OnUserStoreFailed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnWholePartyReady(); // Function WBP_Shop.WBP_Shop_C.OnWholePartyReady // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void PreConstruct(bool IsDesignTime); // Function WBP_Shop.WBP_Shop_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void InitializeScreen(); // Function WBP_Shop.WBP_Shop_C.InitializeScreen // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_Shop.WBP_Shop_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void AddCategoryScrollBox(struct FString Category); // Function WBP_Shop.WBP_Shop_C.AddCategoryScrollBox // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void CreateCategories(); // Function WBP_Shop.WBP_Shop_C.CreateCategories // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Create Subsections(); // Function WBP_Shop.WBP_Shop_C.Create Subsections // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Create Content(); // Function WBP_Shop.WBP_Shop_C.Create Content // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ResetState(); // Function WBP_Shop.WBP_Shop_C.ResetState // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void CampaignExpired(struct FString CampaignId, struct FString Category); // Function WBP_Shop.WBP_Shop_C.CampaignExpired // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_ShopItemDetailedPage_K2Node_ComponentBoundEvent_0_BackButtonPressed__DelegateSignature(); // Function WBP_Shop.WBP_Shop_C.BndEvt__WBP_ShopItemDetailedPage_K2Node_ComponentBoundEvent_0_BackButtonPressed__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void OpenShopItem(struct FHWShopItem Item, struct FString SubsectionId, struct FString CampaignId, bool IsBundleItem, int32_t OpenedIndex); // Function WBP_Shop.WBP_Shop_C.OpenShopItem // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void AddSubsectionToShop(struct FString CampaignId, struct FString Category, struct UBP_ShopSubsection_C* Subsection); // Function WBP_Shop.WBP_Shop_C.AddSubsectionToShop // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetExpiryForSubsection(struct UBP_ShopSubsection_C* Subsection); // Function WBP_Shop.WBP_Shop_C.SetExpiryForSubsection // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void RemoveCampaign(struct FString CampaignId, struct FString Category); // Function WBP_Shop.WBP_Shop_C.RemoveCampaign // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_ShopBundle_DetailedPage_K2Node_ComponentBoundEvent_3_CloseButtonPressed__DelegateSignature(); // Function WBP_Shop.WBP_Shop_C.BndEvt__WBP_ShopBundle_DetailedPage_K2Node_ComponentBoundEvent_3_CloseButtonPressed__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__ShopCategoryNavigationBar_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(struct FName ID); // Function WBP_Shop.WBP_Shop_C.BndEvt__ShopCategoryNavigationBar_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void LoadPlayerShopProfile(); // Function WBP_Shop.WBP_Shop_C.LoadPlayerShopProfile // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void AddCategoryToNavigationBar(struct FString CategoryId); // Function WBP_Shop.WBP_Shop_C.AddCategoryToNavigationBar // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SavePlayerShopProfile(); // Function WBP_Shop.WBP_Shop_C.SavePlayerShopProfile // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetSubsections(); // Function WBP_Shop.WBP_Shop_C.GetSubsections // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void RemoveNotificationIfNewOrFreeItem(struct FHWShopItem Item); // Function WBP_Shop.WBP_Shop_C.RemoveNotificationIfNewOrFreeItem // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_Shop_BonusCode_K2Node_ComponentBoundEvent_5_OnClose__DelegateSignature(); // Function WBP_Shop.WBP_Shop_C.BndEvt__WBP_Shop_BonusCode_K2Node_ComponentBoundEvent_5_OnClose__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_Shop_WBP_MainButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(struct UWBP_MainButton_C* Button); // Function WBP_Shop.WBP_Shop_C.BndEvt__WBP_Shop_WBP_MainButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void ScrollCategoryToIndex(struct FString Category, int32_t Index); // Function WBP_Shop.WBP_Shop_C.ScrollCategoryToIndex // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnShopCampaignsLoaded(); // Function WBP_Shop.WBP_Shop_C.OnShopCampaignsLoaded // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ClearShop(); // Function WBP_Shop.WBP_Shop_C.ClearShop // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void TestBuyAll(); // Function WBP_Shop.WBP_Shop_C.TestBuyAll // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void TestPurchaseOK(struct FHWResponseBase Response); // Function WBP_Shop.WBP_Shop_C.TestPurchaseOK // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void TestPurchaseFailed(enum class EHWErrorMessage ErrorMessage); // Function WBP_Shop.WBP_Shop_C.TestPurchaseFailed // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void TestBuyNext(); // Function WBP_Shop.WBP_Shop_C.TestBuyNext // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void TestSaveResults(); // Function WBP_Shop.WBP_Shop_C.TestSaveResults // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ReloadShop(); // Function WBP_Shop.WBP_Shop_C.ReloadShop // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Shop(int32_t EntryPoint); // Function WBP_Shop.WBP_Shop_C.ExecuteUbergraph_WBP_Shop // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
	void NotifyFreeShopItem__DelegateSignature(bool HasFreeItem, int32_t FreeItems); // Function WBP_Shop.WBP_Shop_C.NotifyFreeShopItem__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

