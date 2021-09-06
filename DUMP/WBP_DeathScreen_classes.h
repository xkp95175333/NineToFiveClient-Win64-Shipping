// WidgetBlueprintGeneratedClass WBP_DeathScreen.WBP_DeathScreen_C
// Size: 0x4c8 (Inherited: 0x268)
struct UWBP_DeathScreen_C : UHWWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWidgetAnimation* Misadventure_Switch; // 0x270(0x08)
	struct UWidgetAnimation* OpponentDetails_Switch; // 0x278(0x08)
	struct UWidgetAnimation* DroneNotAvailable_Appear; // 0x280(0x08)
	struct UWidgetAnimation* DroneAvailable_Appear; // 0x288(0x08)
	struct UWidgetAnimation* Appear; // 0x290(0x08)
	struct UWBP_RichTextLabel_C* AssistAmount; // 0x298(0x08)
	struct UWBP_RichTextLabel_C* AssistsLabel; // 0x2a0(0x08)
	struct UImage* Background; // 0x2a8(0x08)
	struct UImage* Background_2; // 0x2b0(0x08)
	struct UImage* Background_3; // 0x2b8(0x08)
	struct UImage* Background_4; // 0x2c0(0x08)
	struct UImage* Background_5; // 0x2c8(0x08)
	struct UImage* Background_7; // 0x2d0(0x08)
	struct UImage* BackgroundColor; // 0x2d8(0x08)
	struct UImage* BottomDetail; // 0x2e0(0x08)
	struct UImage* BottomDetail_2; // 0x2e8(0x08)
	struct UImage* Bottomline; // 0x2f0(0x08)
	struct UWBP_RichTextLabel_C* BulletText; // 0x2f8(0x08)
	struct UWBP_RichTextLabel_C* BulletText_2; // 0x300(0x08)
	struct UWBP_RichTextLabel_C* DamageDealtAmount; // 0x308(0x08)
	struct UWBP_RichTextLabel_C* DamageDealtLabel; // 0x310(0x08)
	struct UWBP_RichTextLabel_C* DamageTakenAmount; // 0x318(0x08)
	struct UWBP_RichTextLabel_C* DamageTakenAmount_2; // 0x320(0x08)
	struct UWBP_RichTextLabel_C* DamageTakenLabel; // 0x328(0x08)
	struct UWBP_RichTextLabel_C* DamageTakenLabel_4; // 0x330(0x08)
	struct UWBP_RichTextLabel_C* DeathText; // 0x338(0x08)
	struct UWidgetSwitcher* DetailsSwitcher; // 0x340(0x08)
	struct UWBP_Label_C* DistanceLabel; // 0x348(0x08)
	struct UVerticalBox* DroneAvailable; // 0x350(0x08)
	struct UWBP_RichTextLabel_C* DroneAvailableLabel; // 0x358(0x08)
	struct UWBP_Label_C* DroneDeployLabel; // 0x360(0x08)
	struct UVerticalBox* DroneNotAvailable; // 0x368(0x08)
	struct UWBP_RichTextLabel_C* DroneNotAvailableLabel; // 0x370(0x08)
	struct UWidgetSwitcher* DroneStatusSwitcher; // 0x378(0x08)
	struct UImage* Filter; // 0x380(0x08)
	struct UImage* Grid; // 0x388(0x08)
	struct UWBP_RichTextLabel_C* HealthLeftAmount; // 0x390(0x08)
	struct UWBP_RichTextLabel_C* HealthLeftLabel; // 0x398(0x08)
	struct UImage* Image; // 0x3a0(0x08)
	struct UImage* Image_45; // 0x3a8(0x08)
	struct UWBP_RichTextLabel_C* KillAmount; // 0x3b0(0x08)
	struct UWBP_RichTextLabel_C* KillerName; // 0x3b8(0x08)
	struct UImage* KillIcon; // 0x3c0(0x08)
	struct UHorizontalBox* KillsAssists; // 0x3c8(0x08)
	struct UWBP_RichTextLabel_C* KillsLabel; // 0x3d0(0x08)
	struct UWBP_RichTextLabel_C* KillType; // 0x3d8(0x08)
	struct UImage* KillWeaponIcon; // 0x3e0(0x08)
	struct UImage* LeftDetail; // 0x3e8(0x08)
	struct UWidgetSwitcher* MessageSwitcher; // 0x3f0(0x08)
	struct UHorizontalBox* Misadventure; // 0x3f8(0x08)
	struct UImage* MisadventureIcon; // 0x400(0x08)
	struct UWBP_RichTextLabel_C* MisadventureLabel; // 0x408(0x08)
	struct UWBP_RichTextLabel_C* MisadventureType; // 0x410(0x08)
	struct UImage* MisadventureWeaponIcon; // 0x418(0x08)
	struct UImage* PlayerAvatar_2; // 0x420(0x08)
	struct UImage* RightDetail; // 0x428(0x08)
	struct UWBP_Button_C* SelectDroneButton; // 0x430(0x08)
	struct UImage* TopDetail; // 0x438(0x08)
	struct UImage* TopDetail_2; // 0x440(0x08)
	struct UImage* Topline; // 0x448(0x08)
	struct UHorizontalBox* TypeTool; // 0x450(0x08)
	struct UWBP_KeyPrompt_C* WBP_KeyPrompt; // 0x458(0x08)
	struct UWBP_RichTextLabel_C* WBP_RichTextLabel_3; // 0x460(0x08)
	struct UWBP_RichTextLabel_C* WBP_RichTextLabel_4; // 0x468(0x08)
	struct UWBP_SkipTimer_C* WBP_SkipTimer; // 0x470(0x08)
	struct UWBP_RichTextLabel_C* Weapon; // 0x478(0x08)
	struct FName DroneSelectionHUDName; // 0x480(0x08)
	float DronePickDelay; // 0x488(0x04)
	float DronePickTimestamp; // 0x48c(0x04)
	struct FTimerHandle DronePickTimer; // 0x490(0x08)
	struct UMediaPlayer* MediaPlayer; // 0x498(0x08)
	bool IsFriendlyKill; // 0x4a0(0x01)
	enum class EHWDamageType DamageType; // 0x4a1(0x01)
	char pad_4A2[0x6]; // 0x4a2(0x06)
	struct AHWPlayerState* KillerPlayerState; // 0x4a8(0x08)
	bool AnimationFirstHalfDone; // 0x4b0(0x01)
	char pad_4B1[0x7]; // 0x4b1(0x07)
	struct FMulticastInlineDelegate SwitchToSpectate; // 0x4b8(0x10)

	struct FVector GetDamageDealerLocation(enum class EHWDamageType DamageType, struct AActor* DamageDealer, bool DamageDealerValid); // Function WBP_DeathScreen.WBP_DeathScreen_C.GetDamageDealerLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	float GetDistance(enum class EHWDamageType DamageType, struct AActor* DamageDealer); // Function WBP_DeathScreen.WBP_DeathScreen_C.GetDistance // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void SetContent(struct FName ItemId, enum class EHWWeaponType WeaponType, bool IsDrone, enum class EHWDamageType DamageType, struct FString KillerId, struct FString TargetId, float DistanceCM); // Function WBP_DeathScreen.WBP_DeathScreen_C.SetContent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetKillerData(bool WasDrone, struct UHWInjuryComponent* InjuryComponent, struct UHWHumanArmorComponent* ArmorComponent); // Function WBP_DeathScreen.WBP_DeathScreen_C.SetKillerData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void DidIDie(struct FString VictimSessionId, bool Yes); // Function WBP_DeathScreen.WBP_DeathScreen_C.DidIDie // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void OnCameraFeedsUpdated(struct TArray<struct UHWCameraFeedProviderComponent*> Cameras); // Function WBP_DeathScreen.WBP_DeathScreen_C.OnCameraFeedsUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnCloseMap(); // Function WBP_DeathScreen.WBP_DeathScreen_C.OnCloseMap // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnCombatCompanionStatusChanged(bool Available); // Function WBP_DeathScreen.WBP_DeathScreen_C.OnCombatCompanionStatusChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnDroneJammed(); // Function WBP_DeathScreen.WBP_DeathScreen_C.OnDroneJammed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnDronePossessed(); // Function WBP_DeathScreen.WBP_DeathScreen_C.OnDronePossessed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnDroneUnjammed(); // Function WBP_DeathScreen.WBP_DeathScreen_C.OnDroneUnjammed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnEnterSpectateMode(bool DroneSelect, bool ShowDeathScreen); // Function WBP_DeathScreen.WBP_DeathScreen_C.OnEnterSpectateMode // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnExitSpectateMode(); // Function WBP_DeathScreen.WBP_DeathScreen_C.OnExitSpectateMode // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnHideProgressBar(); // Function WBP_DeathScreen.WBP_DeathScreen_C.OnHideProgressBar // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnHitReceived(struct FHWPlayerHitReceivedParams Params); // Function WBP_DeathScreen.WBP_DeathScreen_C.OnHitReceived // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnHitScored(struct FHWPlayerHitScoredParams Params); // Function WBP_DeathScreen.WBP_DeathScreen_C.OnHitScored // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnInteractionItemEnterView(struct UHWInteractionComponent* Item); // Function WBP_DeathScreen.WBP_DeathScreen_C.OnInteractionItemEnterView // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnInteractionItemExitView(struct UHWInteractionComponent* Item); // Function WBP_DeathScreen.WBP_DeathScreen_C.OnInteractionItemExitView // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMetaMessageReceived(struct FHWMetaMessageData Message, float ShowDuration); // Function WBP_DeathScreen.WBP_DeathScreen_C.OnMetaMessageReceived // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnNotificationTextUpdated(struct FText NewText, struct FLinearColor UpperTextColor, bool UseAnimationUpper, struct FText NewNotificationTextLower, struct FLinearColor LowerTextColor, bool UseAnimationLower, float Duration); // Function WBP_DeathScreen.WBP_DeathScreen_C.OnNotificationTextUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnNotifyDeathDroneDestroyed(struct FString KillerId, struct FString VictimId, bool WasKilledByDrone, struct FName KillerItemId, enum class EHWDamageType DamageType, bool WasHeadShot, enum class EHWWeaponType WeaponType); // Function WBP_DeathScreen.WBP_DeathScreen_C.OnNotifyDeathDroneDestroyed // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnObjectiveChanged(struct FText NewObjective, bool UseAnimation, bool PlaySound); // Function WBP_DeathScreen.WBP_DeathScreen_C.OnObjectiveChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnObjectiveDataChanged(struct FHWRoundObjectivesData ObjectiveData); // Function WBP_DeathScreen.WBP_DeathScreen_C.OnObjectiveDataChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnObjectiveItemsUpdated(struct TArray<struct FNameAndCount> Items); // Function WBP_DeathScreen.WBP_DeathScreen_C.OnObjectiveItemsUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnOpenMap(); // Function WBP_DeathScreen.WBP_DeathScreen_C.OnOpenMap // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerDisconnected(struct FString SessionId); // Function WBP_DeathScreen.WBP_DeathScreen_C.OnPlayerDisconnected // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerDowned(struct FString KillerId, struct FString VictimId, bool WasHeadShot); // Function WBP_DeathScreen.WBP_DeathScreen_C.OnPlayerDowned // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerStateSetForCharacter(struct AHWCharacter* Character); // Function WBP_DeathScreen.WBP_DeathScreen_C.OnPlayerStateSetForCharacter // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPossess(struct AHWCharacter* PosessedCharacter); // Function WBP_DeathScreen.WBP_DeathScreen_C.OnPossess // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnReconnectingPlayersUpdated(struct TArray<struct FString> ReconnectingPlayers); // Function WBP_DeathScreen.WBP_DeathScreen_C.OnReconnectingPlayersUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnRoundCleanup(); // Function WBP_DeathScreen.WBP_DeathScreen_C.OnRoundCleanup // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnRoundIntroDataChanged(struct FHWRoundIntroData RoundIntroData); // Function WBP_DeathScreen.WBP_DeathScreen_C.OnRoundIntroDataChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnRoundStateSet(enum class EHWRoundState State); // Function WBP_DeathScreen.WBP_DeathScreen_C.OnRoundStateSet // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnShowProgressBar(float Duration, enum class EHWProgressBarType BarType); // Function WBP_DeathScreen.WBP_DeathScreen_C.OnShowProgressBar // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeammateLoadoutChanged(struct FString PlayerId, struct FString Primary, struct FString Secondary, int32_t PrimaryTier, int32_t SecondaryTier, int32_t ArmorTier, struct FName Consumable, struct FName Throwable, struct FName Placeable); // Function WBP_DeathScreen.WBP_DeathScreen_C.OnTeammateLoadoutChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeammateLoadoutDataChanged(int32_t CharIndex, struct FHWLoadoutData LoadoutData); // Function WBP_DeathScreen.WBP_DeathScreen_C.OnTeammateLoadoutDataChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeammateProfileChanged(struct FString PlayerId, struct FHWPlayerPublicProfile Profile); // Function WBP_DeathScreen.WBP_DeathScreen_C.OnTeammateProfileChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeamReadyStateChanged(struct TArray<struct FString> Ids); // Function WBP_DeathScreen.WBP_DeathScreen_C.OnTeamReadyStateChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeamScoreUpdated(struct FHWTeamScoreData Score); // Function WBP_DeathScreen.WBP_DeathScreen_C.OnTeamScoreUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void SetHudPromptText(struct FText Text, float DisplayDuration); // Function WBP_DeathScreen.WBP_DeathScreen_C.SetHudPromptText // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerKilled(struct FString KillerId, struct FString VictimId, bool WasKilledByDrone, struct FName KillerItemId, enum class EHWDamageType DamageType, bool WasHeadShot, enum class EHWWeaponType WeaponType, struct TArray<struct FString> Assists, struct AActor* DamageDealer, struct FName BleedCausedByDamageDealer, enum class EHWDamageType BleedCausedByDamageType); // Function WBP_DeathScreen.WBP_DeathScreen_C.OnPlayerKilled // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnCameraFeedControllerChanged(struct UHWCameraFeedProviderComponent* Camera); // Function WBP_DeathScreen.WBP_DeathScreen_C.OnCameraFeedControllerChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnArmorFeaturesChanged(); // Function WBP_DeathScreen.WBP_DeathScreen_C.OnArmorFeaturesChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void EnableDroneSelection(); // Function WBP_DeathScreen.WBP_DeathScreen_C.EnableDroneSelection // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__SelectDroneButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_DeathScreen.WBP_DeathScreen_C.BndEvt__SelectDroneButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void Destruct(); // Function WBP_DeathScreen.WBP_DeathScreen_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void SetDroneState(); // Function WBP_DeathScreen.WBP_DeathScreen_C.SetDroneState // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnArmorFeatureActivated(enum class EHWArmorFeatureType Feature, bool Active, float Duration); // Function WBP_DeathScreen.WBP_DeathScreen_C.OnArmorFeatureActivated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ShowDetails(); // Function WBP_DeathScreen.WBP_DeathScreen_C.ShowDetails // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetDetailsData(); // Function WBP_DeathScreen.WBP_DeathScreen_C.SetDetailsData // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_DeathScreen.WBP_DeathScreen_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void FadeOut(); // Function WBP_DeathScreen.WBP_DeathScreen_C.FadeOut // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void CancelHudPromptText(); // Function WBP_DeathScreen.WBP_DeathScreen_C.CancelHudPromptText // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void SetKillerDetails(); // Function WBP_DeathScreen.WBP_DeathScreen_C.SetKillerDetails // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void InitializeTimer(); // Function WBP_DeathScreen.WBP_DeathScreen_C.InitializeTimer // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SwitchToSpectateMode(); // Function WBP_DeathScreen.WBP_DeathScreen_C.SwitchToSpectateMode // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_DeathScreen(int32_t EntryPoint); // Function WBP_DeathScreen.WBP_DeathScreen_C.ExecuteUbergraph_WBP_DeathScreen // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
	void SwitchToSpectate__DelegateSignature(); // Function WBP_DeathScreen.WBP_DeathScreen_C.SwitchToSpectate__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

