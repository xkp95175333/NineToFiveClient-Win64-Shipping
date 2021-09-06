// WidgetBlueprintGeneratedClass WBP_Footer.WBP_Footer_C
// Size: 0x2fc (Inherited: 0x268)
struct UWBP_Footer_C : UHWWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UBorder* ContactButton_BG; // 0x270(0x08)
	struct UButton* FriendsOnlineButton; // 0x278(0x08)
	struct UWBP_Label_C* FriendsOnlineText; // 0x280(0x08)
	struct UImage* Icon; // 0x288(0x08)
	struct UWBP_Label_C* MyContacts_Label; // 0x290(0x08)
	struct UOverlay* NotificationBubble; // 0x298(0x08)
	struct UButton* NotificationButton; // 0x2a0(0x08)
	struct UTextBlock* NotificationCount; // 0x2a8(0x08)
	struct UImage* RedBubble; // 0x2b0(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_1; // 0x2b8(0x08)
	struct FMulticastInlineDelegate OnFriendsClicked; // 0x2c0(0x10)
	struct FMulticastInlineDelegate OnNotificationsClicked; // 0x2d0(0x10)
	struct TArray<struct FHWFriend> MyFriendsArray; // 0x2e0(0x10)
	int32_t NumOfInvitations; // 0x2f0(0x04)
	int32_t NumFriendsOnline; // 0x2f4(0x04)
	int32_t NumPlatformFriendsOnline; // 0x2f8(0x04)

	void OnCanReconnectToMatch(); // Function WBP_Footer.WBP_Footer_C.OnCanReconnectToMatch // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnCanReconnectToQueue(); // Function WBP_Footer.WBP_Footer_C.OnCanReconnectToQueue // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnGetWeekInfo(struct FHWWeekInfoResponse Response); // Function WBP_Footer.WBP_Footer_C.OnGetWeekInfo // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnGetWeekInfoFailed(); // Function WBP_Footer.WBP_Footer_C.OnGetWeekInfoFailed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnLogoutCompleted(); // Function WBP_Footer.WBP_Footer_C.OnLogoutCompleted // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMasterDataLoaded(); // Function WBP_Footer.WBP_Footer_C.OnMasterDataLoaded // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMasterDataLoadFailed(enum class EHWErrorMessage Error, struct FString Message); // Function WBP_Footer.WBP_Footer_C.OnMasterDataLoadFailed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMatchStatusMatched(); // Function WBP_Footer.WBP_Footer_C.OnMatchStatusMatched // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMatchStatusOpen(); // Function WBP_Footer.WBP_Footer_C.OnMatchStatusOpen // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMatchStatusStarted(); // Function WBP_Footer.WBP_Footer_C.OnMatchStatusStarted // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMatchStatusWaiting(); // Function WBP_Footer.WBP_Footer_C.OnMatchStatusWaiting // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnReconnectableMatchLost(); // Function WBP_Footer.WBP_Footer_C.OnReconnectableMatchLost // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnServerPingsDone(); // Function WBP_Footer.WBP_Footer_C.OnServerPingsDone // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnShopCampaignsLoaded(); // Function WBP_Footer.WBP_Footer_C.OnShopCampaignsLoaded // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeamInviteAcceptProcessed(bool Success, enum class EHWErrorMessage ErrorMessage); // Function WBP_Footer.WBP_Footer_C.OnTeamInviteAcceptProcessed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnUpdateRequired(); // Function WBP_Footer.WBP_Footer_C.OnUpdateRequired // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnUserLoaded(struct FString SessionIdLoadedUser); // Function WBP_Footer.WBP_Footer_C.OnUserLoaded // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnUserLoadFailed(struct FString SessionIdLoadedUser); // Function WBP_Footer.WBP_Footer_C.OnUserLoadFailed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnUserStored(); // Function WBP_Footer.WBP_Footer_C.OnUserStored // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnUserStoreFailed(); // Function WBP_Footer.WBP_Footer_C.OnUserStoreFailed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnWholePartyReady(); // Function WBP_Footer.WBP_Footer_C.OnWholePartyReady // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateFooter(int32_t FriendCount, int32_t OnlineFriendCount, int32_t  NotificationCount); // Function WBP_Footer.WBP_Footer_C.UpdateFooter // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__FriendsOnlineButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_Footer.WBP_Footer_C.BndEvt__FriendsOnlineButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__NotificationButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function WBP_Footer.WBP_Footer_C.BndEvt__NotificationButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void OnFriendsListUpdated(bool Success, struct FHWFetchFriendsResponse Response); // Function WBP_Footer.WBP_Footer_C.OnFriendsListUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__FriendsOnlineButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function WBP_Footer.WBP_Footer_C.BndEvt__FriendsOnlineButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__FriendsOnlineButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function WBP_Footer.WBP_Footer_C.BndEvt__FriendsOnlineButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void UpdateOnlinePlatformFriends(int32_t OnlinePlatformFriends); // Function WBP_Footer.WBP_Footer_C.UpdateOnlinePlatformFriends // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateOnlineFriendsCount(); // Function WBP_Footer.WBP_Footer_C.UpdateOnlineFriendsCount // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Footer(int32_t EntryPoint); // Function WBP_Footer.WBP_Footer_C.ExecuteUbergraph_WBP_Footer // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
	void OnNotificationsClicked__DelegateSignature(); // Function WBP_Footer.WBP_Footer_C.OnNotificationsClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnFriendsClicked__DelegateSignature(); // Function WBP_Footer.WBP_Footer_C.OnFriendsClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

