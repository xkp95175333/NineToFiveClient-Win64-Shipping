// WidgetBlueprintGeneratedClass WBP_TNGMatchMaking.WBP_TNGMatchMaking_C
// Size: 0x3b4 (Inherited: 0x270)
struct UWBP_TNGMatchMaking_C : UWBP_MenuScreenBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct UImage* Background; // 0x278(0x08)
	struct UImage* BackgroundColor; // 0x280(0x08)
	struct UImage* BackgroundImage; // 0x288(0x08)
	struct UImage* Bottomline; // 0x290(0x08)
	struct UWBP_Button_C* ExitMatchmakingButton; // 0x298(0x08)
	struct UImage* Filter_2; // 0x2a0(0x08)
	struct UImage* Image; // 0x2a8(0x08)
	struct UImage* Image_81; // 0x2b0(0x08)
	struct UImage* Image_298; // 0x2b8(0x08)
	struct UImage* Image_610; // 0x2c0(0x08)
	struct UImage* LoreDetail; // 0x2c8(0x08)
	struct UCanvasPanel* MatchMaking; // 0x2d0(0x08)
	struct UWBP_Label_C* MatchMakingStatus; // 0x2d8(0x08)
	struct UImage* MessageBottom; // 0x2e0(0x08)
	struct UWBP_RichTextLabel_C* SelectedRegionText; // 0x2e8(0x08)
	struct UWBP_PlayerCard_Small_C* TeamPlayerCard1; // 0x2f0(0x08)
	struct UWBP_PlayerCard_Small_C* TeamPlayerCard2; // 0x2f8(0x08)
	struct UWBP_PlayerCard_Small_C* TeamPlayerCard3; // 0x300(0x08)
	struct UWBP_RichTextLabel_C* TeamTitleLabel; // 0x308(0x08)
	struct UImage* TextShadow; // 0x310(0x08)
	struct UImage* TextureOverlay; // 0x318(0x08)
	struct UWBP_Label_C* TimerLabel; // 0x320(0x08)
	struct UWBP_Animated_Letters_Label_C* TitleLabel; // 0x328(0x08)
	struct UImage* TopDetail_2; // 0x330(0x08)
	struct UImage* Topline; // 0x338(0x08)
	struct UCircularThrobber* WaitForExitIndicator; // 0x340(0x08)
	struct FHWGetMatchmakingResponse Response; // 0x348(0x50)
	int32_t ElapsedTimeInQueue; // 0x398(0x04)
	char pad_39C[0x4]; // 0x39c(0x04)
	struct FTimerHandle TimerElapsedTime; // 0x3a0(0x08)
	struct UMediaPlayer* BackgroundMediaPlayer; // 0x3a8(0x08)
	float MatchmakingStartTime; // 0x3b0(0x04)

	void UpdateMMStatusMessage(); // Function WBP_TNGMatchMaking.WBP_TNGMatchMaking_C.UpdateMMStatusMessage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnBack(bool IsHandled); // Function WBP_TNGMatchMaking.WBP_TNGMatchMaking_C.OnBack // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateTeamPlayerCards(struct TArray<struct FHWTeamPlayer> Array); // Function WBP_TNGMatchMaking.WBP_TNGMatchMaking_C.UpdateTeamPlayerCards // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x13c4ca0
	void UpdateElapsedTime(); // Function WBP_TNGMatchMaking.WBP_TNGMatchMaking_C.UpdateElapsedTime // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void LeaveMMScreen(); // Function WBP_TNGMatchMaking.WBP_TNGMatchMaking_C.LeaveMMScreen // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void EnableAndShowWidget(struct UWidget* TargetWidget, bool ShowAndEnable); // Function WBP_TNGMatchMaking.WBP_TNGMatchMaking_C.EnableAndShowWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnCurrentObjectiveIndexUpdated(); // Function WBP_TNGMatchMaking.WBP_TNGMatchMaking_C.OnCurrentObjectiveIndexUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnGameplayEvent(enum class EHWGameplayEventType Event); // Function WBP_TNGMatchMaking.WBP_TNGMatchMaking_C.OnGameplayEvent // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnHostileTeamChanged(enum class EHWHostileTeam NewHostileTeam); // Function WBP_TNGMatchMaking.WBP_TNGMatchMaking_C.OnHostileTeamChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnInputMappingsUpdated(); // Function WBP_TNGMatchMaking.WBP_TNGMatchMaking_C.OnInputMappingsUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnItemUnlocked(bool WasSuccessful, struct FString Message); // Function WBP_TNGMatchMaking.WBP_TNGMatchMaking_C.OnItemUnlocked // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnKillsUpdated(int32_t Kills); // Function WBP_TNGMatchMaking.WBP_TNGMatchMaking_C.OnKillsUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMyReadystateChanged(bool bNewValue); // Function WBP_TNGMatchMaking.WBP_TNGMatchMaking_C.OnMyReadystateChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnObjectiveCardUpdated(); // Function WBP_TNGMatchMaking.WBP_TNGMatchMaking_C.OnObjectiveCardUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnObjectiveTextUpdated(); // Function WBP_TNGMatchMaking.WBP_TNGMatchMaking_C.OnObjectiveTextUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerObjectveImageChanged(struct AHWPlayerState* InPlayerState, struct UTexture2D* Texture); // Function WBP_TNGMatchMaking.WBP_TNGMatchMaking_C.OnPlayerObjectveImageChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerReadyCountUpdated(int32_t NumReady, int32_t Total); // Function WBP_TNGMatchMaking.WBP_TNGMatchMaking_C.OnPlayerReadyCountUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerStateAdded(struct APlayerState* PlayerState); // Function WBP_TNGMatchMaking.WBP_TNGMatchMaking_C.OnPlayerStateAdded // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnRoundHeaderUpdated(); // Function WBP_TNGMatchMaking.WBP_TNGMatchMaking_C.OnRoundHeaderUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeamInvitationsUpdated(struct TArray<struct FHWTeamInvitation> Invitations); // Function WBP_TNGMatchMaking.WBP_TNGMatchMaking_C.OnTeamInvitationsUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeamObjectiveStatusChanged(struct FText Text, int32_t Team); // Function WBP_TNGMatchMaking.WBP_TNGMatchMaking_C.OnTeamObjectiveStatusChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnTextChatActivated(); // Function WBP_TNGMatchMaking.WBP_TNGMatchMaking_C.OnTextChatActivated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnTextChatDeactivated(); // Function WBP_TNGMatchMaking.WBP_TNGMatchMaking_C.OnTextChatDeactivated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnToastMessageAdded(struct FHWToastMessageData Data); // Function WBP_TNGMatchMaking.WBP_TNGMatchMaking_C.OnToastMessageAdded // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnVoiceChatToggled(bool Active); // Function WBP_TNGMatchMaking.WBP_TNGMatchMaking_C.OnVoiceChatToggled // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnCanReconnectToMatch(); // Function WBP_TNGMatchMaking.WBP_TNGMatchMaking_C.OnCanReconnectToMatch // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnCanReconnectToQueue(); // Function WBP_TNGMatchMaking.WBP_TNGMatchMaking_C.OnCanReconnectToQueue // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnFriendsListUpdated(bool Success, struct FHWFetchFriendsResponse Response); // Function WBP_TNGMatchMaking.WBP_TNGMatchMaking_C.OnFriendsListUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnGetWeekInfo(struct FHWWeekInfoResponse Response); // Function WBP_TNGMatchMaking.WBP_TNGMatchMaking_C.OnGetWeekInfo // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnGetWeekInfoFailed(); // Function WBP_TNGMatchMaking.WBP_TNGMatchMaking_C.OnGetWeekInfoFailed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnLogoutCompleted(); // Function WBP_TNGMatchMaking.WBP_TNGMatchMaking_C.OnLogoutCompleted // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMasterDataLoaded(); // Function WBP_TNGMatchMaking.WBP_TNGMatchMaking_C.OnMasterDataLoaded // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMasterDataLoadFailed(enum class EHWErrorMessage Error, struct FString Message); // Function WBP_TNGMatchMaking.WBP_TNGMatchMaking_C.OnMasterDataLoadFailed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnReconnectableMatchLost(); // Function WBP_TNGMatchMaking.WBP_TNGMatchMaking_C.OnReconnectableMatchLost // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnServerPingsDone(); // Function WBP_TNGMatchMaking.WBP_TNGMatchMaking_C.OnServerPingsDone // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnShopCampaignsLoaded(); // Function WBP_TNGMatchMaking.WBP_TNGMatchMaking_C.OnShopCampaignsLoaded // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeamInviteAcceptProcessed(bool Success, enum class EHWErrorMessage ErrorMessage); // Function WBP_TNGMatchMaking.WBP_TNGMatchMaking_C.OnTeamInviteAcceptProcessed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnUpdateRequired(); // Function WBP_TNGMatchMaking.WBP_TNGMatchMaking_C.OnUpdateRequired // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnUserLoaded(struct FString SessionIdLoadedUser); // Function WBP_TNGMatchMaking.WBP_TNGMatchMaking_C.OnUserLoaded // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnUserLoadFailed(struct FString SessionIdLoadedUser); // Function WBP_TNGMatchMaking.WBP_TNGMatchMaking_C.OnUserLoadFailed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnUserStored(); // Function WBP_TNGMatchMaking.WBP_TNGMatchMaking_C.OnUserStored // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnUserStoreFailed(); // Function WBP_TNGMatchMaking.WBP_TNGMatchMaking_C.OnUserStoreFailed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnWholePartyReady(); // Function WBP_TNGMatchMaking.WBP_TNGMatchMaking_C.OnWholePartyReady // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnAssistsUpdated(int32_t Assists); // Function WBP_TNGMatchMaking.WBP_TNGMatchMaking_C.OnAssistsUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void SetStatusMessage(struct FText Message, bool Error); // Function WBP_TNGMatchMaking.WBP_TNGMatchMaking_C.SetStatusMessage // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__ExitMatchmakingButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_TNGMatchMaking.WBP_TNGMatchMaking_C.BndEvt__ExitMatchmakingButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_TNGMatchMaking.WBP_TNGMatchMaking_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnElapsedTime(); // Function WBP_TNGMatchMaking.WBP_TNGMatchMaking_C.OnElapsedTime // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeamMembersChanged(struct TArray<struct FHWTeamPlayer> MyTeamPlayers); // Function WBP_TNGMatchMaking.WBP_TNGMatchMaking_C.OnTeamMembersChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void Destruct(); // Function WBP_TNGMatchMaking.WBP_TNGMatchMaking_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ExitMatchmakingButtonPressed(); // Function WBP_TNGMatchMaking.WBP_TNGMatchMaking_C.ExitMatchmakingButtonPressed // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetSelectedRegionInfo(); // Function WBP_TNGMatchMaking.WBP_TNGMatchMaking_C.SetSelectedRegionInfo // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnMatchStatusWaiting(); // Function WBP_TNGMatchMaking.WBP_TNGMatchMaking_C.OnMatchStatusWaiting // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMatchStatusOpen(); // Function WBP_TNGMatchMaking.WBP_TNGMatchMaking_C.OnMatchStatusOpen // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMatchStatusMatched(); // Function WBP_TNGMatchMaking.WBP_TNGMatchMaking_C.OnMatchStatusMatched // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMatchStatusStarted(); // Function WBP_TNGMatchMaking.WBP_TNGMatchMaking_C.OnMatchStatusStarted // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_TNGMatchMaking(int32_t EntryPoint); // Function WBP_TNGMatchMaking.WBP_TNGMatchMaking_C.ExecuteUbergraph_WBP_TNGMatchMaking // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

