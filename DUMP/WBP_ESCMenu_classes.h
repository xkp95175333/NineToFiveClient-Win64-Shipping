// WidgetBlueprintGeneratedClass WBP_ESCMenu.WBP_ESCMenu_C
// Size: 0x3f8 (Inherited: 0x268)
struct UWBP_ESCMenu_C : UHWWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UImage* BorderCentral; // 0x270(0x08)
	struct UImage* BorderLeft_2; // 0x278(0x08)
	struct UImage* BorderRight; // 0x280(0x08)
	struct UHorizontalBox* HelpButton_Block; // 0x288(0x08)
	struct UCanvasPanel* KeybindingsPanel; // 0x290(0x08)
	struct UCanvasPanel* MenuPanel; // 0x298(0x08)
	struct UWidgetSwitcher* PanelSwitcher; // 0x2a0(0x08)
	struct UWBP_SettingRow_C* SettingRow; // 0x2a8(0x08)
	struct UWBP_SettingsUI_C* SettingsUI; // 0x2b0(0x08)
	struct UWBP_SettingRow_C* SettingVoiceChatModeDisabled; // 0x2b8(0x08)
	struct UWBP_SettingRow_C* SettingVoiceChatModeEnabled; // 0x2c0(0x08)
	struct UWBP_Button_C* TermsofServiceButton; // 0x2c8(0x08)
	struct UWBP_RichTextLabel_C* VersionLabel; // 0x2d0(0x08)
	struct UWBP_Button_C* ViewPrivacyButton; // 0x2d8(0x08)
	struct UDefaultRadioSelectSetting_C* VoiceChatMode; // 0x2e0(0x08)
	struct UDefaultRadioSelectSetting_C* VoiceChatMode_2; // 0x2e8(0x08)
	struct UWBP_ESCMenu_ActionButton_C* WBP_ESCMenu_ActionButton_ExitGame; // 0x2f0(0x08)
	struct UWBP_ESCMenu_ActionButton_C* WBP_ESCMenu_ActionButton_Keybindings; // 0x2f8(0x08)
	struct UWBP_ESCMenu_ActionButton_C* WBP_ESCMenu_ActionButton_Leave; // 0x300(0x08)
	struct UWBP_ESCMenu_ActionButton_C* WBP_ESCMenu_ActionButton_Logout; // 0x308(0x08)
	struct UWBP_ESCMenu_ActionButton_C* WBP_ESCMenu_ActionButton_Settings; // 0x310(0x08)
	struct UWBP_ESCMenu_ActionButton_C* WBP_ESCMenu_ActionButton_StartAITutorial; // 0x318(0x08)
	struct UWBP_ESCMenu_ActionButton_C* WBP_ESCMenu_ActionButton_StartTutorial; // 0x320(0x08)
	struct UWBP_ESCMenu_ActionButton_C* WBP_ESCMenu_Back; // 0x328(0x08)
	struct UWBP_ESCMenu_HelpButton_C* WBP_ESCMenu_HelpButton_Bug; // 0x330(0x08)
	struct UWBP_ESCMenu_HelpButton_C* WBP_ESCMenu_HelpButton_Discord; // 0x338(0x08)
	struct UWBP_ESCMenu_HelpButton_C* WBP_ESCMenu_HelpButton_StaffCredits; // 0x340(0x08)
	struct UWBP_ESCMenu_HelpButton_C* WBP_ESCMenu_HelpButton_Support; // 0x348(0x08)
	struct UWBP_ESCMenu_HelpButton_C* WBP_ESCMenu_HelpButton_Survey; // 0x350(0x08)
	struct UWBP_ImageButton_C* WBP_ImageButton; // 0x358(0x08)
	struct UWBP_RichTextLabel_C* WBP_RichTextLabel; // 0x360(0x08)
	struct UWBP_RichTextLabel_C* WBP_RichTextLabel_2; // 0x368(0x08)
	struct UWBP_SectionHeaderBlack_C* WBP_SectionHeaderBlack; // 0x370(0x08)
	struct UWBP_SectionHeaderBlack_C* WBP_SectionHeaderBlack_2; // 0x378(0x08)
	struct UWBP_ServerSelector_C* WBP_ServerSelector_2; // 0x380(0x08)
	struct UWBP_StaffCredits_Screen_C* WBP_StaffCredits_Screen; // 0x388(0x08)
	struct UWBP_TeamVoiceChatSettings_C* WBP_TeamVoiceChatSettings; // 0x390(0x08)
	struct UWidgetSwitcher* WidgetSwitcherVoiceChat; // 0x398(0x08)
	int32_t CurrentResolutionIndex; // 0x3a0(0x04)
	enum class EWindowMode InitialFullscreenMode; // 0x3a4(0x01)
	char pad_3A5[0x3]; // 0x3a5(0x03)
	struct TMap<struct FString, int32_t> PresentPlayers; // 0x3a8(0x50)

	void OnBack(bool IsHandled); // Function WBP_ESCMenu.WBP_ESCMenu_C.OnBack // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void IsInTutorial?(bool InTutorial); // Function WBP_ESCMenu.WBP_ESCMenu_C.IsInTutorial? // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	struct UWidget* Get_Button_ReportBug_ToolTipWidget_1(); // Function WBP_ESCMenu.WBP_ESCMenu_C.Get_Button_ReportBug_ToolTipWidget_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	struct UWidget* Get_Button_Support_ToolTipWidget_1(); // Function WBP_ESCMenu.WBP_ESCMenu_C.Get_Button_Support_ToolTipWidget_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	struct UWidget* Get_Button_Discord_ToolTipWidget_1(); // Function WBP_ESCMenu.WBP_ESCMenu_C.Get_Button_Discord_ToolTipWidget_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	struct UWidget* Get_Button_Survey_ToolTipWidget_1(); // Function WBP_ESCMenu.WBP_ESCMenu_C.Get_Button_Survey_ToolTipWidget_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void SetStartTutorialButtonState(); // Function WBP_ESCMenu.WBP_ESCMenu_C.SetStartTutorialButtonState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetDefaultVCMOptionsForFriends(); // Function WBP_ESCMenu.WBP_ESCMenu_C.SetDefaultVCMOptionsForFriends // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetVCMOptionsForFriends(bool Enable); // Function WBP_ESCMenu.WBP_ESCMenu_C.SetVCMOptionsForFriends // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void MuteFriend(bool IsChecked, int32_t FriendIndex); // Function WBP_ESCMenu.WBP_ESCMenu_C.MuteFriend // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetVersionLabel(); // Function WBP_ESCMenu.WBP_ESCMenu_C.SetVersionLabel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void HasResolutionChanged(bool Result); // Function WBP_ESCMenu.WBP_ESCMenu_C.HasResolutionChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void HasFullscreenModeChanged(bool Result); // Function WBP_ESCMenu.WBP_ESCMenu_C.HasFullscreenModeChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void Close Menu(); // Function WBP_ESCMenu.WBP_ESCMenu_C.Close Menu // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnMatchStatusMatched(); // Function WBP_ESCMenu.WBP_ESCMenu_C.OnMatchStatusMatched // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMatchStatusOpen(); // Function WBP_ESCMenu.WBP_ESCMenu_C.OnMatchStatusOpen // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMatchStatusStarted(); // Function WBP_ESCMenu.WBP_ESCMenu_C.OnMatchStatusStarted // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMatchStatusWaiting(); // Function WBP_ESCMenu.WBP_ESCMenu_C.OnMatchStatusWaiting // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnReconnectableMatchLost(); // Function WBP_ESCMenu.WBP_ESCMenu_C.OnReconnectableMatchLost // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnServerPingsDone(); // Function WBP_ESCMenu.WBP_ESCMenu_C.OnServerPingsDone // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnShopCampaignsLoaded(); // Function WBP_ESCMenu.WBP_ESCMenu_C.OnShopCampaignsLoaded // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeamInviteAcceptProcessed(bool Success, enum class EHWErrorMessage ErrorMessage); // Function WBP_ESCMenu.WBP_ESCMenu_C.OnTeamInviteAcceptProcessed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnUpdateRequired(); // Function WBP_ESCMenu.WBP_ESCMenu_C.OnUpdateRequired // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnUserLoaded(struct FString SessionIdLoadedUser); // Function WBP_ESCMenu.WBP_ESCMenu_C.OnUserLoaded // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnUserLoadFailed(struct FString SessionIdLoadedUser); // Function WBP_ESCMenu.WBP_ESCMenu_C.OnUserLoadFailed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnUserStored(); // Function WBP_ESCMenu.WBP_ESCMenu_C.OnUserStored // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnUserStoreFailed(); // Function WBP_ESCMenu.WBP_ESCMenu_C.OnUserStoreFailed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_ESCMenu.WBP_ESCMenu_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnQuitConfirmation(bool Confirmed); // Function WBP_ESCMenu.WBP_ESCMenu_C.OnQuitConfirmation // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnLogoutConfirmation(bool Result); // Function WBP_ESCMenu.WBP_ESCMenu_C.OnLogoutConfirmation // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnLeaveMatchConfirmation(bool Result); // Function WBP_ESCMenu.WBP_ESCMenu_C.OnLeaveMatchConfirmation // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnMasterDataLoadFailed(enum class EHWErrorMessage Error, struct FString Message); // Function WBP_ESCMenu.WBP_ESCMenu_C.OnMasterDataLoadFailed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnReportBug(bool Result); // Function WBP_ESCMenu.WBP_ESCMenu_C.OnReportBug // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void LogoutHandler(struct FHWResponseBase Response); // Function WBP_ESCMenu.WBP_ESCMenu_C.LogoutHandler // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void LogoutErrorHandler(enum class EHWErrorMessage ErrorMessage); // Function WBP_ESCMenu.WBP_ESCMenu_C.LogoutErrorHandler // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void HandleEsc(); // Function WBP_ESCMenu.WBP_ESCMenu_C.HandleEsc // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnMasterDataLoaded(); // Function WBP_ESCMenu.WBP_ESCMenu_C.OnMasterDataLoaded // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void CustomEvent_1(bool Result); // Function WBP_ESCMenu.WBP_ESCMenu_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnLogoutCompleted(); // Function WBP_ESCMenu.WBP_ESCMenu_C.OnLogoutCompleted // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnGetWeekInfoFailed(); // Function WBP_ESCMenu.WBP_ESCMenu_C.OnGetWeekInfoFailed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_ImageButton_K2Node_ComponentBoundEvent_24_OnClick__DelegateSignature(struct UWBP_ImageButton_C* Button); // Function WBP_ESCMenu.WBP_ESCMenu_C.BndEvt__WBP_ImageButton_K2Node_ComponentBoundEvent_24_OnClick__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void OnGetWeekInfo(struct FHWWeekInfoResponse Response); // Function WBP_ESCMenu.WBP_ESCMenu_C.OnGetWeekInfo // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnFriendsListUpdated(bool Success, struct FHWFetchFriendsResponse Response); // Function WBP_ESCMenu.WBP_ESCMenu_C.OnFriendsListUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__SettingsUI_K2Node_ComponentBoundEvent_25_CloseRequested__DelegateSignature(); // Function WBP_ESCMenu.WBP_ESCMenu_C.BndEvt__SettingsUI_K2Node_ComponentBoundEvent_25_CloseRequested__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void OnCanReconnectToQueue(); // Function WBP_ESCMenu.WBP_ESCMenu_C.OnCanReconnectToQueue // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__ViewPrivacyButton_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_ESCMenu.WBP_ESCMenu_C.BndEvt__ViewPrivacyButton_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void OnCanReconnectToMatch(); // Function WBP_ESCMenu.WBP_ESCMenu_C.OnCanReconnectToMatch // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void DummyEvent(bool Result); // Function WBP_ESCMenu.WBP_ESCMenu_C.DummyEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_ESCMenu_HelpButton_Bug_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature(); // Function WBP_ESCMenu.WBP_ESCMenu_C.BndEvt__WBP_ESCMenu_HelpButton_Bug_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_ESCMenu_HelpButton_Support_K2Node_ComponentBoundEvent_18_OnClicked__DelegateSignature(); // Function WBP_ESCMenu.WBP_ESCMenu_C.BndEvt__WBP_ESCMenu_HelpButton_Support_K2Node_ComponentBoundEvent_18_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_ESCMenu_HelpButton_Discord_K2Node_ComponentBoundEvent_20_OnClicked__DelegateSignature(); // Function WBP_ESCMenu.WBP_ESCMenu_C.BndEvt__WBP_ESCMenu_HelpButton_Discord_K2Node_ComponentBoundEvent_20_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_ESCMenu_HelpButton_Survey_K2Node_ComponentBoundEvent_27_OnClicked__DelegateSignature(); // Function WBP_ESCMenu.WBP_ESCMenu_C.BndEvt__WBP_ESCMenu_HelpButton_Survey_K2Node_ComponentBoundEvent_27_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void OnMicrophoneHotplugChanged(bool Value); // Function WBP_ESCMenu.WBP_ESCMenu_C.OnMicrophoneHotplugChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_ESCMenu_Back_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature(); // Function WBP_ESCMenu.WBP_ESCMenu_C.BndEvt__WBP_ESCMenu_Back_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_ESCMenu_ActionButton_Settings_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature(); // Function WBP_ESCMenu.WBP_ESCMenu_C.BndEvt__WBP_ESCMenu_ActionButton_Settings_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_ESCMenu_ActionButton_Leave_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature(); // Function WBP_ESCMenu.WBP_ESCMenu_C.BndEvt__WBP_ESCMenu_ActionButton_Leave_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_ESCMenu_ActionButton_StartTutorial_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature(); // Function WBP_ESCMenu.WBP_ESCMenu_C.BndEvt__WBP_ESCMenu_ActionButton_StartTutorial_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_ESCMenu_ActionButton_Logout_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(); // Function WBP_ESCMenu.WBP_ESCMenu_C.BndEvt__WBP_ESCMenu_ActionButton_Logout_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void LogoutConfirmation(bool Result); // Function WBP_ESCMenu.WBP_ESCMenu_C.LogoutConfirmation // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnLogoutSucceeded(struct FHWResponseBase Response); // Function WBP_ESCMenu.WBP_ESCMenu_C.OnLogoutSucceeded // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnLogoutFailed(enum class EHWErrorMessage ErrorMessage); // Function WBP_ESCMenu.WBP_ESCMenu_C.OnLogoutFailed // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_ESCMenu_WBP_ESCMenu_HelpButton_StaffCredits_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(); // Function WBP_ESCMenu.WBP_ESCMenu_C.BndEvt__WBP_ESCMenu_WBP_ESCMenu_HelpButton_StaffCredits_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_ESCMenu_TermsofServiceButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_ESCMenu.WBP_ESCMenu_C.BndEvt__WBP_ESCMenu_TermsofServiceButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_StaffCredits_Screen_K2Node_ComponentBoundEvent_3_OnCloseClicked__DelegateSignature(); // Function WBP_ESCMenu.WBP_ESCMenu_C.BndEvt__WBP_StaffCredits_Screen_K2Node_ComponentBoundEvent_3_OnCloseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void CloseCreditsScreen(); // Function WBP_ESCMenu.WBP_ESCMenu_C.CloseCreditsScreen // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_ESCMenu_ActionButton_StartAITutorial_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(); // Function WBP_ESCMenu.WBP_ESCMenu_C.BndEvt__WBP_ESCMenu_ActionButton_StartAITutorial_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void OnWholePartyReady(); // Function WBP_ESCMenu.WBP_ESCMenu_C.OnWholePartyReady // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_ESCMenu_ActionButton_ExitGame_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature(); // Function WBP_ESCMenu.WBP_ESCMenu_C.BndEvt__WBP_ESCMenu_ActionButton_ExitGame_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void ResetButtonStates(); // Function WBP_ESCMenu.WBP_ESCMenu_C.ResetButtonStates // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_ESCMenu(int32_t EntryPoint); // Function WBP_ESCMenu.WBP_ESCMenu_C.ExecuteUbergraph_WBP_ESCMenu // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

