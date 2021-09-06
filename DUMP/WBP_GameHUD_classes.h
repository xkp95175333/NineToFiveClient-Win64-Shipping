// WidgetBlueprintGeneratedClass WBP_GameHUD.WBP_GameHUD_C
// Size: 0x42a (Inherited: 0x268)
struct UWBP_GameHUD_C : UHWWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UImage* GrenadeIndicator; // 0x270(0x08)
	struct UCanvasPanel* HUD_AlwaysVisible; // 0x278(0x08)
	struct UWBP_DroneHUD_C* HUD_Drone; // 0x280(0x08)
	struct UCanvasPanel* HUD_Human; // 0x288(0x08)
	struct UWBP_HUD_Spectator_C* HUD_Spectator; // 0x290(0x08)
	struct UWidgetSwitcher* HUD_Switcher; // 0x298(0x08)
	struct UBackgroundBlur* HUDBackgroundBlur; // 0x2a0(0x08)
	struct UBorder* HUDBackgroundBorder; // 0x2a8(0x08)
	struct UBorder* HUDBackgroundGrid; // 0x2b0(0x08)
	struct UTextBlock* MutedIndicator; // 0x2b8(0x08)
	struct UOverlay* NewChatNotificationPanel; // 0x2c0(0x08)
	struct UWBP_Placeholder_GameHUD_NotificationText_C* NotificationText; // 0x2c8(0x08)
	struct UCanvasPanel* ShootingRangePanel; // 0x2d0(0x08)
	struct UTextBlock* SignalIndicator; // 0x2d8(0x08)
	struct UWBP_TeamChat_C* TextChat; // 0x2e0(0x08)
	struct UWBP_VoiceChatIndicator_C* VoiceChatIndicator; // 0x2e8(0x08)
	struct UWBP_CharacterDamageState_C* WBP_CharacterDamageState; // 0x2f0(0x08)
	struct UWBP_CombatCompanionCamera_C* WBP_CombatCompanionCamera; // 0x2f8(0x08)
	struct UWBP_Compass_C* WBP_Compass; // 0x300(0x08)
	struct UWBP_DealtDamage_Log_C* WBP_DealtDamage_Log; // 0x308(0x08)
	struct UWBP_Diag_PlayerEffects_C* WBP_Diag_PlayerEffects; // 0x310(0x08)
	struct UWBP_DownedState_C* WBP_DownedState; // 0x318(0x08)
	struct UWBP_GrenadeIndicator_C* WBP_GrenadeIndicator; // 0x320(0x08)
	struct UWBP_HUD_BloodOverlay_C* WBP_HUD_BloodOverlay; // 0x328(0x08)
	struct UWBP_HUD_Crosshair_Placer_C* WBP_HUD_Crosshair_Placer; // 0x330(0x08)
	struct UWBP_HUD_RoundTimer_C* WBP_HUD_RoundTimer_C_2; // 0x338(0x08)
	struct UWBP_HUDPingMarkerController_C* WBP_HUDPingMarkerController; // 0x340(0x08)
	struct UWBP_InteractionIndicator_Placer_C* WBP_InteractionIndicator_Placer; // 0x348(0x08)
	struct UWBP_InventoryPanel_C* WBP_InventoryPanel; // 0x350(0x08)
	struct UWBP_KillHighlightHolder_C* WBP_KillHighlightHolder; // 0x358(0x08)
	struct UWBP_KillLog_C* WBP_KillLog; // 0x360(0x08)
	struct UWBP_MapAndCameras_C* WBP_MapAndCameras; // 0x368(0x08)
	struct UWBP_NameTagController_C* WBP_NameTagController; // 0x370(0x08)
	struct UWBP_ObjectivePanel_C* WBP_ObjectivePanel_129; // 0x378(0x08)
	struct UWBP_PingWheel_C* WBP_PingWheel; // 0x380(0x08)
	struct UWBP_QuickMap_C* WBP_QuickMap; // 0x388(0x08)
	struct UWBP_TeamPanelHolder_C* WBP_TeamPanelHolder; // 0x390(0x08)
	struct UWBP_ToastMessageDisplay_C* WBP_ToastMessageDisplay; // 0x398(0x08)
	struct UWBP_VaultHint_C* WBP_VaultHint; // 0x3a0(0x08)
	struct TArray<struct UImage*> PingMarkerImages; // 0x3a8(0x10)
	struct AHWPlayerController* HWPlayerControllerRef; // 0x3b8(0x08)
	float SignalIndicatorRadius; // 0x3c0(0x04)
	float SignalIndicatorBrightRadius; // 0x3c4(0x04)
	bool SignalIndicatorShowsDrones; // 0x3c8(0x01)
	char pad_3C9[0x7]; // 0x3c9(0x07)
	struct FTimerHandle SignalIndicatorTimer; // 0x3d0(0x08)
	bool IsMapShown; // 0x3d8(0x01)
	char pad_3D9[0x7]; // 0x3d9(0x07)
	struct FHWTextChatMessage NewMessage; // 0x3e0(0x48)
	bool IsQuickMapShown; // 0x428(0x01)
	enum class ESlateVisibility TeamPanelDefaultVisibility; // 0x429(0x01)

	void GetGrenadeBlinkStatus(struct UObject* Object, bool IndicatorVisible); // Function WBP_GameHUD.WBP_GameHUD_C.GetGrenadeBlinkStatus // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void InitFlowHUDPanel(); // Function WBP_GameHUD.WBP_GameHUD_C.InitFlowHUDPanel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateChatWidgets(); // Function WBP_GameHUD.WBP_GameHUD_C.UpdateChatWidgets // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetFocused(); // Function WBP_GameHUD.WBP_GameHUD_C.SetFocused // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void TutorialTweaks(); // Function WBP_GameHUD.WBP_GameHUD_C.TutorialTweaks // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetShootingRangePanelVisible(bool Value); // Function WBP_GameHUD.WBP_GameHUD_C.SetShootingRangePanelVisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ToggleSpectatorVisibility(bool Spectating); // Function WBP_GameHUD.WBP_GameHUD_C.ToggleSpectatorVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	int32_t GetOwnerTeam(); // Function WBP_GameHUD.WBP_GameHUD_C.GetOwnerTeam // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void IsDroneCharacter(struct AActor* Actor, bool Result); // Function WBP_GameHUD.WBP_GameHUD_C.IsDroneCharacter // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void IsPlayerCharacter(struct AActor* Actor, bool Result); // Function WBP_GameHUD.WBP_GameHUD_C.IsPlayerCharacter // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void HasSignalsInRange(float Range, bool Result); // Function WBP_GameHUD.WBP_GameHUD_C.HasSignalsInRange // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void UpdateSignalIndicator(); // Function WBP_GameHUD.WBP_GameHUD_C.UpdateSignalIndicator // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	float GetDroneHP(); // Function WBP_GameHUD.WBP_GameHUD_C.GetDroneHP // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void UpdateGrenadeMarkers(); // Function WBP_GameHUD.WBP_GameHUD_C.UpdateGrenadeMarkers // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetNearbyGrenades(struct TArray<struct AActor*> Grenades); // Function WBP_GameHUD.WBP_GameHUD_C.GetNearbyGrenades // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	enum class ESlateVisibility Get_MutedIndicator_Visibility_1(); // Function WBP_GameHUD.WBP_GameHUD_C.Get_MutedIndicator_Visibility_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void UpdateCrosshair(float DeltaTime); // Function WBP_GameHUD.WBP_GameHUD_C.UpdateCrosshair // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnHostileTeamChanged(enum class EHWHostileTeam NewHostileTeam); // Function WBP_GameHUD.WBP_GameHUD_C.OnHostileTeamChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnInputMappingsUpdated(); // Function WBP_GameHUD.WBP_GameHUD_C.OnInputMappingsUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnItemUnlocked(bool WasSuccessful, struct FString Message); // Function WBP_GameHUD.WBP_GameHUD_C.OnItemUnlocked // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnKillsUpdated(int32_t Kills); // Function WBP_GameHUD.WBP_GameHUD_C.OnKillsUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMyReadystateChanged(bool bNewValue); // Function WBP_GameHUD.WBP_GameHUD_C.OnMyReadystateChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnObjectiveCardUpdated(); // Function WBP_GameHUD.WBP_GameHUD_C.OnObjectiveCardUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnObjectiveTextUpdated(); // Function WBP_GameHUD.WBP_GameHUD_C.OnObjectiveTextUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerObjectveImageChanged(struct AHWPlayerState* InPlayerState, struct UTexture2D* Texture); // Function WBP_GameHUD.WBP_GameHUD_C.OnPlayerObjectveImageChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerReadyCountUpdated(int32_t NumReady, int32_t Total); // Function WBP_GameHUD.WBP_GameHUD_C.OnPlayerReadyCountUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerStateAdded(struct APlayerState* PlayerState); // Function WBP_GameHUD.WBP_GameHUD_C.OnPlayerStateAdded // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnRoundHeaderUpdated(); // Function WBP_GameHUD.WBP_GameHUD_C.OnRoundHeaderUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeamInvitationsUpdated(struct TArray<struct FHWTeamInvitation> Invitations); // Function WBP_GameHUD.WBP_GameHUD_C.OnTeamInvitationsUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeamMembersChanged(struct TArray<struct FHWTeamPlayer> MyTeamPlayers); // Function WBP_GameHUD.WBP_GameHUD_C.OnTeamMembersChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeamObjectiveStatusChanged(struct FText Text, int32_t Team); // Function WBP_GameHUD.WBP_GameHUD_C.OnTeamObjectiveStatusChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnToastMessageAdded(struct FHWToastMessageData Data); // Function WBP_GameHUD.WBP_GameHUD_C.OnToastMessageAdded // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnVoiceChatToggled(bool Active); // Function WBP_GameHUD.WBP_GameHUD_C.OnVoiceChatToggled // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void CancelHudPromptText(); // Function WBP_GameHUD.WBP_GameHUD_C.CancelHudPromptText // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnArmorFeatureActivated(enum class EHWArmorFeatureType Feature, bool Active, float Duration); // Function WBP_GameHUD.WBP_GameHUD_C.OnArmorFeatureActivated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnCameraFeedControllerChanged(struct UHWCameraFeedProviderComponent* Camera); // Function WBP_GameHUD.WBP_GameHUD_C.OnCameraFeedControllerChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnCameraFeedsUpdated(struct TArray<struct UHWCameraFeedProviderComponent*> Cameras); // Function WBP_GameHUD.WBP_GameHUD_C.OnCameraFeedsUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnCombatCompanionStatusChanged(bool Available); // Function WBP_GameHUD.WBP_GameHUD_C.OnCombatCompanionStatusChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnDroneJammed(); // Function WBP_GameHUD.WBP_GameHUD_C.OnDroneJammed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnDronePossessed(); // Function WBP_GameHUD.WBP_GameHUD_C.OnDronePossessed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnDroneUnjammed(); // Function WBP_GameHUD.WBP_GameHUD_C.OnDroneUnjammed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnHitReceived(struct FHWPlayerHitReceivedParams Params); // Function WBP_GameHUD.WBP_GameHUD_C.OnHitReceived // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnHitScored(struct FHWPlayerHitScoredParams Params); // Function WBP_GameHUD.WBP_GameHUD_C.OnHitScored // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnInteractionItemEnterView(struct UHWInteractionComponent* Item); // Function WBP_GameHUD.WBP_GameHUD_C.OnInteractionItemEnterView // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnInteractionItemExitView(struct UHWInteractionComponent* Item); // Function WBP_GameHUD.WBP_GameHUD_C.OnInteractionItemExitView // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMetaMessageReceived(struct FHWMetaMessageData Message, float ShowDuration); // Function WBP_GameHUD.WBP_GameHUD_C.OnMetaMessageReceived // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnNotificationTextUpdated(struct FText NewText, struct FLinearColor UpperTextColor, bool UseAnimationUpper, struct FText NewNotificationTextLower, struct FLinearColor LowerTextColor, bool UseAnimationLower, float Duration); // Function WBP_GameHUD.WBP_GameHUD_C.OnNotificationTextUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnNotifyDeathDroneDestroyed(struct FString KillerId, struct FString VictimId, bool WasKilledByDrone, struct FName KillerItemId, enum class EHWDamageType DamageType, bool WasHeadShot, enum class EHWWeaponType WeaponType); // Function WBP_GameHUD.WBP_GameHUD_C.OnNotifyDeathDroneDestroyed // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnObjectiveChanged(struct FText NewObjective, bool UseAnimation, bool PlaySound); // Function WBP_GameHUD.WBP_GameHUD_C.OnObjectiveChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnObjectiveDataChanged(struct FHWRoundObjectivesData ObjectiveData); // Function WBP_GameHUD.WBP_GameHUD_C.OnObjectiveDataChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnObjectiveItemsUpdated(struct TArray<struct FNameAndCount> Items); // Function WBP_GameHUD.WBP_GameHUD_C.OnObjectiveItemsUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerDisconnected(struct FString SessionId); // Function WBP_GameHUD.WBP_GameHUD_C.OnPlayerDisconnected // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerDowned(struct FString KillerId, struct FString VictimId, bool WasHeadShot); // Function WBP_GameHUD.WBP_GameHUD_C.OnPlayerDowned // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerKilled(struct FString KillerId, struct FString VictimId, bool WasKilledByDrone, struct FName KillerItemId, enum class EHWDamageType DamageType, bool WasHeadShot, enum class EHWWeaponType WeaponType, struct TArray<struct FString> Assists, struct AActor* DamageDealer, struct FName BleedCausedByDamageDealer, enum class EHWDamageType BleedCausedByDamageType); // Function WBP_GameHUD.WBP_GameHUD_C.OnPlayerKilled // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerStateSetForCharacter(struct AHWCharacter* Character); // Function WBP_GameHUD.WBP_GameHUD_C.OnPlayerStateSetForCharacter // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPossess(struct AHWCharacter* PosessedCharacter); // Function WBP_GameHUD.WBP_GameHUD_C.OnPossess // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnReconnectingPlayersUpdated(struct TArray<struct FString> ReconnectingPlayers); // Function WBP_GameHUD.WBP_GameHUD_C.OnReconnectingPlayersUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnRoundCleanup(); // Function WBP_GameHUD.WBP_GameHUD_C.OnRoundCleanup // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnRoundIntroDataChanged(struct FHWRoundIntroData RoundIntroData); // Function WBP_GameHUD.WBP_GameHUD_C.OnRoundIntroDataChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnRoundStateSet(enum class EHWRoundState State); // Function WBP_GameHUD.WBP_GameHUD_C.OnRoundStateSet // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeammateLoadoutChanged(struct FString PlayerId, struct FString Primary, struct FString Secondary, int32_t PrimaryTier, int32_t SecondaryTier, int32_t ArmorTier, struct FName Consumable, struct FName Throwable, struct FName Placeable); // Function WBP_GameHUD.WBP_GameHUD_C.OnTeammateLoadoutChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeammateLoadoutDataChanged(int32_t CharIndex, struct FHWLoadoutData LoadoutData); // Function WBP_GameHUD.WBP_GameHUD_C.OnTeammateLoadoutDataChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeammateProfileChanged(struct FString PlayerId, struct FHWPlayerPublicProfile Profile); // Function WBP_GameHUD.WBP_GameHUD_C.OnTeammateProfileChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeamReadyStateChanged(struct TArray<struct FString> Ids); // Function WBP_GameHUD.WBP_GameHUD_C.OnTeamReadyStateChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeamScoreUpdated(struct FHWTeamScoreData Score); // Function WBP_GameHUD.WBP_GameHUD_C.OnTeamScoreUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void SetHudPromptText(struct FText Text, float DisplayDuration); // Function WBP_GameHUD.WBP_GameHUD_C.SetHudPromptText // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_GameHUD.WBP_GameHUD_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_GameHUD.WBP_GameHUD_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnGameplayEvent(enum class EHWGameplayEventType Event); // Function WBP_GameHUD.WBP_GameHUD_C.OnGameplayEvent // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnEnterSpectateMode(bool DroneSelect, bool ShowDeathScreen); // Function WBP_GameHUD.WBP_GameHUD_C.OnEnterSpectateMode // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnExitSpectateMode(); // Function WBP_GameHUD.WBP_GameHUD_C.OnExitSpectateMode // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnCurrentObjectiveIndexUpdated(); // Function WBP_GameHUD.WBP_GameHUD_C.OnCurrentObjectiveIndexUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnAssistsUpdated(int32_t Assists); // Function WBP_GameHUD.WBP_GameHUD_C.OnAssistsUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnArmorFeaturesChanged(); // Function WBP_GameHUD.WBP_GameHUD_C.OnArmorFeaturesChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ToggleBackgroundBlur(bool Enabled); // Function WBP_GameHUD.WBP_GameHUD_C.ToggleBackgroundBlur // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnCloseMap(); // Function WBP_GameHUD.WBP_GameHUD_C.OnCloseMap // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnOpenMap(); // Function WBP_GameHUD.WBP_GameHUD_C.OnOpenMap // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnTextChatActivated(); // Function WBP_GameHUD.WBP_GameHUD_C.OnTextChatActivated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnTextChatDeactivated(); // Function WBP_GameHUD.WBP_GameHUD_C.OnTextChatDeactivated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnDeveloperModeChanged(struct AHWPlayerController* Controller, bool Value); // Function WBP_GameHUD.WBP_GameHUD_C.OnDeveloperModeChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_MapAndCameras_K2Node_ComponentBoundEvent_0_OnMapDisplayed__DelegateSignature(bool Displayed); // Function WBP_GameHUD.WBP_GameHUD_C.BndEvt__WBP_MapAndCameras_K2Node_ComponentBoundEvent_0_OnMapDisplayed__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void OnShowProgressBar(float Duration, enum class EHWProgressBarType BarType); // Function WBP_GameHUD.WBP_GameHUD_C.OnShowProgressBar // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnHideProgressBar(); // Function WBP_GameHUD.WBP_GameHUD_C.OnHideProgressBar // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ShowNewChatMessage(struct FHWTextChatMessage Message); // Function WBP_GameHUD.WBP_GameHUD_C.ShowNewChatMessage // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void NewChatMessageReceived(struct FHWTextChatMessage Message); // Function WBP_GameHUD.WBP_GameHUD_C.NewChatMessageReceived // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ClearChatNotifications(); // Function WBP_GameHUD.WBP_GameHUD_C.ClearChatNotifications // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OpenQuickMap(); // Function WBP_GameHUD.WBP_GameHUD_C.OpenQuickMap // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ToggleQuickMap(); // Function WBP_GameHUD.WBP_GameHUD_C.ToggleQuickMap // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void HideQuickMapIfOpened(); // Function WBP_GameHUD.WBP_GameHUD_C.HideQuickMapIfOpened // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ShowTeamPanel(); // Function WBP_GameHUD.WBP_GameHUD_C.ShowTeamPanel // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_GameHUD(int32_t EntryPoint); // Function WBP_GameHUD.WBP_GameHUD_C.ExecuteUbergraph_WBP_GameHUD // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

