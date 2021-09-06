// WidgetBlueprintGeneratedClass WBP_MapLegendList.WBP_MapLegendList_C
// Size: 0x3c8 (Inherited: 0x260)
struct UWBP_MapLegendList_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UVerticalBox* markersPanel; // 0x268(0x08)
	struct UVerticalBox* objectivesPanel; // 0x270(0x08)
	struct UVerticalBox* playersPanel; // 0x278(0x08)
	struct UWBP_SectionHeaderBlack_C* WBP_SectionHeaderBlack_C_1; // 0x280(0x08)
	struct UWBP_SectionHeaderBlack_C* WBP_SectionHeaderBlack_C_2; // 0x288(0x08)
	struct UWBP_SectionHeaderBlack_C* WBP_SectionHeaderBlack_C_3; // 0x290(0x08)
	struct TArray<struct FStruct_MapLegend> Players; // 0x298(0x10)
	struct TArray<struct FStruct_MapLegend> PingMarkers; // 0x2a8(0x10)
	struct TArray<struct FStruct_MapLegend> Objectives; // 0x2b8(0x10)
	struct TMap<struct AHWMapMarker*, struct UWBP_HUD_ObjectiveMarker_C*> ObjectivesToWidget; // 0x2c8(0x50)
	struct TMap<enum class EHWPingReason, struct UWBP_MapLegend_C*> PingReasonToWidgets; // 0x318(0x50)
	struct TMap<struct AHWCharacter*, struct UWBP_Map_PlayerMarker_C*> CharacterToWidgets; // 0x368(0x50)
	struct TArray<enum class EHWPingReason> PingReasons; // 0x3b8(0x10)

	void RefreshPingMarkerSection(); // Function WBP_MapLegendList.WBP_MapLegendList_C.RefreshPingMarkerSection // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void CreatePingMarkers(); // Function WBP_MapLegendList.WBP_MapLegendList_C.CreatePingMarkers // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ShouldShowPing(enum class EHWPingReason PingReason, bool Show); // Function WBP_MapLegendList.WBP_MapLegendList_C.ShouldShowPing // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void ShouldShowMarker(struct AHWMapMarker* Marker, bool Show); // Function WBP_MapLegendList.WBP_MapLegendList_C.ShouldShowMarker // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void FillList(struct UPanelWidget* targetList, struct TArray<struct FStruct_MapLegend> Items); // Function WBP_MapLegendList.WBP_MapLegendList_C.FillList // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void CancelHudPromptText(); // Function WBP_MapLegendList.WBP_MapLegendList_C.CancelHudPromptText // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnArmorFeatureActivated(enum class EHWArmorFeatureType Feature, bool Active, float Duration); // Function WBP_MapLegendList.WBP_MapLegendList_C.OnArmorFeatureActivated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnArmorFeaturesChanged(); // Function WBP_MapLegendList.WBP_MapLegendList_C.OnArmorFeaturesChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnCameraFeedControllerChanged(struct UHWCameraFeedProviderComponent* Camera); // Function WBP_MapLegendList.WBP_MapLegendList_C.OnCameraFeedControllerChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnCameraFeedsUpdated(struct TArray<struct UHWCameraFeedProviderComponent*> Cameras); // Function WBP_MapLegendList.WBP_MapLegendList_C.OnCameraFeedsUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnCloseMap(); // Function WBP_MapLegendList.WBP_MapLegendList_C.OnCloseMap // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnCombatCompanionStatusChanged(bool Available); // Function WBP_MapLegendList.WBP_MapLegendList_C.OnCombatCompanionStatusChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnDroneJammed(); // Function WBP_MapLegendList.WBP_MapLegendList_C.OnDroneJammed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnDronePossessed(); // Function WBP_MapLegendList.WBP_MapLegendList_C.OnDronePossessed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnDroneUnjammed(); // Function WBP_MapLegendList.WBP_MapLegendList_C.OnDroneUnjammed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnEnterSpectateMode(bool DroneSelect, bool ShowDeathScreen); // Function WBP_MapLegendList.WBP_MapLegendList_C.OnEnterSpectateMode // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnExitSpectateMode(); // Function WBP_MapLegendList.WBP_MapLegendList_C.OnExitSpectateMode // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnHideProgressBar(); // Function WBP_MapLegendList.WBP_MapLegendList_C.OnHideProgressBar // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnHitReceived(struct FHWPlayerHitReceivedParams Params); // Function WBP_MapLegendList.WBP_MapLegendList_C.OnHitReceived // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnHitScored(struct FHWPlayerHitScoredParams Params); // Function WBP_MapLegendList.WBP_MapLegendList_C.OnHitScored // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnInteractionItemEnterView(struct UHWInteractionComponent* Item); // Function WBP_MapLegendList.WBP_MapLegendList_C.OnInteractionItemEnterView // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnInteractionItemExitView(struct UHWInteractionComponent* Item); // Function WBP_MapLegendList.WBP_MapLegendList_C.OnInteractionItemExitView // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMetaMessageReceived(struct FHWMetaMessageData Message, float ShowDuration); // Function WBP_MapLegendList.WBP_MapLegendList_C.OnMetaMessageReceived // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnNotificationTextUpdated(struct FText NewText, struct FLinearColor UpperTextColor, bool UseAnimationUpper, struct FText NewNotificationTextLower, struct FLinearColor LowerTextColor, bool UseAnimationLower, float Duration); // Function WBP_MapLegendList.WBP_MapLegendList_C.OnNotificationTextUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnNotifyDeathDroneDestroyed(struct FString KillerId, struct FString VictimId, bool WasKilledByDrone, struct FName KillerItemId, enum class EHWDamageType DamageType, bool WasHeadShot, enum class EHWWeaponType WeaponType); // Function WBP_MapLegendList.WBP_MapLegendList_C.OnNotifyDeathDroneDestroyed // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnObjectiveChanged(struct FText NewObjective, bool UseAnimation, bool PlaySound); // Function WBP_MapLegendList.WBP_MapLegendList_C.OnObjectiveChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnObjectiveDataChanged(struct FHWRoundObjectivesData ObjectiveData); // Function WBP_MapLegendList.WBP_MapLegendList_C.OnObjectiveDataChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnObjectiveItemsUpdated(struct TArray<struct FNameAndCount> Items); // Function WBP_MapLegendList.WBP_MapLegendList_C.OnObjectiveItemsUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerDisconnected(struct FString SessionId); // Function WBP_MapLegendList.WBP_MapLegendList_C.OnPlayerDisconnected // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerDowned(struct FString KillerId, struct FString VictimId, bool WasHeadShot); // Function WBP_MapLegendList.WBP_MapLegendList_C.OnPlayerDowned // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerKilled(struct FString KillerId, struct FString VictimId, bool WasKilledByDrone, struct FName KillerItemId, enum class EHWDamageType DamageType, bool WasHeadShot, enum class EHWWeaponType WeaponType, struct TArray<struct FString> Assists, struct AActor* DamageDealer, struct FName BleedCausedByDamageDealer, enum class EHWDamageType BleedCausedByDamageType); // Function WBP_MapLegendList.WBP_MapLegendList_C.OnPlayerKilled // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerStateSetForCharacter(struct AHWCharacter* Character); // Function WBP_MapLegendList.WBP_MapLegendList_C.OnPlayerStateSetForCharacter // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPossess(struct AHWCharacter* PosessedCharacter); // Function WBP_MapLegendList.WBP_MapLegendList_C.OnPossess // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnReconnectingPlayersUpdated(struct TArray<struct FString> ReconnectingPlayers); // Function WBP_MapLegendList.WBP_MapLegendList_C.OnReconnectingPlayersUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnRoundCleanup(); // Function WBP_MapLegendList.WBP_MapLegendList_C.OnRoundCleanup // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnRoundIntroDataChanged(struct FHWRoundIntroData RoundIntroData); // Function WBP_MapLegendList.WBP_MapLegendList_C.OnRoundIntroDataChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnRoundStateSet(enum class EHWRoundState State); // Function WBP_MapLegendList.WBP_MapLegendList_C.OnRoundStateSet // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnShowProgressBar(float Duration, enum class EHWProgressBarType BarType); // Function WBP_MapLegendList.WBP_MapLegendList_C.OnShowProgressBar // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeammateLoadoutChanged(struct FString PlayerId, struct FString Primary, struct FString Secondary, int32_t PrimaryTier, int32_t SecondaryTier, int32_t ArmorTier, struct FName Consumable, struct FName Throwable, struct FName Placeable); // Function WBP_MapLegendList.WBP_MapLegendList_C.OnTeammateLoadoutChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeammateLoadoutDataChanged(int32_t CharIndex, struct FHWLoadoutData LoadoutData); // Function WBP_MapLegendList.WBP_MapLegendList_C.OnTeammateLoadoutDataChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeammateProfileChanged(struct FString PlayerId, struct FHWPlayerPublicProfile Profile); // Function WBP_MapLegendList.WBP_MapLegendList_C.OnTeammateProfileChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeamReadyStateChanged(struct TArray<struct FString> Ids); // Function WBP_MapLegendList.WBP_MapLegendList_C.OnTeamReadyStateChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeamScoreUpdated(struct FHWTeamScoreData Score); // Function WBP_MapLegendList.WBP_MapLegendList_C.OnTeamScoreUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void SetHudPromptText(struct FText Text, float DisplayDuration); // Function WBP_MapLegendList.WBP_MapLegendList_C.SetHudPromptText // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void PreConstruct(bool IsDesignTime); // Function WBP_MapLegendList.WBP_MapLegendList_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_MapLegendList.WBP_MapLegendList_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void AddMarker(struct AHWMapMarker* Marker); // Function WBP_MapLegendList.WBP_MapLegendList_C.AddMarker // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void MarkerRemoved(struct AHWMapMarker* Marker); // Function WBP_MapLegendList.WBP_MapLegendList_C.MarkerRemoved // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void RefreshObjectivesSection(); // Function WBP_MapLegendList.WBP_MapLegendList_C.RefreshObjectivesSection // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void RefreshPlayerMarkers(); // Function WBP_MapLegendList.WBP_MapLegendList_C.RefreshPlayerMarkers // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnOpenMap(); // Function WBP_MapLegendList.WBP_MapLegendList_C.OnOpenMap // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void CharacterAdded(struct AHWCharacter* Character); // Function WBP_MapLegendList.WBP_MapLegendList_C.CharacterAdded // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void CharacterRemoved(struct AHWCharacter* Character); // Function WBP_MapLegendList.WBP_MapLegendList_C.CharacterRemoved // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PrintPingMarkers(); // Function WBP_MapLegendList.WBP_MapLegendList_C.PrintPingMarkers // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void CreatePlayerMarkers(); // Function WBP_MapLegendList.WBP_MapLegendList_C.CreatePlayerMarkers // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void CreatePlayerMarkerWidget(struct AHWCharacter* Character); // Function WBP_MapLegendList.WBP_MapLegendList_C.CreatePlayerMarkerWidget // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Create Objectives(); // Function WBP_MapLegendList.WBP_MapLegendList_C.Create Objectives // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_MapLegendList(int32_t EntryPoint); // Function WBP_MapLegendList.WBP_MapLegendList_C.ExecuteUbergraph_WBP_MapLegendList // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

