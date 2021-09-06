// WidgetBlueprintGeneratedClass WBP_NotificationSplash.WBP_NotificationSplash_C
// Size: 0x2b8 (Inherited: 0x268)
struct UWBP_NotificationSplash_C : UHWWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UImage* Background; // 0x270(0x08)
	struct UWBP_Label_C* Bodytext; // 0x278(0x08)
	struct UWBP_Button_C* Button_GotIt; // 0x280(0x08)
	struct UCircularThrobber* Loading; // 0x288(0x08)
	struct UVerticalBox* Notification; // 0x290(0x08)
	struct UWidgetSwitcher* Switcher; // 0x298(0x08)
	struct UWBP_Label_C* Title; // 0x2a0(0x08)
	struct FMulticastInlineDelegate OnClosed; // 0x2a8(0x10)

	void ShowNotification(); // Function WBP_NotificationSplash.WBP_NotificationSplash_C.ShowNotification // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnCanReconnectToMatch(); // Function WBP_NotificationSplash.WBP_NotificationSplash_C.OnCanReconnectToMatch // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnCanReconnectToQueue(); // Function WBP_NotificationSplash.WBP_NotificationSplash_C.OnCanReconnectToQueue // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnFriendsListUpdated(bool Success, struct FHWFetchFriendsResponse Response); // Function WBP_NotificationSplash.WBP_NotificationSplash_C.OnFriendsListUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnGetWeekInfo(struct FHWWeekInfoResponse Response); // Function WBP_NotificationSplash.WBP_NotificationSplash_C.OnGetWeekInfo // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnGetWeekInfoFailed(); // Function WBP_NotificationSplash.WBP_NotificationSplash_C.OnGetWeekInfoFailed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnLogoutCompleted(); // Function WBP_NotificationSplash.WBP_NotificationSplash_C.OnLogoutCompleted // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMasterDataLoaded(); // Function WBP_NotificationSplash.WBP_NotificationSplash_C.OnMasterDataLoaded // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMasterDataLoadFailed(enum class EHWErrorMessage Error, struct FString Message); // Function WBP_NotificationSplash.WBP_NotificationSplash_C.OnMasterDataLoadFailed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMatchStatusMatched(); // Function WBP_NotificationSplash.WBP_NotificationSplash_C.OnMatchStatusMatched // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMatchStatusOpen(); // Function WBP_NotificationSplash.WBP_NotificationSplash_C.OnMatchStatusOpen // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMatchStatusStarted(); // Function WBP_NotificationSplash.WBP_NotificationSplash_C.OnMatchStatusStarted // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMatchStatusWaiting(); // Function WBP_NotificationSplash.WBP_NotificationSplash_C.OnMatchStatusWaiting // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnReconnectableMatchLost(); // Function WBP_NotificationSplash.WBP_NotificationSplash_C.OnReconnectableMatchLost // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnServerPingsDone(); // Function WBP_NotificationSplash.WBP_NotificationSplash_C.OnServerPingsDone // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnShopCampaignsLoaded(); // Function WBP_NotificationSplash.WBP_NotificationSplash_C.OnShopCampaignsLoaded // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeamInviteAcceptProcessed(bool Success, enum class EHWErrorMessage ErrorMessage); // Function WBP_NotificationSplash.WBP_NotificationSplash_C.OnTeamInviteAcceptProcessed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnUpdateRequired(); // Function WBP_NotificationSplash.WBP_NotificationSplash_C.OnUpdateRequired // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnUserLoaded(struct FString SessionIdLoadedUser); // Function WBP_NotificationSplash.WBP_NotificationSplash_C.OnUserLoaded // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnUserLoadFailed(struct FString SessionIdLoadedUser); // Function WBP_NotificationSplash.WBP_NotificationSplash_C.OnUserLoadFailed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnUserStored(); // Function WBP_NotificationSplash.WBP_NotificationSplash_C.OnUserStored // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnUserStoreFailed(); // Function WBP_NotificationSplash.WBP_NotificationSplash_C.OnUserStoreFailed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnWholePartyReady(); // Function WBP_NotificationSplash.WBP_NotificationSplash_C.OnWholePartyReady // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__Button_GotIt_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_NotificationSplash.WBP_NotificationSplash_C.BndEvt__Button_GotIt_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_NotificationSplash(int32_t EntryPoint); // Function WBP_NotificationSplash.WBP_NotificationSplash_C.ExecuteUbergraph_WBP_NotificationSplash // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
	void OnClosed__DelegateSignature(); // Function WBP_NotificationSplash.WBP_NotificationSplash_C.OnClosed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

