// WidgetBlueprintGeneratedClass WBP_Map.WBP_Map_C
// Size: 0x389 (Inherited: 0x268)
struct UWBP_Map_C : UHWWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UImage* Background; // 0x270(0x08)
	struct UCanvasPanel* Canvas; // 0x278(0x08)
	struct UWBP_Map_Marker_Area_C* MapMarkerArea; // 0x280(0x08)
	struct UCanvasPanel* MapMarkers; // 0x288(0x08)
	struct UImage* MapOverlay; // 0x290(0x08)
	struct UOverlay* Overlay_463; // 0x298(0x08)
	struct AHWMapVolume* MapWorldBounds; // 0x2a0(0x08)
	struct FMulticastInlineDelegate MarkerClickedDispatcher; // 0x2a8(0x10)
	struct TSet<enum class EHWMapMarkerType> HiddenMarkerTypes; // 0x2b8(0x50)
	struct AActor* SelectedFollowActor; // 0x308(0x08)
	struct TArray<struct FStruct_MapLegend> MapLegends; // 0x310(0x10)
	struct TMap<struct FString, struct TSoftObjectPtr<struct UTexture2D>> BackgroundPerMap; // 0x320(0x50)
	struct UWBP_MapMarker_Objective_C* ObjectiveMarker; // 0x370(0x08)
	struct TArray<struct FVector2D> DrawPoints; // 0x378(0x10)
	bool ShowMarkerAnnotations; // 0x388(0x01)

	void UpdateDrawnMapPoints(); // Function WBP_Map.WBP_Map_C.UpdateDrawnMapPoints // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void NormalizedCoordsToWidgetCoords(struct TArray<struct FVector2D> Normalized, struct FVector2D B, struct TArray<struct FVector2D> WidgetCoords); // Function WBP_Map.WBP_Map_C.NormalizedCoordsToWidgetCoords // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	struct FEventReply OnMouseMove(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_Map.WBP_Map_C.OnMouseMove // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_Map.WBP_Map_C.OnMouseButtonUp // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_Map.WBP_Map_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnPaint(struct FPaintContext Context); // Function WBP_Map.WBP_Map_C.OnPaint // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x13c4ca0
	void SetupMarker(struct APawn* Target); // Function WBP_Map.WBP_Map_C.SetupMarker // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateMarkerPosition(struct UWBP_MapMarker_C* Marker); // Function WBP_Map.WBP_Map_C.UpdateMarkerPosition // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ProjectPositionOnMap(struct FVector WorldPos, struct FVector2D MapPos); // Function WBP_Map.WBP_Map_C.ProjectPositionOnMap // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnLoaded_B52AAC054B3AF150380EE9BEA2C1D79E(struct UObject* Loaded); // Function WBP_Map.WBP_Map_C.OnLoaded_B52AAC054B3AF150380EE9BEA2C1D79E // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void CancelHudPromptText(); // Function WBP_Map.WBP_Map_C.CancelHudPromptText // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnArmorFeatureActivated(enum class EHWArmorFeatureType Feature, bool Active, float Duration); // Function WBP_Map.WBP_Map_C.OnArmorFeatureActivated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnArmorFeaturesChanged(); // Function WBP_Map.WBP_Map_C.OnArmorFeaturesChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnCameraFeedControllerChanged(struct UHWCameraFeedProviderComponent* Camera); // Function WBP_Map.WBP_Map_C.OnCameraFeedControllerChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnCameraFeedsUpdated(struct TArray<struct UHWCameraFeedProviderComponent*> Cameras); // Function WBP_Map.WBP_Map_C.OnCameraFeedsUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnCloseMap(); // Function WBP_Map.WBP_Map_C.OnCloseMap // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnCombatCompanionStatusChanged(bool Available); // Function WBP_Map.WBP_Map_C.OnCombatCompanionStatusChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnDroneJammed(); // Function WBP_Map.WBP_Map_C.OnDroneJammed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnDroneUnjammed(); // Function WBP_Map.WBP_Map_C.OnDroneUnjammed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnEnterSpectateMode(bool DroneSelect, bool ShowDeathScreen); // Function WBP_Map.WBP_Map_C.OnEnterSpectateMode // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnExitSpectateMode(); // Function WBP_Map.WBP_Map_C.OnExitSpectateMode // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnHideProgressBar(); // Function WBP_Map.WBP_Map_C.OnHideProgressBar // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnHitReceived(struct FHWPlayerHitReceivedParams Params); // Function WBP_Map.WBP_Map_C.OnHitReceived // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnHitScored(struct FHWPlayerHitScoredParams Params); // Function WBP_Map.WBP_Map_C.OnHitScored // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnInteractionItemEnterView(struct UHWInteractionComponent* Item); // Function WBP_Map.WBP_Map_C.OnInteractionItemEnterView // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnInteractionItemExitView(struct UHWInteractionComponent* Item); // Function WBP_Map.WBP_Map_C.OnInteractionItemExitView // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMetaMessageReceived(struct FHWMetaMessageData Message, float ShowDuration); // Function WBP_Map.WBP_Map_C.OnMetaMessageReceived // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnNotificationTextUpdated(struct FText NewText, struct FLinearColor UpperTextColor, bool UseAnimationUpper, struct FText NewNotificationTextLower, struct FLinearColor LowerTextColor, bool UseAnimationLower, float Duration); // Function WBP_Map.WBP_Map_C.OnNotificationTextUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnNotifyDeathDroneDestroyed(struct FString KillerId, struct FString VictimId, bool WasKilledByDrone, struct FName KillerItemId, enum class EHWDamageType DamageType, bool WasHeadShot, enum class EHWWeaponType WeaponType); // Function WBP_Map.WBP_Map_C.OnNotifyDeathDroneDestroyed // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnObjectiveChanged(struct FText NewObjective, bool UseAnimation, bool PlaySound); // Function WBP_Map.WBP_Map_C.OnObjectiveChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnObjectiveDataChanged(struct FHWRoundObjectivesData ObjectiveData); // Function WBP_Map.WBP_Map_C.OnObjectiveDataChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnObjectiveItemsUpdated(struct TArray<struct FNameAndCount> Items); // Function WBP_Map.WBP_Map_C.OnObjectiveItemsUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerDisconnected(struct FString SessionId); // Function WBP_Map.WBP_Map_C.OnPlayerDisconnected // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerDowned(struct FString KillerId, struct FString VictimId, bool WasHeadShot); // Function WBP_Map.WBP_Map_C.OnPlayerDowned // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerKilled(struct FString KillerId, struct FString VictimId, bool WasKilledByDrone, struct FName KillerItemId, enum class EHWDamageType DamageType, bool WasHeadShot, enum class EHWWeaponType WeaponType, struct TArray<struct FString> Assists, struct AActor* DamageDealer, struct FName BleedCausedByDamageDealer, enum class EHWDamageType BleedCausedByDamageType); // Function WBP_Map.WBP_Map_C.OnPlayerKilled // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerStateSetForCharacter(struct AHWCharacter* Character); // Function WBP_Map.WBP_Map_C.OnPlayerStateSetForCharacter // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPossess(struct AHWCharacter* PosessedCharacter); // Function WBP_Map.WBP_Map_C.OnPossess // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnReconnectingPlayersUpdated(struct TArray<struct FString> ReconnectingPlayers); // Function WBP_Map.WBP_Map_C.OnReconnectingPlayersUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnRoundCleanup(); // Function WBP_Map.WBP_Map_C.OnRoundCleanup // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnRoundIntroDataChanged(struct FHWRoundIntroData RoundIntroData); // Function WBP_Map.WBP_Map_C.OnRoundIntroDataChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnRoundStateSet(enum class EHWRoundState State); // Function WBP_Map.WBP_Map_C.OnRoundStateSet // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnShowProgressBar(float Duration, enum class EHWProgressBarType BarType); // Function WBP_Map.WBP_Map_C.OnShowProgressBar // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeammateLoadoutChanged(struct FString PlayerId, struct FString Primary, struct FString Secondary, int32_t PrimaryTier, int32_t SecondaryTier, int32_t ArmorTier, struct FName Consumable, struct FName Throwable, struct FName Placeable); // Function WBP_Map.WBP_Map_C.OnTeammateLoadoutChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeammateLoadoutDataChanged(int32_t CharIndex, struct FHWLoadoutData LoadoutData); // Function WBP_Map.WBP_Map_C.OnTeammateLoadoutDataChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeammateProfileChanged(struct FString PlayerId, struct FHWPlayerPublicProfile Profile); // Function WBP_Map.WBP_Map_C.OnTeammateProfileChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeamReadyStateChanged(struct TArray<struct FString> Ids); // Function WBP_Map.WBP_Map_C.OnTeamReadyStateChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeamScoreUpdated(struct FHWTeamScoreData Score); // Function WBP_Map.WBP_Map_C.OnTeamScoreUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void SetHudPromptText(struct FText Text, float DisplayDuration); // Function WBP_Map.WBP_Map_C.SetHudPromptText // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_Map.WBP_Map_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_Map.WBP_Map_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void RebuildMarkers(); // Function WBP_Map.WBP_Map_C.RebuildMarkers // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void InitializeMarkerSlot(struct UCanvasPanelSlot* Slot, int32_t ZOrder); // Function WBP_Map.WBP_Map_C.InitializeMarkerSlot // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnDronePossessed(); // Function WBP_Map.WBP_Map_C.OnDronePossessed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateBackground(); // Function WBP_Map.WBP_Map_C.UpdateBackground // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ClientMarkerUpdated(struct AHWPlayerController* Controller, struct AHWMapMarker* UpdatedMarker); // Function WBP_Map.WBP_Map_C.ClientMarkerUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void MarkerClickedDispatcher_Event(struct AActor* Instance); // Function WBP_Map.WBP_Map_C.MarkerClickedDispatcher_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnOpenMap(); // Function WBP_Map.WBP_Map_C.OnOpenMap // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Map(int32_t EntryPoint); // Function WBP_Map.WBP_Map_C.ExecuteUbergraph_WBP_Map // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
	void MarkerClickedDispatcher__DelegateSignature(struct AActor* Instance); // Function WBP_Map.WBP_Map_C.MarkerClickedDispatcher__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

