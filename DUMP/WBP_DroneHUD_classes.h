// WidgetBlueprintGeneratedClass WBP_DroneHUD.WBP_DroneHUD_C
// Size: 0x389 (Inherited: 0x268)
struct UWBP_DroneHUD_C : UHWWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWidgetAnimation* Reveal; // 0x270(0x08)
	struct UProgressBar* AbilityBarLeft; // 0x278(0x08)
	struct UProgressBar* AbilityBarRight; // 0x280(0x08)
	struct UImage* AbilityContainer; // 0x288(0x08)
	struct UImage* AbilityIcon; // 0x290(0x08)
	struct UWBP_RichTextLabel_C* AbilityLabel; // 0x298(0x08)
	struct UOverlay* AbilityLayer; // 0x2a0(0x08)
	struct UImage* BG; // 0x2a8(0x08)
	struct UOverlay* DataBoxes; // 0x2b0(0x08)
	struct UImage* Detail1; // 0x2b8(0x08)
	struct UImage* Detail2; // 0x2c0(0x08)
	struct UImage* Detail3; // 0x2c8(0x08)
	struct UImage* Detail4; // 0x2d0(0x08)
	struct UImage* Detail5; // 0x2d8(0x08)
	struct UWBP_RichTextLabel_C* DroneAbilityLabel; // 0x2e0(0x08)
	struct UVerticalBox* DroneAbilityStatus; // 0x2e8(0x08)
	struct UWBP_RichTextLabel_C* DroneAbilityStatusLabel; // 0x2f0(0x08)
	struct UWBP_KeyPrompt_C* DroneActiveKeyPrompt; // 0x2f8(0x08)
	struct UWBP_KeyPrompt_C* DroneBoostKeyPrompt; // 0x300(0x08)
	struct UBorder* HeightIndicatorLeft; // 0x308(0x08)
	struct UBorder* HeightIndicatorRight; // 0x310(0x08)
	struct UImage* MeterLeft; // 0x318(0x08)
	struct UImage* MeterRight; // 0x320(0x08)
	struct UWBP_RichTextLabel_C* Status; // 0x328(0x08)
	struct UWBP_RichTextLabel_C* Status_3; // 0x330(0x08)
	struct UImage* TextureFilter; // 0x338(0x08)
	struct UWBP_RichTextLabel_C* Timer; // 0x340(0x08)
	struct AHWDroneCharacter* Drone; // 0x348(0x08)
	struct FLinearColor CentralElementColor; // 0x350(0x10)
	struct AHWDroneAbility* ActiveAbility; // 0x360(0x08)
	float HeightIndicatorMaxAngle; // 0x368(0x04)
	float TargetRelAltitude; // 0x36c(0x04)
	float CurrentRelAltitude; // 0x370(0x04)
	struct FVector LastDroneDirection; // 0x374(0x0c)
	struct FVector2D LastRotationChange; // 0x380(0x08)
	bool IsSpectator; // 0x388(0x01)

	void SetDrone(struct AHWDroneCharacter* InDrone); // Function WBP_DroneHUD.WBP_DroneHUD_C.SetDrone // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateAimVisual(float Delta, struct UWidget* element, float coef); // Function WBP_DroneHUD.WBP_DroneHUD_C.UpdateAimVisual // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateAimVisuals(float Delta); // Function WBP_DroneHUD.WBP_DroneHUD_C.UpdateAimVisuals // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateAltitudeIndicator(float Delta); // Function WBP_DroneHUD.WBP_DroneHUD_C.UpdateAltitudeIndicator // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateState(); // Function WBP_DroneHUD.WBP_DroneHUD_C.UpdateState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetDroneAbility(struct AHWDroneAbility* Ability); // Function WBP_DroneHUD.WBP_DroneHUD_C.SetDroneAbility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetUIValues(struct FLinearColor Color, float BarValue, float Time, struct FText Status); // Function WBP_DroneHUD.WBP_DroneHUD_C.GetUIValues // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void CancelHudPromptText(); // Function WBP_DroneHUD.WBP_DroneHUD_C.CancelHudPromptText // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnArmorFeatureActivated(enum class EHWArmorFeatureType Feature, bool Active, float Duration); // Function WBP_DroneHUD.WBP_DroneHUD_C.OnArmorFeatureActivated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnArmorFeaturesChanged(); // Function WBP_DroneHUD.WBP_DroneHUD_C.OnArmorFeaturesChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnCameraFeedControllerChanged(struct UHWCameraFeedProviderComponent* Camera); // Function WBP_DroneHUD.WBP_DroneHUD_C.OnCameraFeedControllerChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnCameraFeedsUpdated(struct TArray<struct UHWCameraFeedProviderComponent*> Cameras); // Function WBP_DroneHUD.WBP_DroneHUD_C.OnCameraFeedsUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnCloseMap(); // Function WBP_DroneHUD.WBP_DroneHUD_C.OnCloseMap // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnCombatCompanionStatusChanged(bool Available); // Function WBP_DroneHUD.WBP_DroneHUD_C.OnCombatCompanionStatusChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnDroneJammed(); // Function WBP_DroneHUD.WBP_DroneHUD_C.OnDroneJammed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnDronePossessed(); // Function WBP_DroneHUD.WBP_DroneHUD_C.OnDronePossessed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnDroneUnjammed(); // Function WBP_DroneHUD.WBP_DroneHUD_C.OnDroneUnjammed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnEnterSpectateMode(bool DroneSelect, bool ShowDeathScreen); // Function WBP_DroneHUD.WBP_DroneHUD_C.OnEnterSpectateMode // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnExitSpectateMode(); // Function WBP_DroneHUD.WBP_DroneHUD_C.OnExitSpectateMode // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnHideProgressBar(); // Function WBP_DroneHUD.WBP_DroneHUD_C.OnHideProgressBar // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnHitReceived(struct FHWPlayerHitReceivedParams Params); // Function WBP_DroneHUD.WBP_DroneHUD_C.OnHitReceived // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnHitScored(struct FHWPlayerHitScoredParams Params); // Function WBP_DroneHUD.WBP_DroneHUD_C.OnHitScored // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnInteractionItemEnterView(struct UHWInteractionComponent* Item); // Function WBP_DroneHUD.WBP_DroneHUD_C.OnInteractionItemEnterView // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnInteractionItemExitView(struct UHWInteractionComponent* Item); // Function WBP_DroneHUD.WBP_DroneHUD_C.OnInteractionItemExitView // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMetaMessageReceived(struct FHWMetaMessageData Message, float ShowDuration); // Function WBP_DroneHUD.WBP_DroneHUD_C.OnMetaMessageReceived // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnNotificationTextUpdated(struct FText NewText, struct FLinearColor UpperTextColor, bool UseAnimationUpper, struct FText NewNotificationTextLower, struct FLinearColor LowerTextColor, bool UseAnimationLower, float Duration); // Function WBP_DroneHUD.WBP_DroneHUD_C.OnNotificationTextUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnNotifyDeathDroneDestroyed(struct FString KillerId, struct FString VictimId, bool WasKilledByDrone, struct FName KillerItemId, enum class EHWDamageType DamageType, bool WasHeadShot, enum class EHWWeaponType WeaponType); // Function WBP_DroneHUD.WBP_DroneHUD_C.OnNotifyDeathDroneDestroyed // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnObjectiveChanged(struct FText NewObjective, bool UseAnimation, bool PlaySound); // Function WBP_DroneHUD.WBP_DroneHUD_C.OnObjectiveChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnObjectiveDataChanged(struct FHWRoundObjectivesData ObjectiveData); // Function WBP_DroneHUD.WBP_DroneHUD_C.OnObjectiveDataChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnObjectiveItemsUpdated(struct TArray<struct FNameAndCount> Items); // Function WBP_DroneHUD.WBP_DroneHUD_C.OnObjectiveItemsUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnOpenMap(); // Function WBP_DroneHUD.WBP_DroneHUD_C.OnOpenMap // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerDisconnected(struct FString SessionId); // Function WBP_DroneHUD.WBP_DroneHUD_C.OnPlayerDisconnected // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerDowned(struct FString KillerId, struct FString VictimId, bool WasHeadShot); // Function WBP_DroneHUD.WBP_DroneHUD_C.OnPlayerDowned // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerKilled(struct FString KillerId, struct FString VictimId, bool WasKilledByDrone, struct FName KillerItemId, enum class EHWDamageType DamageType, bool WasHeadShot, enum class EHWWeaponType WeaponType, struct TArray<struct FString> Assists, struct AActor* DamageDealer, struct FName BleedCausedByDamageDealer, enum class EHWDamageType BleedCausedByDamageType); // Function WBP_DroneHUD.WBP_DroneHUD_C.OnPlayerKilled // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerStateSetForCharacter(struct AHWCharacter* Character); // Function WBP_DroneHUD.WBP_DroneHUD_C.OnPlayerStateSetForCharacter // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnReconnectingPlayersUpdated(struct TArray<struct FString> ReconnectingPlayers); // Function WBP_DroneHUD.WBP_DroneHUD_C.OnReconnectingPlayersUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnRoundCleanup(); // Function WBP_DroneHUD.WBP_DroneHUD_C.OnRoundCleanup // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnRoundIntroDataChanged(struct FHWRoundIntroData RoundIntroData); // Function WBP_DroneHUD.WBP_DroneHUD_C.OnRoundIntroDataChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnRoundStateSet(enum class EHWRoundState State); // Function WBP_DroneHUD.WBP_DroneHUD_C.OnRoundStateSet // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnShowProgressBar(float Duration, enum class EHWProgressBarType BarType); // Function WBP_DroneHUD.WBP_DroneHUD_C.OnShowProgressBar // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeammateLoadoutChanged(struct FString PlayerId, struct FString Primary, struct FString Secondary, int32_t PrimaryTier, int32_t SecondaryTier, int32_t ArmorTier, struct FName Consumable, struct FName Throwable, struct FName Placeable); // Function WBP_DroneHUD.WBP_DroneHUD_C.OnTeammateLoadoutChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeammateLoadoutDataChanged(int32_t CharIndex, struct FHWLoadoutData LoadoutData); // Function WBP_DroneHUD.WBP_DroneHUD_C.OnTeammateLoadoutDataChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeammateProfileChanged(struct FString PlayerId, struct FHWPlayerPublicProfile Profile); // Function WBP_DroneHUD.WBP_DroneHUD_C.OnTeammateProfileChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeamReadyStateChanged(struct TArray<struct FString> Ids); // Function WBP_DroneHUD.WBP_DroneHUD_C.OnTeamReadyStateChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeamScoreUpdated(struct FHWTeamScoreData Score); // Function WBP_DroneHUD.WBP_DroneHUD_C.OnTeamScoreUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void SetHudPromptText(struct FText Text, float DisplayDuration); // Function WBP_DroneHUD.WBP_DroneHUD_C.SetHudPromptText // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void PreConstruct(bool IsDesignTime); // Function WBP_DroneHUD.WBP_DroneHUD_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_DroneHUD.WBP_DroneHUD_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPossess(struct AHWCharacter* PosessedCharacter); // Function WBP_DroneHUD.WBP_DroneHUD_C.OnPossess // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void SetActionsForKeyPrompts(); // Function WBP_DroneHUD.WBP_DroneHUD_C.SetActionsForKeyPrompts // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_DroneHUD(int32_t EntryPoint); // Function WBP_DroneHUD.WBP_DroneHUD_C.ExecuteUbergraph_WBP_DroneHUD // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

