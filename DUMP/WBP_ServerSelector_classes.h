// WidgetBlueprintGeneratedClass WBP_ServerSelector.WBP_ServerSelector_C
// Size: 0x3a8 (Inherited: 0x268)
struct UWBP_ServerSelector_C : UHWWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UBorder* AlternatingRowBorder_Light; // 0x270(0x08)
	struct UWBP_Checkbox_C* CB_UseOnlySelected; // 0x278(0x08)
	struct UComboBoxString* ServerPulldown; // 0x280(0x08)
	struct TArray<struct FHWServerLocationData> ServerData; // 0x288(0x10)
	int32_t MinPing; // 0x298(0x04)
	char pad_29C[0x4]; // 0x29c(0x04)
	struct TArray<struct FHWServerLocationData> ServersInPulldown; // 0x2a0(0x10)
	struct FMulticastInlineDelegate PreferredServerLocationChanged; // 0x2b0(0x10)
	int32_t PingInMS; // 0x2c0(0x04)
	enum class EHWServerLocation LowestPingLocation; // 0x2c4(0x01)
	char pad_2C5[0x3]; // 0x2c5(0x03)
	struct FString BestOption; // 0x2c8(0x10)
	struct TMap<enum class EHWServerLocation, struct FString> ServerPings; // 0x2d8(0x50)
	struct TMap<struct FString, enum class EHWServerLocation> PingServer; // 0x328(0x50)
	bool PingsListed; // 0x378(0x01)
	char pad_379[0x3]; // 0x379(0x03)
	float RelativePing; // 0x37c(0x04)
	enum class EHWServerLocation LoopServerLocation; // 0x380(0x01)
	char pad_381[0x7]; // 0x381(0x07)
	struct FString LoopLocationAndPingAsString; // 0x388(0x10)
	bool UserPreferredLocationOnline; // 0x398(0x01)
	char pad_399[0x7]; // 0x399(0x07)
	struct UHWGameUserSettings* HWGame User Settings; // 0x3a0(0x08)

	void GetPingWord(float Ping, struct FText Word); // Function WBP_ServerSelector.WBP_ServerSelector_C.GetPingWord // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void SaveServerLocation(enum class EHWServerLocation Location, struct FString SelectedOption); // Function WBP_ServerSelector.WBP_ServerSelector_C.SaveServerLocation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetDefaultValues(); // Function WBP_ServerSelector.WBP_ServerSelector_C.SetDefaultValues // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetSavedLocation(); // Function WBP_ServerSelector.WBP_ServerSelector_C.SetSavedLocation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void On Http Ping Failed(struct FString Hostname, enum class EHWServerLocation ServerLocation); // Function WBP_ServerSelector.WBP_ServerSelector_C.On Http Ping Failed // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void On Http Ping Completed(struct FString Hostname, int32_t TimeMS, enum class EHWServerLocation ServerLocation); // Function WBP_ServerSelector.WBP_ServerSelector_C.On Http Ping Completed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void FindServerByAddress(struct FString Address, bool Found, struct FHWServerLocationData Data); // Function WBP_ServerSelector.WBP_ServerSelector_C.FindServerByAddress // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void Initialize(); // Function WBP_ServerSelector.WBP_ServerSelector_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnCanReconnectToMatch(); // Function WBP_ServerSelector.WBP_ServerSelector_C.OnCanReconnectToMatch // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnCanReconnectToQueue(); // Function WBP_ServerSelector.WBP_ServerSelector_C.OnCanReconnectToQueue // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnFriendsListUpdated(bool Success, struct FHWFetchFriendsResponse Response); // Function WBP_ServerSelector.WBP_ServerSelector_C.OnFriendsListUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnGetWeekInfo(struct FHWWeekInfoResponse Response); // Function WBP_ServerSelector.WBP_ServerSelector_C.OnGetWeekInfo // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnGetWeekInfoFailed(); // Function WBP_ServerSelector.WBP_ServerSelector_C.OnGetWeekInfoFailed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnLogoutCompleted(); // Function WBP_ServerSelector.WBP_ServerSelector_C.OnLogoutCompleted // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMasterDataLoaded(); // Function WBP_ServerSelector.WBP_ServerSelector_C.OnMasterDataLoaded // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMasterDataLoadFailed(enum class EHWErrorMessage Error, struct FString Message); // Function WBP_ServerSelector.WBP_ServerSelector_C.OnMasterDataLoadFailed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMatchStatusMatched(); // Function WBP_ServerSelector.WBP_ServerSelector_C.OnMatchStatusMatched // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMatchStatusOpen(); // Function WBP_ServerSelector.WBP_ServerSelector_C.OnMatchStatusOpen // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMatchStatusStarted(); // Function WBP_ServerSelector.WBP_ServerSelector_C.OnMatchStatusStarted // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMatchStatusWaiting(); // Function WBP_ServerSelector.WBP_ServerSelector_C.OnMatchStatusWaiting // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnReconnectableMatchLost(); // Function WBP_ServerSelector.WBP_ServerSelector_C.OnReconnectableMatchLost // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnShopCampaignsLoaded(); // Function WBP_ServerSelector.WBP_ServerSelector_C.OnShopCampaignsLoaded // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeamInviteAcceptProcessed(bool Success, enum class EHWErrorMessage ErrorMessage); // Function WBP_ServerSelector.WBP_ServerSelector_C.OnTeamInviteAcceptProcessed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnUpdateRequired(); // Function WBP_ServerSelector.WBP_ServerSelector_C.OnUpdateRequired // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnUserLoaded(struct FString SessionIdLoadedUser); // Function WBP_ServerSelector.WBP_ServerSelector_C.OnUserLoaded // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnUserLoadFailed(struct FString SessionIdLoadedUser); // Function WBP_ServerSelector.WBP_ServerSelector_C.OnUserLoadFailed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnUserStored(); // Function WBP_ServerSelector.WBP_ServerSelector_C.OnUserStored // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnUserStoreFailed(); // Function WBP_ServerSelector.WBP_ServerSelector_C.OnUserStoreFailed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnWholePartyReady(); // Function WBP_ServerSelector.WBP_ServerSelector_C.OnWholePartyReady // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_ServerSelector.WBP_ServerSelector_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__ServerPulldown_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, enum class ESelectInfo SelectionType); // Function WBP_ServerSelector.WBP_ServerSelector_C.BndEvt__ServerPulldown_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__CB_UseOnlySelected_K2Node_ComponentBoundEvent_1_OnToggled__DelegateSignature(bool IsChecked); // Function WBP_ServerSelector.WBP_ServerSelector_C.BndEvt__CB_UseOnlySelected_K2Node_ComponentBoundEvent_1_OnToggled__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void OnServerPingsDone(); // Function WBP_ServerSelector.WBP_ServerSelector_C.OnServerPingsDone // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_ServerSelector(int32_t EntryPoint); // Function WBP_ServerSelector.WBP_ServerSelector_C.ExecuteUbergraph_WBP_ServerSelector // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
	void PreferredServerLocationChanged__DelegateSignature(struct FString SelectedOption); // Function WBP_ServerSelector.WBP_ServerSelector_C.PreferredServerLocationChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

