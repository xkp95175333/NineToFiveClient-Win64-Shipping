// BlueprintGeneratedClass BP_Flashbang.BP_Flashbang_C
// Size: 0x3a0 (Inherited: 0x380)
struct ABP_Flashbang_C : ABP_ExplosiveThrowable_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x380(0x08)
	float EffectDuration; // 0x388(0x04)
	float LineOfSightScanRadius; // 0x38c(0x04)
	float ObstacleScanRadius; // 0x390(0x04)
	float DetectionDuration; // 0x394(0x04)
	float MinEffectDistance; // 0x398(0x04)
	float FlashSuppressMult; // 0x39c(0x04)

	void GetCharacters(float SphereRadius, struct TArray<struct AActor*> ActorsToIgnore, struct TArray<struct AActor*> Actors); // Function BP_Flashbang.BP_Flashbang_C.GetCharacters // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void TeamAndHealthCheck(struct AActor* Victim, struct AHWPlayerCharacter* HWPlayerChar, bool Success); // Function BP_Flashbang.BP_Flashbang_C.TeamAndHealthCheck // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Apply Detection(struct AActor* Victim); // Function BP_Flashbang.BP_Flashbang_C.Apply Detection // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ScanForCharacters(); // Function BP_Flashbang.BP_Flashbang_C.ScanForCharacters // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetDamageOrigin(struct FVector Origin); // Function BP_Flashbang.BP_Flashbang_C.GetDamageOrigin // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void FlashbangEffectForCharacters(struct TArray<struct AActor*> Characters); // Function BP_Flashbang.BP_Flashbang_C.FlashbangEffectForCharacters // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void CancelHudPromptText(); // Function BP_Flashbang.BP_Flashbang_C.CancelHudPromptText // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnArmorFeatureActivated(enum class EHWArmorFeatureType Feature, bool Active, float Duration); // Function BP_Flashbang.BP_Flashbang_C.OnArmorFeatureActivated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnArmorFeaturesChanged(); // Function BP_Flashbang.BP_Flashbang_C.OnArmorFeaturesChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnCameraFeedControllerChanged(struct UHWCameraFeedProviderComponent* Camera); // Function BP_Flashbang.BP_Flashbang_C.OnCameraFeedControllerChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnCameraFeedsUpdated(struct TArray<struct UHWCameraFeedProviderComponent*> Cameras); // Function BP_Flashbang.BP_Flashbang_C.OnCameraFeedsUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnCloseMap(); // Function BP_Flashbang.BP_Flashbang_C.OnCloseMap // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnCombatCompanionStatusChanged(bool Available); // Function BP_Flashbang.BP_Flashbang_C.OnCombatCompanionStatusChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnDroneJammed(); // Function BP_Flashbang.BP_Flashbang_C.OnDroneJammed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnDronePossessed(); // Function BP_Flashbang.BP_Flashbang_C.OnDronePossessed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnDroneUnjammed(); // Function BP_Flashbang.BP_Flashbang_C.OnDroneUnjammed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnEnterSpectateMode(bool DroneSelect, bool ShowDeathScreen); // Function BP_Flashbang.BP_Flashbang_C.OnEnterSpectateMode // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnExitSpectateMode(); // Function BP_Flashbang.BP_Flashbang_C.OnExitSpectateMode // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnHideProgressBar(); // Function BP_Flashbang.BP_Flashbang_C.OnHideProgressBar // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnHitReceived(struct FHWPlayerHitReceivedParams Params); // Function BP_Flashbang.BP_Flashbang_C.OnHitReceived // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnHitScored(struct FHWPlayerHitScoredParams Params); // Function BP_Flashbang.BP_Flashbang_C.OnHitScored // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnInteractionItemEnterView(struct UHWInteractionComponent* Item); // Function BP_Flashbang.BP_Flashbang_C.OnInteractionItemEnterView // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnInteractionItemExitView(struct UHWInteractionComponent* Item); // Function BP_Flashbang.BP_Flashbang_C.OnInteractionItemExitView // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMetaMessageReceived(struct FHWMetaMessageData Message, float ShowDuration); // Function BP_Flashbang.BP_Flashbang_C.OnMetaMessageReceived // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnNotificationTextUpdated(struct FText NewText, struct FLinearColor UpperTextColor, bool UseAnimationUpper, struct FText NewNotificationTextLower, struct FLinearColor LowerTextColor, bool UseAnimationLower, float Duration); // Function BP_Flashbang.BP_Flashbang_C.OnNotificationTextUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnNotifyDeathDroneDestroyed(struct FString KillerId, struct FString VictimId, bool WasKilledByDrone, struct FName KillerItemId, enum class EHWDamageType DamageType, bool WasHeadShot, enum class EHWWeaponType WeaponType); // Function BP_Flashbang.BP_Flashbang_C.OnNotifyDeathDroneDestroyed // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnObjectiveChanged(struct FText NewObjective, bool UseAnimation, bool PlaySound); // Function BP_Flashbang.BP_Flashbang_C.OnObjectiveChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnObjectiveDataChanged(struct FHWRoundObjectivesData ObjectiveData); // Function BP_Flashbang.BP_Flashbang_C.OnObjectiveDataChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnObjectiveItemsUpdated(struct TArray<struct FNameAndCount> Items); // Function BP_Flashbang.BP_Flashbang_C.OnObjectiveItemsUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnOpenMap(); // Function BP_Flashbang.BP_Flashbang_C.OnOpenMap // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerDisconnected(struct FString SessionId); // Function BP_Flashbang.BP_Flashbang_C.OnPlayerDisconnected // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerDowned(struct FString KillerId, struct FString VictimId, bool WasHeadShot); // Function BP_Flashbang.BP_Flashbang_C.OnPlayerDowned // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerKilled(struct FString KillerId, struct FString VictimId, bool WasKilledByDrone, struct FName KillerItemId, enum class EHWDamageType DamageType, bool WasHeadShot, enum class EHWWeaponType WeaponType, struct TArray<struct FString> Assists, struct AActor* DamageDealer, struct FName BleedCausedByDamageDealer, enum class EHWDamageType BleedCausedByDamageType); // Function BP_Flashbang.BP_Flashbang_C.OnPlayerKilled // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerStateSetForCharacter(struct AHWCharacter* Character); // Function BP_Flashbang.BP_Flashbang_C.OnPlayerStateSetForCharacter // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPossess(struct AHWCharacter* PosessedCharacter); // Function BP_Flashbang.BP_Flashbang_C.OnPossess // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnReconnectingPlayersUpdated(struct TArray<struct FString> ReconnectingPlayers); // Function BP_Flashbang.BP_Flashbang_C.OnReconnectingPlayersUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnRoundCleanup(); // Function BP_Flashbang.BP_Flashbang_C.OnRoundCleanup // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnRoundIntroDataChanged(struct FHWRoundIntroData RoundIntroData); // Function BP_Flashbang.BP_Flashbang_C.OnRoundIntroDataChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnRoundStateSet(enum class EHWRoundState State); // Function BP_Flashbang.BP_Flashbang_C.OnRoundStateSet // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnShowProgressBar(float Duration, enum class EHWProgressBarType BarType); // Function BP_Flashbang.BP_Flashbang_C.OnShowProgressBar // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeammateLoadoutChanged(struct FString PlayerId, struct FString Primary, struct FString Secondary, int32_t PrimaryTier, int32_t SecondaryTier, int32_t ArmorTier, struct FName Consumable, struct FName Throwable, struct FName Placeable); // Function BP_Flashbang.BP_Flashbang_C.OnTeammateLoadoutChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeammateLoadoutDataChanged(int32_t CharIndex, struct FHWLoadoutData LoadoutData); // Function BP_Flashbang.BP_Flashbang_C.OnTeammateLoadoutDataChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeammateProfileChanged(struct FString PlayerId, struct FHWPlayerPublicProfile Profile); // Function BP_Flashbang.BP_Flashbang_C.OnTeammateProfileChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeamReadyStateChanged(struct TArray<struct FString> Ids); // Function BP_Flashbang.BP_Flashbang_C.OnTeamReadyStateChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeamScoreUpdated(struct FHWTeamScoreData Score); // Function BP_Flashbang.BP_Flashbang_C.OnTeamScoreUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void SetHudPromptText(struct FText Text, float DisplayDuration); // Function BP_Flashbang.BP_Flashbang_C.SetHudPromptText // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void HandleCharacters(struct TArray<struct AActor*> Characters); // Function BP_Flashbang.BP_Flashbang_C.HandleCharacters // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_BP_Flashbang(int32_t EntryPoint); // Function BP_Flashbang.BP_Flashbang_C.ExecuteUbergraph_BP_Flashbang // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

