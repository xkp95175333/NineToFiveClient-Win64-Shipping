// WidgetBlueprintGeneratedClass WBP_MapMarker_Player.WBP_MapMarker_Player_C
// Size: 0x2fa (Inherited: 0x28d)
struct UWBP_MapMarker_Player_C : UWBP_MapMarker_C {
	char pad_28D[0x3]; // 0x28d(0x03)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	struct UWidgetSwitcher* CharTypeSelector; // 0x298(0x08)
	struct UImage* DownArrow; // 0x2a0(0x08)
	struct UWBP_Label_C* DroneLabel; // 0x2a8(0x08)
	struct UBorder* DroneLabelBorder; // 0x2b0(0x08)
	struct UProgressBar* HPBar; // 0x2b8(0x08)
	struct UBorder* HPBorder; // 0x2c0(0x08)
	struct UImage* IconDrone; // 0x2c8(0x08)
	struct UOverlay* IconNest; // 0x2d0(0x08)
	struct UImage* IconPlayer; // 0x2d8(0x08)
	struct UImage* IconReticle; // 0x2e0(0x08)
	struct UImage* UpArrow; // 0x2e8(0x08)
	struct UWBP_BriefingMap_Annotation_C* WBP_BriefingMap_Annotation; // 0x2f0(0x08)
	bool IsDrone; // 0x2f8(0x01)
	bool ShowHPBar; // 0x2f9(0x01)

