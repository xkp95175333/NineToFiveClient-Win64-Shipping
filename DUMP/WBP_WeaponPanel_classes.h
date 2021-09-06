// WidgetBlueprintGeneratedClass WBP_WeaponPanel.WBP_WeaponPanel_C
// Size: 0x360 (Inherited: 0x268)
struct UWBP_WeaponPanel_C : UHWWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UHorizontalBox* AmmoCount; // 0x270(0x08)
	struct UTextBlock* AmmoReserveCurrentWeapon; // 0x278(0x08)
	struct UTextBlock* CurrentMag; // 0x280(0x08)
	struct UImage* IconFiremodeMelee; // 0x288(0x08)
	struct UImage* IconFiremodePrimary; // 0x290(0x08)
	struct UImage* IconFiremodeSecondary; // 0x298(0x08)
	struct UImage* IconMelee; // 0x2a0(0x08)
	struct UImage* IconPrimary; // 0x2a8(0x08)
	struct UImage* IconSecondary; // 0x2b0(0x08)
	struct UOverlay* Melee; // 0x2b8(0x08)
	struct UOverlay* Primary; // 0x2c0(0x08)
	struct UOverlay* Secondary; // 0x2c8(0x08)
	struct UWidgetSwitcher* WeaponSlot; // 0x2d0(0x08)
	struct AHWWeapon* PrimaryWeapon; // 0x2d8(0x08)
	struct AHWWeapon* SecondaryWeapon; // 0x2e0(0x08)
	struct FLinearColor ColorActive; // 0x2e8(0x10)
	struct FLinearColor ColorInactive; // 0x2f8(0x10)
	struct FSlateColor ColorAmmoLow; // 0x308(0x28)
	struct FSlateColor ColorAmmoHigh; // 0x330(0x28)
	struct UHWFiringComponent* FiringComponent; // 0x358(0x08)

	void IsAmmoLow(int32_t CurrentAmmo, int32_t MagCapacity, bool LowAmmo); // Function WBP_WeaponPanel.WBP_WeaponPanel_C.IsAmmoLow // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void Init(struct UHWFiringComponent* FiringComp); // Function WBP_WeaponPanel.WBP_WeaponPanel_C.Init // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnWeaponEquipped(struct AHWWeapon* Weapon); // Function WBP_WeaponPanel.WBP_WeaponPanel_C.OnWeaponEquipped // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateAmmo(struct AHWWeapon* Weapon); // Function WBP_WeaponPanel.WBP_WeaponPanel_C.UpdateAmmo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetActiveWeapon(bool Primary, bool IsMelee); // Function WBP_WeaponPanel.WBP_WeaponPanel_C.SetActiveWeapon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetWeaponInfo(struct AHWWeapon* Weapon, bool Primary); // Function WBP_WeaponPanel.WBP_WeaponPanel_C.SetWeaponInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void CancelHudPromptText(); // Function WBP_WeaponPanel.WBP_WeaponPanel_C.CancelHudPromptText // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnArmorFeatureActivated(enum class EHWArmorFeatureType Feature, bool Active, float Duration); // Function WBP_WeaponPanel.WBP_WeaponPanel_C.OnArmorFeatureActivated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnArmorFeaturesChanged(); // Function WBP_WeaponPanel.WBP_WeaponPanel_C.OnArmorFeaturesChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnCameraFeedControllerChanged(struct UHWCameraFeedProviderComponent* Camera); // Function WBP_WeaponPanel.WBP_WeaponPanel_C.OnCameraFeedControllerChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnCameraFeedsUpdated(struct TArray<struct UHWCameraFeedProviderComponent*> Cameras); // Function WBP_WeaponPanel.WBP_WeaponPanel_C.OnCameraFeedsUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnCloseMap(); // Function WBP_WeaponPanel.WBP_WeaponPanel_C.OnCloseMap // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnCombatCompanionStatusChanged(bool Available); // Function WBP_WeaponPanel.WBP_WeaponPanel_C.OnCombatCompanionStatusChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnDroneJammed(); // Function WBP_WeaponPanel.WBP_WeaponPanel_C.OnDroneJammed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnDronePossessed(); // Function WBP_WeaponPanel.WBP_WeaponPanel_C.OnDronePossessed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnDroneUnjammed(); // Function WBP_WeaponPanel.WBP_WeaponPanel_C.OnDroneUnjammed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnEnterSpectateMode(bool DroneSelect, bool ShowDeathScreen); // Function WBP_WeaponPanel.WBP_WeaponPanel_C.OnEnterSpectateMode // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnExitSpectateMode(); // Function WBP_WeaponPanel.WBP_WeaponPanel_C.OnExitSpectateMode // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnHideProgressBar(); // Function WBP_WeaponPanel.WBP_WeaponPanel_C.OnHideProgressBar // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnHitReceived(struct FHWPlayerHitReceivedParams Params); // Function WBP_WeaponPanel.WBP_WeaponPanel_C.OnHitReceived // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnHitScored(struct FHWPlayerHitScoredParams Params); // Function WBP_WeaponPanel.WBP_WeaponPanel_C.OnHitScored // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnInteractionItemEnterView(struct UHWInteractionComponent* Item); // Function WBP_WeaponPanel.WBP_WeaponPanel_C.OnInteractionItemEnterView // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnInteractionItemExitView(struct UHWInteractionComponent* Item); // Function WBP_WeaponPanel.WBP_WeaponPanel_C.OnInteractionItemExitView // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMetaMessageReceived(struct FHWMetaMessageData Message, float ShowDuration); // Function WBP_WeaponPanel.WBP_WeaponPanel_C.OnMetaMessageReceived // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnNotificationTextUpdated(struct FText NewText, struct FLinearColor UpperTextColor, bool UseAnimationUpper, struct FText NewNotificationTextLower, struct FLinearColor LowerTextColor, bool UseAnimationLower, float Duration); // Function WBP_WeaponPanel.WBP_WeaponPanel_C.OnNotificationTextUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnNotifyDeathDroneDestroyed(struct FString KillerId, struct FString VictimId, bool WasKilledByDrone, struct FName KillerItemId, enum class EHWDamageType DamageType, bool WasHeadShot, enum class EHWWeaponType WeaponType); // Function WBP_WeaponPanel.WBP_WeaponPanel_C.OnNotifyDeathDroneDestroyed // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnObjectiveChanged(struct FText NewObjective, bool UseAnimation, bool PlaySound); // Function WBP_WeaponPanel.WBP_WeaponPanel_C.OnObjectiveChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnObjectiveDataChanged(struct FHWRoundObjectivesData ObjectiveData); // Function WBP_WeaponPanel.WBP_WeaponPanel_C.OnObjectiveDataChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnObjectiveItemsUpdated(struct TArray<struct FNameAndCount> Items); // Function WBP_WeaponPanel.WBP_WeaponPanel_C.OnObjectiveItemsUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnOpenMap(); // Function WBP_WeaponPanel.WBP_WeaponPanel_C.OnOpenMap // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerDisconnected(struct FString SessionId); // Function WBP_WeaponPanel.WBP_WeaponPanel_C.OnPlayerDisconnected // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerDowned(struct FString KillerId, struct FString VictimId, bool WasHeadShot); // Function WBP_WeaponPanel.WBP_WeaponPanel_C.OnPlayerDowned // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerKilled(struct FString KillerId, struct FString VictimId, bool WasKilledByDrone, struct FName KillerItemId, enum class EHWDamageType DamageType, bool WasHeadShot, enum class EHWWeaponType WeaponType, struct TArray<struct FString> Assists, struct AActor* DamageDealer, struct FName BleedCausedByDamageDealer, enum class EHWDamageType BleedCausedByDamageType); // Function WBP_WeaponPanel.WBP_WeaponPanel_C.OnPlayerKilled // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerStateSetForCharacter(struct AHWCharacter* Character); // Function WBP_WeaponPanel.WBP_WeaponPanel_C.OnPlayerStateSetForCharacter // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPossess(struct AHWCharacter* PosessedCharacter); // Function WBP_WeaponPanel.WBP_WeaponPanel_C.OnPossess // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnReconnectingPlayersUpdated(struct TArray<struct FString> ReconnectingPlayers); // Function WBP_WeaponPanel.WBP_WeaponPanel_C.OnReconnectingPlayersUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnRoundCleanup(); // Function WBP_WeaponPanel.WBP_WeaponPanel_C.OnRoundCleanup // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnRoundIntroDataChanged(struct FHWRoundIntroData RoundIntroData); // Function WBP_WeaponPanel.WBP_WeaponPanel_C.OnRoundIntroDataChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnRoundStateSet(enum class EHWRoundState State); // Function WBP_WeaponPanel.WBP_WeaponPanel_C.OnRoundStateSet // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnShowProgressBar(float Duration, enum class EHWProgressBarType BarType); // Function WBP_WeaponPanel.WBP_WeaponPanel_C.OnShowProgressBar // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeammateLoadoutChanged(struct FString PlayerId, struct FString Primary, struct FString Secondary, int32_t PrimaryTier, int32_t SecondaryTier, int32_t ArmorTier, struct FName Consumable, struct FName Throwable, struct FName Placeable); // Function WBP_WeaponPanel.WBP_WeaponPanel_C.OnTeammateLoadoutChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeammateLoadoutDataChanged(int32_t CharIndex, struct FHWLoadoutData LoadoutData); // Function WBP_WeaponPanel.WBP_WeaponPanel_C.OnTeammateLoadoutDataChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeammateProfileChanged(struct FString PlayerId, struct FHWPlayerPublicProfile Profile); // Function WBP_WeaponPanel.WBP_WeaponPanel_C.OnTeammateProfileChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeamReadyStateChanged(struct TArray<struct FString> Ids); // Function WBP_WeaponPanel.WBP_WeaponPanel_C.OnTeamReadyStateChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeamScoreUpdated(struct FHWTeamScoreData Score); // Function WBP_WeaponPanel.WBP_WeaponPanel_C.OnTeamScoreUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void SetHudPromptText(struct FText Text, float DisplayDuration); // Function WBP_WeaponPanel.WBP_WeaponPanel_C.SetHudPromptText // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void PreConstruct(bool IsDesignTime); // Function WBP_WeaponPanel.WBP_WeaponPanel_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_WeaponPanel.WBP_WeaponPanel_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_WeaponPanel.WBP_WeaponPanel_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_WeaponPanel(int32_t EntryPoint); // Function WBP_WeaponPanel.WBP_WeaponPanel_C.ExecuteUbergraph_WBP_WeaponPanel // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

