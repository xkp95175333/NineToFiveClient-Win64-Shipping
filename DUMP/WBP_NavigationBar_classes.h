// WidgetBlueprintGeneratedClass WBP_NavigationBar.WBP_NavigationBar_C
// Size: 0x301 (Inherited: 0x260)
struct UWBP_NavigationBar_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UHorizontalBox* ButtonContainer; // 0x268(0x08)
	struct UImage* NaviBar_Glow; // 0x270(0x08)
	struct UImage* NaviBar_Line; // 0x278(0x08)
	struct UImage* NaviBar_Selected; // 0x280(0x08)
	struct TArray<struct FLinearColor> SeparatorColor; // 0x288(0x10)
	struct TArray<struct UWBP_Button_C*> ButtonWidgets; // 0x298(0x10)
	float Anim_BarStartIndex; // 0x2a8(0x04)
	float Anim_BarEndIndex; // 0x2ac(0x04)
	int32_t SelectedIndex; // 0x2b0(0x04)
	float Anim_Alpha; // 0x2b4(0x04)
	struct FTimerHandle Anim_Timer; // 0x2b8(0x08)
	float Anim_Speed; // 0x2c0(0x04)
	float Anim_TimeStep; // 0x2c4(0x04)
	struct UBP_UIStyle_Button_C* ButtonStyle; // 0x2c8(0x08)
	struct UUserWidget* Separator; // 0x2d0(0x08)
	struct FMulticastInlineDelegate OnClicked; // 0x2d8(0x10)
	struct TArray<struct FBP_NavigationBar_Item> Items; // 0x2e8(0x10)
	bool ShowHorizontalLine; // 0x2f8(0x01)
	bool bEnableChangingTabWithGamepad; // 0x2f9(0x01)
	char pad_2FA[0x2]; // 0x2fa(0x02)
	int32_t RemovedButtons; // 0x2fc(0x04)
	bool UseTriggerToChangeTab; // 0x300(0x01)

	void RemoveButtonById(struct FName ID); // Function WBP_NavigationBar.WBP_NavigationBar_C.RemoveButtonById // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ClickButtonByIndexOffsetTemp(int32_t IndexOffset); // Function WBP_NavigationBar.WBP_NavigationBar_C.ClickButtonByIndexOffsetTemp // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetButtonWidgetById(struct FName ButtonId, struct UWBP_Button_C* Widget); // Function WBP_NavigationBar.WBP_NavigationBar_C.GetButtonWidgetById // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetButtonIndexById(struct FName ID, bool Found, int32_t Index); // Function WBP_NavigationBar.WBP_NavigationBar_C.GetButtonIndexById // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetButtonByView(enum class BPE_UIView View, bool Found, struct FBP_NavigationBar_Item Button); // Function WBP_NavigationBar.WBP_NavigationBar_C.GetButtonByView // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetButtonById(struct FName ID, bool Found, struct FBP_NavigationBar_Item Button); // Function WBP_NavigationBar.WBP_NavigationBar_C.GetButtonById // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void HasButton(struct FName ID, bool Result); // Function WBP_NavigationBar.WBP_NavigationBar_C.HasButton // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void SelectButtonById(struct FName ID); // Function WBP_NavigationBar.WBP_NavigationBar_C.SelectButtonById // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SelectButtonAtIndex(int32_t Idx, bool Animate); // Function WBP_NavigationBar.WBP_NavigationBar_C.SelectButtonAtIndex // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void TickAnimation(); // Function WBP_NavigationBar.WBP_NavigationBar_C.TickAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetWidgetPosition(struct UCanvasPanelSlot* Slot, float Position); // Function WBP_NavigationBar.WBP_NavigationBar_C.SetWidgetPosition // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnButtonClicked(struct UWBP_Button_C* Button); // Function WBP_NavigationBar.WBP_NavigationBar_C.OnButtonClicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SelectButton(struct UWBP_Button_C* Button, bool Animate); // Function WBP_NavigationBar.WBP_NavigationBar_C.SelectButton // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetButton(struct FName ID, struct UWBP_Button_C* Button); // Function WBP_NavigationBar.WBP_NavigationBar_C.GetButton // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void AddButton(struct FName ID, struct FText Text, enum class BPE_UIView View); // Function WBP_NavigationBar.WBP_NavigationBar_C.AddButton // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void AddSeparator(); // Function WBP_NavigationBar.WBP_NavigationBar_C.AddSeparator // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnCanReconnectToMatch(); // Function WBP_NavigationBar.WBP_NavigationBar_C.OnCanReconnectToMatch // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnCanReconnectToQueue(); // Function WBP_NavigationBar.WBP_NavigationBar_C.OnCanReconnectToQueue // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnFriendsListUpdated(bool Success, struct FHWFetchFriendsResponse Response); // Function WBP_NavigationBar.WBP_NavigationBar_C.OnFriendsListUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnGetWeekInfo(struct FHWWeekInfoResponse Response); // Function WBP_NavigationBar.WBP_NavigationBar_C.OnGetWeekInfo // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnGetWeekInfoFailed(); // Function WBP_NavigationBar.WBP_NavigationBar_C.OnGetWeekInfoFailed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnLogoutCompleted(); // Function WBP_NavigationBar.WBP_NavigationBar_C.OnLogoutCompleted // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMasterDataLoaded(); // Function WBP_NavigationBar.WBP_NavigationBar_C.OnMasterDataLoaded // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMasterDataLoadFailed(enum class EHWErrorMessage Error, struct FString Message); // Function WBP_NavigationBar.WBP_NavigationBar_C.OnMasterDataLoadFailed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMatchStatusMatched(); // Function WBP_NavigationBar.WBP_NavigationBar_C.OnMatchStatusMatched // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMatchStatusOpen(); // Function WBP_NavigationBar.WBP_NavigationBar_C.OnMatchStatusOpen // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMatchStatusStarted(); // Function WBP_NavigationBar.WBP_NavigationBar_C.OnMatchStatusStarted // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMatchStatusWaiting(); // Function WBP_NavigationBar.WBP_NavigationBar_C.OnMatchStatusWaiting // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnReconnectableMatchLost(); // Function WBP_NavigationBar.WBP_NavigationBar_C.OnReconnectableMatchLost // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnServerPingsDone(); // Function WBP_NavigationBar.WBP_NavigationBar_C.OnServerPingsDone // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnShopCampaignsLoaded(); // Function WBP_NavigationBar.WBP_NavigationBar_C.OnShopCampaignsLoaded // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeamInviteAcceptProcessed(bool Success, enum class EHWErrorMessage ErrorMessage); // Function WBP_NavigationBar.WBP_NavigationBar_C.OnTeamInviteAcceptProcessed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnUpdateRequired(); // Function WBP_NavigationBar.WBP_NavigationBar_C.OnUpdateRequired // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnUserLoaded(struct FString SessionIdLoadedUser); // Function WBP_NavigationBar.WBP_NavigationBar_C.OnUserLoaded // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnUserLoadFailed(struct FString SessionIdLoadedUser); // Function WBP_NavigationBar.WBP_NavigationBar_C.OnUserLoadFailed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnUserStored(); // Function WBP_NavigationBar.WBP_NavigationBar_C.OnUserStored // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnUserStoreFailed(); // Function WBP_NavigationBar.WBP_NavigationBar_C.OnUserStoreFailed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnWholePartyReady(); // Function WBP_NavigationBar.WBP_NavigationBar_C.OnWholePartyReady // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void PreConstruct(bool IsDesignTime); // Function WBP_NavigationBar.WBP_NavigationBar_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_NavigationBar.WBP_NavigationBar_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void MenuTabNext(); // Function WBP_NavigationBar.WBP_NavigationBar_C.MenuTabNext // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void MenuTabPrevious(); // Function WBP_NavigationBar.WBP_NavigationBar_C.MenuTabPrevious // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Reset(); // Function WBP_NavigationBar.WBP_NavigationBar_C.Reset // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_NavigationBar(int32_t EntryPoint); // Function WBP_NavigationBar.WBP_NavigationBar_C.ExecuteUbergraph_WBP_NavigationBar // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
	void OnClicked__DelegateSignature(struct FName ID); // Function WBP_NavigationBar.WBP_NavigationBar_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