	void UpdateHPBar(); // Function WBP_MapMarker_Player.WBP_MapMarker_Player_C.UpdateHPBar // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetDroneLabel(); // Function WBP_MapMarker_Player.WBP_MapMarker_Player_C.SetDroneLabel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetColor(struct FLinearColor NewColor); // Function WBP_MapMarker_Player.WBP_MapMarker_Player_C.SetColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateRotation(); // Function WBP_MapMarker_Player.WBP_MapMarker_Player_C.UpdateRotation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnArmorFeaturesChanged(); // Function WBP_MapMarker_Player.WBP_MapMarker_Player_C.OnArmorFeaturesChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnCameraFeedControllerChanged(struct UHWCameraFeedProviderComponent* Camera); // Function WBP_MapMarker_Player.WBP_MapMarker_Player_C.OnCameraFeedControllerChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnCameraFeedsUpdated(struct TArray<struct UHWCameraFeedProviderComponent*> Cameras); // Function WBP_MapMarker_Player.WBP_MapMarker_Player_C.OnCameraFeedsUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnCloseMap(); // Function WBP_MapMarker_Player.WBP_MapMarker_Player_C.OnCloseMap // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnCombatCompanionStatusChanged(bool Available); // Function WBP_MapMarker_Player.WBP_MapMarker_Player_C.OnCombatCompanionStatusChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnDroneJammed(); // Function WBP_MapMarker_Player.WBP_MapMarker_Player_C.OnDroneJammed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnDronePossessed(); // Function WBP_MapMarker_Player.WBP_MapMarker_Player_C.OnDronePossessed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnDroneUnjammed(); // Function WBP_MapMarker_Player.WBP_MapMarker_Player_C.OnDroneUnjammed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnEnterSpectateMode(bool DroneSelect, bool ShowDeathScreen); // Function WBP_MapMarker_Player.WBP_MapMarker_Player_C.OnEnterSpectateMode // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnExitSpectateMode(); // Function WBP_MapMarker_Player.WBP_MapMarker_Player_C.OnExitSpectateMode // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnHideProgressBar(); // Function WBP_MapMarker_Player.WBP_MapMarker_Player_C.OnHideProgressBar // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnHitReceived(struct FHWPlayerHitReceivedParams Params); // Function WBP_MapMarker_Player.WBP_MapMarker_Player_C.OnHitReceived // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnHitScored(struct FHWPlayerHitScoredParams Params); // Function WBP_MapMarker_Player.WBP_MapMarker_Player_C.OnHitScored // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnInteractionItemEnterView(struct UHWInteractionComponent* Item); // Function WBP_MapMarker_Player.WBP_MapMarker_Player_C.OnInteractionItemEnterView // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnInteractionItemExitView(struct UHWInteractionComponent* Item); // Function WBP_MapMarker_Player.WBP_MapMarker_Player_C.OnInteractionItemExitView // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMetaMessageReceived(struct FHWMetaMessageData Message, float ShowDuration); // Function WBP_MapMarker_Player.WBP_MapMarker_Player_C.OnMetaMessageReceived // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnNotificationTextUpdated(struct FText NewText, struct FLinearColor UpperTextColor, bool UseAnimationUpper, struct FText NewNotificationTextLower, struct FLinearColor LowerTextColor, bool UseAnimationLower, float Duration); // Function WBP_MapMarker_Player.WBP_MapMarker_Player_C.OnNotificationTextUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnNotifyDeathDroneDestroyed(struct FString KillerId, struct FString VictimId, bool WasKilledByDrone, struct FName KillerItemId, enum class EHWDamageType DamageType, bool WasHeadShot, enum class EHWWeaponType WeaponType); // Function WBP_MapMarker_Player.WBP_MapMarker_Player_C.OnNotifyDeathDroneDestroyed // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnObjectiveChanged(struct FText NewObjective, bool UseAnimation, bool PlaySound); // Function WBP_MapMarker_Player.WBP_MapMarker_Player_C.OnObjectiveChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnObjectiveDataChanged(struct FHWRoundObjectivesData ObjectiveData); // Function WBP_MapMarker_Player.WBP_MapMarker_Player_C.OnObjectiveDataChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnObjectiveItemsUpdated(struct TArray<struct FNameAndCount> Items); // Function WBP_MapMarker_Player.WBP_MapMarker_Player_C.OnObjectiveItemsUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnOpenMap(); // Function WBP_MapMarker_Player.WBP_MapMarker_Player_C.OnOpenMap // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerDisconnected(struct FString SessionId); // Function WBP_MapMarker_Player.WBP_MapMarker_Player_C.OnPlayerDisconnected // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerDowned(struct FString KillerId, struct FString VictimId, bool WasHeadShot); // Function WBP_MapMarker_Player.WBP_MapMarker_Player_C.OnPlayerDowned // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerKilled(struct FString KillerId, struct FString VictimId, bool WasKilledByDrone, struct FName KillerItemId, enum class EHWDamageType DamageType, bool WasHeadShot, enum class EHWWeaponType WeaponType, struct TArray<struct FString> Assists, struct AActor* DamageDealer, struct FName BleedCausedByDamageDealer, enum class EHWDamageType BleedCausedByDamageType); // Function WBP_MapMarker_Player.WBP_MapMarker_Player_C.OnPlayerKilled // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerStateSetForCharacter(struct AHWCharacter* Character); // Function WBP_MapMarker_Player.WBP_MapMarker_Player_C.OnPlayerStateSetForCharacter // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPossess(struct AHWCharacter* PosessedCharacter); // Function WBP_MapMarker_Player.WBP_MapMarker_Player_C.OnPossess // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnReconnectingPlayersUpdated(struct TArray<struct FString> ReconnectingPlayers); // Function WBP_MapMarker_Player.WBP_MapMarker_Player_C.OnReconnectingPlayersUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnRoundCleanup(); // Function WBP_MapMarker_Player.WBP_MapMarker_Player_C.OnRoundCleanup // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnRoundIntroDataChanged(struct FHWRoundIntroData RoundIntroData); // Function WBP_MapMarker_Player.WBP_MapMarker_Player_C.OnRoundIntroDataChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnRoundStateSet(enum class EHWRoundState State); // Function WBP_MapMarker_Player.WBP_MapMarker_Player_C.OnRoundStateSet // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnShowProgressBar(float Duration, enum class EHWProgressBarType BarType); // Function WBP_MapMarker_Player.WBP_MapMarker_Player_C.OnShowProgressBar // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeammateLoadoutChanged(struct FString PlayerId, struct FString Primary, struct FString Secondary, int32_t PrimaryTier, int32_t SecondaryTier, int32_t ArmorTier, struct FName Consumable, struct FName Throwable, struct FName Placeable); // Function WBP_MapMarker_Player.WBP_MapMarker_Player_C.OnTeammateLoadoutChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeammateLoadoutDataChanged(int32_t CharIndex, struct FHWLoadoutData LoadoutData); // Function WBP_MapMarker_Player.WBP_MapMarker_Player_C.OnTeammateLoadoutDataChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeammateProfileChanged(struct FString PlayerId, struct FHWPlayerPublicProfile Profile); // Function WBP_MapMarker_Player.WBP_MapMarker_Player_C.OnTeammateProfileChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeamReadyStateChanged(struct TArray<struct FString> Ids); // Function WBP_MapMarker_Player.WBP_MapMarker_Player_C.OnTeamReadyStateChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeamScoreUpdated(struct FHWTeamScoreData Score); // Function WBP_MapMarker_Player.WBP_MapMarker_Player_C.OnTeamScoreUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void SetHudPromptText(struct FText Text, float DisplayDuration); // Function WBP_MapMarker_Player.WBP_MapMarker_Player_C.SetHudPromptText // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_MapMarker_Player.WBP_MapMarker_Player_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_MapMarker_Player.WBP_MapMarker_Player_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void SetFollowActor(struct AActor* Actor); // Function WBP_MapMarker_Player.WBP_MapMarker_Player_C.SetFollowActor // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PlayerActorDestroyed(struct AActor* DestroyedActor); // Function WBP_MapMarker_Player.WBP_MapMarker_Player_C.PlayerActorDestroyed // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnArmorFeatureActivated(enum class EHWArmorFeatureType Feature, bool Active, float Duration); // Function WBP_MapMarker_Player.WBP_MapMarker_Player_C.OnArmorFeatureActivated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void CancelHudPromptText(); // Function WBP_MapMarker_Player.WBP_MapMarker_Player_C.CancelHudPromptText // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ShowAsStartingPosition(); // Function WBP_MapMarker_Player.WBP_MapMarker_Player_C.ShowAsStartingPosition // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_MapMarker_Player(int32_t EntryPoint); // Function WBP_MapMarker_Player.WBP_MapMarker_Player_C.ExecuteUbergraph_WBP_MapMarker_Player // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

