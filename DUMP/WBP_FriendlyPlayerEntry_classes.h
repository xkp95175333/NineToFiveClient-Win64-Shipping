// WidgetBlueprintGeneratedClass WBP_FriendlyPlayerEntry.WBP_FriendlyPlayerEntry_C
// Size: 0x330 (Inherited: 0x268)
struct UWBP_FriendlyPlayerEntry_C : UHWWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWidgetAnimation* Revive_Anim; // 0x270(0x08)
	struct UWidgetAnimation* Ammo_Reveal; // 0x278(0x08)
	struct UWidgetAnimation* Revive_Reveal; // 0x280(0x08)
	struct UImage* AmmoIcon; // 0x288(0x08)
	struct UWidgetSwitcher* HealthIcon; // 0x290(0x08)
	struct UWBP_RichTextLabel_C* Kills; // 0x298(0x08)
	struct UImage* LowHealthIcon; // 0x2a0(0x08)
	struct UScaleBox* Platform; // 0x2a8(0x08)
	struct UImage* PlayerColor; // 0x2b0(0x08)
	struct UWBP_RichTextLabel_C* PlayerName; // 0x2b8(0x08)
	struct UProgressBar* ReviveBar; // 0x2c0(0x08)
	struct UImage* ReviveIcon; // 0x2c8(0x08)
	struct USizeBox* ReviveStatus; // 0x2d0(0x08)
	struct UWBP_PlayerVoiceIndicator_C* VoiceIndicator; // 0x2d8(0x08)
	struct UWBP_HUD_PanelBox_Horizontal_C* WBP_HUD_PanelBox_Horizontal; // 0x2e0(0x08)
	struct UWBP_HUD_PanelBox_Horizontal_C* WBP_HUD_PanelBox_Horizontal_2; // 0x2e8(0x08)
	struct UWBP_PlayerPlatformIndicator_C* WBP_PlayerPlatformIndicator; // 0x2f0(0x08)
	struct AHWPlayerState* PlayerState; // 0x2f8(0x08)
	int32_t KillCount; // 0x300(0x04)
	struct FLinearColor KilledColor; // 0x304(0x10)
	float LowAmmoTreshold; // 0x314(0x04)
	float LowHealthTreshold; // 0x318(0x04)
	char pad_31C[0x4]; // 0x31c(0x04)
	struct AHWPlayerCharacter* PlayerCharacter; // 0x320(0x08)
	struct FTimerHandle NewVar_1; // 0x328(0x08)

	void GetCharacterFromPlayerState(struct APlayerState* PlayerState, struct AHWPlayerCharacter* Character); // Function WBP_FriendlyPlayerEntry.WBP_FriendlyPlayerEntry_C.GetCharacterFromPlayerState // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Update Low Health Icon(); // Function WBP_FriendlyPlayerEntry.WBP_FriendlyPlayerEntry_C.Update Low Health Icon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetIconVisibility(struct UWidget* TargetIcon, bool Visible, bool Collapsed); // Function WBP_FriendlyPlayerEntry.WBP_FriendlyPlayerEntry_C.SetIconVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetCharacter(struct AHWPlayerCharacter* PrimaryPawn); // Function WBP_FriendlyPlayerEntry.WBP_FriendlyPlayerEntry_C.GetCharacter // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void UpdateLowAmmoIcon(); // Function WBP_FriendlyPlayerEntry.WBP_FriendlyPlayerEntry_C.UpdateLowAmmoIcon // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateKillCount(struct FString Killer, struct FString Victim); // Function WBP_FriendlyPlayerEntry.WBP_FriendlyPlayerEntry_C.UpdateKillCount // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetObjectiveImage(struct UTexture2D* Texture); // Function WBP_FriendlyPlayerEntry.WBP_FriendlyPlayerEntry_C.SetObjectiveImage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetPlayer(struct AHWPlayerState* Player); // Function WBP_FriendlyPlayerEntry.WBP_FriendlyPlayerEntry_C.SetPlayer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void CancelHudPromptText(); // Function WBP_FriendlyPlayerEntry.WBP_FriendlyPlayerEntry_C.CancelHudPromptText // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnArmorFeatureActivated(enum class EHWArmorFeatureType Feature, bool Active, float Duration); // Function WBP_FriendlyPlayerEntry.WBP_FriendlyPlayerEntry_C.OnArmorFeatureActivated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnArmorFeaturesChanged(); // Function WBP_FriendlyPlayerEntry.WBP_FriendlyPlayerEntry_C.OnArmorFeaturesChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnCameraFeedControllerChanged(struct UHWCameraFeedProviderComponent* Camera); // Function WBP_FriendlyPlayerEntry.WBP_FriendlyPlayerEntry_C.OnCameraFeedControllerChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnCameraFeedsUpdated(struct TArray<struct UHWCameraFeedProviderComponent*> Cameras); // Function WBP_FriendlyPlayerEntry.WBP_FriendlyPlayerEntry_C.OnCameraFeedsUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnCloseMap(); // Function WBP_FriendlyPlayerEntry.WBP_FriendlyPlayerEntry_C.OnCloseMap // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnCombatCompanionStatusChanged(bool Available); // Function WBP_FriendlyPlayerEntry.WBP_FriendlyPlayerEntry_C.OnCombatCompanionStatusChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnDroneJammed(); // Function WBP_FriendlyPlayerEntry.WBP_FriendlyPlayerEntry_C.OnDroneJammed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnDronePossessed(); // Function WBP_FriendlyPlayerEntry.WBP_FriendlyPlayerEntry_C.OnDronePossessed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnDroneUnjammed(); // Function WBP_FriendlyPlayerEntry.WBP_FriendlyPlayerEntry_C.OnDroneUnjammed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnEnterSpectateMode(bool DroneSelect, bool ShowDeathScreen); // Function WBP_FriendlyPlayerEntry.WBP_FriendlyPlayerEntry_C.OnEnterSpectateMode // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnExitSpectateMode(); // Function WBP_FriendlyPlayerEntry.WBP_FriendlyPlayerEntry_C.OnExitSpectateMode // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnHideProgressBar(); // Function WBP_FriendlyPlayerEntry.WBP_FriendlyPlayerEntry_C.OnHideProgressBar // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnHitReceived(struct FHWPlayerHitReceivedParams Params); // Function WBP_FriendlyPlayerEntry.WBP_FriendlyPlayerEntry_C.OnHitReceived // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnHitScored(struct FHWPlayerHitScoredParams Params); // Function WBP_FriendlyPlayerEntry.WBP_FriendlyPlayerEntry_C.OnHitScored // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnInteractionItemEnterView(struct UHWInteractionComponent* Item); // Function WBP_FriendlyPlayerEntry.WBP_FriendlyPlayerEntry_C.OnInteractionItemEnterView // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnInteractionItemExitView(struct UHWInteractionComponent* Item); // Function WBP_FriendlyPlayerEntry.WBP_FriendlyPlayerEntry_C.OnInteractionItemExitView // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMetaMessageReceived(struct FHWMetaMessageData Message, float ShowDuration); // Function WBP_FriendlyPlayerEntry.WBP_FriendlyPlayerEntry_C.OnMetaMessageReceived // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnNotificationTextUpdated(struct FText NewText, struct FLinearColor UpperTextColor, bool UseAnimationUpper, struct FText NewNotificationTextLower, struct FLinearColor LowerTextColor, bool UseAnimationLower, float Duration); // Function WBP_FriendlyPlayerEntry.WBP_FriendlyPlayerEntry_C.OnNotificationTextUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnNotifyDeathDroneDestroyed(struct FString KillerId, struct FString VictimId, bool WasKilledByDrone, struct FName KillerItemId, enum class EHWDamageType DamageType, bool WasHeadShot, enum class EHWWeaponType WeaponType); // Function WBP_FriendlyPlayerEntry.WBP_FriendlyPlayerEntry_C.OnNotifyDeathDroneDestroyed // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnObjectiveChanged(struct FText NewObjective, bool UseAnimation, bool PlaySound); // Function WBP_FriendlyPlayerEntry.WBP_FriendlyPlayerEntry_C.OnObjectiveChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnObjectiveDataChanged(struct FHWRoundObjectivesData ObjectiveData); // Function WBP_FriendlyPlayerEntry.WBP_FriendlyPlayerEntry_C.OnObjectiveDataChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnObjectiveItemsUpdated(struct TArray<struct FNameAndCount> Items); // Function WBP_FriendlyPlayerEntry.WBP_FriendlyPlayerEntry_C.OnObjectiveItemsUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnOpenMap(); // Function WBP_FriendlyPlayerEntry.WBP_FriendlyPlayerEntry_C.OnOpenMap // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerDowned(struct FString KillerId, struct FString VictimId, bool WasHeadShot); // Function WBP_FriendlyPlayerEntry.WBP_FriendlyPlayerEntry_C.OnPlayerDowned // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerStateSetForCharacter(struct AHWCharacter* Character); // Function WBP_FriendlyPlayerEntry.WBP_FriendlyPlayerEntry_C.OnPlayerStateSetForCharacter // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPossess(struct AHWCharacter* PosessedCharacter); // Function WBP_FriendlyPlayerEntry.WBP_FriendlyPlayerEntry_C.OnPossess // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnReconnectingPlayersUpdated(struct TArray<struct FString> ReconnectingPlayers); // Function WBP_FriendlyPlayerEntry.WBP_FriendlyPlayerEntry_C.OnReconnectingPlayersUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnRoundCleanup(); // Function WBP_FriendlyPlayerEntry.WBP_FriendlyPlayerEntry_C.OnRoundCleanup // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnRoundIntroDataChanged(struct FHWRoundIntroData RoundIntroData); // Function WBP_FriendlyPlayerEntry.WBP_FriendlyPlayerEntry_C.OnRoundIntroDataChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnRoundStateSet(enum class EHWRoundState State); // Function WBP_FriendlyPlayerEntry.WBP_FriendlyPlayerEntry_C.OnRoundStateSet // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnShowProgressBar(float Duration, enum class EHWProgressBarType BarType); // Function WBP_FriendlyPlayerEntry.WBP_FriendlyPlayerEntry_C.OnShowProgressBar // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeammateLoadoutChanged(struct FString PlayerId, struct FString Primary, struct FString Secondary, int32_t PrimaryTier, int32_t SecondaryTier, int32_t ArmorTier, struct FName Consumable, struct FName Throwable, struct FName Placeable); // Function WBP_FriendlyPlayerEntry.WBP_FriendlyPlayerEntry_C.OnTeammateLoadoutChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeammateLoadoutDataChanged(int32_t CharIndex, struct FHWLoadoutData LoadoutData); // Function WBP_FriendlyPlayerEntry.WBP_FriendlyPlayerEntry_C.OnTeammateLoadoutDataChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeammateProfileChanged(struct FString PlayerId, struct FHWPlayerPublicProfile Profile); // Function WBP_FriendlyPlayerEntry.WBP_FriendlyPlayerEntry_C.OnTeammateProfileChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeamReadyStateChanged(struct TArray<struct FString> Ids); // Function WBP_FriendlyPlayerEntry.WBP_FriendlyPlayerEntry_C.OnTeamReadyStateChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeamScoreUpdated(struct FHWTeamScoreData Score); // Function WBP_FriendlyPlayerEntry.WBP_FriendlyPlayerEntry_C.OnTeamScoreUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void SetHudPromptText(struct FText Text, float DisplayDuration); // Function WBP_FriendlyPlayerEntry.WBP_FriendlyPlayerEntry_C.SetHudPromptText // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_FriendlyPlayerEntry.WBP_FriendlyPlayerEntry_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerKilled(struct FString KillerId, struct FString VictimId, bool WasKilledByDrone, struct FName KillerItemId, enum class EHWDamageType DamageType, bool WasHeadShot, enum class EHWWeaponType WeaponType, struct TArray<struct FString> Assists, struct AActor* DamageDealer, struct FName BleedCausedByDamageDealer, enum class EHWDamageType BleedCausedByDamageType); // Function WBP_FriendlyPlayerEntry.WBP_FriendlyPlayerEntry_C.OnPlayerKilled // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerDisconnected(struct FString SessionId); // Function WBP_FriendlyPlayerEntry.WBP_FriendlyPlayerEntry_C.OnPlayerDisconnected // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void HideReviveStatus(); // Function WBP_FriendlyPlayerEntry.WBP_FriendlyPlayerEntry_C.HideReviveStatus // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_FriendlyPlayerEntry(int32_t EntryPoint); // Function WBP_FriendlyPlayerEntry.WBP_FriendlyPlayerEntry_C.ExecuteUbergraph_WBP_FriendlyPlayerEntry // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

