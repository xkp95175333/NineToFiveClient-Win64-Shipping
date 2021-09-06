// WidgetBlueprintGeneratedClass WBP_Main.WBP_Main_C
// Size: 0x4c8 (Inherited: 0x268)
struct UWBP_Main_C : UHWWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWidgetAnimation* FadeTransition; // 0x270(0x08)
	struct UWidgetAnimation* ShowCurrenciesPanel; // 0x278(0x08)
	struct UWidgetAnimation* ShowFriendList; // 0x280(0x08)
	struct UHorizontalBox* Armory_WeaponView_Footer; // 0x288(0x08)
	struct UButton* Button_HitboxMain; // 0x290(0x08)
	struct UButton* ButtonEsc; // 0x298(0x08)
	struct UImage* ButtonEscImage; // 0x2a0(0x08)
	struct UImage* CommonFooter; // 0x2a8(0x08)
	struct UWBP_Currencies_Panel_C* CurrenciesPanel; // 0x2b0(0x08)
	struct UOverlay* ESC_Block; // 0x2b8(0x08)
	struct UWBP_RichTextLabel_C* ESC_Label; // 0x2c0(0x08)
	struct UWBP_RichTextLabel_C* ExclamationMark; // 0x2c8(0x08)
	struct UWBP_Footer_C* Footer; // 0x2d0(0x08)
	struct UWidgetSwitcher* FooterSwitcher; // 0x2d8(0x08)
	struct UWBP_FriendList_C* FriendList; // 0x2e0(0x08)
	struct UHorizontalBox* HubFooter; // 0x2e8(0x08)
	struct UImage* IMG_Transition; // 0x2f0(0x08)
	struct UImage* Left_line; // 0x2f8(0x08)
	struct UImage* Left_line_HUB; // 0x300(0x08)
	struct UImage* LeftGradient; // 0x308(0x08)
	struct UCanvasPanel* MainCanvas; // 0x310(0x08)
	struct UWBP_NavigationBar_C* MainNavigationBar; // 0x318(0x08)
	struct UWBP_RichTextLabel_C* MaintenanceInfo; // 0x320(0x08)
	struct UBorder* MaintenanceInfoContainer; // 0x328(0x08)
	struct UImage* NaviBar; // 0x330(0x08)
	struct UOverlay* Overlay_1; // 0x338(0x08)
	struct UOverlay* Overlay_Header; // 0x340(0x08)
	struct UImage* Right_Line; // 0x348(0x08)
	struct UImage* Right_Line_HUB; // 0x350(0x08)
	struct UWBP_Armory2_C* ScreenArmory; // 0x358(0x08)
	struct UWBP_Armory3_C* ScreenArmory3; // 0x360(0x08)
	struct UOverlay* ScreenDynamic; // 0x368(0x08)
	struct UWBP_Missions_C* ScreenMissions; // 0x370(0x08)
	struct UWBP_Hub_Screen_C* ScreenPlay; // 0x378(0x08)
	struct UWBP_Missions_Qualification_C* ScreenQualification; // 0x380(0x08)
	struct UWBP_Rigs_C* ScreenRigs; // 0x388(0x08)
	struct UWBP_Shop_C* ScreenShop; // 0x390(0x08)
	struct UWidgetSwitcher* TabSwitcher; // 0x398(0x08)
	struct UImage* TopGradient; // 0x3a0(0x08)
	struct UWBP_MenuTutorial_C* TutorialLayer; // 0x3a8(0x08)
	struct UWBP_Box_C* WBP_Box; // 0x3b0(0x08)
	struct UWBP_Currencies_C* WBP_Currencies; // 0x3b8(0x08)
	struct UWBP_VoiceOverlay_C* WBP_VoiceOverlay; // 0x3c0(0x08)
	struct FHWGetMatchmakingResponse MatchMakingResponse; // 0x3c8(0x50)
	struct FText ButtonReadyText; // 0x418(0x18)
	bool IsFriendListVisible; // 0x430(0x01)
	bool FirstFetchDone; // 0x431(0x01)
	char pad_432[0x6]; // 0x432(0x06)
	struct TArray<struct FHWLoadoutData> CachedAllLoadouts; // 0x438(0x10)
	struct TArray<struct FHWWeaponInfo> CachedWeapons; // 0x448(0x10)
	int32_t MaxLoadoutIndex; // 0x458(0x04)
	int32_t MaxWeaponsIndex; // 0x45c(0x04)
	bool ExcecuteThumbnailGeneration; // 0x460(0x01)
	char pad_461[0x7]; // 0x461(0x07)
	struct FTimerHandle InitialDelayTimer; // 0x468(0x08)
	bool HasMatchResults; // 0x470(0x01)
	bool IsCurrenciesPanelVisible; // 0x471(0x01)
	char pad_472[0x6]; // 0x472(0x06)
	struct UHWMatchResults* MatchResultsCached; // 0x478(0x08)
	bool CurrentRewards_FactionLevel3Gained; // 0x480(0x01)
	bool CurrentRewards_TutorialLevel2Gained; // 0x481(0x01)
	bool HasRequestedMissionsTutorial; // 0x482(0x01)
	char pad_483[0x5]; // 0x483(0x05)
	struct UWBP_ESCMenu_C* ESCMenuWidget; // 0x488(0x08)
	struct FString GameplayTutorial; // 0x490(0x10)
	bool IsMusicPlaying; // 0x4a0(0x01)
	char pad_4A1[0x7]; // 0x4a1(0x07)
	struct UWBP_Tutorial_Popup_NewPlayer_C* NewPlayerPopup; // 0x4a8(0x08)
	bool CanClickPlay; // 0x4b0(0x01)
	char pad_4B1[0x7]; // 0x4b1(0x07)
	struct UWBP_TNGMatchMaking_C* MatchmakingWidgetRef; // 0x4b8(0x08)
	struct FName LastVisitedViewId; // 0x4c0(0x08)

	void CreateMMWidget(); // Function WBP_Main.WBP_Main_C.CreateMMWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	struct FEventReply OnPreviewKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function WBP_Main.WBP_Main_C.OnPreviewKeyDown // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnBack(bool IsHandled); // Function WBP_Main.WBP_Main_C.OnBack // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void CanStartTutorial(struct FString TutorialPart, bool Result); // Function WBP_Main.WBP_Main_C.CanStartTutorial // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void AddDynamicWidget(struct UWidget* Content); // Function WBP_Main.WBP_Main_C.AddDynamicWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetHeaderFooterVisibility(bool IsVisible); // Function WBP_Main.WBP_Main_C.SetHeaderFooterVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetHeaderVisible(bool Visible); // Function WBP_Main.WBP_Main_C.SetHeaderVisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void DoShowCurrenciesPanel(bool DoShow); // Function WBP_Main.WBP_Main_C.DoShowCurrenciesPanel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void FindMenuRendererView(enum class BPE_UIView UIView, enum class BPE_MenuRenderView MenuRenderView); // Function WBP_Main.WBP_Main_C.FindMenuRendererView // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void FindMainTabButtonForView(enum class BPE_UIView View, struct FBP_NavigationBar_Item Button); // Function WBP_Main.WBP_Main_C.FindMainTabButtonForView // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void ShowSurveyPopup(bool ForceShow); // Function WBP_Main.WBP_Main_C.ShowSurveyPopup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Open Dynamic View(enum class BPE_UIView View); // Function WBP_Main.WBP_Main_C.Open Dynamic View // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ShowMenuBar(bool Show); // Function WBP_Main.WBP_Main_C.ShowMenuBar // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	struct UWidget* CreateTooltip_Survey(); // Function WBP_Main.WBP_Main_C.CreateTooltip_Survey // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	struct UWidget* CreateTooltip_Discord(); // Function WBP_Main.WBP_Main_C.CreateTooltip_Discord // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	struct UWidget* CreateTooltip_ContactUs(); // Function WBP_Main.WBP_Main_C.CreateTooltip_ContactUs // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	struct UWidget* CreateTooltip_BugReport(); // Function WBP_Main.WBP_Main_C.CreateTooltip_BugReport // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void CreateTooltip(struct FText InputPin, struct UWidget* Widget); // Function WBP_Main.WBP_Main_C.CreateTooltip // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void UpdateAllNavigationLocks(); // Function WBP_Main.WBP_Main_C.UpdateAllNavigationLocks // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateNavigationLock(struct FName ButtonId, enum class BPE_UIView View); // Function WBP_Main.WBP_Main_C.UpdateNavigationLock // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void On Main Navigation Button Clicked(struct FName ID); // Function WBP_Main.WBP_Main_C.On Main Navigation Button Clicked // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void InitializePlayerController(); // Function WBP_Main.WBP_Main_C.InitializePlayerController // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Open View(enum class BPE_UIView View); // Function WBP_Main.WBP_Main_C.Open View // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnRoundHeaderUpdated(); // Function WBP_Main.WBP_Main_C.OnRoundHeaderUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeamInvitationsUpdated(struct TArray<struct FHWTeamInvitation> Invitations); // Function WBP_Main.WBP_Main_C.OnTeamInvitationsUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeamObjectiveStatusChanged(struct FText Text, int32_t Team); // Function WBP_Main.WBP_Main_C.OnTeamObjectiveStatusChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnTextChatActivated(); // Function WBP_Main.WBP_Main_C.OnTextChatActivated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnTextChatDeactivated(); // Function WBP_Main.WBP_Main_C.OnTextChatDeactivated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnToastMessageAdded(struct FHWToastMessageData Data); // Function WBP_Main.WBP_Main_C.OnToastMessageAdded // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnVoiceChatToggled(bool Active); // Function WBP_Main.WBP_Main_C.OnVoiceChatToggled // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnFriendsListUpdated(bool Success, struct FHWFetchFriendsResponse Response); // Function WBP_Main.WBP_Main_C.OnFriendsListUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnGetWeekInfo(struct FHWWeekInfoResponse Response); // Function WBP_Main.WBP_Main_C.OnGetWeekInfo // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnGetWeekInfoFailed(); // Function WBP_Main.WBP_Main_C.OnGetWeekInfoFailed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnLogoutCompleted(); // Function WBP_Main.WBP_Main_C.OnLogoutCompleted // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMasterDataLoaded(); // Function WBP_Main.WBP_Main_C.OnMasterDataLoaded // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMasterDataLoadFailed(enum class EHWErrorMessage Error, struct FString Message); // Function WBP_Main.WBP_Main_C.OnMasterDataLoadFailed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnServerPingsDone(); // Function WBP_Main.WBP_Main_C.OnServerPingsDone // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnShopCampaignsLoaded(); // Function WBP_Main.WBP_Main_C.OnShopCampaignsLoaded // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnUpdateRequired(); // Function WBP_Main.WBP_Main_C.OnUpdateRequired // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnUserLoadFailed(struct FString SessionIdLoadedUser); // Function WBP_Main.WBP_Main_C.OnUserLoadFailed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnUserStored(); // Function WBP_Main.WBP_Main_C.OnUserStored // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnUserStoreFailed(); // Function WBP_Main.WBP_Main_C.OnUserStoreFailed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnWholePartyReady(); // Function WBP_Main.WBP_Main_C.OnWholePartyReady // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_Main.WBP_Main_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnUserLoaded(struct FString SessionIdLoadedUser); // Function WBP_Main.WBP_Main_C.OnUserLoaded // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeamMembersChanged(struct TArray<struct FHWTeamPlayer> MyTeamPlayers); // Function WBP_Main.WBP_Main_C.OnTeamMembersChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerStateAdded(struct APlayerState* PlayerState); // Function WBP_Main.WBP_Main_C.OnPlayerStateAdded // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnToggleEscMenu(); // Function WBP_Main.WBP_Main_C.OnToggleEscMenu // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Destruct(); // Function WBP_Main.WBP_Main_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__Footer_K2Node_ComponentBoundEvent_2_OnFriendsClicked__DelegateSignature(); // Function WBP_Main.WBP_Main_C.BndEvt__Footer_K2Node_ComponentBoundEvent_2_OnFriendsClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__Footer_K2Node_ComponentBoundEvent_3_OnNotificationsClicked__DelegateSignature(); // Function WBP_Main.WBP_Main_C.BndEvt__Footer_K2Node_ComponentBoundEvent_3_OnNotificationsClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void SetUpBackendPolling(); // Function WBP_Main.WBP_Main_C.SetUpBackendPolling // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerReadyCountUpdated(int32_t NumReady, int32_t Total); // Function WBP_Main.WBP_Main_C.OnPlayerReadyCountUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void SetFriendListVisible(bool Visible); // Function WBP_Main.WBP_Main_C.SetFriendListVisible // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__FriendList_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature(); // Function WBP_Main.WBP_Main_C.BndEvt__FriendList_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerObjectveImageChanged(struct AHWPlayerState* InPlayerState, struct UTexture2D* Texture); // Function WBP_Main.WBP_Main_C.OnPlayerObjectveImageChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__Button_124_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature(); // Function WBP_Main.WBP_Main_C.BndEvt__Button_124_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__EscButton_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature(); // Function WBP_Main.WBP_Main_C.BndEvt__EscButton_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__EscButton_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature(); // Function WBP_Main.WBP_Main_C.BndEvt__EscButton_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void OnObjectiveTextUpdated(); // Function WBP_Main.WBP_Main_C.OnObjectiveTextUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__Button_OnClickedMain_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature(); // Function WBP_Main.WBP_Main_C.BndEvt__Button_OnClickedMain_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void OnObjectiveCardUpdated(); // Function WBP_Main.WBP_Main_C.OnObjectiveCardUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMyReadystateChanged(bool bNewValue); // Function WBP_Main.WBP_Main_C.OnMyReadystateChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnToggleDebugMenu(); // Function WBP_Main.WBP_Main_C.OnToggleDebugMenu // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void FirstDelayEvent(); // Function WBP_Main.WBP_Main_C.FirstDelayEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnKillsUpdated(int32_t Kills); // Function WBP_Main.WBP_Main_C.OnKillsUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnItemUnlocked(bool WasSuccessful, struct FString Message); // Function WBP_Main.WBP_Main_C.OnItemUnlocked // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnInputMappingsUpdated(); // Function WBP_Main.WBP_Main_C.OnInputMappingsUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__ScreenPlay_K2Node_ComponentBoundEvent_17_OnShowContactList__DelegateSignature(); // Function WBP_Main.WBP_Main_C.BndEvt__ScreenPlay_K2Node_ComponentBoundEvent_17_OnShowContactList__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__ScreenPlay_K2Node_ComponentBoundEvent_18_OnPlayButtonClicked__DelegateSignature(); // Function WBP_Main.WBP_Main_C.BndEvt__ScreenPlay_K2Node_ComponentBoundEvent_18_OnPlayButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__MainNavigationBar_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(struct FName ID); // Function WBP_Main.WBP_Main_C.BndEvt__MainNavigationBar_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_Currencies_K2Node_ComponentBoundEvent_4_OnWalletClicked__DelegateSignature(); // Function WBP_Main.WBP_Main_C.BndEvt__WBP_Currencies_K2Node_ComponentBoundEvent_4_OnWalletClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__CurrenciesPanel_K2Node_ComponentBoundEvent_6_CloseCurrenciesPanelClicked__DelegateSignature(); // Function WBP_Main.WBP_Main_C.BndEvt__CurrenciesPanel_K2Node_ComponentBoundEvent_6_CloseCurrenciesPanelClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void SetFooter(enum class BPE_UIView View); // Function WBP_Main.WBP_Main_C.SetFooter // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void FetchRewardsFailed(enum class EHWErrorMessage ErrorMessage); // Function WBP_Main.WBP_Main_C.FetchRewardsFailed // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void CheckPopupPromptMessage(); // Function WBP_Main.WBP_Main_C.CheckPopupPromptMessage // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnHostileTeamChanged(enum class EHWHostileTeam NewHostileTeam); // Function WBP_Main.WBP_Main_C.OnHostileTeamChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ServerLocationChanged(struct FString SelectedOption); // Function WBP_Main.WBP_Main_C.ServerLocationChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PlatformFriends(int32_t OnlineCount); // Function WBP_Main.WBP_Main_C.PlatformFriends // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PreConstruct(bool IsDesignTime); // Function WBP_Main.WBP_Main_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__ScreenShop_K2Node_ComponentBoundEvent_10_NotifyFreeShopItem__DelegateSignature(bool HasFreeItem, int32_t FreeItems); // Function WBP_Main.WBP_Main_C.BndEvt__ScreenShop_K2Node_ComponentBoundEvent_10_NotifyFreeShopItem__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void SetupDebugMenu(); // Function WBP_Main.WBP_Main_C.SetupDebugMenu // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void RewardsCollected(bool Result); // Function WBP_Main.WBP_Main_C.RewardsCollected // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PurchaseRecoveryAttempted(struct FHWBuyShopItemResult Result); // Function WBP_Main.WBP_Main_C.PurchaseRecoveryAttempted // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ErrorClosed(bool Result); // Function WBP_Main.WBP_Main_C.ErrorClosed // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ShowPopupMessage(); // Function WBP_Main.WBP_Main_C.ShowPopupMessage // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PromptShown(bool Result); // Function WBP_Main.WBP_Main_C.PromptShown // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeamInviteAcceptProcessed(bool Success, enum class EHWErrorMessage ErrorMessage); // Function WBP_Main.WBP_Main_C.OnTeamInviteAcceptProcessed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnGameplayEvent(enum class EHWGameplayEventType Event); // Function WBP_Main.WBP_Main_C.OnGameplayEvent // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void HandleOnBackIfNoFocusedWidget(); // Function WBP_Main.WBP_Main_C.HandleOnBackIfNoFocusedWidget // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnCurrentObjectiveIndexUpdated(); // Function WBP_Main.WBP_Main_C.OnCurrentObjectiveIndexUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnAssistsUpdated(int32_t Assists); // Function WBP_Main.WBP_Main_C.OnAssistsUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_Main_ScreenMissions_K2Node_ComponentBoundEvent_9_NotifyMissionsSeen__DelegateSignature(bool HasNotSeen); // Function WBP_Main.WBP_Main_C.BndEvt__WBP_Main_ScreenMissions_K2Node_ComponentBoundEvent_9_NotifyMissionsSeen__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void RecoverPurchase(); // Function WBP_Main.WBP_Main_C.RecoverPurchase // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnFatalBackendErrorAcknowledged(bool Result); // Function WBP_Main.WBP_Main_C.OnFatalBackendErrorAcknowledged // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnLogoutSucceeded(struct FHWResponseBase Response); // Function WBP_Main.WBP_Main_C.OnLogoutSucceeded // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnLogoutFailed(enum class EHWErrorMessage ErrorMessage); // Function WBP_Main.WBP_Main_C.OnLogoutFailed // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnFatalBackendError(enum class EHWErrorMessage Error); // Function WBP_Main.WBP_Main_C.OnFatalBackendError // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnMatchStatusOpen(); // Function WBP_Main.WBP_Main_C.OnMatchStatusOpen // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMatchStatusWaiting(); // Function WBP_Main.WBP_Main_C.OnMatchStatusWaiting // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMatchStatusMatched(); // Function WBP_Main.WBP_Main_C.OnMatchStatusMatched // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMatchStatusStarted(); // Function WBP_Main.WBP_Main_C.OnMatchStatusStarted // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnCanReconnectToMatch(); // Function WBP_Main.WBP_Main_C.OnCanReconnectToMatch // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnCanReconnectToQueue(); // Function WBP_Main.WBP_Main_C.OnCanReconnectToQueue // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ReconnectDecisionDone(bool Result); // Function WBP_Main.WBP_Main_C.ReconnectDecisionDone // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void On Player Acknowledges Message(bool Result); // Function WBP_Main.WBP_Main_C.On Player Acknowledges Message // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnDisplayNextAdminMessage(struct FHWMessageData Message); // Function WBP_Main.WBP_Main_C.OnDisplayNextAdminMessage // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnUserRegistered(); // Function WBP_Main.WBP_Main_C.OnUserRegistered // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void FetchRewards(); // Function WBP_Main.WBP_Main_C.FetchRewards // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Initialize(); // Function WBP_Main.WBP_Main_C.Initialize // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnMaintenanceIsDue(struct FDateTime MaintenanceStart, struct FDateTime MaintenanceEnd); // Function WBP_Main.WBP_Main_C.OnMaintenanceIsDue // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnMaintenanceDueAcknowledged(bool Result); // Function WBP_Main.WBP_Main_C.OnMaintenanceDueAcknowledged // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnReconnectableMatchLost(); // Function WBP_Main.WBP_Main_C.OnReconnectableMatchLost // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void DoNothing(bool Result); // Function WBP_Main.WBP_Main_C.DoNothing // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Main(int32_t EntryPoint); // Function WBP_Main.WBP_Main_C.ExecuteUbergraph_WBP_Main // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

