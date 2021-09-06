// WidgetBlueprintGeneratedClass WBP_HUD_Spectator.WBP_HUD_Spectator_C
// Size: 0x3b8 (Inherited: 0x268)
struct UWBP_HUD_Spectator_C : UHWWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UImage* Arrow; // 0x270(0x08)
	struct UImage* Arrow_2; // 0x278(0x08)
	struct UWBP_RichTextLabel_C* AssistCount; // 0x280(0x08)
	struct UWBP_RichTextLabel_C* Assists; // 0x288(0x08)
	struct UImage* Background; // 0x290(0x08)
	struct UImage* BottomDetail; // 0x298(0x08)
	struct UWBP_DroneHUD_C* DroneHUD; // 0x2a0(0x08)
	struct UImage* Filter; // 0x2a8(0x08)
	struct UCanvasPanel* HUD; // 0x2b0(0x08)
	struct UWidgetSwitcher* HumanDroneSwitcher; // 0x2b8(0x08)
	struct UWBP_RichTextLabel_C* KillCount; // 0x2c0(0x08)
	struct UWBP_RichTextLabel_C* Kills; // 0x2c8(0x08)
	struct UImage* LeftDetail; // 0x2d0(0x08)
	struct UCanvasPanel* LoadoutEditorLayer; // 0x2d8(0x08)
	struct UButton* NextSpectateButton; // 0x2e0(0x08)
	struct UImage* PlayerAvatar; // 0x2e8(0x08)
	struct UWBP_RichTextLabel_C* PlayerInventory; // 0x2f0(0x08)
	struct UWBP_RichTextLabel_C* Previous; // 0x2f8(0x08)
	struct UWBP_RichTextLabel_C* Previous_2; // 0x300(0x08)
	struct UButton* PrevSpectateButton; // 0x308(0x08)
	struct UImage* RightDetail; // 0x310(0x08)
	struct UWidgetSwitcher* ScreenSwitcher; // 0x318(0x08)
	struct UOverlay* SpectateScreen; // 0x320(0x08)
	struct UImage* SpectateSelectBottomDetail; // 0x328(0x08)
	struct UImage* SpectateSelectTopDetail; // 0x330(0x08)
	struct UWBP_RichTextLabel_C* SpectateTargetName; // 0x338(0x08)
	struct UWBP_RichTextLabel_C* SpectateTargetSlogan; // 0x340(0x08)
	struct UWBP_RichTextLabel_C* SpectateTargetSlogan_2; // 0x348(0x08)
	struct UWBP_RichTextLabel_C* text1; // 0x350(0x08)
	struct UWBP_RichTextLabel_C* Text2; // 0x358(0x08)
	struct UImage* TopDetail; // 0x360(0x08)
	struct UWBP_CombatCompanionCamera_C* WBP_CombatCompanionCamera; // 0x368(0x08)
	struct UWBP_DeathScreen_C* WBP_DeathScreen; // 0x370(0x08)
	struct UWBP_InventoryPanel_C* WBP_InventoryPanel; // 0x378(0x08)
	struct FTimerHandle VisibilityCheck; // 0x380(0x08)
	bool IsSpectatorEditingLoadout; // 0x388(0x01)
	char pad_389[0x7]; // 0x389(0x07)
	struct AHWPlayerState* SpectaingPlayerState; // 0x390(0x08)
	struct FTimerHandle MoveBackToSpectateTimer; // 0x398(0x08)
	bool ShowingDeathScreen; // 0x3a0(0x01)
	char pad_3A1[0x7]; // 0x3a1(0x07)
	struct FMulticastInlineDelegate SwitchingToSpectateFromDeath; // 0x3a8(0x10)

	void Reinitialize(struct AHWCharacter* Character); // Function WBP_HUD_Spectator.WBP_HUD_Spectator_C.Reinitialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void CancelHudPromptText(); // Function WBP_HUD_Spectator.WBP_HUD_Spectator_C.CancelHudPromptText // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnArmorFeatureActivated(enum class EHWArmorFeatureType Feature, bool Active, float Duration); // Function WBP_HUD_Spectator.WBP_HUD_Spectator_C.OnArmorFeatureActivated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnArmorFeaturesChanged(); // Function WBP_HUD_Spectator.WBP_HUD_Spectator_C.OnArmorFeaturesChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnCameraFeedControllerChanged(struct UHWCameraFeedProviderComponent* Camera); // Function WBP_HUD_Spectator.WBP_HUD_Spectator_C.OnCameraFeedControllerChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnCameraFeedsUpdated(struct TArray<struct UHWCameraFeedProviderComponent*> Cameras); // Function WBP_HUD_Spectator.WBP_HUD_Spectator_C.OnCameraFeedsUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnCloseMap(); // Function WBP_HUD_Spectator.WBP_HUD_Spectator_C.OnCloseMap // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnCombatCompanionStatusChanged(bool Available); // Function WBP_HUD_Spectator.WBP_HUD_Spectator_C.OnCombatCompanionStatusChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnDroneJammed(); // Function WBP_HUD_Spectator.WBP_HUD_Spectator_C.OnDroneJammed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnDronePossessed(); // Function WBP_HUD_Spectator.WBP_HUD_Spectator_C.OnDronePossessed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnDroneUnjammed(); // Function WBP_HUD_Spectator.WBP_HUD_Spectator_C.OnDroneUnjammed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnExitSpectateMode(); // Function WBP_HUD_Spectator.WBP_HUD_Spectator_C.OnExitSpectateMode // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnHideProgressBar(); // Function WBP_HUD_Spectator.WBP_HUD_Spectator_C.OnHideProgressBar // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnHitReceived(struct FHWPlayerHitReceivedParams Params); // Function WBP_HUD_Spectator.WBP_HUD_Spectator_C.OnHitReceived // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnHitScored(struct FHWPlayerHitScoredParams Params); // Function WBP_HUD_Spectator.WBP_HUD_Spectator_C.OnHitScored // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnInteractionItemEnterView(struct UHWInteractionComponent* Item); // Function WBP_HUD_Spectator.WBP_HUD_Spectator_C.OnInteractionItemEnterView // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnInteractionItemExitView(struct UHWInteractionComponent* Item); // Function WBP_HUD_Spectator.WBP_HUD_Spectator_C.OnInteractionItemExitView // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMetaMessageReceived(struct FHWMetaMessageData Message, float ShowDuration); // Function WBP_HUD_Spectator.WBP_HUD_Spectator_C.OnMetaMessageReceived // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnNotificationTextUpdated(struct FText NewText, struct FLinearColor UpperTextColor, bool UseAnimationUpper, struct FText NewNotificationTextLower, struct FLinearColor LowerTextColor, bool UseAnimationLower, float Duration); // Function WBP_HUD_Spectator.WBP_HUD_Spectator_C.OnNotificationTextUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnNotifyDeathDroneDestroyed(struct FString KillerId, struct FString VictimId, bool WasKilledByDrone, struct FName KillerItemId, enum class EHWDamageType DamageType, bool WasHeadShot, enum class EHWWeaponType WeaponType); // Function WBP_HUD_Spectator.WBP_HUD_Spectator_C.OnNotifyDeathDroneDestroyed // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnObjectiveChanged(struct FText NewObjective, bool UseAnimation, bool PlaySound); // Function WBP_HUD_Spectator.WBP_HUD_Spectator_C.OnObjectiveChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnObjectiveDataChanged(struct FHWRoundObjectivesData ObjectiveData); // Function WBP_HUD_Spectator.WBP_HUD_Spectator_C.OnObjectiveDataChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnObjectiveItemsUpdated(struct TArray<struct FNameAndCount> Items); // Function WBP_HUD_Spectator.WBP_HUD_Spectator_C.OnObjectiveItemsUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnOpenMap(); // Function WBP_HUD_Spectator.WBP_HUD_Spectator_C.OnOpenMap // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerDisconnected(struct FString SessionId); // Function WBP_HUD_Spectator.WBP_HUD_Spectator_C.OnPlayerDisconnected // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerDowned(struct FString KillerId, struct FString VictimId, bool WasHeadShot); // Function WBP_HUD_Spectator.WBP_HUD_Spectator_C.OnPlayerDowned // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerKilled(struct FString KillerId, struct FString VictimId, bool WasKilledByDrone, struct FName KillerItemId, enum class EHWDamageType DamageType, bool WasHeadShot, enum class EHWWeaponType WeaponType, struct TArray<struct FString> Assists, struct AActor* DamageDealer, struct FName BleedCausedByDamageDealer, enum class EHWDamageType BleedCausedByDamageType); // Function WBP_HUD_Spectator.WBP_HUD_Spectator_C.OnPlayerKilled // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerStateSetForCharacter(struct AHWCharacter* Character); // Function WBP_HUD_Spectator.WBP_HUD_Spectator_C.OnPlayerStateSetForCharacter // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPossess(struct AHWCharacter* PosessedCharacter); // Function WBP_HUD_Spectator.WBP_HUD_Spectator_C.OnPossess // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnReconnectingPlayersUpdated(struct TArray<struct FString> ReconnectingPlayers); // Function WBP_HUD_Spectator.WBP_HUD_Spectator_C.OnReconnectingPlayersUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnRoundCleanup(); // Function WBP_HUD_Spectator.WBP_HUD_Spectator_C.OnRoundCleanup // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnRoundIntroDataChanged(struct FHWRoundIntroData RoundIntroData); // Function WBP_HUD_Spectator.WBP_HUD_Spectator_C.OnRoundIntroDataChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnRoundStateSet(enum class EHWRoundState State); // Function WBP_HUD_Spectator.WBP_HUD_Spectator_C.OnRoundStateSet // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnShowProgressBar(float Duration, enum class EHWProgressBarType BarType); // Function WBP_HUD_Spectator.WBP_HUD_Spectator_C.OnShowProgressBar // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeammateLoadoutChanged(struct FString PlayerId, struct FString Primary, struct FString Secondary, int32_t PrimaryTier, int32_t SecondaryTier, int32_t ArmorTier, struct FName Consumable, struct FName Throwable, struct FName Placeable); // Function WBP_HUD_Spectator.WBP_HUD_Spectator_C.OnTeammateLoadoutChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeammateLoadoutDataChanged(int32_t CharIndex, struct FHWLoadoutData LoadoutData); // Function WBP_HUD_Spectator.WBP_HUD_Spectator_C.OnTeammateLoadoutDataChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeammateProfileChanged(struct FString PlayerId, struct FHWPlayerPublicProfile Profile); // Function WBP_HUD_Spectator.WBP_HUD_Spectator_C.OnTeammateProfileChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeamReadyStateChanged(struct TArray<struct FString> Ids); // Function WBP_HUD_Spectator.WBP_HUD_Spectator_C.OnTeamReadyStateChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeamScoreUpdated(struct FHWTeamScoreData Score); // Function WBP_HUD_Spectator.WBP_HUD_Spectator_C.OnTeamScoreUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void SetHudPromptText(struct FText Text, float DisplayDuration); // Function WBP_HUD_Spectator.WBP_HUD_Spectator_C.SetHudPromptText // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnCurrentObjectiveIndexUpdated(); // Function WBP_HUD_Spectator.WBP_HUD_Spectator_C.OnCurrentObjectiveIndexUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnGameplayEvent(enum class EHWGameplayEventType Event); // Function WBP_HUD_Spectator.WBP_HUD_Spectator_C.OnGameplayEvent // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnHostileTeamChanged(enum class EHWHostileTeam NewHostileTeam); // Function WBP_HUD_Spectator.WBP_HUD_Spectator_C.OnHostileTeamChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnInputMappingsUpdated(); // Function WBP_HUD_Spectator.WBP_HUD_Spectator_C.OnInputMappingsUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnItemUnlocked(bool WasSuccessful, struct FString Message); // Function WBP_HUD_Spectator.WBP_HUD_Spectator_C.OnItemUnlocked // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMyReadystateChanged(bool bNewValue); // Function WBP_HUD_Spectator.WBP_HUD_Spectator_C.OnMyReadystateChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnObjectiveCardUpdated(); // Function WBP_HUD_Spectator.WBP_HUD_Spectator_C.OnObjectiveCardUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnObjectiveTextUpdated(); // Function WBP_HUD_Spectator.WBP_HUD_Spectator_C.OnObjectiveTextUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerObjectveImageChanged(struct AHWPlayerState* InPlayerState, struct UTexture2D* Texture); // Function WBP_HUD_Spectator.WBP_HUD_Spectator_C.OnPlayerObjectveImageChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerReadyCountUpdated(int32_t NumReady, int32_t Total); // Function WBP_HUD_Spectator.WBP_HUD_Spectator_C.OnPlayerReadyCountUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerStateAdded(struct APlayerState* PlayerState); // Function WBP_HUD_Spectator.WBP_HUD_Spectator_C.OnPlayerStateAdded // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnRoundHeaderUpdated(); // Function WBP_HUD_Spectator.WBP_HUD_Spectator_C.OnRoundHeaderUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeamInvitationsUpdated(struct TArray<struct FHWTeamInvitation> Invitations); // Function WBP_HUD_Spectator.WBP_HUD_Spectator_C.OnTeamInvitationsUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeamMembersChanged(struct TArray<struct FHWTeamPlayer> MyTeamPlayers); // Function WBP_HUD_Spectator.WBP_HUD_Spectator_C.OnTeamMembersChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeamObjectiveStatusChanged(struct FText Text, int32_t Team); // Function WBP_HUD_Spectator.WBP_HUD_Spectator_C.OnTeamObjectiveStatusChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnTextChatActivated(); // Function WBP_HUD_Spectator.WBP_HUD_Spectator_C.OnTextChatActivated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnTextChatDeactivated(); // Function WBP_HUD_Spectator.WBP_HUD_Spectator_C.OnTextChatDeactivated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnToastMessageAdded(struct FHWToastMessageData Data); // Function WBP_HUD_Spectator.WBP_HUD_Spectator_C.OnToastMessageAdded // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnVoiceChatToggled(bool Active); // Function WBP_HUD_Spectator.WBP_HUD_Spectator_C.OnVoiceChatToggled // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_HUD_Spectator.WBP_HUD_Spectator_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__NextSpectateButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_HUD_Spectator.WBP_HUD_Spectator_C.BndEvt__NextSpectateButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__PrevSpectateButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function WBP_HUD_Spectator.WBP_HUD_Spectator_C.BndEvt__PrevSpectateButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void Update Spectate Target(struct FString Name, struct AHWCharacter* Character); // Function WBP_HUD_Spectator.WBP_HUD_Spectator_C.Update Spectate Target // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_HUD_Spectator.WBP_HUD_Spectator_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnLoadoutClosed(); // Function WBP_HUD_Spectator.WBP_HUD_Spectator_C.OnLoadoutClosed // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnKillsUpdated(int32_t Kills); // Function WBP_HUD_Spectator.WBP_HUD_Spectator_C.OnKillsUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateKillsAndAssists(); // Function WBP_HUD_Spectator.WBP_HUD_Spectator_C.UpdateKillsAndAssists // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnAssistsUpdated(int32_t Assists); // Function WBP_HUD_Spectator.WBP_HUD_Spectator_C.OnAssistsUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnEnterSpectateMode(bool DroneSelect, bool ShowDeathScreen); // Function WBP_HUD_Spectator.WBP_HUD_Spectator_C.OnEnterSpectateMode // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void MoveBackToSpectateScreen(); // Function WBP_HUD_Spectator.WBP_HUD_Spectator_C.MoveBackToSpectateScreen // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetInventoryPanelVisibility(enum class ESlateVisibility Visibility); // Function WBP_HUD_Spectator.WBP_HUD_Spectator_C.SetInventoryPanelVisibility // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_HUD_Spectator(int32_t EntryPoint); // Function WBP_HUD_Spectator.WBP_HUD_Spectator_C.ExecuteUbergraph_WBP_HUD_Spectator // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
	void SwitchingToSpectateFromDeath__DelegateSignature(); // Function WBP_HUD_Spectator.WBP_HUD_Spectator_C.SwitchingToSpectateFromDeath__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

