// WidgetBlueprintGeneratedClass WBP_Hub_Screen.WBP_Hub_Screen_C
// Size: 0x440 (Inherited: 0x270)
struct UWBP_Hub_Screen_C : UWBP_MenuScreenBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct UButton* AccessLevel_Button; // 0x278(0x08)
	struct UBorder* AccessLevelBackground; // 0x280(0x08)
	struct UCanvasPanel* CanvasPanel_1; // 0x288(0x08)
	struct UWBP_RichTextLabel_C* ChangeServerIndicator; // 0x290(0x08)
	struct UWBP_Label_C* LevelNumber; // 0x298(0x08)
	struct UWBP_Label_C* LevelTitle; // 0x2a0(0x08)
	struct UWBP_RichTextLabel_C* PingText; // 0x2a8(0x08)
	struct UWBP_Button_C* PlayButton; // 0x2b0(0x08)
	struct UWBP_Label_C* PlayerNameLabel; // 0x2b8(0x08)
	struct UProgressBar* ProgressBar_AccessLevels; // 0x2c0(0x08)
	struct UWBP_Label_C* ReadyLabel; // 0x2c8(0x08)
	struct UWBP_Button_C* SecondButton; // 0x2d0(0x08)
	struct UWBP_Label_C* Stat_Efficiency; // 0x2d8(0x08)
	struct UWBP_Label_C* Stat_MatchCount; // 0x2e0(0x08)
	struct UWBP_Label_C* Stat_MVPCount_2; // 0x2e8(0x08)
	struct UWBP_Label_C* Stat_WinFocus; // 0x2f0(0x08)
	struct UWidgetSwitcher* TabSwitcher; // 0x2f8(0x08)
	struct UWBP_TeamChat_C* TeamChat; // 0x300(0x08)
	struct UWBP_ScreenHeader_C* UserNameHeader; // 0x308(0x08)
	struct UCircularThrobber* WaitForPlayIndicator; // 0x310(0x08)
	struct UWBP_CorporationLevelTooltip_C* WBP_CorporationLevelTooltip; // 0x318(0x08)
	struct UWBP_Hub_News_C* WBP_Hub_News; // 0x320(0x08)
	struct UWBP_Hub_Performance_C* WBP_Hub_Performance; // 0x328(0x08)
	struct UWBP_WorkTabWidget_C* WBP_Hub_Progression; // 0x330(0x08)
	struct UWBP_MissionRewrdsTooltip_C* WBP_MissionRewrdsTooltip; // 0x338(0x08)
	struct UWBP_NavigationBar_C* WBP_NavigationBar; // 0x340(0x08)
	struct UWBP_ServerSelector_C* WBP_ServerSelector; // 0x348(0x08)
	struct UHorizontalBox* XpNumbers; // 0x350(0x08)
	struct UWBP_Label_C* XPProgress; // 0x358(0x08)
	struct UWBP_Label_C* XPTarget; // 0x360(0x08)
	struct TArray<struct FHWTeamPlayer> RemoteTeamPlayers; // 0x368(0x10)
	struct TArray<struct FHWPlayerPublicProfile> RemoteTeamProfiles; // 0x378(0x10)
	struct TArray<struct FHWLoadoutData> TeamRenderLoadouts; // 0x388(0x10)
	int32_t ReadyCount; // 0x398(0x04)
	bool IsInTeam; // 0x39c(0x01)
	char pad_39D[0x3]; // 0x39d(0x03)
	struct FMulticastInlineDelegate OnShowContactList; // 0x3a0(0x10)
	struct FMulticastInlineDelegate OnPlayButtonClicked; // 0x3b0(0x10)
	int32_t LevelToUnlock; // 0x3c0(0x04)
	struct FName BackgroundMap; // 0x3c4(0x08)
	struct FName PreviouslyOpenedTabId; // 0x3cc(0x08)
	char pad_3D4[0x4]; // 0x3d4(0x04)
	struct UBP_LocalGameState_C* LocalGameState; // 0x3d8(0x08)
	struct TMap<struct FString, struct FHWPlayerPublicProfile> PublicProfileCache; // 0x3e0(0x50)
	struct TScriptInterface<None> CharacterRenderer; // 0x430(0x10)

	void EnterMaintenance(); // Function WBP_Hub_Screen.WBP_Hub_Screen_C.EnterMaintenance // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PlayerHasValidLoadout(bool IsValid); // Function WBP_Hub_Screen.WBP_Hub_Screen_C.PlayerHasValidLoadout // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void Is Progression Screen Selected(bool Value); // Function WBP_Hub_Screen.WBP_Hub_Screen_C.Is Progression Screen Selected // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void LoadHubTabState(); // Function WBP_Hub_Screen.WBP_Hub_Screen_C.LoadHubTabState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SaveHubTabState(int32_t Index, struct FName ID); // Function WBP_Hub_Screen.WBP_Hub_Screen_C.SaveHubTabState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Get Child Index With Id(struct FName ID, int32_t Index); // Function WBP_Hub_Screen.WBP_Hub_Screen_C.Get Child Index With Id // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetDisplayName(struct FString PlayerName, struct FText Name); // Function WBP_Hub_Screen.WBP_Hub_Screen_C.GetDisplayName // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	struct UWidget* Get_Stat_WinFocus_ToolTipWidget_1(); // Function WBP_Hub_Screen.WBP_Hub_Screen_C.Get_Stat_WinFocus_ToolTipWidget_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void CreateTooltip(struct FText txt, struct UWidget* Widget); // Function WBP_Hub_Screen.WBP_Hub_Screen_C.CreateTooltip // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	struct UWidget* Get_Stat_Efficiency_ToolTip(); // Function WBP_Hub_Screen.WBP_Hub_Screen_C.Get_Stat_Efficiency_ToolTip // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	struct UWidget* Get_Stat_MVPCount_ToolTip(); // Function WBP_Hub_Screen.WBP_Hub_Screen_C.Get_Stat_MVPCount_ToolTip // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void SetPlayButtonSelected(bool Selected); // Function WBP_Hub_Screen.WBP_Hub_Screen_C.SetPlayButtonSelected // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetPlayButtonVisible(bool Visible); // Function WBP_Hub_Screen.WBP_Hub_Screen_C.SetPlayButtonVisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetPlayButtonText(struct FText Title); // Function WBP_Hub_Screen.WBP_Hub_Screen_C.SetPlayButtonText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetOnlyRemoteTeamMembers(struct TArray<struct FHWTeamPlayer> Input, struct TArray<struct FHWTeamPlayer> Output); // Function WBP_Hub_Screen.WBP_Hub_Screen_C.GetOnlyRemoteTeamMembers // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void Get Party Player Ids(struct TArray<struct FString> PlayerIds); // Function WBP_Hub_Screen.WBP_Hub_Screen_C.Get Party Player Ids // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerDetailsChanged(struct FHWPlayerDetails Data); // Function WBP_Hub_Screen.WBP_Hub_Screen_C.OnPlayerDetailsChanged // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerInventoryChanged(struct FHWPlayerInventory Data); // Function WBP_Hub_Screen.WBP_Hub_Screen_C.OnPlayerInventoryChanged // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerMissionChanged(struct FHWPlayerMission Data); // Function WBP_Hub_Screen.WBP_Hub_Screen_C.OnPlayerMissionChanged // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerProgressionChanged(struct FHWPlayerProgression Data); // Function WBP_Hub_Screen.WBP_Hub_Screen_C.OnPlayerProgressionChanged // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerStatsChanged(struct FHWPlayerStats Data); // Function WBP_Hub_Screen.WBP_Hub_Screen_C.OnPlayerStatsChanged // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnAssistsUpdated(int32_t Assists); // Function WBP_Hub_Screen.WBP_Hub_Screen_C.OnAssistsUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnCurrentObjectiveIndexUpdated(); // Function WBP_Hub_Screen.WBP_Hub_Screen_C.OnCurrentObjectiveIndexUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnGameplayEvent(enum class EHWGameplayEventType Event); // Function WBP_Hub_Screen.WBP_Hub_Screen_C.OnGameplayEvent // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnHostileTeamChanged(enum class EHWHostileTeam NewHostileTeam); // Function WBP_Hub_Screen.WBP_Hub_Screen_C.OnHostileTeamChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnInputMappingsUpdated(); // Function WBP_Hub_Screen.WBP_Hub_Screen_C.OnInputMappingsUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnItemUnlocked(bool WasSuccessful, struct FString Message); // Function WBP_Hub_Screen.WBP_Hub_Screen_C.OnItemUnlocked // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnKillsUpdated(int32_t Kills); // Function WBP_Hub_Screen.WBP_Hub_Screen_C.OnKillsUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnObjectiveCardUpdated(); // Function WBP_Hub_Screen.WBP_Hub_Screen_C.OnObjectiveCardUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnObjectiveTextUpdated(); // Function WBP_Hub_Screen.WBP_Hub_Screen_C.OnObjectiveTextUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerObjectveImageChanged(struct AHWPlayerState* InPlayerState, struct UTexture2D* Texture); // Function WBP_Hub_Screen.WBP_Hub_Screen_C.OnPlayerObjectveImageChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerReadyCountUpdated(int32_t NumReady, int32_t Total); // Function WBP_Hub_Screen.WBP_Hub_Screen_C.OnPlayerReadyCountUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerStateAdded(struct APlayerState* PlayerState); // Function WBP_Hub_Screen.WBP_Hub_Screen_C.OnPlayerStateAdded // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnRoundHeaderUpdated(); // Function WBP_Hub_Screen.WBP_Hub_Screen_C.OnRoundHeaderUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeamInvitationsUpdated(struct TArray<struct FHWTeamInvitation> Invitations); // Function WBP_Hub_Screen.WBP_Hub_Screen_C.OnTeamInvitationsUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeamObjectiveStatusChanged(struct FText Text, int32_t Team); // Function WBP_Hub_Screen.WBP_Hub_Screen_C.OnTeamObjectiveStatusChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnTextChatActivated(); // Function WBP_Hub_Screen.WBP_Hub_Screen_C.OnTextChatActivated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnTextChatDeactivated(); // Function WBP_Hub_Screen.WBP_Hub_Screen_C.OnTextChatDeactivated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnToastMessageAdded(struct FHWToastMessageData Data); // Function WBP_Hub_Screen.WBP_Hub_Screen_C.OnToastMessageAdded // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnVoiceChatToggled(bool Active); // Function WBP_Hub_Screen.WBP_Hub_Screen_C.OnVoiceChatToggled // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnCanReconnectToMatch(); // Function WBP_Hub_Screen.WBP_Hub_Screen_C.OnCanReconnectToMatch // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnCanReconnectToQueue(); // Function WBP_Hub_Screen.WBP_Hub_Screen_C.OnCanReconnectToQueue // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnFriendsListUpdated(bool Success, struct FHWFetchFriendsResponse Response); // Function WBP_Hub_Screen.WBP_Hub_Screen_C.OnFriendsListUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnGetWeekInfo(struct FHWWeekInfoResponse Response); // Function WBP_Hub_Screen.WBP_Hub_Screen_C.OnGetWeekInfo // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnGetWeekInfoFailed(); // Function WBP_Hub_Screen.WBP_Hub_Screen_C.OnGetWeekInfoFailed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnLogoutCompleted(); // Function WBP_Hub_Screen.WBP_Hub_Screen_C.OnLogoutCompleted // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMasterDataLoaded(); // Function WBP_Hub_Screen.WBP_Hub_Screen_C.OnMasterDataLoaded // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMasterDataLoadFailed(enum class EHWErrorMessage Error, struct FString Message); // Function WBP_Hub_Screen.WBP_Hub_Screen_C.OnMasterDataLoadFailed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMatchStatusMatched(); // Function WBP_Hub_Screen.WBP_Hub_Screen_C.OnMatchStatusMatched // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMatchStatusOpen(); // Function WBP_Hub_Screen.WBP_Hub_Screen_C.OnMatchStatusOpen // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMatchStatusStarted(); // Function WBP_Hub_Screen.WBP_Hub_Screen_C.OnMatchStatusStarted // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMatchStatusWaiting(); // Function WBP_Hub_Screen.WBP_Hub_Screen_C.OnMatchStatusWaiting // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnReconnectableMatchLost(); // Function WBP_Hub_Screen.WBP_Hub_Screen_C.OnReconnectableMatchLost // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnServerPingsDone(); // Function WBP_Hub_Screen.WBP_Hub_Screen_C.OnServerPingsDone // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnShopCampaignsLoaded(); // Function WBP_Hub_Screen.WBP_Hub_Screen_C.OnShopCampaignsLoaded // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeamInviteAcceptProcessed(bool Success, enum class EHWErrorMessage ErrorMessage); // Function WBP_Hub_Screen.WBP_Hub_Screen_C.OnTeamInviteAcceptProcessed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnUpdateRequired(); // Function WBP_Hub_Screen.WBP_Hub_Screen_C.OnUpdateRequired // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnUserLoadFailed(struct FString SessionIdLoadedUser); // Function WBP_Hub_Screen.WBP_Hub_Screen_C.OnUserLoadFailed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnUserStored(); // Function WBP_Hub_Screen.WBP_Hub_Screen_C.OnUserStored // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnUserStoreFailed(); // Function WBP_Hub_Screen.WBP_Hub_Screen_C.OnUserStoreFailed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnWholePartyReady(); // Function WBP_Hub_Screen.WBP_Hub_Screen_C.OnWholePartyReady // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_Hub_Screen.WBP_Hub_Screen_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void UpdatePlayerInfo(); // Function WBP_Hub_Screen.WBP_Hub_Screen_C.UpdatePlayerInfo // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void RenderTeam(); // Function WBP_Hub_Screen.WBP_Hub_Screen_C.RenderTeam // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeamMembersChanged(struct TArray<struct FHWTeamPlayer> MyTeamPlayers); // Function WBP_Hub_Screen.WBP_Hub_Screen_C.OnTeamMembersChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateReadyText(struct TArray<struct FHWTeamPlayer> TeamPlayers); // Function WBP_Hub_Screen.WBP_Hub_Screen_C.UpdateReadyText // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnRemoteMemberChanged(int32_t Index, struct FHWTeamPlayer Player); // Function WBP_Hub_Screen.WBP_Hub_Screen_C.OnRemoteMemberChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnPublicProfileLoaded(struct FHWLoadPublicProfileResponse Response); // Function WBP_Hub_Screen.WBP_Hub_Screen_C.OnPublicProfileLoaded // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnPublicProfileLoadFailed(enum class EHWErrorMessage ErrorMessage); // Function WBP_Hub_Screen.WBP_Hub_Screen_C.OnPublicProfileLoadFailed // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__PlayButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_Hub_Screen.WBP_Hub_Screen_C.BndEvt__PlayButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void UpdateActionButtons(); // Function WBP_Hub_Screen.WBP_Hub_Screen_C.UpdateActionButtons // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__SecondButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_Hub_Screen.WBP_Hub_Screen_C.BndEvt__SecondButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void OnLeave(bool Result); // Function WBP_Hub_Screen.WBP_Hub_Screen_C.OnLeave // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnDisband(bool Result); // Function WBP_Hub_Screen.WBP_Hub_Screen_C.OnDisband // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateTeamMembers(struct TArray<struct FHWTeamPlayer> Members); // Function WBP_Hub_Screen.WBP_Hub_Screen_C.UpdateTeamMembers // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnUserLoaded(struct FString SessionIdLoadedUser); // Function WBP_Hub_Screen.WBP_Hub_Screen_C.OnUserLoaded // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMyReadystateChanged(bool bNewValue); // Function WBP_Hub_Screen.WBP_Hub_Screen_C.OnMyReadystateChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__AccessLevel_Button_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature(); // Function WBP_Hub_Screen.WBP_Hub_Screen_C.BndEvt__AccessLevel_Button_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__AccessLevel_Button_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature(); // Function WBP_Hub_Screen.WBP_Hub_Screen_C.BndEvt__AccessLevel_Button_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void DummyEvent(bool Result); // Function WBP_Hub_Screen.WBP_Hub_Screen_C.DummyEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__AccessLevel_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function WBP_Hub_Screen.WBP_Hub_Screen_C.BndEvt__AccessLevel_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_NavigationBar_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(struct FName ID); // Function WBP_Hub_Screen.WBP_Hub_Screen_C.BndEvt__WBP_NavigationBar_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void PreferredServerLocationChanged(struct FString SelectedOption); // Function WBP_Hub_Screen.WBP_Hub_Screen_C.PreferredServerLocationChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetPingText(struct FString PingText); // Function WBP_Hub_Screen.WBP_Hub_Screen_C.SetPingText // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_ServerSelector_K2Node_ComponentBoundEvent_5_PreferredServerLocationChanged__DelegateSignature(struct FString SelectedOption); // Function WBP_Hub_Screen.WBP_Hub_Screen_C.BndEvt__WBP_ServerSelector_K2Node_ComponentBoundEvent_5_PreferredServerLocationChanged__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void OnErrorMessageClosed(bool Result); // Function WBP_Hub_Screen.WBP_Hub_Screen_C.OnErrorMessageClosed // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetCharacterRenderer(); // Function WBP_Hub_Screen.WBP_Hub_Screen_C.SetCharacterRenderer // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetTeamChatEnabled(bool Value); // Function WBP_Hub_Screen.WBP_Hub_Screen_C.SetTeamChatEnabled // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void InitializeScreen(); // Function WBP_Hub_Screen.WBP_Hub_Screen_C.InitializeScreen // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Hub_Screen(int32_t EntryPoint); // Function WBP_Hub_Screen.WBP_Hub_Screen_C.ExecuteUbergraph_WBP_Hub_Screen // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
	void OnPlayButtonClicked__DelegateSignature(); // Function WBP_Hub_Screen.WBP_Hub_Screen_C.OnPlayButtonClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnShowContactList__DelegateSignature(); // Function WBP_Hub_Screen.WBP_Hub_Screen_C.OnShowContactList__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

