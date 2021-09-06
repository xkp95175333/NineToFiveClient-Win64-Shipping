// WidgetBlueprintGeneratedClass WBP_LoginSteam.WBP_LoginSteam_C
// Size: 0x4ca (Inherited: 0x268)
struct UWBP_LoginSteam_C : UHWWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWidgetAnimation* IntroOutro; // 0x270(0x08)
	struct USizeBox* AcceptPrivacy; // 0x278(0x08)
	struct USizeBox* AcceptTermsOfService; // 0x280(0x08)
	struct UImage* BackgroundImage; // 0x288(0x08)
	struct UBorder* Border_5; // 0x290(0x08)
	struct UButton* Button_QuitGame; // 0x298(0x08)
	struct UWBP_Button_C* ButtonPlayOffline; // 0x2a0(0x08)
	struct UWBP_Label_C* CantPlayLabel; // 0x2a8(0x08)
	struct UVerticalBox* CantPlayOnlineScreen; // 0x2b0(0x08)
	struct UVerticalBox* DeveloperPlayScreen; // 0x2b8(0x08)
	struct USizeBox* DevLoginButtonSizeBox; // 0x2c0(0x08)
	struct UCheckBox* DirectorCheckbox; // 0x2c8(0x08)
	struct UVerticalBox* EacErrorScreen; // 0x2d0(0x08)
	struct UWBP_Label_C* EACRegisterLabel; // 0x2d8(0x08)
	struct UWBP_Label_C* EADisclaimer; // 0x2e0(0x08)
	struct UWBP_Checkbox_C* FriendlistCheckBox; // 0x2e8(0x08)
	struct USizeBox* FriendlistConsent; // 0x2f0(0x08)
	struct UWBP_Label_C* FriendlistText; // 0x2f8(0x08)
	struct UVerticalBox* GetStatusFailedScreen; // 0x300(0x08)
	struct UWBP_Label_C* GetStatusFailureReason; // 0x308(0x08)
	struct UImage* Image_Quit; // 0x310(0x08)
	struct UWBP_Label_C* InitGameStatusText; // 0x318(0x08)
	struct UVerticalBox* InitializeScreen; // 0x320(0x08)
	struct UWBP_Button_C* InstallEACButton; // 0x328(0x08)
	struct UWBP_Label_C* Label_Quit; // 0x330(0x08)
	struct UImage* LoadingAnim; // 0x338(0x08)
	struct USizeBox* LoadingAnimation; // 0x340(0x08)
	struct UWBP_Button_C* Login_DevLoginButton; // 0x348(0x08)
	struct UWBP_Button_C* Login_LoginButton; // 0x350(0x08)
	struct UComboBoxString* LoginRegion; // 0x358(0x08)
	struct USizeBox* LoginRegionSizer; // 0x360(0x08)
	struct UVerticalBox* LoginScreen; // 0x368(0x08)
	struct UVerticalBox* MaintenanceEndInfo; // 0x370(0x08)
	struct UVerticalBox* MaintenanceScreen; // 0x378(0x08)
	struct UWBP_Checkbox_C* NDACheckbox; // 0x380(0x08)
	struct UWBP_Label_C* NDAText; // 0x388(0x08)
	struct UImage* NineToFiveLogo; // 0x390(0x08)
	struct UEditableTextBox* OfflinePlayerName; // 0x398(0x08)
	struct UEditableTextBox* OfflineServerAddress; // 0x3a0(0x08)
	struct UWidgetSwitcher* PlayModeSwitcher; // 0x3a8(0x08)
	struct UVerticalBox* PlayScreen; // 0x3b0(0x08)
	struct UWBP_Checkbox_C* PrivacyCheckBox; // 0x3b8(0x08)
	struct UWBP_Label_C* PrivacyText; // 0x3c0(0x08)
	struct UWBP_RichTextLabel_C* ProgressMessage; // 0x3c8(0x08)
	struct UWBP_Button_C* QuitGameButton; // 0x3d0(0x08)
	struct UWBP_Label_C* ServerNextAvailableTime; // 0x3d8(0x08)
	struct UWBP_Label_C* ServerOfflineButton; // 0x3e0(0x08)
	struct UWBP_Button_C* ToggleOfflineButton; // 0x3e8(0x08)
	struct UWBP_Button_C* TOSButton; // 0x3f0(0x08)
	struct UWBP_Checkbox_C* TOSCheckBox_3; // 0x3f8(0x08)
	struct UWBP_Label_C* TOSText_3; // 0x400(0x08)
	struct UWBP_Label_C* VersionLabel; // 0x408(0x08)
	struct UWBP_Button_C* ViewPrivacyButton; // 0x410(0x08)
	struct UWBP_Button_C* WBP_Button; // 0x418(0x08)
	struct UWBP_ESCMenu_HelpButton_C* WBP_ESCMenu_HelpButton_Support_2; // 0x420(0x08)
	struct UWBP_ESCMenu_HelpButton_C* WBP_ESCMenu_HelpButton_Twitter_2; // 0x428(0x08)
	struct UWBP_Label_C* WBP_Label_256; // 0x430(0x08)
	struct UWidgetSwitcher* WidgetSwitcher; // 0x438(0x08)
	struct TArray<struct UWidget*> MenuStack; // 0x440(0x10)
	struct FString RegistryLogin; // 0x450(0x10)
	struct FString RegistryIP; // 0x460(0x10)
	bool PasswordMatch; // 0x470(0x01)
	bool EmailMatch; // 0x471(0x01)
	char pad_472[0x6]; // 0x472(0x06)
	struct FMulticastInlineDelegate OnLoggedIn; // 0x478(0x10)
	struct FString RegistryRegion; // 0x488(0x10)
	int32_t ProgressMessageCounter; // 0x498(0x04)
	bool ShouldLoginInstantly; // 0x49c(0x01)
	char pad_49D[0x3]; // 0x49d(0x03)
	struct UHWGameUserSettings* GameUserSettings; // 0x4a0(0x08)
	int32_t TooLongMaintenanceDaysThreshold; // 0x4a8(0x04)
	char pad_4AC[0x4]; // 0x4ac(0x04)
	struct FTimerHandle GetStatusRetryTimer; // 0x4b0(0x08)
	float GetStatusRetryDelay; // 0x4b8(0x04)
	enum class EHWErrorMessage LastGetStatusError; // 0x4bc(0x01)
	char pad_4BD[0x3]; // 0x4bd(0x03)
	struct FTimerHandle UpdateRetryTimeTimer; // 0x4c0(0x08)
	enum class EHWBuildType BuildType; // 0x4c8(0x01)
	bool HasBackendError; // 0x4c9(0x01)

	void ShowBackendStatus(struct FHWStatusData StatusData); // Function WBP_LoginSteam.WBP_LoginSteam_C.ShowBackendStatus // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetLoginButtonEnabled(); // Function WBP_LoginSteam.WBP_LoginSteam_C.SetLoginButtonEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ShowEADisclaimer(); // Function WBP_LoginSteam.WBP_LoginSteam_C.ShowEADisclaimer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void StoreConsentSettings(); // Function WBP_LoginSteam.WBP_LoginSteam_C.StoreConsentSettings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void HideShowConsentOption(); // Function WBP_LoginSteam.WBP_LoginSteam_C.HideShowConsentOption // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Is OfflineMode(bool Offline); // Function WBP_LoginSteam.WBP_LoginSteam_C.Is OfflineMode // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void LoadPlayerProfile(); // Function WBP_LoginSteam.WBP_LoginSteam_C.LoadPlayerProfile // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void StoreLoginDefaults(); // Function WBP_LoginSteam.WBP_LoginSteam_C.StoreLoginDefaults // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void FetchLoginDefaults(); // Function WBP_LoginSteam.WBP_LoginSteam_C.FetchLoginDefaults // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Check Offline Mode Command Line Params(); // Function WBP_LoginSteam.WBP_LoginSteam_C.Check Offline Mode Command Line Params // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void EnableHideWidget(struct UWidget* TargetWidget, bool EnableAndShow); // Function WBP_LoginSteam.WBP_LoginSteam_C.EnableHideWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ShowOverlay(struct UUserWidget* Overlay); // Function WBP_LoginSteam.WBP_LoginSteam_C.ShowOverlay // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_LoginSteam.WBP_LoginSteam_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PopMenu(); // Function WBP_LoginSteam.WBP_LoginSteam_C.PopMenu // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PushMenu(struct UWidget* Menu); // Function WBP_LoginSteam.WBP_LoginSteam_C.PushMenu // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnMatchStatusWaiting(); // Function WBP_LoginSteam.WBP_LoginSteam_C.OnMatchStatusWaiting // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnReconnectableMatchLost(); // Function WBP_LoginSteam.WBP_LoginSteam_C.OnReconnectableMatchLost // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnServerPingsDone(); // Function WBP_LoginSteam.WBP_LoginSteam_C.OnServerPingsDone // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnShopCampaignsLoaded(); // Function WBP_LoginSteam.WBP_LoginSteam_C.OnShopCampaignsLoaded // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeamInviteAcceptProcessed(bool Success, enum class EHWErrorMessage ErrorMessage); // Function WBP_LoginSteam.WBP_LoginSteam_C.OnTeamInviteAcceptProcessed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnUpdateRequired(); // Function WBP_LoginSteam.WBP_LoginSteam_C.OnUpdateRequired // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnUserStored(); // Function WBP_LoginSteam.WBP_LoginSteam_C.OnUserStored // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnUserStoreFailed(); // Function WBP_LoginSteam.WBP_LoginSteam_C.OnUserStoreFailed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnWholePartyReady(); // Function WBP_LoginSteam.WBP_LoginSteam_C.OnWholePartyReady // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__Login_LoginButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function WBP_LoginSteam.WBP_LoginSteam_C.BndEvt__Login_LoginButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void ResumeInput(); // Function WBP_LoginSteam.WBP_LoginSteam_C.ResumeInput // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnMatchStatusStarted(); // Function WBP_LoginSteam.WBP_LoginSteam_C.OnMatchStatusStarted // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void LogOff(); // Function WBP_LoginSteam.WBP_LoginSteam_C.LogOff // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnMatchStatusOpen(); // Function WBP_LoginSteam.WBP_LoginSteam_C.OnMatchStatusOpen // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void QuitTheGame(); // Function WBP_LoginSteam.WBP_LoginSteam_C.QuitTheGame // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnMatchStatusMatched(); // Function WBP_LoginSteam.WBP_LoginSteam_C.OnMatchStatusMatched // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_28_OnButtonClickedEvent__DelegateSignature(); // Function WBP_LoginSteam.WBP_LoginSteam_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_28_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void OnLogoutCompleted(); // Function WBP_LoginSteam.WBP_LoginSteam_C.OnLogoutCompleted // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_LoginSteam.WBP_LoginSteam_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnGetWeekInfoFailed(); // Function WBP_LoginSteam.WBP_LoginSteam_C.OnGetWeekInfoFailed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnGetWeekInfo(struct FHWWeekInfoResponse Response); // Function WBP_LoginSteam.WBP_LoginSteam_C.OnGetWeekInfo // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnFriendsListUpdated(bool Success, struct FHWFetchFriendsResponse Response); // Function WBP_LoginSteam.WBP_LoginSteam_C.OnFriendsListUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnCanReconnectToQueue(); // Function WBP_LoginSteam.WBP_LoginSteam_C.OnCanReconnectToQueue // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnCanReconnectToMatch(); // Function WBP_LoginSteam.WBP_LoginSteam_C.OnCanReconnectToMatch // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void SetVersionInfo(struct FString NewParam); // Function WBP_LoginSteam.WBP_LoginSteam_C.SetVersionInfo // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GoToLoginScreen(); // Function WBP_LoginSteam.WBP_LoginSteam_C.GoToLoginScreen // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnUserLoaded(struct FString SessionIdLoadedUser); // Function WBP_LoginSteam.WBP_LoginSteam_C.OnUserLoaded // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnOfflineLoginOk(struct FHWLoginResponse Response); // Function WBP_LoginSteam.WBP_LoginSteam_C.OnOfflineLoginOk // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnOfflineLoginFail(enum class EHWErrorMessage ErrorMessage); // Function WBP_LoginSteam.WBP_LoginSteam_C.OnOfflineLoginFail // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnNormalLoginCompleted(struct FHWLoginResponse Response); // Function WBP_LoginSteam.WBP_LoginSteam_C.OnNormalLoginCompleted // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnNormalLoginFailed(enum class EHWErrorMessage ErrorMessage); // Function WBP_LoginSteam.WBP_LoginSteam_C.OnNormalLoginFailed // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void DoLogin(); // Function WBP_LoginSteam.WBP_LoginSteam_C.DoLogin // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Destruct(); // Function WBP_LoginSteam.WBP_LoginSteam_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_Button_K2Node_ComponentBoundEvent_24_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_LoginSteam.WBP_LoginSteam_C.BndEvt__WBP_Button_K2Node_ComponentBoundEvent_24_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_26_OnButtonClickedEvent__DelegateSignature(); // Function WBP_LoginSteam.WBP_LoginSteam_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_26_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_27_OnButtonHoverEvent__DelegateSignature(); // Function WBP_LoginSteam.WBP_LoginSteam_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_27_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_29_OnButtonHoverEvent__DelegateSignature(); // Function WBP_LoginSteam.WBP_LoginSteam_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_29_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__InstallEACButton_K2Node_ComponentBoundEvent_25_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_LoginSteam.WBP_LoginSteam_C.BndEvt__InstallEACButton_K2Node_ComponentBoundEvent_25_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void ContinueToLogin(); // Function WBP_LoginSteam.WBP_LoginSteam_C.ContinueToLogin // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__ToggleOfflineButton_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature(); // Function WBP_LoginSteam.WBP_LoginSteam_C.BndEvt__ToggleOfflineButton_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void UpdateDeveloperButtons(); // Function WBP_LoginSteam.WBP_LoginSteam_C.UpdateDeveloperButtons // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__NDACheckbox_K2Node_ComponentBoundEvent_0_OnToggled__DelegateSignature(bool IsChecked); // Function WBP_LoginSteam.WBP_LoginSteam_C.BndEvt__NDACheckbox_K2Node_ComponentBoundEvent_0_OnToggled__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void ConnectToServerInOfflineMode(); // Function WBP_LoginSteam.WBP_LoginSteam_C.ConnectToServerInOfflineMode // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__Login_DevLoginButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_LoginSteam.WBP_LoginSteam_C.BndEvt__Login_DevLoginButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void OnDevUsernameEntered(struct FString Result); // Function WBP_LoginSteam.WBP_LoginSteam_C.OnDevUsernameEntered // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnDevLoginCompleted(struct FHWLoginResponse Response); // Function WBP_LoginSteam.WBP_LoginSteam_C.OnDevLoginCompleted // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnDevLoginFailed(enum class EHWErrorMessage ErrorMessage); // Function WBP_LoginSteam.WBP_LoginSteam_C.OnDevLoginFailed // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnGetStatus(struct FHWStatusData Response); // Function WBP_LoginSteam.WBP_LoginSteam_C.OnGetStatus // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnGetStatusError(enum class EHWErrorMessage ErrorMessage); // Function WBP_LoginSteam.WBP_LoginSteam_C.OnGetStatusError // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void FetchBackendStatus(); // Function WBP_LoginSteam.WBP_LoginSteam_C.FetchBackendStatus // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__LoginRegion_K2Node_ComponentBoundEvent_6_OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, enum class ESelectInfo SelectionType); // Function WBP_LoginSteam.WBP_LoginSteam_C.BndEvt__LoginRegion_K2Node_ComponentBoundEvent_6_OnSelectionChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void OnMasterDataLoaded(); // Function WBP_LoginSteam.WBP_LoginSteam_C.OnMasterDataLoaded // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void SetProgressMessage(struct FString Message, bool Reset); // Function WBP_LoginSteam.WBP_LoginSteam_C.SetProgressMessage // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnNetworkErrorOccurred(); // Function WBP_LoginSteam.WBP_LoginSteam_C.OnNetworkErrorOccurred // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnMasterDataLoadFailed(enum class EHWErrorMessage Error, struct FString Message); // Function WBP_LoginSteam.WBP_LoginSteam_C.OnMasterDataLoadFailed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPopupClosed(bool Result); // Function WBP_LoginSteam.WBP_LoginSteam_C.OnPopupClosed // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnUserLoadFailed(struct FString SessionIdLoadedUser); // Function WBP_LoginSteam.WBP_LoginSteam_C.OnUserLoadFailed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void PopulateEndpoints(); // Function WBP_LoginSteam.WBP_LoginSteam_C.PopulateEndpoints // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_Button_1_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_LoginSteam.WBP_LoginSteam_C.BndEvt__WBP_Button_1_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__PrivacyCheckBox_K2Node_ComponentBoundEvent_7_OnToggled__DelegateSignature(bool IsChecked); // Function WBP_LoginSteam.WBP_LoginSteam_C.BndEvt__PrivacyCheckBox_K2Node_ComponentBoundEvent_7_OnToggled__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void SavePrivacyAcceptedAndTermsToLocal(); // Function WBP_LoginSteam.WBP_LoginSteam_C.SavePrivacyAcceptedAndTermsToLocal // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ShowPrivacyClauseIfNotAccepted(); // Function WBP_LoginSteam.WBP_LoginSteam_C.ShowPrivacyClauseIfNotAccepted // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Login(); // Function WBP_LoginSteam.WBP_LoginSteam_C.Login // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetContentBasedOnBuildType(); // Function WBP_LoginSteam.WBP_LoginSteam_C.SetContentBasedOnBuildType // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PreConstruct(bool IsDesignTime); // Function WBP_LoginSteam.WBP_LoginSteam_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__QuitGameButton_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_LoginSteam.WBP_LoginSteam_C.BndEvt__QuitGameButton_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__FriendlistCheckBox_K2Node_ComponentBoundEvent_1_OnToggled__DelegateSignature(bool IsChecked); // Function WBP_LoginSteam.WBP_LoginSteam_C.BndEvt__FriendlistCheckBox_K2Node_ComponentBoundEvent_1_OnToggled__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void DummyEvent(bool Result); // Function WBP_LoginSteam.WBP_LoginSteam_C.DummyEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlatformReadyDelegateEvent(); // Function WBP_LoginSteam.WBP_LoginSteam_C.OnPlatformReadyDelegateEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnFamilyRestrictionsDelegateEvent(); // Function WBP_LoginSteam.WBP_LoginSteam_C.OnFamilyRestrictionsDelegateEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void DebugSetRegion(struct FString RegionName); // Function WBP_LoginSteam.WBP_LoginSteam_C.DebugSetRegion // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_ESCMenu_HelpButton_Support_1_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(); // Function WBP_LoginSteam.WBP_LoginSteam_C.BndEvt__WBP_ESCMenu_HelpButton_Support_1_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_ESCMenu_HelpButton_Twitter_1_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature(); // Function WBP_LoginSteam.WBP_LoginSteam_C.BndEvt__WBP_ESCMenu_HelpButton_Twitter_1_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__TOSCheckBox_2_K2Node_ComponentBoundEvent_12_OnToggled__DelegateSignature(bool IsChecked); // Function WBP_LoginSteam.WBP_LoginSteam_C.BndEvt__TOSCheckBox_2_K2Node_ComponentBoundEvent_12_OnToggled__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__TOSButton_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_LoginSteam.WBP_LoginSteam_C.BndEvt__TOSButton_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void UpdateRetryText(); // Function WBP_LoginSteam.WBP_LoginSteam_C.UpdateRetryText // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void HandleBackendError(); // Function WBP_LoginSteam.WBP_LoginSteam_C.HandleBackendError // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_LoginSteam(int32_t EntryPoint); // Function WBP_LoginSteam.WBP_LoginSteam_C.ExecuteUbergraph_WBP_LoginSteam // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
	void OnLoggedIn__DelegateSignature(struct FString SessionId); // Function WBP_LoginSteam.WBP_LoginSteam_C.OnLoggedIn__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

