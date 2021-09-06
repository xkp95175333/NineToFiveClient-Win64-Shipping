// WidgetBlueprintGeneratedClass WBP_Placeholder_GameHUD_NotificationText.WBP_Placeholder_GameHUD_NotificationText_C
// Size: 0x290 (Inherited: 0x268)
struct UWBP_Placeholder_GameHUD_NotificationText_C : UHWWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWidgetAnimation* NewNotificationLower; // 0x270(0x08)
	struct UWidgetAnimation* NewNotification; // 0x278(0x08)
	struct UTextBlock* LowerNotificationText; // 0x280(0x08)
	struct UTextBlock* NotificationText; // 0x288(0x08)

	void SetTextAndColor(struct UTextBlock* TargetText, struct FText Text, struct FLinearColor Color, struct FLinearColor DefaultColor); // Function WBP_Placeholder_GameHUD_NotificationText.WBP_Placeholder_GameHUD_NotificationText_C.SetTextAndColor // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void CancelHudPromptText(); // Function WBP_Placeholder_GameHUD_NotificationText.WBP_Placeholder_GameHUD_NotificationText_C.CancelHudPromptText // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnArmorFeatureActivated(enum class EHWArmorFeatureType Feature, bool Active, float Duration); // Function WBP_Placeholder_GameHUD_NotificationText.WBP_Placeholder_GameHUD_NotificationText_C.OnArmorFeatureActivated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnArmorFeaturesChanged(); // Function WBP_Placeholder_GameHUD_NotificationText.WBP_Placeholder_GameHUD_NotificationText_C.OnArmorFeaturesChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnCameraFeedControllerChanged(struct UHWCameraFeedProviderComponent* Camera); // Function WBP_Placeholder_GameHUD_NotificationText.WBP_Placeholder_GameHUD_NotificationText_C.OnCameraFeedControllerChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnCameraFeedsUpdated(struct TArray<struct UHWCameraFeedProviderComponent*> Cameras); // Function WBP_Placeholder_GameHUD_NotificationText.WBP_Placeholder_GameHUD_NotificationText_C.OnCameraFeedsUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnCloseMap(); // Function WBP_Placeholder_GameHUD_NotificationText.WBP_Placeholder_GameHUD_NotificationText_C.OnCloseMap // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnCombatCompanionStatusChanged(bool Available); // Function WBP_Placeholder_GameHUD_NotificationText.WBP_Placeholder_GameHUD_NotificationText_C.OnCombatCompanionStatusChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnDroneJammed(); // Function WBP_Placeholder_GameHUD_NotificationText.WBP_Placeholder_GameHUD_NotificationText_C.OnDroneJammed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnDronePossessed(); // Function WBP_Placeholder_GameHUD_NotificationText.WBP_Placeholder_GameHUD_NotificationText_C.OnDronePossessed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnDroneUnjammed(); // Function WBP_Placeholder_GameHUD_NotificationText.WBP_Placeholder_GameHUD_NotificationText_C.OnDroneUnjammed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnEnterSpectateMode(bool DroneSelect, bool ShowDeathScreen); // Function WBP_Placeholder_GameHUD_NotificationText.WBP_Placeholder_GameHUD_NotificationText_C.OnEnterSpectateMode // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnExitSpectateMode(); // Function WBP_Placeholder_GameHUD_NotificationText.WBP_Placeholder_GameHUD_NotificationText_C.OnExitSpectateMode // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnHideProgressBar(); // Function WBP_Placeholder_GameHUD_NotificationText.WBP_Placeholder_GameHUD_NotificationText_C.OnHideProgressBar // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnHitReceived(struct FHWPlayerHitReceivedParams Params); // Function WBP_Placeholder_GameHUD_NotificationText.WBP_Placeholder_GameHUD_NotificationText_C.OnHitReceived // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnHitScored(struct FHWPlayerHitScoredParams Params); // Function WBP_Placeholder_GameHUD_NotificationText.WBP_Placeholder_GameHUD_NotificationText_C.OnHitScored // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnInteractionItemEnterView(struct UHWInteractionComponent* Item); // Function WBP_Placeholder_GameHUD_NotificationText.WBP_Placeholder_GameHUD_NotificationText_C.OnInteractionItemEnterView // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnInteractionItemExitView(struct UHWInteractionComponent* Item); // Function WBP_Placeholder_GameHUD_NotificationText.WBP_Placeholder_GameHUD_NotificationText_C.OnInteractionItemExitView // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMetaMessageReceived(struct FHWMetaMessageData Message, float ShowDuration); // Function WBP_Placeholder_GameHUD_NotificationText.WBP_Placeholder_GameHUD_NotificationText_C.OnMetaMessageReceived // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnNotifyDeathDroneDestroyed(struct FString KillerId, struct FString VictimId, bool WasKilledByDrone, struct FName KillerItemId, enum class EHWDamageType DamageType, bool WasHeadShot, enum class EHWWeaponType WeaponType); // Function WBP_Placeholder_GameHUD_NotificationText.WBP_Placeholder_GameHUD_NotificationText_C.OnNotifyDeathDroneDestroyed // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnObjectiveChanged(struct FText NewObjective, bool UseAnimation, bool PlaySound); // Function WBP_Placeholder_GameHUD_NotificationText.WBP_Placeholder_GameHUD_NotificationText_C.OnObjectiveChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnObjectiveDataChanged(struct FHWRoundObjectivesData ObjectiveData); // Function WBP_Placeholder_GameHUD_NotificationText.WBP_Placeholder_GameHUD_NotificationText_C.OnObjectiveDataChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnObjectiveItemsUpdated(struct TArray<struct FNameAndCount> Items); // Function WBP_Placeholder_GameHUD_NotificationText.WBP_Placeholder_GameHUD_NotificationText_C.OnObjectiveItemsUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnOpenMap(); // Function WBP_Placeholder_GameHUD_NotificationText.WBP_Placeholder_GameHUD_NotificationText_C.OnOpenMap // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerDisconnected(struct FString SessionId); // Function WBP_Placeholder_GameHUD_NotificationText.WBP_Placeholder_GameHUD_NotificationText_C.OnPlayerDisconnected // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerDowned(struct FString KillerId, struct FString VictimId, bool WasHeadShot); // Function WBP_Placeholder_GameHUD_NotificationText.WBP_Placeholder_GameHUD_NotificationText_C.OnPlayerDowned // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerKilled(struct FString KillerId, struct FString VictimId, bool WasKilledByDrone, struct FName KillerItemId, enum class EHWDamageType DamageType, bool WasHeadShot, enum class EHWWeaponType WeaponType, struct TArray<struct FString> Assists, struct AActor* DamageDealer, struct FName BleedCausedByDamageDealer, enum class EHWDamageType BleedCausedByDamageType); // Function WBP_Placeholder_GameHUD_NotificationText.WBP_Placeholder_GameHUD_NotificationText_C.OnPlayerKilled // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerStateSetForCharacter(struct AHWCharacter* Character); // Function WBP_Placeholder_GameHUD_NotificationText.WBP_Placeholder_GameHUD_NotificationText_C.OnPlayerStateSetForCharacter // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnReconnectingPlayersUpdated(struct TArray<struct FString> ReconnectingPlayers); // Function WBP_Placeholder_GameHUD_NotificationText.WBP_Placeholder_GameHUD_NotificationText_C.OnReconnectingPlayersUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnRoundCleanup(); // Function WBP_Placeholder_GameHUD_NotificationText.WBP_Placeholder_GameHUD_NotificationText_C.OnRoundCleanup // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnRoundIntroDataChanged(struct FHWRoundIntroData RoundIntroData); // Function WBP_Placeholder_GameHUD_NotificationText.WBP_Placeholder_GameHUD_NotificationText_C.OnRoundIntroDataChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnRoundStateSet(enum class EHWRoundState State); // Function WBP_Placeholder_GameHUD_NotificationText.WBP_Placeholder_GameHUD_NotificationText_C.OnRoundStateSet // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnShowProgressBar(float Duration, enum class EHWProgressBarType BarType); // Function WBP_Placeholder_GameHUD_NotificationText.WBP_Placeholder_GameHUD_NotificationText_C.OnShowProgressBar // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeammateLoadoutChanged(struct FString PlayerId, struct FString Primary, struct FString Secondary, int32_t PrimaryTier, int32_t SecondaryTier, int32_t ArmorTier, struct FName Consumable, struct FName Throwable, struct FName Placeable); // Function WBP_Placeholder_GameHUD_NotificationText.WBP_Placeholder_GameHUD_NotificationText_C.OnTeammateLoadoutChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeammateLoadoutDataChanged(int32_t CharIndex, struct FHWLoadoutData LoadoutData); // Function WBP_Placeholder_GameHUD_NotificationText.WBP_Placeholder_GameHUD_NotificationText_C.OnTeammateLoadoutDataChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeammateProfileChanged(struct FString PlayerId, struct FHWPlayerPublicProfile Profile); // Function WBP_Placeholder_GameHUD_NotificationText.WBP_Placeholder_GameHUD_NotificationText_C.OnTeammateProfileChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeamReadyStateChanged(struct TArray<struct FString> Ids); // Function WBP_Placeholder_GameHUD_NotificationText.WBP_Placeholder_GameHUD_NotificationText_C.OnTeamReadyStateChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeamScoreUpdated(struct FHWTeamScoreData Score); // Function WBP_Placeholder_GameHUD_NotificationText.WBP_Placeholder_GameHUD_NotificationText_C.OnTeamScoreUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void SetHudPromptText(struct FText Text, float DisplayDuration); // Function WBP_Placeholder_GameHUD_NotificationText.WBP_Placeholder_GameHUD_NotificationText_C.SetHudPromptText // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnNotificationTextUpdated(struct FText NewText, struct FLinearColor UpperTextColor, bool UseAnimationUpper, struct FText NewNotificationTextLower, struct FLinearColor LowerTextColor, bool UseAnimationLower, float Duration); // Function WBP_Placeholder_GameHUD_NotificationText.WBP_Placeholder_GameHUD_NotificationText_C.OnNotificationTextUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void ClearText(); // Function WBP_Placeholder_GameHUD_NotificationText.WBP_Placeholder_GameHUD_NotificationText_C.ClearText // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnPossess(struct AHWCharacter* PosessedCharacter); // Function WBP_Placeholder_GameHUD_NotificationText.WBP_Placeholder_GameHUD_NotificationText_C.OnPossess // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Placeholder_GameHUD_NotificationText(int32_t EntryPoint); // Function WBP_Placeholder_GameHUD_NotificationText.WBP_Placeholder_GameHUD_NotificationText_C.ExecuteUbergraph_WBP_Placeholder_GameHUD_NotificationText // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

