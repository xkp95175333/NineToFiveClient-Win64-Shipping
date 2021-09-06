// WidgetBlueprintGeneratedClass WBP_ObjectiveInfoTab.WBP_ObjectiveInfoTab_C
// Size: 0x2e0 (Inherited: 0x268)
struct UWBP_ObjectiveInfoTab_C : UHWWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWBP_RichTextLabel_C* GameMode; // 0x270(0x08)
	struct UVerticalBox* HeaderAndDetails; // 0x278(0x08)
	struct UWBP_RichTextLabel_C* Location; // 0x280(0x08)
	struct UVerticalBox* PlayersDetails; // 0x288(0x08)
	struct TMap<struct AHWPlayerState*, struct UWBP_Map_PlayerDetails_C*> CharacterToWidget; // 0x290(0x50)

	void RoundHeaderUpdate(); // Function WBP_ObjectiveInfoTab.WBP_ObjectiveInfoTab_C.RoundHeaderUpdate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnAssistsUpdated(int32_t Assists); // Function WBP_ObjectiveInfoTab.WBP_ObjectiveInfoTab_C.OnAssistsUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnCurrentObjectiveIndexUpdated(); // Function WBP_ObjectiveInfoTab.WBP_ObjectiveInfoTab_C.OnCurrentObjectiveIndexUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnGameplayEvent(enum class EHWGameplayEventType Event); // Function WBP_ObjectiveInfoTab.WBP_ObjectiveInfoTab_C.OnGameplayEvent // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnHostileTeamChanged(enum class EHWHostileTeam NewHostileTeam); // Function WBP_ObjectiveInfoTab.WBP_ObjectiveInfoTab_C.OnHostileTeamChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnInputMappingsUpdated(); // Function WBP_ObjectiveInfoTab.WBP_ObjectiveInfoTab_C.OnInputMappingsUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnItemUnlocked(bool WasSuccessful, struct FString Message); // Function WBP_ObjectiveInfoTab.WBP_ObjectiveInfoTab_C.OnItemUnlocked // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnKillsUpdated(int32_t Kills); // Function WBP_ObjectiveInfoTab.WBP_ObjectiveInfoTab_C.OnKillsUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMyReadystateChanged(bool bNewValue); // Function WBP_ObjectiveInfoTab.WBP_ObjectiveInfoTab_C.OnMyReadystateChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnObjectiveCardUpdated(); // Function WBP_ObjectiveInfoTab.WBP_ObjectiveInfoTab_C.OnObjectiveCardUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnObjectiveTextUpdated(); // Function WBP_ObjectiveInfoTab.WBP_ObjectiveInfoTab_C.OnObjectiveTextUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerObjectveImageChanged(struct AHWPlayerState* InPlayerState, struct UTexture2D* Texture); // Function WBP_ObjectiveInfoTab.WBP_ObjectiveInfoTab_C.OnPlayerObjectveImageChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerReadyCountUpdated(int32_t NumReady, int32_t Total); // Function WBP_ObjectiveInfoTab.WBP_ObjectiveInfoTab_C.OnPlayerReadyCountUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerStateAdded(struct APlayerState* PlayerState); // Function WBP_ObjectiveInfoTab.WBP_ObjectiveInfoTab_C.OnPlayerStateAdded // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnRoundHeaderUpdated(); // Function WBP_ObjectiveInfoTab.WBP_ObjectiveInfoTab_C.OnRoundHeaderUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeamInvitationsUpdated(struct TArray<struct FHWTeamInvitation> Invitations); // Function WBP_ObjectiveInfoTab.WBP_ObjectiveInfoTab_C.OnTeamInvitationsUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeamMembersChanged(struct TArray<struct FHWTeamPlayer> MyTeamPlayers); // Function WBP_ObjectiveInfoTab.WBP_ObjectiveInfoTab_C.OnTeamMembersChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeamObjectiveStatusChanged(struct FText Text, int32_t Team); // Function WBP_ObjectiveInfoTab.WBP_ObjectiveInfoTab_C.OnTeamObjectiveStatusChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnTextChatActivated(); // Function WBP_ObjectiveInfoTab.WBP_ObjectiveInfoTab_C.OnTextChatActivated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnTextChatDeactivated(); // Function WBP_ObjectiveInfoTab.WBP_ObjectiveInfoTab_C.OnTextChatDeactivated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnToastMessageAdded(struct FHWToastMessageData Data); // Function WBP_ObjectiveInfoTab.WBP_ObjectiveInfoTab_C.OnToastMessageAdded // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnVoiceChatToggled(bool Active); // Function WBP_ObjectiveInfoTab.WBP_ObjectiveInfoTab_C.OnVoiceChatToggled // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void CancelHudPromptText(); // Function WBP_ObjectiveInfoTab.WBP_ObjectiveInfoTab_C.CancelHudPromptText // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnArmorFeatureActivated(enum class EHWArmorFeatureType Feature, bool Active, float Duration); // Function WBP_ObjectiveInfoTab.WBP_ObjectiveInfoTab_C.OnArmorFeatureActivated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnArmorFeaturesChanged(); // Function WBP_ObjectiveInfoTab.WBP_ObjectiveInfoTab_C.OnArmorFeaturesChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnCameraFeedControllerChanged(struct UHWCameraFeedProviderComponent* Camera); // Function WBP_ObjectiveInfoTab.WBP_ObjectiveInfoTab_C.OnCameraFeedControllerChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnCameraFeedsUpdated(struct TArray<struct UHWCameraFeedProviderComponent*> Cameras); // Function WBP_ObjectiveInfoTab.WBP_ObjectiveInfoTab_C.OnCameraFeedsUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnCloseMap(); // Function WBP_ObjectiveInfoTab.WBP_ObjectiveInfoTab_C.OnCloseMap // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnCombatCompanionStatusChanged(bool Available); // Function WBP_ObjectiveInfoTab.WBP_ObjectiveInfoTab_C.OnCombatCompanionStatusChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnDroneJammed(); // Function WBP_ObjectiveInfoTab.WBP_ObjectiveInfoTab_C.OnDroneJammed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnDronePossessed(); // Function WBP_ObjectiveInfoTab.WBP_ObjectiveInfoTab_C.OnDronePossessed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnDroneUnjammed(); // Function WBP_ObjectiveInfoTab.WBP_ObjectiveInfoTab_C.OnDroneUnjammed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnEnterSpectateMode(bool DroneSelect, bool ShowDeathScreen); // Function WBP_ObjectiveInfoTab.WBP_ObjectiveInfoTab_C.OnEnterSpectateMode // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnExitSpectateMode(); // Function WBP_ObjectiveInfoTab.WBP_ObjectiveInfoTab_C.OnExitSpectateMode // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnHideProgressBar(); // Function WBP_ObjectiveInfoTab.WBP_ObjectiveInfoTab_C.OnHideProgressBar // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnHitReceived(struct FHWPlayerHitReceivedParams Params); // Function WBP_ObjectiveInfoTab.WBP_ObjectiveInfoTab_C.OnHitReceived // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnHitScored(struct FHWPlayerHitScoredParams Params); // Function WBP_ObjectiveInfoTab.WBP_ObjectiveInfoTab_C.OnHitScored // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnInteractionItemEnterView(struct UHWInteractionComponent* Item); // Function WBP_ObjectiveInfoTab.WBP_ObjectiveInfoTab_C.OnInteractionItemEnterView // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnInteractionItemExitView(struct UHWInteractionComponent* Item); // Function WBP_ObjectiveInfoTab.WBP_ObjectiveInfoTab_C.OnInteractionItemExitView // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMetaMessageReceived(struct FHWMetaMessageData Message, float ShowDuration); // Function WBP_ObjectiveInfoTab.WBP_ObjectiveInfoTab_C.OnMetaMessageReceived // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnNotificationTextUpdated(struct FText NewText, struct FLinearColor UpperTextColor, bool UseAnimationUpper, struct FText NewNotificationTextLower, struct FLinearColor LowerTextColor, bool UseAnimationLower, float Duration); // Function WBP_ObjectiveInfoTab.WBP_ObjectiveInfoTab_C.OnNotificationTextUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnNotifyDeathDroneDestroyed(struct FString KillerId, struct FString VictimId, bool WasKilledByDrone, struct FName KillerItemId, enum class EHWDamageType DamageType, bool WasHeadShot, enum class EHWWeaponType WeaponType); // Function WBP_ObjectiveInfoTab.WBP_ObjectiveInfoTab_C.OnNotifyDeathDroneDestroyed // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnObjectiveChanged(struct FText NewObjective, bool UseAnimation, bool PlaySound); // Function WBP_ObjectiveInfoTab.WBP_ObjectiveInfoTab_C.OnObjectiveChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnObjectiveDataChanged(struct FHWRoundObjectivesData ObjectiveData); // Function WBP_ObjectiveInfoTab.WBP_ObjectiveInfoTab_C.OnObjectiveDataChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnObjectiveItemsUpdated(struct TArray<struct FNameAndCount> Items); // Function WBP_ObjectiveInfoTab.WBP_ObjectiveInfoTab_C.OnObjectiveItemsUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnOpenMap(); // Function WBP_ObjectiveInfoTab.WBP_ObjectiveInfoTab_C.OnOpenMap // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerDisconnected(struct FString SessionId); // Function WBP_ObjectiveInfoTab.WBP_ObjectiveInfoTab_C.OnPlayerDisconnected // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerDowned(struct FString KillerId, struct FString VictimId, bool WasHeadShot); // Function WBP_ObjectiveInfoTab.WBP_ObjectiveInfoTab_C.OnPlayerDowned // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerKilled(struct FString KillerId, struct FString VictimId, bool WasKilledByDrone, struct FName KillerItemId, enum class EHWDamageType DamageType, bool WasHeadShot, enum class EHWWeaponType WeaponType, struct TArray<struct FString> Assists, struct AActor* DamageDealer, struct FName BleedCausedByDamageDealer, enum class EHWDamageType BleedCausedByDamageType); // Function WBP_ObjectiveInfoTab.WBP_ObjectiveInfoTab_C.OnPlayerKilled // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerStateSetForCharacter(struct AHWCharacter* Character); // Function WBP_ObjectiveInfoTab.WBP_ObjectiveInfoTab_C.OnPlayerStateSetForCharacter // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPossess(struct AHWCharacter* PosessedCharacter); // Function WBP_ObjectiveInfoTab.WBP_ObjectiveInfoTab_C.OnPossess // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnReconnectingPlayersUpdated(struct TArray<struct FString> ReconnectingPlayers); // Function WBP_ObjectiveInfoTab.WBP_ObjectiveInfoTab_C.OnReconnectingPlayersUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnRoundCleanup(); // Function WBP_ObjectiveInfoTab.WBP_ObjectiveInfoTab_C.OnRoundCleanup // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnRoundIntroDataChanged(struct FHWRoundIntroData RoundIntroData); // Function WBP_ObjectiveInfoTab.WBP_ObjectiveInfoTab_C.OnRoundIntroDataChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnRoundStateSet(enum class EHWRoundState State); // Function WBP_ObjectiveInfoTab.WBP_ObjectiveInfoTab_C.OnRoundStateSet // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnShowProgressBar(float Duration, enum class EHWProgressBarType BarType); // Function WBP_ObjectiveInfoTab.WBP_ObjectiveInfoTab_C.OnShowProgressBar // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeammateLoadoutChanged(struct FString PlayerId, struct FString Primary, struct FString Secondary, int32_t PrimaryTier, int32_t SecondaryTier, int32_t ArmorTier, struct FName Consumable, struct FName Throwable, struct FName Placeable); // Function WBP_ObjectiveInfoTab.WBP_ObjectiveInfoTab_C.OnTeammateLoadoutChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeammateLoadoutDataChanged(int32_t CharIndex, struct FHWLoadoutData LoadoutData); // Function WBP_ObjectiveInfoTab.WBP_ObjectiveInfoTab_C.OnTeammateLoadoutDataChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeammateProfileChanged(struct FString PlayerId, struct FHWPlayerPublicProfile Profile); // Function WBP_ObjectiveInfoTab.WBP_ObjectiveInfoTab_C.OnTeammateProfileChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeamReadyStateChanged(struct TArray<struct FString> Ids); // Function WBP_ObjectiveInfoTab.WBP_ObjectiveInfoTab_C.OnTeamReadyStateChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeamScoreUpdated(struct FHWTeamScoreData Score); // Function WBP_ObjectiveInfoTab.WBP_ObjectiveInfoTab_C.OnTeamScoreUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void SetHudPromptText(struct FText Text, float DisplayDuration); // Function WBP_ObjectiveInfoTab.WBP_ObjectiveInfoTab_C.SetHudPromptText // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_ObjectiveInfoTab.WBP_ObjectiveInfoTab_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void CharacterAdded(struct AHWCharacter* Character); // Function WBP_ObjectiveInfoTab.WBP_ObjectiveInfoTab_C.CharacterAdded // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void RemoveCharacter(struct AHWCharacter* Character); // Function WBP_ObjectiveInfoTab.WBP_ObjectiveInfoTab_C.RemoveCharacter // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void AddPlayers(); // Function WBP_ObjectiveInfoTab.WBP_ObjectiveInfoTab_C.AddPlayers // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void CreatePlayerDetail(struct AHWPlayerState* PlayerState, float BottomPadding); // Function WBP_ObjectiveInfoTab.WBP_ObjectiveInfoTab_C.CreatePlayerDetail // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_ObjectiveInfoTab(int32_t EntryPoint); // Function WBP_ObjectiveInfoTab.WBP_ObjectiveInfoTab_C.ExecuteUbergraph_WBP_ObjectiveInfoTab // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

