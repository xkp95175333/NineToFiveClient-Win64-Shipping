// WidgetBlueprintGeneratedClass WBP_CombatCompanionCamera.WBP_CombatCompanionCamera_C
// Size: 0x3d0 (Inherited: 0x268)
struct UWBP_CombatCompanionCamera_C : UHWWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWidgetAnimation* Zoom; // 0x270(0x08)
	struct UWBP_KeyPrompt_C* CompanionPrompt; // 0x278(0x08)
	struct UImage* Fader; // 0x280(0x08)
	struct UImage* Fader_2; // 0x288(0x08)
	struct UImage* Feed; // 0x290(0x08)
	struct UCanvasPanel* FeedCanvas; // 0x298(0x08)
	struct UImage* Image; // 0x2a0(0x08)
	struct UImage* Image_207; // 0x2a8(0x08)
	struct UWBP_RichTextLabel_C* NotAvailableLabel; // 0x2b0(0x08)
	struct UImage* Outline; // 0x2b8(0x08)
	struct UImage* ScaleIcon; // 0x2c0(0x08)
	struct UImage* ScaleIcon_2; // 0x2c8(0x08)
	struct UCanvasPanel* SpectatorHint; // 0x2d0(0x08)
	struct UCanvasPanel* SpectatorHint_DroneNotAvailable; // 0x2d8(0x08)
	struct UCanvasPanel* TopCanvas; // 0x2e0(0x08)
	struct UWBP_KeyPrompt_C* WBP_KeyPrompt; // 0x2e8(0x08)
	struct UWBP_RichTextLabel_C* WBP_RichTextLabel; // 0x2f0(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_1; // 0x2f8(0x08)
	struct UWBP_KeyPrompt_C* ZoomKey; // 0x300(0x08)
	struct TArray<struct AHWCharacter*> CharactersInView; // 0x308(0x10)
	struct TMap<struct AHWCharacter*, struct UWBP_PipMarker_C*> MarkerMap; // 0x318(0x50)
	struct TMap<struct AHWCharacter*, struct UCanvasPanelSlot*> CanvasMarkerMap; // 0x368(0x50)
	bool AllowEnemyMarkers; // 0x3b8(0x01)
	char pad_3B9[0x7]; // 0x3b9(0x07)
	struct AHWPlayerController* CachedPlayer; // 0x3c0(0x08)
	struct AHWDroneCharacter* CachedDrone; // 0x3c8(0x08)

	void ShowHint(); // Function WBP_CombatCompanionCamera.WBP_CombatCompanionCamera_C.ShowHint // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnCompanionCameraActive(struct AHWHumanCharacter* Owner, struct AHWDroneCharacter* Drone, bool Active); // Function WBP_CombatCompanionCamera.WBP_CombatCompanionCamera_C.OnCompanionCameraActive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void CacheOwningPlayer(); // Function WBP_CombatCompanionCamera.WBP_CombatCompanionCamera_C.CacheOwningPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ToggleDroneSceneCapture(bool Enable); // Function WBP_CombatCompanionCamera.WBP_CombatCompanionCamera_C.ToggleDroneSceneCapture // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void MoveMarkers(); // Function WBP_CombatCompanionCamera.WBP_CombatCompanionCamera_C.MoveMarkers // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void CreateMarkers(struct TArray<struct AHWCharacter*> EnteredView); // Function WBP_CombatCompanionCamera.WBP_CombatCompanionCamera_C.CreateMarkers // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void RemoveMarkers(struct TArray<struct AHWCharacter*> NoLongerInView); // Function WBP_CombatCompanionCamera.WBP_CombatCompanionCamera_C.RemoveMarkers // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetAllValidCharacters(struct TArray<struct AHWCharacter*> NoLongerInView, struct TArray<struct AHWCharacter*> EnteredView); // Function WBP_CombatCompanionCamera.WBP_CombatCompanionCamera_C.GetAllValidCharacters // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnDroneUnjammed(); // Function WBP_CombatCompanionCamera.WBP_CombatCompanionCamera_C.OnDroneUnjammed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnEnterSpectateMode(bool DroneSelect, bool ShowDeathScreen); // Function WBP_CombatCompanionCamera.WBP_CombatCompanionCamera_C.OnEnterSpectateMode // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnExitSpectateMode(); // Function WBP_CombatCompanionCamera.WBP_CombatCompanionCamera_C.OnExitSpectateMode // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnHideProgressBar(); // Function WBP_CombatCompanionCamera.WBP_CombatCompanionCamera_C.OnHideProgressBar // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnHitReceived(struct FHWPlayerHitReceivedParams Params); // Function WBP_CombatCompanionCamera.WBP_CombatCompanionCamera_C.OnHitReceived // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnHitScored(struct FHWPlayerHitScoredParams Params); // Function WBP_CombatCompanionCamera.WBP_CombatCompanionCamera_C.OnHitScored // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnInteractionItemEnterView(struct UHWInteractionComponent* Item); // Function WBP_CombatCompanionCamera.WBP_CombatCompanionCamera_C.OnInteractionItemEnterView // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnInteractionItemExitView(struct UHWInteractionComponent* Item); // Function WBP_CombatCompanionCamera.WBP_CombatCompanionCamera_C.OnInteractionItemExitView // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMetaMessageReceived(struct FHWMetaMessageData Message, float ShowDuration); // Function WBP_CombatCompanionCamera.WBP_CombatCompanionCamera_C.OnMetaMessageReceived // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnNotificationTextUpdated(struct FText NewText, struct FLinearColor UpperTextColor, bool UseAnimationUpper, struct FText NewNotificationTextLower, struct FLinearColor LowerTextColor, bool UseAnimationLower, float Duration); // Function WBP_CombatCompanionCamera.WBP_CombatCompanionCamera_C.OnNotificationTextUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnNotifyDeathDroneDestroyed(struct FString KillerId, struct FString VictimId, bool WasKilledByDrone, struct FName KillerItemId, enum class EHWDamageType DamageType, bool WasHeadShot, enum class EHWWeaponType WeaponType); // Function WBP_CombatCompanionCamera.WBP_CombatCompanionCamera_C.OnNotifyDeathDroneDestroyed // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnObjectiveChanged(struct FText NewObjective, bool UseAnimation, bool PlaySound); // Function WBP_CombatCompanionCamera.WBP_CombatCompanionCamera_C.OnObjectiveChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnObjectiveDataChanged(struct FHWRoundObjectivesData ObjectiveData); // Function WBP_CombatCompanionCamera.WBP_CombatCompanionCamera_C.OnObjectiveDataChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnObjectiveItemsUpdated(struct TArray<struct FNameAndCount> Items); // Function WBP_CombatCompanionCamera.WBP_CombatCompanionCamera_C.OnObjectiveItemsUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerDisconnected(struct FString SessionId); // Function WBP_CombatCompanionCamera.WBP_CombatCompanionCamera_C.OnPlayerDisconnected // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerDowned(struct FString KillerId, struct FString VictimId, bool WasHeadShot); // Function WBP_CombatCompanionCamera.WBP_CombatCompanionCamera_C.OnPlayerDowned // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerKilled(struct FString KillerId, struct FString VictimId, bool WasKilledByDrone, struct FName KillerItemId, enum class EHWDamageType DamageType, bool WasHeadShot, enum class EHWWeaponType WeaponType, struct TArray<struct FString> Assists, struct AActor* DamageDealer, struct FName BleedCausedByDamageDealer, enum class EHWDamageType BleedCausedByDamageType); // Function WBP_CombatCompanionCamera.WBP_CombatCompanionCamera_C.OnPlayerKilled // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerStateSetForCharacter(struct AHWCharacter* Character); // Function WBP_CombatCompanionCamera.WBP_CombatCompanionCamera_C.OnPlayerStateSetForCharacter // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPossess(struct AHWCharacter* PosessedCharacter); // Function WBP_CombatCompanionCamera.WBP_CombatCompanionCamera_C.OnPossess // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnReconnectingPlayersUpdated(struct TArray<struct FString> ReconnectingPlayers); // Function WBP_CombatCompanionCamera.WBP_CombatCompanionCamera_C.OnReconnectingPlayersUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnRoundCleanup(); // Function WBP_CombatCompanionCamera.WBP_CombatCompanionCamera_C.OnRoundCleanup // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnRoundIntroDataChanged(struct FHWRoundIntroData RoundIntroData); // Function WBP_CombatCompanionCamera.WBP_CombatCompanionCamera_C.OnRoundIntroDataChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnRoundStateSet(enum class EHWRoundState State); // Function WBP_CombatCompanionCamera.WBP_CombatCompanionCamera_C.OnRoundStateSet // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnShowProgressBar(float Duration, enum class EHWProgressBarType BarType); // Function WBP_CombatCompanionCamera.WBP_CombatCompanionCamera_C.OnShowProgressBar // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeammateLoadoutChanged(struct FString PlayerId, struct FString Primary, struct FString Secondary, int32_t PrimaryTier, int32_t SecondaryTier, int32_t ArmorTier, struct FName Consumable, struct FName Throwable, struct FName Placeable); // Function WBP_CombatCompanionCamera.WBP_CombatCompanionCamera_C.OnTeammateLoadoutChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeammateLoadoutDataChanged(int32_t CharIndex, struct FHWLoadoutData LoadoutData); // Function WBP_CombatCompanionCamera.WBP_CombatCompanionCamera_C.OnTeammateLoadoutDataChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeammateProfileChanged(struct FString PlayerId, struct FHWPlayerPublicProfile Profile); // Function WBP_CombatCompanionCamera.WBP_CombatCompanionCamera_C.OnTeammateProfileChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeamReadyStateChanged(struct TArray<struct FString> Ids); // Function WBP_CombatCompanionCamera.WBP_CombatCompanionCamera_C.OnTeamReadyStateChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeamScoreUpdated(struct FHWTeamScoreData Score); // Function WBP_CombatCompanionCamera.WBP_CombatCompanionCamera_C.OnTeamScoreUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void SetHudPromptText(struct FText Text, float DisplayDuration); // Function WBP_CombatCompanionCamera.WBP_CombatCompanionCamera_C.SetHudPromptText // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_CombatCompanionCamera.WBP_CombatCompanionCamera_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnCameraFeedControllerChanged(struct UHWCameraFeedProviderComponent* Camera); // Function WBP_CombatCompanionCamera.WBP_CombatCompanionCamera_C.OnCameraFeedControllerChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnArmorFeaturesChanged(); // Function WBP_CombatCompanionCamera.WBP_CombatCompanionCamera_C.OnArmorFeaturesChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnArmorFeatureActivated(enum class EHWArmorFeatureType Feature, bool Active, float Duration); // Function WBP_CombatCompanionCamera.WBP_CombatCompanionCamera_C.OnArmorFeatureActivated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnDronePossessed(); // Function WBP_CombatCompanionCamera.WBP_CombatCompanionCamera_C.OnDronePossessed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnDroneJammed(); // Function WBP_CombatCompanionCamera.WBP_CombatCompanionCamera_C.OnDroneJammed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void CancelHudPromptText(); // Function WBP_CombatCompanionCamera.WBP_CombatCompanionCamera_C.CancelHudPromptText // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnOpenMap(); // Function WBP_CombatCompanionCamera.WBP_CombatCompanionCamera_C.OnOpenMap // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnCloseMap(); // Function WBP_CombatCompanionCamera.WBP_CombatCompanionCamera_C.OnCloseMap // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void PreConstruct(bool IsDesignTime); // Function WBP_CombatCompanionCamera.WBP_CombatCompanionCamera_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnCombatCompanionStatusChanged(bool Available); // Function WBP_CombatCompanionCamera.WBP_CombatCompanionCamera_C.OnCombatCompanionStatusChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_CombatCompanionCamera.WBP_CombatCompanionCamera_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnCameraFeedsUpdated(struct TArray<struct UHWCameraFeedProviderComponent*> Cameras); // Function WBP_CombatCompanionCamera.WBP_CombatCompanionCamera_C.OnCameraFeedsUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_CombatCompanionCamera(int32_t EntryPoint); // Function WBP_CombatCompanionCamera.WBP_CombatCompanionCamera_C.ExecuteUbergraph_WBP_CombatCompanionCamera // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

