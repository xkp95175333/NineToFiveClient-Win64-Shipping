// WidgetBlueprintGeneratedClass WBP_DamageDirection.WBP_DamageDirection_C
// Size: 0x2f8 (Inherited: 0x260)
struct UWBP_DamageDirection_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* Suppression_Anim; // 0x268(0x08)
	struct UWidgetAnimation* Armor_Anim; // 0x270(0x08)
	struct UWidgetAnimation* Damage_Anim; // 0x278(0x08)
	struct UOverlay* ArmorDirection; // 0x280(0x08)
	struct UImage* ArmorFilter; // 0x288(0x08)
	struct UImage* Arrow; // 0x290(0x08)
	struct UImage* Arrow_2; // 0x298(0x08)
	struct UOverlay* DamageDirection; // 0x2a0(0x08)
	struct UImage* DamageFilter; // 0x2a8(0x08)
	struct UWidgetSwitcher* DamageType; // 0x2b0(0x08)
	struct UOverlay* SuppressionContainer; // 0x2b8(0x08)
	struct UImage* SuppressionDirection; // 0x2c0(0x08)
	struct UWidget* RotatedWidget; // 0x2c8(0x08)
	struct FVector Location; // 0x2d0(0x0c)
	char pad_2DC[0x4]; // 0x2dc(0x04)
	struct UMaterialInstanceDynamic* DamageIndicatorMaterial; // 0x2e0(0x08)
	struct TArray<float> DamageHighlightDirections; // 0x2e8(0x10)

	void SetMaterialRotation(float Angle); // Function WBP_DamageDirection.WBP_DamageDirection_C.SetMaterialRotation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetMaterialParameters(bool HealthDamage); // Function WBP_DamageDirection.WBP_DamageDirection_C.SetMaterialParameters // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetDamageDirection(struct TArray<float> NewParam); // Function WBP_DamageDirection.WBP_DamageDirection_C.SetDamageDirection // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetDirectionWidget(struct FVector From, struct UWidget* Widget, bool ShowDirection); // Function WBP_DamageDirection.WBP_DamageDirection_C.SetDirectionWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void CancelHudPromptText(); // Function WBP_DamageDirection.WBP_DamageDirection_C.CancelHudPromptText // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnArmorFeatureActivated(enum class EHWArmorFeatureType Feature, bool Active, float Duration); // Function WBP_DamageDirection.WBP_DamageDirection_C.OnArmorFeatureActivated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnArmorFeaturesChanged(); // Function WBP_DamageDirection.WBP_DamageDirection_C.OnArmorFeaturesChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnCameraFeedControllerChanged(struct UHWCameraFeedProviderComponent* Camera); // Function WBP_DamageDirection.WBP_DamageDirection_C.OnCameraFeedControllerChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnCameraFeedsUpdated(struct TArray<struct UHWCameraFeedProviderComponent*> Cameras); // Function WBP_DamageDirection.WBP_DamageDirection_C.OnCameraFeedsUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnCloseMap(); // Function WBP_DamageDirection.WBP_DamageDirection_C.OnCloseMap // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnCombatCompanionStatusChanged(bool Available); // Function WBP_DamageDirection.WBP_DamageDirection_C.OnCombatCompanionStatusChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnDroneJammed(); // Function WBP_DamageDirection.WBP_DamageDirection_C.OnDroneJammed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnDronePossessed(); // Function WBP_DamageDirection.WBP_DamageDirection_C.OnDronePossessed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnDroneUnjammed(); // Function WBP_DamageDirection.WBP_DamageDirection_C.OnDroneUnjammed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnEnterSpectateMode(bool DroneSelect, bool ShowDeathScreen); // Function WBP_DamageDirection.WBP_DamageDirection_C.OnEnterSpectateMode // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnExitSpectateMode(); // Function WBP_DamageDirection.WBP_DamageDirection_C.OnExitSpectateMode // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnHideProgressBar(); // Function WBP_DamageDirection.WBP_DamageDirection_C.OnHideProgressBar // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnHitScored(struct FHWPlayerHitScoredParams Params); // Function WBP_DamageDirection.WBP_DamageDirection_C.OnHitScored // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnInteractionItemEnterView(struct UHWInteractionComponent* Item); // Function WBP_DamageDirection.WBP_DamageDirection_C.OnInteractionItemEnterView // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnInteractionItemExitView(struct UHWInteractionComponent* Item); // Function WBP_DamageDirection.WBP_DamageDirection_C.OnInteractionItemExitView // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMetaMessageReceived(struct FHWMetaMessageData Message, float ShowDuration); // Function WBP_DamageDirection.WBP_DamageDirection_C.OnMetaMessageReceived // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnNotificationTextUpdated(struct FText NewText, struct FLinearColor UpperTextColor, bool UseAnimationUpper, struct FText NewNotificationTextLower, struct FLinearColor LowerTextColor, bool UseAnimationLower, float Duration); // Function WBP_DamageDirection.WBP_DamageDirection_C.OnNotificationTextUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnNotifyDeathDroneDestroyed(struct FString KillerId, struct FString VictimId, bool WasKilledByDrone, struct FName KillerItemId, enum class EHWDamageType DamageType, bool WasHeadShot, enum class EHWWeaponType WeaponType); // Function WBP_DamageDirection.WBP_DamageDirection_C.OnNotifyDeathDroneDestroyed // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnObjectiveChanged(struct FText NewObjective, bool UseAnimation, bool PlaySound); // Function WBP_DamageDirection.WBP_DamageDirection_C.OnObjectiveChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnObjectiveDataChanged(struct FHWRoundObjectivesData ObjectiveData); // Function WBP_DamageDirection.WBP_DamageDirection_C.OnObjectiveDataChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnObjectiveItemsUpdated(struct TArray<struct FNameAndCount> Items); // Function WBP_DamageDirection.WBP_DamageDirection_C.OnObjectiveItemsUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnOpenMap(); // Function WBP_DamageDirection.WBP_DamageDirection_C.OnOpenMap // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerDisconnected(struct FString SessionId); // Function WBP_DamageDirection.WBP_DamageDirection_C.OnPlayerDisconnected // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerDowned(struct FString KillerId, struct FString VictimId, bool WasHeadShot); // Function WBP_DamageDirection.WBP_DamageDirection_C.OnPlayerDowned // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerKilled(struct FString KillerId, struct FString VictimId, bool WasKilledByDrone, struct FName KillerItemId, enum class EHWDamageType DamageType, bool WasHeadShot, enum class EHWWeaponType WeaponType, struct TArray<struct FString> Assists, struct AActor* DamageDealer, struct FName BleedCausedByDamageDealer, enum class EHWDamageType BleedCausedByDamageType); // Function WBP_DamageDirection.WBP_DamageDirection_C.OnPlayerKilled // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerStateSetForCharacter(struct AHWCharacter* Character); // Function WBP_DamageDirection.WBP_DamageDirection_C.OnPlayerStateSetForCharacter // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPossess(struct AHWCharacter* PosessedCharacter); // Function WBP_DamageDirection.WBP_DamageDirection_C.OnPossess // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnReconnectingPlayersUpdated(struct TArray<struct FString> ReconnectingPlayers); // Function WBP_DamageDirection.WBP_DamageDirection_C.OnReconnectingPlayersUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnRoundCleanup(); // Function WBP_DamageDirection.WBP_DamageDirection_C.OnRoundCleanup // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnRoundIntroDataChanged(struct FHWRoundIntroData RoundIntroData); // Function WBP_DamageDirection.WBP_DamageDirection_C.OnRoundIntroDataChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnRoundStateSet(enum class EHWRoundState State); // Function WBP_DamageDirection.WBP_DamageDirection_C.OnRoundStateSet // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnShowProgressBar(float Duration, enum class EHWProgressBarType BarType); // Function WBP_DamageDirection.WBP_DamageDirection_C.OnShowProgressBar // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeammateLoadoutChanged(struct FString PlayerId, struct FString Primary, struct FString Secondary, int32_t PrimaryTier, int32_t SecondaryTier, int32_t ArmorTier, struct FName Consumable, struct FName Throwable, struct FName Placeable); // Function WBP_DamageDirection.WBP_DamageDirection_C.OnTeammateLoadoutChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeammateLoadoutDataChanged(int32_t CharIndex, struct FHWLoadoutData LoadoutData); // Function WBP_DamageDirection.WBP_DamageDirection_C.OnTeammateLoadoutDataChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeammateProfileChanged(struct FString PlayerId, struct FHWPlayerPublicProfile Profile); // Function WBP_DamageDirection.WBP_DamageDirection_C.OnTeammateProfileChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeamReadyStateChanged(struct TArray<struct FString> Ids); // Function WBP_DamageDirection.WBP_DamageDirection_C.OnTeamReadyStateChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeamScoreUpdated(struct FHWTeamScoreData Score); // Function WBP_DamageDirection.WBP_DamageDirection_C.OnTeamScoreUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void SetHudPromptText(struct FText Text, float DisplayDuration); // Function WBP_DamageDirection.WBP_DamageDirection_C.SetHudPromptText // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void PreConstruct(bool IsDesignTime); // Function WBP_DamageDirection.WBP_DamageDirection_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_DamageDirection.WBP_DamageDirection_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_DamageDirection.WBP_DamageDirection_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnHitReceived(struct FHWPlayerHitReceivedParams Params); // Function WBP_DamageDirection.WBP_DamageDirection_C.OnHitReceived // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnStatusEffect(enum class EHWPlayerStatusEffectType Effect, struct FVector Location, float Intensity); // Function WBP_DamageDirection.WBP_DamageDirection_C.OnStatusEffect // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_DamageDirection(int32_t EntryPoint); // Function WBP_DamageDirection.WBP_DamageDirection_C.ExecuteUbergraph_WBP_DamageDirection // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

