// WidgetBlueprintGeneratedClass WBP_HUD_Crosshair_Hitmarkers.WBP_HUD_Crosshair_Hitmarkers_C
// Size: 0x330 (Inherited: 0x260)
struct UWBP_HUD_Crosshair_Hitmarkers_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* Head_Anim; // 0x268(0x08)
	struct UWidgetAnimation* Kill_Anim; // 0x270(0x08)
	struct UWidgetAnimation* ArmorCrack_Anim; // 0x278(0x08)
	struct UWidgetAnimation* Hit_Anim; // 0x280(0x08)
	struct UImage* 1; // 0x288(0x08)
	struct UImage* 1_2; // 0x290(0x08)
	struct UImage* 1_3; // 0x298(0x08)
	struct UImage* 1_4; // 0x2a0(0x08)
	struct UImage* 2; // 0x2a8(0x08)
	struct UImage* 2_2; // 0x2b0(0x08)
	struct UImage* 2_3; // 0x2b8(0x08)
	struct UImage* 2_4; // 0x2c0(0x08)
	struct UImage* 3; // 0x2c8(0x08)
	struct UImage* 3_2; // 0x2d0(0x08)
	struct UImage* 3_3; // 0x2d8(0x08)
	struct UImage* 3_4; // 0x2e0(0x08)
	struct UImage* 4; // 0x2e8(0x08)
	struct UImage* 4_2; // 0x2f0(0x08)
	struct UImage* 4_3; // 0x2f8(0x08)
	struct UImage* 4_4; // 0x300(0x08)
	struct UUniformGridPanel* ArmorCrack; // 0x308(0x08)
	struct UUniformGridPanel* DownKill; // 0x310(0x08)
	struct UUniformGridPanel* Head; // 0x318(0x08)
	struct UUniformGridPanel* Hit; // 0x320(0x08)
	struct UWidgetSwitcher* Switcher; // 0x328(0x08)

	void CancelHudPromptText(); // Function WBP_HUD_Crosshair_Hitmarkers.WBP_HUD_Crosshair_Hitmarkers_C.CancelHudPromptText // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnArmorFeatureActivated(enum class EHWArmorFeatureType Feature, bool Active, float Duration); // Function WBP_HUD_Crosshair_Hitmarkers.WBP_HUD_Crosshair_Hitmarkers_C.OnArmorFeatureActivated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnArmorFeaturesChanged(); // Function WBP_HUD_Crosshair_Hitmarkers.WBP_HUD_Crosshair_Hitmarkers_C.OnArmorFeaturesChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnCameraFeedControllerChanged(struct UHWCameraFeedProviderComponent* Camera); // Function WBP_HUD_Crosshair_Hitmarkers.WBP_HUD_Crosshair_Hitmarkers_C.OnCameraFeedControllerChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnCameraFeedsUpdated(struct TArray<struct UHWCameraFeedProviderComponent*> Cameras); // Function WBP_HUD_Crosshair_Hitmarkers.WBP_HUD_Crosshair_Hitmarkers_C.OnCameraFeedsUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnCloseMap(); // Function WBP_HUD_Crosshair_Hitmarkers.WBP_HUD_Crosshair_Hitmarkers_C.OnCloseMap // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnCombatCompanionStatusChanged(bool Available); // Function WBP_HUD_Crosshair_Hitmarkers.WBP_HUD_Crosshair_Hitmarkers_C.OnCombatCompanionStatusChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnDroneJammed(); // Function WBP_HUD_Crosshair_Hitmarkers.WBP_HUD_Crosshair_Hitmarkers_C.OnDroneJammed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnDronePossessed(); // Function WBP_HUD_Crosshair_Hitmarkers.WBP_HUD_Crosshair_Hitmarkers_C.OnDronePossessed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnDroneUnjammed(); // Function WBP_HUD_Crosshair_Hitmarkers.WBP_HUD_Crosshair_Hitmarkers_C.OnDroneUnjammed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnEnterSpectateMode(bool DroneSelect, bool ShowDeathScreen); // Function WBP_HUD_Crosshair_Hitmarkers.WBP_HUD_Crosshair_Hitmarkers_C.OnEnterSpectateMode // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnExitSpectateMode(); // Function WBP_HUD_Crosshair_Hitmarkers.WBP_HUD_Crosshair_Hitmarkers_C.OnExitSpectateMode // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnHideProgressBar(); // Function WBP_HUD_Crosshair_Hitmarkers.WBP_HUD_Crosshair_Hitmarkers_C.OnHideProgressBar // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnHitReceived(struct FHWPlayerHitReceivedParams Params); // Function WBP_HUD_Crosshair_Hitmarkers.WBP_HUD_Crosshair_Hitmarkers_C.OnHitReceived // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnInteractionItemEnterView(struct UHWInteractionComponent* Item); // Function WBP_HUD_Crosshair_Hitmarkers.WBP_HUD_Crosshair_Hitmarkers_C.OnInteractionItemEnterView // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnInteractionItemExitView(struct UHWInteractionComponent* Item); // Function WBP_HUD_Crosshair_Hitmarkers.WBP_HUD_Crosshair_Hitmarkers_C.OnInteractionItemExitView // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMetaMessageReceived(struct FHWMetaMessageData Message, float ShowDuration); // Function WBP_HUD_Crosshair_Hitmarkers.WBP_HUD_Crosshair_Hitmarkers_C.OnMetaMessageReceived // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnNotificationTextUpdated(struct FText NewText, struct FLinearColor UpperTextColor, bool UseAnimationUpper, struct FText NewNotificationTextLower, struct FLinearColor LowerTextColor, bool UseAnimationLower, float Duration); // Function WBP_HUD_Crosshair_Hitmarkers.WBP_HUD_Crosshair_Hitmarkers_C.OnNotificationTextUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnNotifyDeathDroneDestroyed(struct FString KillerId, struct FString VictimId, bool WasKilledByDrone, struct FName KillerItemId, enum class EHWDamageType DamageType, bool WasHeadShot, enum class EHWWeaponType WeaponType); // Function WBP_HUD_Crosshair_Hitmarkers.WBP_HUD_Crosshair_Hitmarkers_C.OnNotifyDeathDroneDestroyed // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnObjectiveChanged(struct FText NewObjective, bool UseAnimation, bool PlaySound); // Function WBP_HUD_Crosshair_Hitmarkers.WBP_HUD_Crosshair_Hitmarkers_C.OnObjectiveChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnObjectiveDataChanged(struct FHWRoundObjectivesData ObjectiveData); // Function WBP_HUD_Crosshair_Hitmarkers.WBP_HUD_Crosshair_Hitmarkers_C.OnObjectiveDataChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnObjectiveItemsUpdated(struct TArray<struct FNameAndCount> Items); // Function WBP_HUD_Crosshair_Hitmarkers.WBP_HUD_Crosshair_Hitmarkers_C.OnObjectiveItemsUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnOpenMap(); // Function WBP_HUD_Crosshair_Hitmarkers.WBP_HUD_Crosshair_Hitmarkers_C.OnOpenMap // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerDisconnected(struct FString SessionId); // Function WBP_HUD_Crosshair_Hitmarkers.WBP_HUD_Crosshair_Hitmarkers_C.OnPlayerDisconnected // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerDowned(struct FString KillerId, struct FString VictimId, bool WasHeadShot); // Function WBP_HUD_Crosshair_Hitmarkers.WBP_HUD_Crosshair_Hitmarkers_C.OnPlayerDowned // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerKilled(struct FString KillerId, struct FString VictimId, bool WasKilledByDrone, struct FName KillerItemId, enum class EHWDamageType DamageType, bool WasHeadShot, enum class EHWWeaponType WeaponType, struct TArray<struct FString> Assists, struct AActor* DamageDealer, struct FName BleedCausedByDamageDealer, enum class EHWDamageType BleedCausedByDamageType); // Function WBP_HUD_Crosshair_Hitmarkers.WBP_HUD_Crosshair_Hitmarkers_C.OnPlayerKilled // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerStateSetForCharacter(struct AHWCharacter* Character); // Function WBP_HUD_Crosshair_Hitmarkers.WBP_HUD_Crosshair_Hitmarkers_C.OnPlayerStateSetForCharacter // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPossess(struct AHWCharacter* PosessedCharacter); // Function WBP_HUD_Crosshair_Hitmarkers.WBP_HUD_Crosshair_Hitmarkers_C.OnPossess // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnReconnectingPlayersUpdated(struct TArray<struct FString> ReconnectingPlayers); // Function WBP_HUD_Crosshair_Hitmarkers.WBP_HUD_Crosshair_Hitmarkers_C.OnReconnectingPlayersUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnRoundCleanup(); // Function WBP_HUD_Crosshair_Hitmarkers.WBP_HUD_Crosshair_Hitmarkers_C.OnRoundCleanup // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnRoundIntroDataChanged(struct FHWRoundIntroData RoundIntroData); // Function WBP_HUD_Crosshair_Hitmarkers.WBP_HUD_Crosshair_Hitmarkers_C.OnRoundIntroDataChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnRoundStateSet(enum class EHWRoundState State); // Function WBP_HUD_Crosshair_Hitmarkers.WBP_HUD_Crosshair_Hitmarkers_C.OnRoundStateSet // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnShowProgressBar(float Duration, enum class EHWProgressBarType BarType); // Function WBP_HUD_Crosshair_Hitmarkers.WBP_HUD_Crosshair_Hitmarkers_C.OnShowProgressBar // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeammateLoadoutChanged(struct FString PlayerId, struct FString Primary, struct FString Secondary, int32_t PrimaryTier, int32_t SecondaryTier, int32_t ArmorTier, struct FName Consumable, struct FName Throwable, struct FName Placeable); // Function WBP_HUD_Crosshair_Hitmarkers.WBP_HUD_Crosshair_Hitmarkers_C.OnTeammateLoadoutChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeammateLoadoutDataChanged(int32_t CharIndex, struct FHWLoadoutData LoadoutData); // Function WBP_HUD_Crosshair_Hitmarkers.WBP_HUD_Crosshair_Hitmarkers_C.OnTeammateLoadoutDataChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeammateProfileChanged(struct FString PlayerId, struct FHWPlayerPublicProfile Profile); // Function WBP_HUD_Crosshair_Hitmarkers.WBP_HUD_Crosshair_Hitmarkers_C.OnTeammateProfileChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeamReadyStateChanged(struct TArray<struct FString> Ids); // Function WBP_HUD_Crosshair_Hitmarkers.WBP_HUD_Crosshair_Hitmarkers_C.OnTeamReadyStateChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeamScoreUpdated(struct FHWTeamScoreData Score); // Function WBP_HUD_Crosshair_Hitmarkers.WBP_HUD_Crosshair_Hitmarkers_C.OnTeamScoreUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void SetHudPromptText(struct FText Text, float DisplayDuration); // Function WBP_HUD_Crosshair_Hitmarkers.WBP_HUD_Crosshair_Hitmarkers_C.SetHudPromptText // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnHitScored(struct FHWPlayerHitScoredParams Params); // Function WBP_HUD_Crosshair_Hitmarkers.WBP_HUD_Crosshair_Hitmarkers_C.OnHitScored // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_HUD_Crosshair_Hitmarkers(int32_t EntryPoint); // Function WBP_HUD_Crosshair_Hitmarkers.WBP_HUD_Crosshair_Hitmarkers_C.ExecuteUbergraph_WBP_HUD_Crosshair_Hitmarkers // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

