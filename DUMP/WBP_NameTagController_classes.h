// WidgetBlueprintGeneratedClass WBP_NameTagController.WBP_NameTagController_C
// Size: 0x338 (Inherited: 0x268)
struct UWBP_NameTagController_C : UHWWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UCanvasPanel* CanvasPanel; // 0x270(0x08)
	struct FVector OffsetFromActorLocation; // 0x278(0x0c)
	char pad_284[0x4]; // 0x284(0x04)
	struct TMap<struct AHWCharacter*, struct UWBP_EnemyNameTag_C*> EnemyNameTags; // 0x288(0x50)
	struct TMap<struct AHWCharacter*, struct UWBP_FriendlyNameTag_C*> FriendlyNameTags; // 0x2d8(0x50)
	float AimedOpacity; // 0x328(0x04)
	struct FVector DroneOffset; // 0x32c(0x0c)

	void AddFriendlyNameTag(struct AHWCharacter* Character); // Function WBP_NameTagController.WBP_NameTagController_C.AddFriendlyNameTag // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateHostileTeam(enum class EHWHostileTeam NewHostileTeam); // Function WBP_NameTagController.WBP_NameTagController_C.UpdateHostileTeam // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetOpacity(struct UWidget* Widget); // Function WBP_NameTagController.WBP_NameTagController_C.SetOpacity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void AddEnemyNameTag(struct AHWCharacter* Character); // Function WBP_NameTagController.WBP_NameTagController_C.AddEnemyNameTag // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateEnemyPosition(struct UWBP_EnemyNameTag_C* Widget); // Function WBP_NameTagController.WBP_NameTagController_C.UpdateEnemyPosition // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateEnemyPositions(); // Function WBP_NameTagController.WBP_NameTagController_C.UpdateEnemyPositions // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void InitializeEnemyNameTags(); // Function WBP_NameTagController.WBP_NameTagController_C.InitializeEnemyNameTags // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateFriendlyPositions(); // Function WBP_NameTagController.WBP_NameTagController_C.UpdateFriendlyPositions // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	struct FVector GetWorldLocation(struct APawn* Pawn); // Function WBP_NameTagController.WBP_NameTagController_C.GetWorldLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void InitializeFriendlyNameTags(); // Function WBP_NameTagController.WBP_NameTagController_C.InitializeFriendlyNameTags // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void CancelHudPromptText(); // Function WBP_NameTagController.WBP_NameTagController_C.CancelHudPromptText // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnArmorFeatureActivated(enum class EHWArmorFeatureType Feature, bool Active, float Duration); // Function WBP_NameTagController.WBP_NameTagController_C.OnArmorFeatureActivated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnArmorFeaturesChanged(); // Function WBP_NameTagController.WBP_NameTagController_C.OnArmorFeaturesChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnCameraFeedControllerChanged(struct UHWCameraFeedProviderComponent* Camera); // Function WBP_NameTagController.WBP_NameTagController_C.OnCameraFeedControllerChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnCameraFeedsUpdated(struct TArray<struct UHWCameraFeedProviderComponent*> Cameras); // Function WBP_NameTagController.WBP_NameTagController_C.OnCameraFeedsUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnCloseMap(); // Function WBP_NameTagController.WBP_NameTagController_C.OnCloseMap // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnCombatCompanionStatusChanged(bool Available); // Function WBP_NameTagController.WBP_NameTagController_C.OnCombatCompanionStatusChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnDroneJammed(); // Function WBP_NameTagController.WBP_NameTagController_C.OnDroneJammed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnDronePossessed(); // Function WBP_NameTagController.WBP_NameTagController_C.OnDronePossessed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnDroneUnjammed(); // Function WBP_NameTagController.WBP_NameTagController_C.OnDroneUnjammed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnEnterSpectateMode(bool DroneSelect, bool ShowDeathScreen); // Function WBP_NameTagController.WBP_NameTagController_C.OnEnterSpectateMode // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnExitSpectateMode(); // Function WBP_NameTagController.WBP_NameTagController_C.OnExitSpectateMode // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnHideProgressBar(); // Function WBP_NameTagController.WBP_NameTagController_C.OnHideProgressBar // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnHitReceived(struct FHWPlayerHitReceivedParams Params); // Function WBP_NameTagController.WBP_NameTagController_C.OnHitReceived // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnHitScored(struct FHWPlayerHitScoredParams Params); // Function WBP_NameTagController.WBP_NameTagController_C.OnHitScored // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnInteractionItemEnterView(struct UHWInteractionComponent* Item); // Function WBP_NameTagController.WBP_NameTagController_C.OnInteractionItemEnterView // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnInteractionItemExitView(struct UHWInteractionComponent* Item); // Function WBP_NameTagController.WBP_NameTagController_C.OnInteractionItemExitView // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMetaMessageReceived(struct FHWMetaMessageData Message, float ShowDuration); // Function WBP_NameTagController.WBP_NameTagController_C.OnMetaMessageReceived // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnNotificationTextUpdated(struct FText NewText, struct FLinearColor UpperTextColor, bool UseAnimationUpper, struct FText NewNotificationTextLower, struct FLinearColor LowerTextColor, bool UseAnimationLower, float Duration); // Function WBP_NameTagController.WBP_NameTagController_C.OnNotificationTextUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnNotifyDeathDroneDestroyed(struct FString KillerId, struct FString VictimId, bool WasKilledByDrone, struct FName KillerItemId, enum class EHWDamageType DamageType, bool WasHeadShot, enum class EHWWeaponType WeaponType); // Function WBP_NameTagController.WBP_NameTagController_C.OnNotifyDeathDroneDestroyed // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnObjectiveChanged(struct FText NewObjective, bool UseAnimation, bool PlaySound); // Function WBP_NameTagController.WBP_NameTagController_C.OnObjectiveChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnObjectiveDataChanged(struct FHWRoundObjectivesData ObjectiveData); // Function WBP_NameTagController.WBP_NameTagController_C.OnObjectiveDataChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnObjectiveItemsUpdated(struct TArray<struct FNameAndCount> Items); // Function WBP_NameTagController.WBP_NameTagController_C.OnObjectiveItemsUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnOpenMap(); // Function WBP_NameTagController.WBP_NameTagController_C.OnOpenMap // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerDisconnected(struct FString SessionId); // Function WBP_NameTagController.WBP_NameTagController_C.OnPlayerDisconnected // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerDowned(struct FString KillerId, struct FString VictimId, bool WasHeadShot); // Function WBP_NameTagController.WBP_NameTagController_C.OnPlayerDowned // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerKilled(struct FString KillerId, struct FString VictimId, bool WasKilledByDrone, struct FName KillerItemId, enum class EHWDamageType DamageType, bool WasHeadShot, enum class EHWWeaponType WeaponType, struct TArray<struct FString> Assists, struct AActor* DamageDealer, struct FName BleedCausedByDamageDealer, enum class EHWDamageType BleedCausedByDamageType); // Function WBP_NameTagController.WBP_NameTagController_C.OnPlayerKilled // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnPossess(struct AHWCharacter* PosessedCharacter); // Function WBP_NameTagController.WBP_NameTagController_C.OnPossess // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnReconnectingPlayersUpdated(struct TArray<struct FString> ReconnectingPlayers); // Function WBP_NameTagController.WBP_NameTagController_C.OnReconnectingPlayersUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnRoundCleanup(); // Function WBP_NameTagController.WBP_NameTagController_C.OnRoundCleanup // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnRoundIntroDataChanged(struct FHWRoundIntroData RoundIntroData); // Function WBP_NameTagController.WBP_NameTagController_C.OnRoundIntroDataChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnRoundStateSet(enum class EHWRoundState State); // Function WBP_NameTagController.WBP_NameTagController_C.OnRoundStateSet // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnShowProgressBar(float Duration, enum class EHWProgressBarType BarType); // Function WBP_NameTagController.WBP_NameTagController_C.OnShowProgressBar // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeammateLoadoutChanged(struct FString PlayerId, struct FString Primary, struct FString Secondary, int32_t PrimaryTier, int32_t SecondaryTier, int32_t ArmorTier, struct FName Consumable, struct FName Throwable, struct FName Placeable); // Function WBP_NameTagController.WBP_NameTagController_C.OnTeammateLoadoutChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeammateLoadoutDataChanged(int32_t CharIndex, struct FHWLoadoutData LoadoutData); // Function WBP_NameTagController.WBP_NameTagController_C.OnTeammateLoadoutDataChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeammateProfileChanged(struct FString PlayerId, struct FHWPlayerPublicProfile Profile); // Function WBP_NameTagController.WBP_NameTagController_C.OnTeammateProfileChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeamReadyStateChanged(struct TArray<struct FString> Ids); // Function WBP_NameTagController.WBP_NameTagController_C.OnTeamReadyStateChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeamScoreUpdated(struct FHWTeamScoreData Score); // Function WBP_NameTagController.WBP_NameTagController_C.OnTeamScoreUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void SetHudPromptText(struct FText Text, float DisplayDuration); // Function WBP_NameTagController.WBP_NameTagController_C.SetHudPromptText // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnAssistsUpdated(int32_t Assists); // Function WBP_NameTagController.WBP_NameTagController_C.OnAssistsUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnCurrentObjectiveIndexUpdated(); // Function WBP_NameTagController.WBP_NameTagController_C.OnCurrentObjectiveIndexUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnGameplayEvent(enum class EHWGameplayEventType Event); // Function WBP_NameTagController.WBP_NameTagController_C.OnGameplayEvent // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnInputMappingsUpdated(); // Function WBP_NameTagController.WBP_NameTagController_C.OnInputMappingsUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnItemUnlocked(bool WasSuccessful, struct FString Message); // Function WBP_NameTagController.WBP_NameTagController_C.OnItemUnlocked // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnKillsUpdated(int32_t Kills); // Function WBP_NameTagController.WBP_NameTagController_C.OnKillsUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMyReadystateChanged(bool bNewValue); // Function WBP_NameTagController.WBP_NameTagController_C.OnMyReadystateChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnObjectiveCardUpdated(); // Function WBP_NameTagController.WBP_NameTagController_C.OnObjectiveCardUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnObjectiveTextUpdated(); // Function WBP_NameTagController.WBP_NameTagController_C.OnObjectiveTextUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerObjectveImageChanged(struct AHWPlayerState* InPlayerState, struct UTexture2D* Texture); // Function WBP_NameTagController.WBP_NameTagController_C.OnPlayerObjectveImageChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerReadyCountUpdated(int32_t NumReady, int32_t Total); // Function WBP_NameTagController.WBP_NameTagController_C.OnPlayerReadyCountUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerStateAdded(struct APlayerState* PlayerState); // Function WBP_NameTagController.WBP_NameTagController_C.OnPlayerStateAdded // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnRoundHeaderUpdated(); // Function WBP_NameTagController.WBP_NameTagController_C.OnRoundHeaderUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeamInvitationsUpdated(struct TArray<struct FHWTeamInvitation> Invitations); // Function WBP_NameTagController.WBP_NameTagController_C.OnTeamInvitationsUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeamMembersChanged(struct TArray<struct FHWTeamPlayer> MyTeamPlayers); // Function WBP_NameTagController.WBP_NameTagController_C.OnTeamMembersChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeamObjectiveStatusChanged(struct FText Text, int32_t Team); // Function WBP_NameTagController.WBP_NameTagController_C.OnTeamObjectiveStatusChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnTextChatActivated(); // Function WBP_NameTagController.WBP_NameTagController_C.OnTextChatActivated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnTextChatDeactivated(); // Function WBP_NameTagController.WBP_NameTagController_C.OnTextChatDeactivated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnToastMessageAdded(struct FHWToastMessageData Data); // Function WBP_NameTagController.WBP_NameTagController_C.OnToastMessageAdded // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnVoiceChatToggled(bool Active); // Function WBP_NameTagController.WBP_NameTagController_C.OnVoiceChatToggled // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_NameTagController.WBP_NameTagController_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_NameTagController.WBP_NameTagController_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerStateSetForCharacter(struct AHWCharacter* Character); // Function WBP_NameTagController.WBP_NameTagController_C.OnPlayerStateSetForCharacter // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnHostileTeamChanged(enum class EHWHostileTeam NewHostileTeam); // Function WBP_NameTagController.WBP_NameTagController_C.OnHostileTeamChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_NameTagController(int32_t EntryPoint); // Function WBP_NameTagController.WBP_NameTagController_C.ExecuteUbergraph_WBP_NameTagController // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

