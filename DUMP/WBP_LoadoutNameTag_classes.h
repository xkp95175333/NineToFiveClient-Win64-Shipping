// WidgetBlueprintGeneratedClass WBP_LoadoutNameTag.WBP_LoadoutNameTag_C
// Size: 0x334 (Inherited: 0x268)
struct UWBP_LoadoutNameTag_C : UHWWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct USizeBox* AddFriendBtn; // 0x270(0x08)
	struct USizeBox* Booster; // 0x278(0x08)
	struct UImage* BoosterIcon; // 0x280(0x08)
	struct UButton* BTN_AddFriend; // 0x288(0x08)
	struct UButton* BTN_Kick; // 0x290(0x08)
	struct UBorder* Friend_Border; // 0x298(0x08)
	struct UImage* IMG_Status; // 0x2a0(0x08)
	struct UBorder* Kick_Border; // 0x2a8(0x08)
	struct USizeBox* KickBtnBox; // 0x2b0(0x08)
	struct USizeBox* Platform; // 0x2b8(0x08)
	struct UImage* PlatformIcon; // 0x2c0(0x08)
	struct USizeBox* TeamLeader; // 0x2c8(0x08)
	struct UImage* TeamLeaderIcon; // 0x2d0(0x08)
	struct UWBP_RichTextLabel_C* Title; // 0x2d8(0x08)
	struct UWBP_PlayerVoiceIndicator_C* VOIP; // 0x2e0(0x08)
	struct UWBP_RichTextLabel_C* WBP_Label; // 0x2e8(0x08)
	struct FString Name; // 0x2f0(0x10)
	struct FString BackendPlayerId; // 0x300(0x10)
	bool DisplayKickButton; // 0x310(0x01)
	bool ReadyStatus; // 0x311(0x01)
	char pad_312[0x2]; // 0x312(0x02)
	struct FLinearColor HoveringColour; // 0x314(0x10)
	struct FLinearColor UnhoveringColour; // 0x324(0x10)

	bool ShouldRenderKickButton(); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.ShouldRenderKickButton // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void UpdateStatusIcon(); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.UpdateStatusIcon // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void CanBeKicked(bool bIsTeamLeader); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.CanBeKicked // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void OnUserLoadFailed(struct FString SessionIdLoadedUser); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.OnUserLoadFailed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnUserStored(); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.OnUserStored // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnUserStoreFailed(); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.OnUserStoreFailed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnWholePartyReady(); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.OnWholePartyReady // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void CancelHudPromptText(); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.CancelHudPromptText // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnArmorFeatureActivated(enum class EHWArmorFeatureType Feature, bool Active, float Duration); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.OnArmorFeatureActivated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnArmorFeaturesChanged(); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.OnArmorFeaturesChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnCameraFeedControllerChanged(struct UHWCameraFeedProviderComponent* Camera); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.OnCameraFeedControllerChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnCameraFeedsUpdated(struct TArray<struct UHWCameraFeedProviderComponent*> Cameras); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.OnCameraFeedsUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnCloseMap(); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.OnCloseMap // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnCombatCompanionStatusChanged(bool Available); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.OnCombatCompanionStatusChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnDroneJammed(); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.OnDroneJammed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnDronePossessed(); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.OnDronePossessed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnDroneUnjammed(); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.OnDroneUnjammed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnEnterSpectateMode(bool DroneSelect, bool ShowDeathScreen); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.OnEnterSpectateMode // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnExitSpectateMode(); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.OnExitSpectateMode // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnHideProgressBar(); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.OnHideProgressBar // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnHitReceived(struct FHWPlayerHitReceivedParams Params); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.OnHitReceived // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnHitScored(struct FHWPlayerHitScoredParams Params); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.OnHitScored // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnInteractionItemEnterView(struct UHWInteractionComponent* Item); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.OnInteractionItemEnterView // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnInteractionItemExitView(struct UHWInteractionComponent* Item); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.OnInteractionItemExitView // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMetaMessageReceived(struct FHWMetaMessageData Message, float ShowDuration); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.OnMetaMessageReceived // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnNotificationTextUpdated(struct FText NewText, struct FLinearColor UpperTextColor, bool UseAnimationUpper, struct FText NewNotificationTextLower, struct FLinearColor LowerTextColor, bool UseAnimationLower, float Duration); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.OnNotificationTextUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnNotifyDeathDroneDestroyed(struct FString KillerId, struct FString VictimId, bool WasKilledByDrone, struct FName KillerItemId, enum class EHWDamageType DamageType, bool WasHeadShot, enum class EHWWeaponType WeaponType); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.OnNotifyDeathDroneDestroyed // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnObjectiveChanged(struct FText NewObjective, bool UseAnimation, bool PlaySound); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.OnObjectiveChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnObjectiveDataChanged(struct FHWRoundObjectivesData ObjectiveData); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.OnObjectiveDataChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnObjectiveItemsUpdated(struct TArray<struct FNameAndCount> Items); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.OnObjectiveItemsUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnOpenMap(); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.OnOpenMap // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerDisconnected(struct FString SessionId); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.OnPlayerDisconnected // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerDowned(struct FString KillerId, struct FString VictimId, bool WasHeadShot); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.OnPlayerDowned // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerKilled(struct FString KillerId, struct FString VictimId, bool WasKilledByDrone, struct FName KillerItemId, enum class EHWDamageType DamageType, bool WasHeadShot, enum class EHWWeaponType WeaponType, struct TArray<struct FString> Assists, struct AActor* DamageDealer, struct FName BleedCausedByDamageDealer, enum class EHWDamageType BleedCausedByDamageType); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.OnPlayerKilled // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerStateSetForCharacter(struct AHWCharacter* Character); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.OnPlayerStateSetForCharacter // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPossess(struct AHWCharacter* PosessedCharacter); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.OnPossess // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnReconnectingPlayersUpdated(struct TArray<struct FString> ReconnectingPlayers); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.OnReconnectingPlayersUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnRoundCleanup(); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.OnRoundCleanup // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnRoundIntroDataChanged(struct FHWRoundIntroData RoundIntroData); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.OnRoundIntroDataChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnRoundStateSet(enum class EHWRoundState State); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.OnRoundStateSet // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnShowProgressBar(float Duration, enum class EHWProgressBarType BarType); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.OnShowProgressBar // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeammateLoadoutChanged(struct FString PlayerId, struct FString Primary, struct FString Secondary, int32_t PrimaryTier, int32_t SecondaryTier, int32_t ArmorTier, struct FName Consumable, struct FName Throwable, struct FName Placeable); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.OnTeammateLoadoutChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeammateLoadoutDataChanged(int32_t CharIndex, struct FHWLoadoutData LoadoutData); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.OnTeammateLoadoutDataChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeammateProfileChanged(struct FString PlayerId, struct FHWPlayerPublicProfile Profile); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.OnTeammateProfileChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeamScoreUpdated(struct FHWTeamScoreData Score); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.OnTeamScoreUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void SetHudPromptText(struct FText Text, float DisplayDuration); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.SetHudPromptText // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnAssistsUpdated(int32_t Assists); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.OnAssistsUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnCurrentObjectiveIndexUpdated(); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.OnCurrentObjectiveIndexUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnGameplayEvent(enum class EHWGameplayEventType Event); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.OnGameplayEvent // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnHostileTeamChanged(enum class EHWHostileTeam NewHostileTeam); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.OnHostileTeamChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnInputMappingsUpdated(); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.OnInputMappingsUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnItemUnlocked(bool WasSuccessful, struct FString Message); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.OnItemUnlocked // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnKillsUpdated(int32_t Kills); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.OnKillsUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMyReadystateChanged(bool bNewValue); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.OnMyReadystateChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnObjectiveCardUpdated(); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.OnObjectiveCardUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnObjectiveTextUpdated(); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.OnObjectiveTextUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerObjectveImageChanged(struct AHWPlayerState* InPlayerState, struct UTexture2D* Texture); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.OnPlayerObjectveImageChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerReadyCountUpdated(int32_t NumReady, int32_t Total); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.OnPlayerReadyCountUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerStateAdded(struct APlayerState* PlayerState); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.OnPlayerStateAdded // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnRoundHeaderUpdated(); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.OnRoundHeaderUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeamInvitationsUpdated(struct TArray<struct FHWTeamInvitation> Invitations); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.OnTeamInvitationsUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeamObjectiveStatusChanged(struct FText Text, int32_t Team); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.OnTeamObjectiveStatusChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnTextChatActivated(); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.OnTextChatActivated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnTextChatDeactivated(); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.OnTextChatDeactivated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnToastMessageAdded(struct FHWToastMessageData Data); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.OnToastMessageAdded // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnVoiceChatToggled(bool Active); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.OnVoiceChatToggled // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void PreConstruct(bool IsDesignTime); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnUserLoaded(struct FString SessionIdLoadedUser); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.OnUserLoaded // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void SetName(struct FString Name); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.SetName // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__BTN_Kick_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.BndEvt__BTN_Kick_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void OnUpdateRequired(); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.OnUpdateRequired // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void SetBackendPlayerId(struct FString BackendPlayerId); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.SetBackendPlayerId // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void KickPlayerResponse(bool Result); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.KickPlayerResponse // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeamInviteAcceptProcessed(bool Success, enum class EHWErrorMessage ErrorMessage); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.OnTeamInviteAcceptProcessed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnShopCampaignsLoaded(); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.OnShopCampaignsLoaded // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void SetDisplayKickButton(bool DisplayKickButton); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.SetDisplayKickButton // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnServerPingsDone(); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.OnServerPingsDone // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnReconnectableMatchLost(); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.OnReconnectableMatchLost // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMatchStatusWaiting(); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.OnMatchStatusWaiting // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void SetReadyStatus(bool Value); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.SetReadyStatus // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnMatchStatusStarted(); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.OnMatchStatusStarted // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeamMembersChanged(struct TArray<struct FHWTeamPlayer> MyTeamPlayers); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.OnTeamMembersChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnMatchStatusOpen(); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.OnMatchStatusOpen // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMatchStatusMatched(); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.OnMatchStatusMatched // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeamReadyStateChanged(struct TArray<struct FString> Ids); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.OnTeamReadyStateChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnMasterDataLoadFailed(enum class EHWErrorMessage Error, struct FString Message); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.OnMasterDataLoadFailed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMasterDataLoaded(); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.OnMasterDataLoaded // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnLogoutCompleted(); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.OnLogoutCompleted // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__BTN_Kick_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.BndEvt__BTN_Kick_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__BTN_Kick_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.BndEvt__BTN_Kick_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void OnGetWeekInfoFailed(); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.OnGetWeekInfoFailed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnGetWeekInfo(struct FHWWeekInfoResponse Response); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.OnGetWeekInfo // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnCanReconnectToQueue(); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.OnCanReconnectToQueue // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnCanReconnectToMatch(); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.OnCanReconnectToMatch // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void SetPlatformIcon(enum class EHWGamePlatform Platform); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.SetPlatformIcon // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void StartPoolingTeamEvents(); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.StartPoolingTeamEvents // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void StopPoolingTeamEvents(); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.StopPoolingTeamEvents // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Destruct(); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void TeamEvent(enum class EHWTeamEventType EventType, struct FHWTeamPlayer Player); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.TeamEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void TeamInviteEvent(enum class EHWTeamInviteEventType EventType, struct FHWTeamInvitation Invite); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.TeamInviteEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateTeamLeaderVisuals(); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.UpdateTeamLeaderVisuals // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__BTN_AddFriend_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.BndEvt__BTN_AddFriend_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void UpdateAddFriendButton(); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.UpdateAddFriendButton // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void AddFriendResponse(struct FHWResponseBase Response); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.AddFriendResponse // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void AddFriendError(enum class EHWErrorMessage ErrorMessage); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.AddFriendError // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void DoNothing(bool Result); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.DoNothing // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void DoNothing2(bool Result); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.DoNothing2 // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnFriendsListUpdated(bool Success, struct FHWFetchFriendsResponse Response); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.OnFriendsListUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateButtonsPadding(); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.UpdateButtonsPadding // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_LoadoutNameTag_BTN_AddFriend_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.BndEvt__WBP_LoadoutNameTag_BTN_AddFriend_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_LoadoutNameTag_BTN_AddFriend_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature(); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.BndEvt__WBP_LoadoutNameTag_BTN_AddFriend_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_LoadoutNameTag(int32_t EntryPoint); // Function WBP_LoadoutNameTag.WBP_LoadoutNameTag_C.ExecuteUbergraph_WBP_LoadoutNameTag // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

