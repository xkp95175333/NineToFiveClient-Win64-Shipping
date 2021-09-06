// WidgetBlueprintGeneratedClass WBP_MetaMessageDisplay.WBP_MetaMessageDisplay_C
// Size: 0x2a0 (Inherited: 0x268)
struct UWBP_MetaMessageDisplay_C : UHWWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UVerticalBox* MessageQueue; // 0x270(0x08)
	struct UWBP_MetaMessage_C* WBP_MetaMessage; // 0x278(0x08)
	struct FMulticastInlineDelegate MessageVisible; // 0x280(0x10)
	struct FTimerHandle MessageHideTimer; // 0x290(0x08)
	struct UWBP_MetaMessage_C* MessageWidget; // 0x298(0x08)

	void OnMessageRemoved(); // Function WBP_MetaMessageDisplay.WBP_MetaMessageDisplay_C.OnMessageRemoved // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnMessageHidden(struct UWBP_MetaMessage_C* MessageWBP); // Function WBP_MetaMessageDisplay.WBP_MetaMessageDisplay_C.OnMessageHidden // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void TestMessageRoundEnd(); // Function WBP_MetaMessageDisplay.WBP_MetaMessageDisplay_C.TestMessageRoundEnd // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void TestMessage(); // Function WBP_MetaMessageDisplay.WBP_MetaMessageDisplay_C.TestMessage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void AddMessage(struct FHWMetaMessageData Message, float Duration); // Function WBP_MetaMessageDisplay.WBP_MetaMessageDisplay_C.AddMessage // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void CancelHudPromptText(); // Function WBP_MetaMessageDisplay.WBP_MetaMessageDisplay_C.CancelHudPromptText // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnArmorFeatureActivated(enum class EHWArmorFeatureType Feature, bool Active, float Duration); // Function WBP_MetaMessageDisplay.WBP_MetaMessageDisplay_C.OnArmorFeatureActivated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnArmorFeaturesChanged(); // Function WBP_MetaMessageDisplay.WBP_MetaMessageDisplay_C.OnArmorFeaturesChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnCameraFeedControllerChanged(struct UHWCameraFeedProviderComponent* Camera); // Function WBP_MetaMessageDisplay.WBP_MetaMessageDisplay_C.OnCameraFeedControllerChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnCameraFeedsUpdated(struct TArray<struct UHWCameraFeedProviderComponent*> Cameras); // Function WBP_MetaMessageDisplay.WBP_MetaMessageDisplay_C.OnCameraFeedsUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnCloseMap(); // Function WBP_MetaMessageDisplay.WBP_MetaMessageDisplay_C.OnCloseMap // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnCombatCompanionStatusChanged(bool Available); // Function WBP_MetaMessageDisplay.WBP_MetaMessageDisplay_C.OnCombatCompanionStatusChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnDroneJammed(); // Function WBP_MetaMessageDisplay.WBP_MetaMessageDisplay_C.OnDroneJammed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnDronePossessed(); // Function WBP_MetaMessageDisplay.WBP_MetaMessageDisplay_C.OnDronePossessed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnDroneUnjammed(); // Function WBP_MetaMessageDisplay.WBP_MetaMessageDisplay_C.OnDroneUnjammed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnEnterSpectateMode(bool DroneSelect, bool ShowDeathScreen); // Function WBP_MetaMessageDisplay.WBP_MetaMessageDisplay_C.OnEnterSpectateMode // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnExitSpectateMode(); // Function WBP_MetaMessageDisplay.WBP_MetaMessageDisplay_C.OnExitSpectateMode // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnHideProgressBar(); // Function WBP_MetaMessageDisplay.WBP_MetaMessageDisplay_C.OnHideProgressBar // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnHitReceived(struct FHWPlayerHitReceivedParams Params); // Function WBP_MetaMessageDisplay.WBP_MetaMessageDisplay_C.OnHitReceived // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnHitScored(struct FHWPlayerHitScoredParams Params); // Function WBP_MetaMessageDisplay.WBP_MetaMessageDisplay_C.OnHitScored // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnInteractionItemEnterView(struct UHWInteractionComponent* Item); // Function WBP_MetaMessageDisplay.WBP_MetaMessageDisplay_C.OnInteractionItemEnterView // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnInteractionItemExitView(struct UHWInteractionComponent* Item); // Function WBP_MetaMessageDisplay.WBP_MetaMessageDisplay_C.OnInteractionItemExitView // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnNotificationTextUpdated(struct FText NewText, struct FLinearColor UpperTextColor, bool UseAnimationUpper, struct FText NewNotificationTextLower, struct FLinearColor LowerTextColor, bool UseAnimationLower, float Duration); // Function WBP_MetaMessageDisplay.WBP_MetaMessageDisplay_C.OnNotificationTextUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnNotifyDeathDroneDestroyed(struct FString KillerId, struct FString VictimId, bool WasKilledByDrone, struct FName KillerItemId, enum class EHWDamageType DamageType, bool WasHeadShot, enum class EHWWeaponType WeaponType); // Function WBP_MetaMessageDisplay.WBP_MetaMessageDisplay_C.OnNotifyDeathDroneDestroyed // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnObjectiveChanged(struct FText NewObjective, bool UseAnimation, bool PlaySound); // Function WBP_MetaMessageDisplay.WBP_MetaMessageDisplay_C.OnObjectiveChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnObjectiveDataChanged(struct FHWRoundObjectivesData ObjectiveData); // Function WBP_MetaMessageDisplay.WBP_MetaMessageDisplay_C.OnObjectiveDataChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnObjectiveItemsUpdated(struct TArray<struct FNameAndCount> Items); // Function WBP_MetaMessageDisplay.WBP_MetaMessageDisplay_C.OnObjectiveItemsUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnOpenMap(); // Function WBP_MetaMessageDisplay.WBP_MetaMessageDisplay_C.OnOpenMap // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerDisconnected(struct FString SessionId); // Function WBP_MetaMessageDisplay.WBP_MetaMessageDisplay_C.OnPlayerDisconnected // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerDowned(struct FString KillerId, struct FString VictimId, bool WasHeadShot); // Function WBP_MetaMessageDisplay.WBP_MetaMessageDisplay_C.OnPlayerDowned // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerKilled(struct FString KillerId, struct FString VictimId, bool WasKilledByDrone, struct FName KillerItemId, enum class EHWDamageType DamageType, bool WasHeadShot, enum class EHWWeaponType WeaponType, struct TArray<struct FString> Assists, struct AActor* DamageDealer, struct FName BleedCausedByDamageDealer, enum class EHWDamageType BleedCausedByDamageType); // Function WBP_MetaMessageDisplay.WBP_MetaMessageDisplay_C.OnPlayerKilled // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerStateSetForCharacter(struct AHWCharacter* Character); // Function WBP_MetaMessageDisplay.WBP_MetaMessageDisplay_C.OnPlayerStateSetForCharacter // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPossess(struct AHWCharacter* PosessedCharacter); // Function WBP_MetaMessageDisplay.WBP_MetaMessageDisplay_C.OnPossess // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnReconnectingPlayersUpdated(struct TArray<struct FString> ReconnectingPlayers); // Function WBP_MetaMessageDisplay.WBP_MetaMessageDisplay_C.OnReconnectingPlayersUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnRoundCleanup(); // Function WBP_MetaMessageDisplay.WBP_MetaMessageDisplay_C.OnRoundCleanup // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnRoundIntroDataChanged(struct FHWRoundIntroData RoundIntroData); // Function WBP_MetaMessageDisplay.WBP_MetaMessageDisplay_C.OnRoundIntroDataChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnRoundStateSet(enum class EHWRoundState State); // Function WBP_MetaMessageDisplay.WBP_MetaMessageDisplay_C.OnRoundStateSet // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnShowProgressBar(float Duration, enum class EHWProgressBarType BarType); // Function WBP_MetaMessageDisplay.WBP_MetaMessageDisplay_C.OnShowProgressBar // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeammateLoadoutChanged(struct FString PlayerId, struct FString Primary, struct FString Secondary, int32_t PrimaryTier, int32_t SecondaryTier, int32_t ArmorTier, struct FName Consumable, struct FName Throwable, struct FName Placeable); // Function WBP_MetaMessageDisplay.WBP_MetaMessageDisplay_C.OnTeammateLoadoutChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeammateLoadoutDataChanged(int32_t CharIndex, struct FHWLoadoutData LoadoutData); // Function WBP_MetaMessageDisplay.WBP_MetaMessageDisplay_C.OnTeammateLoadoutDataChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeammateProfileChanged(struct FString PlayerId, struct FHWPlayerPublicProfile Profile); // Function WBP_MetaMessageDisplay.WBP_MetaMessageDisplay_C.OnTeammateProfileChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeamReadyStateChanged(struct TArray<struct FString> Ids); // Function WBP_MetaMessageDisplay.WBP_MetaMessageDisplay_C.OnTeamReadyStateChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeamScoreUpdated(struct FHWTeamScoreData Score); // Function WBP_MetaMessageDisplay.WBP_MetaMessageDisplay_C.OnTeamScoreUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void SetHudPromptText(struct FText Text, float DisplayDuration); // Function WBP_MetaMessageDisplay.WBP_MetaMessageDisplay_C.SetHudPromptText // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_MetaMessageDisplay.WBP_MetaMessageDisplay_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMetaMessageReceived(struct FHWMetaMessageData Message, float ShowDuration); // Function WBP_MetaMessageDisplay.WBP_MetaMessageDisplay_C.OnMetaMessageReceived // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnInitialized(); // Function WBP_MetaMessageDisplay.WBP_MetaMessageDisplay_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void CustomEvent_1(); // Function WBP_MetaMessageDisplay.WBP_MetaMessageDisplay_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_MetaMessageDisplay(int32_t EntryPoint); // Function WBP_MetaMessageDisplay.WBP_MetaMessageDisplay_C.ExecuteUbergraph_WBP_MetaMessageDisplay // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
	void MessageVisible__DelegateSignature(bool Visible); // Function WBP_MetaMessageDisplay.WBP_MetaMessageDisplay_C.MessageVisible__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

