// WidgetBlueprintGeneratedClass WBP_Currencies_Tooltip.WBP_Currencies_Tooltip_C
// Size: 0x288 (Inherited: 0x268)
struct UWBP_Currencies_Tooltip_C : UHWWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct URichTextBlock* MaterialsText; // 0x270(0x08)
	struct FString MaterialStr; // 0x278(0x10)

	void OnCanReconnectToMatch(); // Function WBP_Currencies_Tooltip.WBP_Currencies_Tooltip_C.OnCanReconnectToMatch // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnCanReconnectToQueue(); // Function WBP_Currencies_Tooltip.WBP_Currencies_Tooltip_C.OnCanReconnectToQueue // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnFriendsListUpdated(bool Success, struct FHWFetchFriendsResponse Response); // Function WBP_Currencies_Tooltip.WBP_Currencies_Tooltip_C.OnFriendsListUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnGetWeekInfo(struct FHWWeekInfoResponse Response); // Function WBP_Currencies_Tooltip.WBP_Currencies_Tooltip_C.OnGetWeekInfo // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnGetWeekInfoFailed(); // Function WBP_Currencies_Tooltip.WBP_Currencies_Tooltip_C.OnGetWeekInfoFailed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnLogoutCompleted(); // Function WBP_Currencies_Tooltip.WBP_Currencies_Tooltip_C.OnLogoutCompleted // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMasterDataLoaded(); // Function WBP_Currencies_Tooltip.WBP_Currencies_Tooltip_C.OnMasterDataLoaded // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMasterDataLoadFailed(enum class EHWErrorMessage Error, struct FString Message); // Function WBP_Currencies_Tooltip.WBP_Currencies_Tooltip_C.OnMasterDataLoadFailed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMatchStatusMatched(); // Function WBP_Currencies_Tooltip.WBP_Currencies_Tooltip_C.OnMatchStatusMatched // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMatchStatusOpen(); // Function WBP_Currencies_Tooltip.WBP_Currencies_Tooltip_C.OnMatchStatusOpen // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMatchStatusStarted(); // Function WBP_Currencies_Tooltip.WBP_Currencies_Tooltip_C.OnMatchStatusStarted // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMatchStatusWaiting(); // Function WBP_Currencies_Tooltip.WBP_Currencies_Tooltip_C.OnMatchStatusWaiting // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnReconnectableMatchLost(); // Function WBP_Currencies_Tooltip.WBP_Currencies_Tooltip_C.OnReconnectableMatchLost // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnServerPingsDone(); // Function WBP_Currencies_Tooltip.WBP_Currencies_Tooltip_C.OnServerPingsDone // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnShopCampaignsLoaded(); // Function WBP_Currencies_Tooltip.WBP_Currencies_Tooltip_C.OnShopCampaignsLoaded // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeamInviteAcceptProcessed(bool Success, enum class EHWErrorMessage ErrorMessage); // Function WBP_Currencies_Tooltip.WBP_Currencies_Tooltip_C.OnTeamInviteAcceptProcessed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnUpdateRequired(); // Function WBP_Currencies_Tooltip.WBP_Currencies_Tooltip_C.OnUpdateRequired // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnUserLoadFailed(struct FString SessionIdLoadedUser); // Function WBP_Currencies_Tooltip.WBP_Currencies_Tooltip_C.OnUserLoadFailed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnUserStored(); // Function WBP_Currencies_Tooltip.WBP_Currencies_Tooltip_C.OnUserStored // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnUserStoreFailed(); // Function WBP_Currencies_Tooltip.WBP_Currencies_Tooltip_C.OnUserStoreFailed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnWholePartyReady(); // Function WBP_Currencies_Tooltip.WBP_Currencies_Tooltip_C.OnWholePartyReady // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnUserLoaded(struct FString SessionIdLoadedUser); // Function WBP_Currencies_Tooltip.WBP_Currencies_Tooltip_C.OnUserLoaded // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_Currencies_Tooltip.WBP_Currencies_Tooltip_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Currencies_Tooltip(int32_t EntryPoint); // Function WBP_Currencies_Tooltip.WBP_Currencies_Tooltip_C.ExecuteUbergraph_WBP_Currencies_Tooltip // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

