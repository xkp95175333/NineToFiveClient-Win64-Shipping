// Class Hardwired.HWActorPoolManager
// Size: 0xe8 (Inherited: 0x28)
struct UHWActorPoolManager : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct UDataTable* ImpactEffectData; // 0x30(0x08)
	struct TMap<struct FName, struct FHWPoolActorList> ImpactEffectPool; // 0x38(0x50)
	char pad_88[0x8]; // 0x88(0x08)
	struct UDataTable* BulletTrailData; // 0x90(0x08)
	struct TMap<struct FName, struct FHWPoolActorList> BulletTrailPool; // 0x98(0x50)
};

// Class Hardwired.HWAIController
// Size: 0x350 (Inherited: 0x328)
struct AHWAIController : AAIController {
	char pad_328[0x8]; // 0x328(0x08)
	struct FString AILoadoutJSon; // 0x330(0x10)
	float RandomSpreadConeDegrees; // 0x340(0x04)
	char pad_344[0xc]; // 0x344(0x0c)

	void StopFire(); // Function Hardwired.HWAIController.StopFire // (Final|Native|Public|BlueprintCallable) // @ game+0xfb5690
	void StartFire(); // Function Hardwired.HWAIController.StartFire // (Final|Native|Public|BlueprintCallable) // @ game+0xfb5670
	void RegisterWithGameMode(); // Function Hardwired.HWAIController.RegisterWithGameMode // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0xfb3fc0
	void PossesHumanCharacter(struct AHWHumanCharacter* HumanChar); // Function Hardwired.HWAIController.PossesHumanCharacter // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0xfb3f30
	struct AHWPlayerState* GetHWPlayerState(); // Function Hardwired.HWAIController.GetHWPlayerState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfb2d20
};

// Class Hardwired.HWAimAssistComponent
// Size: 0x100 (Inherited: 0xb0)
struct UHWAimAssistComponent : UActorComponent {
	float MaxDistance; // 0xb0(0x04)
	float MinDistance; // 0xb4(0x04)
	struct FVector2D AutoAimAngle; // 0xb8(0x08)
	struct FVector2D InputFrictionAngle; // 0xc0(0x08)
	struct FVector2D InputFrictionCoefficient; // 0xc8(0x08)
	float InputFrictionDistanceMultiplier; // 0xd0(0x04)
	float InputFrictionReferenceDistance; // 0xd4(0x04)
	struct AHWCharacter* TargetCharacter; // 0xd8(0x08)
	char pad_E0[0x20]; // 0xe0(0x20)
};

// Class Hardwired.HWAnalyticsBPL
// Size: 0x28 (Inherited: 0x28)
struct UHWAnalyticsBPL : UBlueprintFunctionLibrary {

	void SendTutorialEvent(struct UObject* WorldContextObject, struct FString Text); // Function Hardwired.HWAnalyticsBPL.SendTutorialEvent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfb4e00
	void SendStopBleedingEvent(struct AHWCharacter* Character); // Function Hardwired.HWAnalyticsBPL.SendStopBleedingEvent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfb4d80
	void SendReturnToMenuEvent(struct UObject* WorldContextObject); // Function Hardwired.HWAnalyticsBPL.SendReturnToMenuEvent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfb4d00
	void SendPlayerJourneyEvent(struct UObject* WorldContextObject, enum class EHWPlayerJourneyStep Step, struct FString Note); // Function Hardwired.HWAnalyticsBPL.SendPlayerJourneyEvent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfb4ba0
	void SendMissionProgressEventActor(struct UObject* WorldContextObject, struct AActor* SourceActor, struct FString Note, struct FString Message); // Function Hardwired.HWAnalyticsBPL.SendMissionProgressEventActor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfb4a30
	void SendMissionProgressEvent(struct UObject* WorldContextObject, struct FString PlayerId, int32_t Team, struct FVector Location, struct FString Note, struct FString Message); // Function Hardwired.HWAnalyticsBPL.SendMissionProgressEvent // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0xfb4770
	void SendEnterScreenEvent(struct UObject* WorldContextObject, struct FString ScreenName); // Function Hardwired.HWAnalyticsBPL.SendEnterScreenEvent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfb4650
	void SendDroneActivateAbilityEvent(struct AHWDroneAbility* Ability, struct FString ActionType, struct AActor* Target); // Function Hardwired.HWAnalyticsBPL.SendDroneActivateAbilityEvent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfb44f0
	void SendActorInteractionEventActor(struct UObject* WorldContextObject, struct AActor* Player, struct AActor* Actor, struct FString Action); // Function Hardwired.HWAnalyticsBPL.SendActorInteractionEventActor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfb4390
	void SendActorInteractionEvent(struct UObject* WorldContextObject, struct FString PlayerId, int32_t Team, struct FString Actor, struct FVector LocationPlayer, struct FVector LocationActor, struct FString Action); // Function Hardwired.HWAnalyticsBPL.SendActorInteractionEvent // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0xfb4080
	struct FString GetPlatformName(); // Function Hardwired.HWAnalyticsBPL.GetPlatformName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfb2ea0
	enum class EHWGamePlatform GetPlatform(); // Function Hardwired.HWAnalyticsBPL.GetPlatform // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfb2e70
	void FillWeaponAttributes(struct FHWAnalyticsRoundEnd Evt, struct FHWWeaponAttributes PrimWeaponAttributes, struct FHWWeaponParts PrimaryWeaponData, struct FHWWeaponAttributes SecWeaponAttributes, struct FHWWeaponParts SecWeaponData); // Function Hardwired.HWAnalyticsBPL.FillWeaponAttributes // (Final|Native|Static|Public|HasOutParms) // @ game+0xfb23a0
	struct FString CalculateWeaponHash(struct FHWWeaponAttributes WeaponAttributes, struct FHWWeaponParts WeaponData); // Function Hardwired.HWAnalyticsBPL.CalculateWeaponHash // (Final|Native|Static|Public|HasOutParms) // @ game+0xfb1f10
};

// Class Hardwired.HWAnimInstance
// Size: 0x2f0 (Inherited: 0x2c0)
struct UHWAnimInstance : UAnimInstance {
	struct ACharacter* MyCharacter; // 0x2b8(0x08)
	struct FVector IKFootFloorLocationNative; // 0x2c0(0x0c)
	struct FVector IKTraceDistanceAboveFootNative; // 0x2cc(0x0c)
	struct FVector IKTraceDistanceBelowFootNative; // 0x2d8(0x0c)
	float FootHeightNative; // 0x2e4(0x04)
	float DeltaTimeNative; // 0x2e8(0x04)

	void SetPelvisIkOffsetNative(struct FVector FootOffsetLTarget, struct FVector FootOffsetRTarget, struct FVector PelvisOffset, float PelvisAlpha); // Function Hardwired.HWAnimInstance.SetPelvisIkOffsetNative // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xfb5110
	void SetFootOffsetsNative(struct FName EnableFootIkCurve, struct FName IKFootBone, struct FName RootBone, struct FVector CurrentLocTarget, struct FVector CurrentLocOffset, struct FRotator CurrentRotOffset); // Function Hardwired.HWAnimInstance.SetFootOffsetsNative // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xfb4f20
};

// Class Hardwired.HWAnimNotify_PlayParticleEffect
// Size: 0x90 (Inherited: 0x90)
struct UHWAnimNotify_PlayParticleEffect : UAnimNotify_PlayParticleEffect {
};

// Class Hardwired.HWArmoryWeaponVariation
// Size: 0x58 (Inherited: 0x28)
struct UHWArmoryWeaponVariation : UObject {
	struct UHWArmoryWeaponModel* Model; // 0x28(0x08)
	struct FString ItemId; // 0x30(0x10)
	bool IsSelected; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct FMulticastInlineDelegate OnChanged; // 0x48(0x10)

	void SetSelected(bool InSelected); // Function Hardwired.HWArmoryWeaponVariation.SetSelected // (Final|Native|Public|BlueprintCallable) // @ game+0xfb5400
};

// Class Hardwired.HWArmoryWeaponModel
// Size: 0x48 (Inherited: 0x28)
struct UHWArmoryWeaponModel : UObject {
	struct FName PartId; // 0x28(0x08)
	enum class EHWWeaponCategory WeaponCategory; // 0x30(0x01)
	enum class EHWWeaponType WeaponType; // 0x31(0x01)
	enum class EHWFaction Faction; // 0x32(0x01)
	char pad_33[0x5]; // 0x33(0x05)
	struct TArray<struct UHWArmoryWeaponVariation*> Variations; // 0x38(0x10)

	void SetSelectedVariationIndex(int32_t Index); // Function Hardwired.HWArmoryWeaponModel.SetSelectedVariationIndex // (Final|Native|Public|BlueprintCallable) // @ game+0xfb55b0
	bool HasBeenAcquired(); // Function Hardwired.HWArmoryWeaponModel.HasBeenAcquired // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfb3600
	struct UHWArmoryWeaponVariation* GetVariationAtIndex(int32_t VariationIndex); // Function Hardwired.HWArmoryWeaponModel.GetVariationAtIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xfb3030
	struct UHWArmoryWeaponVariation* GetVariation(struct FString ItemId); // Function Hardwired.HWArmoryWeaponModel.GetVariation // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xfb2f80
	int32_t GetSelectedVariationIndex(); // Function Hardwired.HWArmoryWeaponModel.GetSelectedVariationIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xfb2f20
};

// Class Hardwired.HWArmoryWeaponPartItem
// Size: 0x78 (Inherited: 0x28)
struct UHWArmoryWeaponPartItem : UObject {
	enum class EHWWeaponPartType Type; // 0x28(0x01)
	enum class EHWWeaponPartSubType SubType; // 0x29(0x01)
	enum class EHWRarity Rarity; // 0x2a(0x01)
	char pad_2B[0x1]; // 0x2b(0x01)
	struct FName PartId; // 0x2c(0x08)
	char pad_34[0x4]; // 0x34(0x04)
	struct FString ItemId; // 0x38(0x10)
	struct FString CosmeticId; // 0x48(0x10)
	struct FString WeaponID; // 0x58(0x10)
	struct FName SetId; // 0x68(0x08)
	bool FullSet; // 0x70(0x01)
	bool IsDefaultPart; // 0x71(0x01)
	char pad_72[0x6]; // 0x72(0x06)

	bool IsInstalled(); // Function Hardwired.HWArmoryWeaponPartItem.IsInstalled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfb3770
	bool HasBeenAcquired(); // Function Hardwired.HWArmoryWeaponPartItem.HasBeenAcquired // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfb3620
};

// Class Hardwired.HWArmoryWeaponCodeItem
// Size: 0x60 (Inherited: 0x28)
struct UHWArmoryWeaponCodeItem : UObject {
	struct FString ItemId; // 0x28(0x10)
	struct FName WeaponPartId; // 0x38(0x08)
	enum class EHWCraftingParameterGroup ParameterGroup; // 0x40(0x01)
	enum class EHWRarity Rarity; // 0x41(0x01)
	char pad_42[0x6]; // 0x42(0x06)
	struct FMulticastInlineDelegate OnChanged; // 0x48(0x10)
	bool IsSelected; // 0x58(0x01)
	bool HasBeenSeen; // 0x59(0x01)
	char pad_5A[0x2]; // 0x5a(0x02)
	int32_t UpgradePoints; // 0x5c(0x04)

	void SetSelected(bool InSelected); // Function Hardwired.HWArmoryWeaponCodeItem.SetSelected // (Final|Native|Public|BlueprintCallable) // @ game+0xfb5360
	void SetSeen(bool InSeen); // Function Hardwired.HWArmoryWeaponCodeItem.SetSeen // (Final|Native|Public|BlueprintCallable) // @ game+0xfb52c0
};

// Class Hardwired.HWArmoryWeaponModelFilter
// Size: 0x58 (Inherited: 0x28)
struct UHWArmoryWeaponModelFilter : UObject {
	struct TArray<enum class EHWWeaponCategory> Categories; // 0x28(0x10)
	struct TArray<enum class EHWWeaponType> WeaponTypes; // 0x38(0x10)
	struct TArray<enum class EHWFaction> Factions; // 0x48(0x10)

	void Reset(); // Function Hardwired.HWArmoryWeaponModelFilter.Reset // (Final|Native|Public|BlueprintCallable) // @ game+0xfb4060
	bool Matches(struct UHWArmoryWeaponModel* Model); // Function Hardwired.HWArmoryWeaponModelFilter.Matches // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfb3e90
	void GetMatches(struct TArray<struct UHWArmoryWeaponModel*> InModels, struct TArray<struct UHWArmoryWeaponModel*> Result); // Function Hardwired.HWArmoryWeaponModelFilter.GetMatches // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0xfb2d50
};

// Class Hardwired.HWArmoryWeaponUpgradeState
// Size: 0x150 (Inherited: 0x28)
struct UHWArmoryWeaponUpgradeState : UObject {
	struct UHWArmoryWeaponVariation* Weapon; // 0x28(0x08)
	struct UHWArmoryWeaponCodeItem* SelectedCode; // 0x30(0x08)
	enum class EHWCraftingParameterGroup SelectedGroup; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct TMap<enum class EHWCraftingParameterGroup, int32_t> AvailableUpgradePoints; // 0x40(0x50)
	struct TMap<enum class EHWCraftingParameterGroup, int32_t> AdditionalUpgradePoints; // 0x90(0x50)
	struct TArray<enum class EHWCraftingParameter> CurrentUpgrades; // 0xe0(0x10)
	struct FMulticastInlineDelegate OnChanged; // 0xf0(0x10)
	char pad_100[0x50]; // 0x100(0x50)

	void SetSelectedGroup(enum class EHWCraftingParameterGroup Group); // Function Hardwired.HWArmoryWeaponUpgradeState.SetSelectedGroup // (Final|Native|Public|BlueprintCallable) // @ game+0xfb5530
	void SetSelectedCode(struct UHWArmoryWeaponCodeItem* Code); // Function Hardwired.HWArmoryWeaponUpgradeState.SetSelectedCode // (Final|Native|Public|BlueprintCallable) // @ game+0xfb54a0
	void Remove(enum class EHWCraftingParameter Parameter); // Function Hardwired.HWArmoryWeaponUpgradeState.Remove // (Final|Native|Public|BlueprintCallable) // @ game+0xfb3fe0
	bool IsMaxed(enum class EHWCraftingParameter Parameter); // Function Hardwired.HWArmoryWeaponUpgradeState.IsMaxed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfb37a0
	void Initialize(struct UHWArmoryWeaponVariation* InWeapon); // Function Hardwired.HWArmoryWeaponUpgradeState.Initialize // (Final|Native|Public|BlueprintCallable) // @ game+0xfb36e0
	bool HasWeapon(); // Function Hardwired.HWArmoryWeaponUpgradeState.HasWeapon // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfb36b0
	bool HasSelectedCode(); // Function Hardwired.HWArmoryWeaponUpgradeState.HasSelectedCode // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfb3680
	bool HasCurrentUpgrades(); // Function Hardwired.HWArmoryWeaponUpgradeState.HasCurrentUpgrades // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfb3650
	int32_t GetCurrentUpgradesInGroup(enum class EHWCraftingParameterGroup Group); // Function Hardwired.HWArmoryWeaponUpgradeState.GetCurrentUpgradesInGroup // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfb2c90
	struct TMap<enum class EHWCraftingParameter, int32_t> GetCurrentUpgradesAsMap(); // Function Hardwired.HWArmoryWeaponUpgradeState.GetCurrentUpgradesAsMap // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfb2bc0
	int32_t GetAvailablePoints(enum class EHWCraftingParameterGroup Group); // Function Hardwired.HWArmoryWeaponUpgradeState.GetAvailablePoints // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfb2b30
	int32_t GetAdditionalPoints(enum class EHWCraftingParameterGroup Group); // Function Hardwired.HWArmoryWeaponUpgradeState.GetAdditionalPoints // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfb2aa0
	void Clear(); // Function Hardwired.HWArmoryWeaponUpgradeState.Clear // (Final|Native|Public|BlueprintCallable) // @ game+0xfb2380
	bool CanRemove(enum class EHWCraftingParameter Parameter); // Function Hardwired.HWArmoryWeaponUpgradeState.CanRemove // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfb22f0
	bool CanAdd(enum class EHWCraftingParameter Parameter); // Function Hardwired.HWArmoryWeaponUpgradeState.CanAdd // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfb2260
	void Add(enum class EHWCraftingParameter Parameter); // Function Hardwired.HWArmoryWeaponUpgradeState.Add // (Final|Native|Public|BlueprintCallable) // @ game+0xfb1e90
};

// Class Hardwired.HWArmoryDataBPL
// Size: 0x28 (Inherited: 0x28)
struct UHWArmoryDataBPL : UBlueprintFunctionLibrary {

	struct UHWArmoryWeaponPartItem* MakeLockedArmoryWeaponPartItem(struct UObject* WorldContextObject, struct FName PartId); // Function Hardwired.HWArmoryDataBPL.MakeLockedArmoryWeaponPartItem // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfb3dc0
	struct UHWArmoryWeaponVariation* MakeArmoryWeaponVariationWithModel(struct UObject* WorldContextObject, struct UHWArmoryWeaponModel* Model, struct FString WeaponItemId); // Function Hardwired.HWArmoryDataBPL.MakeArmoryWeaponVariationWithModel // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfb3c90
	struct UHWArmoryWeaponVariation* MakeArmoryWeaponVariation(struct UObject* WorldContextObject, struct UHWPlayerProfile* Player, struct FString WeaponItemId); // Function Hardwired.HWArmoryDataBPL.MakeArmoryWeaponVariation // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfb3b60
	struct UHWArmoryWeaponPartItem* MakeArmoryWeaponPartItem(struct UObject* WorldContextObject, struct UHWPlayerProfile* Player, struct FString PartItemId); // Function Hardwired.HWArmoryDataBPL.MakeArmoryWeaponPartItem // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfb3a30
	struct UHWArmoryWeaponModel* MakeArmoryWeaponModel(struct UObject* WorldContextObject, struct FName PartId); // Function Hardwired.HWArmoryDataBPL.MakeArmoryWeaponModel // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfb3960
	struct UHWArmoryWeaponCodeItem* MakeArmoryWeaponCodeItem(struct UObject* WorldContextObject, struct UHWPlayerProfile* Player, struct FString CodeItemId); // Function Hardwired.HWArmoryDataBPL.MakeArmoryWeaponCodeItem // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfb3830
	void GetWeaponPartItemsForPicker(struct UObject* WorldContextObject, struct UHWPlayerProfile* Player, struct FString WeaponItemId, enum class EHWWeaponPartType PartType, struct TArray<struct UHWArmoryWeaponPartItem*> InventoryParts, struct TArray<struct UHWArmoryWeaponPartItem*> LockedParts); // Function Hardwired.HWArmoryDataBPL.GetWeaponPartItemsForPicker // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xfb33f0
	struct TArray<struct UHWArmoryWeaponPartItem*> GetWeaponPartItemsForCatalog(struct UObject* WorldContextObject, struct UHWPlayerProfile* Player, struct FName WeaponPartId, struct FString WeaponItemId); // Function Hardwired.HWArmoryDataBPL.GetWeaponPartItemsForCatalog // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xfb3230
	struct TArray<struct UHWArmoryWeaponCodeItem*> GetWeaponCodes(struct UObject* WorldContextObject, struct UHWPlayerProfile* Player, struct FName WeaponID); // Function Hardwired.HWArmoryDataBPL.GetWeaponCodes // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xfb30f0
};

// Class Hardwired.HWInventoryItemBase
// Size: 0x78 (Inherited: 0x28)
struct UHWInventoryItemBase : UObject {
	struct FName ConfigId; // 0x28(0x08)
	struct FString ItemId; // 0x30(0x10)
	enum class EHWInventoryItemType ItemType; // 0x40(0x01)
	enum class EHWWeaponCategory WeaponCategory; // 0x41(0x01)
	enum class EHWWeaponPartType WeaponPartType; // 0x42(0x01)
	enum class EHWVendor Vendor; // 0x43(0x01)
	enum class EHWRarity Rarity; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	int32_t Tier; // 0x48(0x04)
	float Weight; // 0x4c(0x04)
	struct FString Title; // 0x50(0x10)
	struct TArray<enum class EHWWeaponType> WeaponTypes; // 0x60(0x10)
	bool HasBeenSeen; // 0x70(0x01)
	bool IsSelected; // 0x71(0x01)
	char pad_72[0x6]; // 0x72(0x06)

	void SetSelected(bool InSelected); // Function Hardwired.HWInventoryItemBase.SetSelected // (Final|Native|Public|BlueprintCallable) // @ game+0x102fe70
	void SetSeen(bool Seen); // Function Hardwired.HWInventoryItemBase.SetSeen // (Final|Native|Public|BlueprintCallable) // @ game+0x102fde0
	void RefreshItem(struct UObject* WorldContextObject); // Function Hardwired.HWInventoryItemBase.RefreshItem // (Native|Public|BlueprintCallable) // @ game+0x102c530
	bool IsWeapon(); // Function Hardwired.HWInventoryItemBase.IsWeapon // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x102c0b0
	bool IsPart(); // Function Hardwired.HWInventoryItemBase.IsPart // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x102c090
	bool IsCosmeticPart(); // Function Hardwired.HWInventoryItemBase.IsCosmeticPart // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x102c040
	bool IsArmor(); // Function Hardwired.HWInventoryItemBase.IsArmor // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x99c0d0
	void InvokeChangeEvent(); // Function Hardwired.HWInventoryItemBase.InvokeChangeEvent // (Native|Public|BlueprintCallable) // @ game+0x102c020
	bool GetPartId(struct FName PartId); // Function Hardwired.HWInventoryItemBase.GetPartId // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x102b570
	enum class EHWRarity GetDisplayRarity(); // Function Hardwired.HWInventoryItemBase.GetDisplayRarity // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x102ae10
};

// Class Hardwired.HWArmoryItem
// Size: 0x98 (Inherited: 0x78)
struct UHWArmoryItem : UHWInventoryItemBase {
	bool IsBlueprint; // 0x78(0x01)
	bool IsBlueprintLink; // 0x79(0x01)
	bool IsEnabled; // 0x7a(0x01)
	bool CanBeCrafted; // 0x7b(0x01)
	bool HasBeenCrafted; // 0x7c(0x01)
	bool IsStacked; // 0x7d(0x01)
	char pad_7E[0x2]; // 0x7e(0x02)
	int32_t FlashCodeCount; // 0x80(0x04)
	enum class EHWRarity ResultRarity; // 0x84(0x01)
	enum class EHWRarity HighestCraftedRarity; // 0x85(0x01)
	enum class EHWArmoryItemSelectionType SelectionType; // 0x86(0x01)
	char pad_87[0x1]; // 0x87(0x01)
	struct FMulticastInlineDelegate OnChanged; // 0x88(0x10)

	bool GetWeaponItem(struct UObject* WorldContextObject, struct FHWWeaponItem OutItem); // Function Hardwired.HWArmoryItem.GetWeaponItem // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0xfbc220
	enum class EHWRarity GetParameterRarity(struct UObject* WorldContextObject, enum class EHWCraftingParameterGroup ParamGroup); // Function Hardwired.HWArmoryItem.GetParameterRarity // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfbbf90
};

// Class Hardwired.HWAudioOcclusionAreaActor
// Size: 0x230 (Inherited: 0x220)
struct AHWAudioOcclusionAreaActor : AActor {
	struct UBillboardComponent* BillboardComponent; // 0x220(0x08)
	struct UHWAudioOcclusionAreaComponent* AreaComponent; // 0x228(0x08)
};

// Class Hardwired.HWAudioOcclusionAreaComponent
// Size: 0x4c0 (Inherited: 0x470)
struct UHWAudioOcclusionAreaComponent : UBoxComponent {
	struct TArray<struct AActor*> PortalActors; // 0x468(0x10)
	struct AHWAudioOcclusionAreaActor* AreaVolume; // 0x478(0x08)
	char AreaPriority; // 0x480(0x01)
	struct TArray<struct AHWAudioOcclusionAreaActor*> LinkedAreas; // 0x488(0x10)
	int32_t CacheKey; // 0x498(0x04)
	char pad_49D[0x3]; // 0x49d(0x03)
	struct TArray<int32_t> PortalKeys; // 0x4a0(0x10)
	struct TArray<int32_t> LinkedAreaKeys; // 0x4b0(0x10)

	void SetAreaPriority(char Value); // Function Hardwired.HWAudioOcclusionAreaComponent.SetAreaPriority // (Final|Native|Public|BlueprintCallable) // @ game+0xfbd020
	void RemovePortalActor(struct AActor* PortalActor); // Function Hardwired.HWAudioOcclusionAreaComponent.RemovePortalActor // (Final|Native|Public|BlueprintCallable) // @ game+0xfbcad0
	void RemoveLinkedArea(struct AHWAudioOcclusionAreaActor* AreaActor); // Function Hardwired.HWAudioOcclusionAreaComponent.RemoveLinkedArea // (Final|Native|Public|BlueprintCallable) // @ game+0xfbca40
	struct TArray<struct AActor*> GetPortalActors(); // Function Hardwired.HWAudioOcclusionAreaComponent.GetPortalActors // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfbc060
	struct TArray<struct AHWAudioOcclusionAreaActor*> GetLinkedAreas(); // Function Hardwired.HWAudioOcclusionAreaComponent.GetLinkedAreas // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfbbe90
	char GetAreaPriority(); // Function Hardwired.HWAudioOcclusionAreaComponent.GetAreaPriority // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfbbac0
	bool ContainsLinkedArea(struct AHWAudioOcclusionAreaActor* AreaActor); // Function Hardwired.HWAudioOcclusionAreaComponent.ContainsLinkedArea // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfbadb0
	void ClearPortalActors(); // Function Hardwired.HWAudioOcclusionAreaComponent.ClearPortalActors // (Final|Native|Public|BlueprintCallable) // @ game+0xfbaba0
	void AddPortalActor(struct AActor* PortalActor); // Function Hardwired.HWAudioOcclusionAreaComponent.AddPortalActor // (Final|Native|Public|BlueprintCallable) // @ game+0xfba3a0
	void AddLinkedArea(struct AHWAudioOcclusionAreaActor* AreaActor); // Function Hardwired.HWAudioOcclusionAreaComponent.AddLinkedArea // (Final|Native|Public|BlueprintCallable) // @ game+0xfba310
};

// Class Hardwired.HWAudioOcclusionPortalActor
// Size: 0x238 (Inherited: 0x220)
struct AHWAudioOcclusionPortalActor : AActor {
	struct UBillboardComponent* BillboardComponent; // 0x220(0x08)
	struct UHWAudioOcclusionPortalComponent* PortalComponent; // 0x228(0x08)
	bool bManualPlacement; // 0x230(0x01)
	char pad_231[0x7]; // 0x231(0x07)

	void SetManualPlacement(bool bValue); // Function Hardwired.HWAudioOcclusionPortalActor.SetManualPlacement // (Final|Native|Public|BlueprintCallable) // @ game+0xfbd2e0
	bool GetManualPlacement(); // Function Hardwired.HWAudioOcclusionPortalActor.GetManualPlacement // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfbbed0
};

// Class Hardwired.HWAudioOcclusionAutomaticPortalActor
// Size: 0x238 (Inherited: 0x238)
struct AHWAudioOcclusionAutomaticPortalActor : AHWAudioOcclusionPortalActor {
};

// Class Hardwired.HWAudioOcclusionBPL
// Size: 0x28 (Inherited: 0x28)
struct UHWAudioOcclusionBPL : UBlueprintFunctionLibrary {

	bool SameAudioOcclusionAreaCheck(struct AActor* ActorA, struct AActor* ActorB); // Function Hardwired.HWAudioOcclusionBPL.SameAudioOcclusionAreaCheck // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfbccb0
	struct UActorComponent* GetAudioOcclusionPathComponent(struct AActor* SourceActor); // Function Hardwired.HWAudioOcclusionBPL.GetAudioOcclusionPathComponent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfbbd00
	void GetAudioOcclusionPath(struct AActor* SourceActor, struct AActor* GoalActor, float MaxDistance, bool bReachedGoal, struct TArray<struct FVector> Path, float Distance); // Function Hardwired.HWAudioOcclusionBPL.GetAudioOcclusionPath // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xfbbaf0
};

// Class Hardwired.HWAudioOcclusionComponent
// Size: 0x148 (Inherited: 0xb0)
struct UHWAudioOcclusionComponent : UActorComponent {
	struct UHWAudioOcclusionSearch* SearchObj; // 0xb0(0x08)
	char pad_B8[0x30]; // 0xb8(0x30)
	float PathPointOcclusionOffset; // 0xe8(0x04)
	float OcclusionStartDistance; // 0xec(0x04)
	char pad_F0[0x14]; // 0xf0(0x14)
	struct FVector LineOfSightPointOffset; // 0x104(0x0c)
	struct FName RTPCName; // 0x110(0x08)
	int32_t RTPCInterpolationTimeMs; // 0x118(0x04)
	bool bPrintPath; // 0x11c(0x01)
	char pad_11D[0x3]; // 0x11d(0x03)
	struct FMulticastInlineDelegate OnAudioOcclusionValueChanged; // 0x120(0x10)
	float DistanceUpdate; // 0x130(0x04)
	float InternalTickInterval; // 0x134(0x04)
	float MinOcclusionDistance; // 0x138(0x04)
	float MaxOcclusionDistance; // 0x13c(0x04)
	float MaxSearchDistance; // 0x140(0x04)
	char pad_144[0x4]; // 0x144(0x04)

	void Tick_Internal(); // Function Hardwired.HWAudioOcclusionComponent.Tick_Internal // (Final|Native|Private) // @ game+0xfbd640
	void SetInternalTickEnabled(bool bEnabled); // Function Hardwired.HWAudioOcclusionComponent.SetInternalTickEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0xfbd250
	struct TArray<struct FVector> GetSearchPath(); // Function Hardwired.HWAudioOcclusionComponent.GetSearchPath // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfbc150
	float GetSearchDistance(); // Function Hardwired.HWAudioOcclusionComponent.GetSearchDistance // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfbc120
	bool GetReachedGoal(); // Function Hardwired.HWAudioOcclusionComponent.GetReachedGoal // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfbc0f0
	float GetOcclusionValue(); // Function Hardwired.HWAudioOcclusionComponent.GetOcclusionValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfbbf40
	bool GetInternalTickEnabled(); // Function Hardwired.HWAudioOcclusionComponent.GetInternalTickEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfbbe60
};

// Class Hardwired.HWAudioOcclusionDataActor
// Size: 0x6c230 (Inherited: 0x220)
struct AHWAudioOcclusionDataActor : AActor {
	char pad_220[0x6c010]; // 0x220(0x6c010)

	int32_t RegisterPortal(struct UHWAudioOcclusionPortalComponent* PortalComponent); // Function Hardwired.HWAudioOcclusionDataActor.RegisterPortal // (Final|Native|Public|BlueprintCallable) // @ game+0xfbc910
	int32_t RegisterArea(struct UHWAudioOcclusionAreaComponent* AreaComponent); // Function Hardwired.HWAudioOcclusionDataActor.RegisterArea // (Final|Native|Public|BlueprintCallable) // @ game+0xfbc870
	int32_t GetMaxPortalCount(); // Function Hardwired.HWAudioOcclusionDataActor.GetMaxPortalCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfbbf20
	int32_t GetMaxAreaCount(); // Function Hardwired.HWAudioOcclusionDataActor.GetMaxAreaCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfbbf00
	void DumpContent(); // Function Hardwired.HWAudioOcclusionDataActor.DumpContent // (Final|Native|Public|BlueprintCallable|Const) // @ game+0xfbba50
	void ConfigPortal(struct UHWAudioOcclusionPortalComponent* PortalComponent); // Function Hardwired.HWAudioOcclusionDataActor.ConfigPortal // (Final|Native|Public|BlueprintCallable) // @ game+0xfbad20
	void ConfigArea(struct UHWAudioOcclusionAreaComponent* AreaComponent); // Function Hardwired.HWAudioOcclusionDataActor.ConfigArea // (Final|Native|Public|BlueprintCallable) // @ game+0xfbac90
	void ClearData(); // Function Hardwired.HWAudioOcclusionDataActor.ClearData // (Final|Native|Public|BlueprintCallable) // @ game+0xfbab30
};

// Class Hardwired.HWAudioOcclusionNodeComponent
// Size: 0x490 (Inherited: 0x470)
struct UHWAudioOcclusionNodeComponent : UBoxComponent {
	struct TArray<struct UHWAudioOcclusionNodeComponent*> AdditionalNodes; // 0x468(0x10)
	struct UHWAudioOcclusionNodeComponent* CameFrom; // 0x478(0x08)
	char pad_488[0x8]; // 0x488(0x08)
};

// Class Hardwired.HWAudioOcclusionPathComponent
// Size: 0xe8 (Inherited: 0xb0)
struct UHWAudioOcclusionPathComponent : UActorComponent {
	bool bStartClosed; // 0xb0(0x01)
	char pad_B1[0x3]; // 0xb1(0x03)
	float OpenedCost; // 0xb4(0x04)
	float ClosedCost; // 0xb8(0x04)
	float CurrentCost; // 0xbc(0x04)
	float ClosedFactor; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)
	struct FMulticastInlineDelegate OnCostChanged; // 0xc8(0x10)
	struct FMulticastInlineDelegate OnPathChanged; // 0xd8(0x10)

	void SetClosedFactor(float NewClosedFactor); // Function Hardwired.HWAudioOcclusionPathComponent.SetClosedFactor // (Final|Native|Public|BlueprintCallable) // @ game+0xfbd1d0
	void SetClosed(bool bValue); // Function Hardwired.HWAudioOcclusionPathComponent.SetClosed // (Final|Native|Public|BlueprintCallable) // @ game+0xfbd0a0
	float GetStartCost(); // Function Hardwired.HWAudioOcclusionPathComponent.GetStartCost // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfbc1d0
	float GetOpenedCost(); // Function Hardwired.HWAudioOcclusionPathComponent.GetOpenedCost // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfbbf70
	float GetCurrentCost(); // Function Hardwired.HWAudioOcclusionPathComponent.GetCurrentCost // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfbbe40
	float GetClosedFactor(); // Function Hardwired.HWAudioOcclusionPathComponent.GetClosedFactor // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfbbe10
	float GetClosedCost(); // Function Hardwired.HWAudioOcclusionPathComponent.GetClosedCost // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfbbdf0
	bool GetClosed(); // Function Hardwired.HWAudioOcclusionPathComponent.GetClosed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfbbd90
	void AnnouncePathHasChanged(); // Function Hardwired.HWAudioOcclusionPathComponent.AnnouncePathHasChanged // (Final|Native|Public|BlueprintCallable|Const) // @ game+0xfba450
	void AnnounceCostHasChanged(); // Function Hardwired.HWAudioOcclusionPathComponent.AnnounceCostHasChanged // (Final|Native|Public|BlueprintCallable|Const) // @ game+0xfba430
};

// Class Hardwired.HWAudioOcclusionPortalComponent
// Size: 0x4f0 (Inherited: 0x490)
struct UHWAudioOcclusionPortalComponent : UHWAudioOcclusionNodeComponent {
	bool bClosed; // 0x488(0x01)
	struct TArray<struct AHWAudioOcclusionAreaActor*> AreaActors; // 0x490(0x10)
	struct AActor* SourceActorPtr; // 0x4a0(0x08)
	int32_t CacheKey; // 0x4a8(0x04)
	char pad_4AD[0x3]; // 0x4ad(0x03)
	struct TArray<int32_t> AreaIndexes; // 0x4b0(0x10)
	struct TSoftObjectPtr<struct AActor> SourceActor; // 0x4c0(0x28)
	char pad_4E8[0x8]; // 0x4e8(0x08)

	void SetClosed(bool Value); // Function Hardwired.HWAudioOcclusionPortalComponent.SetClosed // (Final|Native|Public|BlueprintCallable) // @ game+0xfbd140
	void RemoveArea(struct AHWAudioOcclusionAreaActor* Area); // Function Hardwired.HWAudioOcclusionPortalComponent.RemoveArea // (Final|Native|Public|BlueprintCallable) // @ game+0xfbc9b0
	bool GetClosed(); // Function Hardwired.HWAudioOcclusionPortalComponent.GetClosed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfbbdc0
	struct TArray<struct AHWAudioOcclusionAreaActor*> GetAreaActors(); // Function Hardwired.HWAudioOcclusionPortalComponent.GetAreaActors // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfbba80
	void ClearAreas(); // Function Hardwired.HWAudioOcclusionPortalComponent.ClearAreas // (Final|Native|Public|BlueprintCallable) // @ game+0xfbab10
	void AddArea(struct AHWAudioOcclusionAreaActor* Area); // Function Hardwired.HWAudioOcclusionPortalComponent.AddArea // (Final|Native|Public|BlueprintCallable) // @ game+0xfba280
};

// Class Hardwired.HWAudioOcclusionSearch
// Size: 0xf0 (Inherited: 0x28)
struct UHWAudioOcclusionSearch : UObject {
	struct TArray<struct UHWAudioOcclusionPathComponent*> PathComponents; // 0x28(0x10)
	struct UHWAudioOcclusionNodeComponent* LastGoalNode; // 0x38(0x08)
	char pad_40[0x8]; // 0x40(0x08)
	struct TArray<struct UHWAudioOcclusionNodeComponent*> OpenedNodes; // 0x48(0x10)
	struct TArray<struct UHWAudioOcclusionNodeComponent*> VisitedNodes; // 0x58(0x10)
	struct TArray<struct FHWAudioOcclusionPortalVolume> RawAudioPath; // 0x68(0x10)
	struct TArray<struct FVector> AudioPath; // 0x78(0x10)
	struct TArray<float> PathCosts; // 0x88(0x10)
	char pad_98[0x8]; // 0x98(0x08)
	struct AActor* StartActor; // 0xa0(0x08)
	struct AHWAudioOcclusionAreaActor* StartArea; // 0xa8(0x08)
	struct AActor* GoalActor; // 0xb0(0x08)
	struct AHWAudioOcclusionAreaActor* GoalArea; // 0xb8(0x08)
	char pad_C0[0x30]; // 0xc0(0x30)

	void OnPathComponentCostChanged(float NewCost); // Function Hardwired.HWAudioOcclusionSearch.OnPathComponentCostChanged // (Final|Native|Private) // @ game+0xfbc710
	void OnPathChanged(struct UHWAudioOcclusionPathComponent* PathComponent); // Function Hardwired.HWAudioOcclusionSearch.OnPathChanged // (Final|Native|Private) // @ game+0xfbc680
	void OnPathActorDestroyed(struct AActor* ActorBeingDestroy); // Function Hardwired.HWAudioOcclusionSearch.OnPathActorDestroyed // (Final|Native|Private) // @ game+0xfbc680
};

// Class Hardwired.HWAutoHeal
// Size: 0x88 (Inherited: 0x28)
struct UHWAutoHeal : UObject {
	struct UHWInjuryComponent* InjuryComponent; // 0x28(0x08)
	float HealStartDelay; // 0x30(0x04)
	float HealDuration; // 0x34(0x04)
	int32_t CurrentCharges; // 0x38(0x04)
	float HealStartTime; // 0x3c(0x04)
	float HealFinishTime; // 0x40(0x04)
	float LastChargeTime; // 0x44(0x04)
	bool StopBleeding; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	float RestoreBloodAmount; // 0x4c(0x04)
	int32_t InitialCharges; // 0x50(0x04)
	float ChargeDelay; // 0x54(0x04)
	struct FMulticastInlineDelegate OnHealStarting; // 0x58(0x10)
	struct FMulticastInlineDelegate OnHealStarted; // 0x68(0x10)
	struct FMulticastInlineDelegate OnHealAborted; // 0x78(0x10)
};

// Class Hardwired.HWBackendBPL
// Size: 0x28 (Inherited: 0x28)
struct UHWBackendBPL : UBlueprintFunctionLibrary {

	void UpgradeWeapon(struct UObject* WorldContextObject, struct FString WeaponID, struct TMap<enum class EHWCraftingParameter, int32_t> UpgradePoints, struct FLatentActionInfo LatentInfo); // Function Hardwired.HWBackendBPL.UpgradeWeapon // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xfbda80
	void UnselectMission(struct UObject* WorldContextObject, struct FString MissionId, struct FLatentActionInfo LatentInfo); // Function Hardwired.HWBackendBPL.UnselectMission // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfbd930
	void UnlockMissionReward(struct UObject* WorldContextObject, struct FString MissionId, struct FLatentActionInfo LatentInfo); // Function Hardwired.HWBackendBPL.UnlockMissionReward // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfbd7e0
	void UninstallWeaponPart(struct UObject* WorldContextObject, struct FString ReceiverItemId, enum class EHWWeaponPartType PartType, struct FLatentActionInfo LatentInfo); // Function Hardwired.HWBackendBPL.UninstallWeaponPart // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfbd660
	void StartContractStage(struct UObject* WorldContextObject, struct TArray<enum class EHWMissionKind> Missions, enum class EHWRarity Rarity, struct FLatentActionInfo LatentInfo); // Function Hardwired.HWBackendBPL.StartContractStage // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xfbd4c0
	void SetPlayerName(struct UObject* WorldContextObject, struct FString Name, struct FLatentActionInfo LatentInfo); // Function Hardwired.HWBackendBPL.SetPlayerName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfbd370
	void SellWeaponCode(struct UObject* WorldContextObject, struct FString CodeId, struct FLatentActionInfo LatentInfo); // Function Hardwired.HWBackendBPL.SellWeaponCode // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfbced0
	void SelectMission(struct UObject* WorldContextObject, struct FString MissionId, struct FLatentActionInfo LatentInfo); // Function Hardwired.HWBackendBPL.SelectMission // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfbcd80
	void ResetWeaponUpgrades(struct UObject* WorldContextObject, struct FString WeaponID, struct FLatentActionInfo LatentInfo); // Function Hardwired.HWBackendBPL.ResetWeaponUpgrades // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfbcb60
	void RefreshMissions(struct UObject* WorldContextObject, struct FLatentActionInfo LatentInfo); // Function Hardwired.HWBackendBPL.RefreshMissions // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfbc790
	void MarkItemAsSeen(struct UObject* WorldContextObject, struct FString ItemId, enum class EHWInventoryItemType ItemType, struct FLatentActionInfo LatentInfo); // Function Hardwired.HWBackendBPL.MarkItemAsSeen // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfbc500
	void InstallWeaponPart(struct UObject* WorldContextObject, struct FString WeaponID, enum class EHWWeaponPartType PartType, struct FString PartId, struct FLatentActionInfo LatentInfo); // Function Hardwired.HWBackendBPL.InstallWeaponPart // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfbc330
	void DevResetProfile(struct UObject* WorldContextObject, struct FLatentActionInfo LatentInfo); // Function Hardwired.HWBackendBPL.DevResetProfile // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfbb970
	void DevFakeMatchSimulation(struct UObject* WorldContextObject, struct TArray<struct FHWFakeMatchSimulationEvent> EventData, struct TArray<struct FHWFakeMatchFlowSettings> FlowSettings, int32_t RepeatTimes, int32_t AsOneMatch, int32_t CollectAfterEach, struct TArray<struct FHWFakeMatchWeaponUsage> WeaponUsage, struct FHWLoadoutData LoadoutData, struct FLatentActionInfo LatentInfo); // Function Hardwired.HWBackendBPL.DevFakeMatchSimulation // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xfbb550
	void DevFakeMatch(struct UObject* WorldContextObject, struct TArray<struct FHWGameplayEvent> Events, struct FLatentActionInfo LatentInfo); // Function Hardwired.HWBackendBPL.DevFakeMatch // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xfbb3d0
	void DevAddReward(struct UObject* WorldContextObject, struct FString BoxId, enum class EHWRewardSource Source, struct FLatentActionInfo LatentInfo); // Function Hardwired.HWBackendBPL.DevAddReward // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfbb250
	void DevAddProgression(struct UObject* WorldContextObject, int32_t Amount, struct FLatentActionInfo LatentInfo); // Function Hardwired.HWBackendBPL.DevAddProgression // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfbb120
	void DevAddMissionStat(struct UObject* WorldContextObject, enum class EHWMissionTrackedStat Stat, int32_t Amount, struct FLatentActionInfo LatentInfo); // Function Hardwired.HWBackendBPL.DevAddMissionStat // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfbafc0
	void DevAddInventoryItem(struct UObject* WorldContextObject, enum class EHWInventoryItemType Type, struct FString ConfigId, struct FLatentActionInfo LatentInfo); // Function Hardwired.HWBackendBPL.DevAddInventoryItem // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfbae50
	void CompleteTutorialPart(struct UObject* WorldContextObject, struct FString TutorialId); // Function Hardwired.HWBackendBPL.CompleteTutorialPart // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfbabc0
	void ClaimContractReward(struct UObject* WorldContextObject, struct FLatentActionInfo LatentInfo); // Function Hardwired.HWBackendBPL.ClaimContractReward // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfbaa30
	void ChangeWeaponName(struct UObject* WorldContextObject, struct FString ReceiverItemId, struct FString Name, struct FLatentActionInfo LatentInfo); // Function Hardwired.HWBackendBPL.ChangeWeaponName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfba8a0
	void ChangeFaction(struct UObject* WorldContextObject, enum class EHWFaction NewFaction, struct FHWPlayerProgression Response, struct FLatentActionInfo LatentInfo); // Function Hardwired.HWBackendBPL.ChangeFaction // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xfba6e0
	void CancelContractStage(struct UObject* WorldContextObject, struct FLatentActionInfo LatentInfo); // Function Hardwired.HWBackendBPL.CancelContractStage // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfba600
	void ApplyWeaponCode(struct UObject* WorldContextObject, struct FString WeaponID, struct FString CodeId, struct FLatentActionInfo LatentInfo); // Function Hardwired.HWBackendBPL.ApplyWeaponCode // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfba470
};

// Class Hardwired.HWBackendService
// Size: 0x118 (Inherited: 0x28)
struct UHWBackendService : UObject {
	int32_t AnalyticsEventBufferSize; // 0x28(0x04)
	int32_t AnalyticsEventBufferFlushPeriod; // 0x2c(0x04)
	char pad_30[0x8]; // 0x30(0x08)
	struct TMap<struct FString, struct FHWAnalyticsEventStringArray> AnalyticsEventBuffer; // 0x38(0x50)
	char pad_88[0x8]; // 0x88(0x08)
	struct TSet<struct FString> BlockedPlayersRHG; // 0x90(0x50)
	struct FMulticastInlineDelegate OnFatalBackendError; // 0xe0(0x10)
	struct FMulticastInlineDelegate DisplayNextAdminMessage; // 0xf0(0x10)
	struct TArray<struct FHWMessageData> AdminMessages; // 0x100(0x10)
	char pad_110[0x8]; // 0x110(0x08)

	void UpdatePlayerProfile(); // Function Hardwired.HWBackendService.UpdatePlayerProfile // (Native|Public|BlueprintCallable) // @ game+0xfc3fc0
	void UnblockPlayer(struct FString PlayerId); // Function Hardwired.HWBackendService.UnblockPlayer // (Native|Public|BlueprintCallable) // @ game+0xfc3f20
	void ToggleBackendPolling(bool Enabled); // Function Hardwired.HWBackendService.ToggleBackendPolling // (Native|Public|BlueprintCallable) // @ game+0xfc3e90
	void ToggleAllowFriendInvites(); // Function Hardwired.HWBackendService.ToggleAllowFriendInvites // (Native|Public|BlueprintCallable) // @ game+0xfc3e70
	void TeamUnReady(); // Function Hardwired.HWBackendService.TeamUnReady // (Native|Public|BlueprintCallable) // @ game+0xfc3e50
	void TeamReady(); // Function Hardwired.HWBackendService.TeamReady // (Native|Public|BlueprintCallable) // @ game+0xfc3e30
	void StoreLoadout(struct FHWStoreLoadoutRequest Loadout, bool SelectedLoadout, struct FDelegate ResponseHandler, struct FDelegate ErrorHandler); // Function Hardwired.HWBackendService.StoreLoadout // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0xfc3bb0
	void StopReceivingTeamEvents(struct UObject* Object); // Function Hardwired.HWBackendService.StopReceivingTeamEvents // (Native|Public|BlueprintCallable) // @ game+0xfc3b20
	void StopReceivingPlatformFriendEvents(struct UObject* Object); // Function Hardwired.HWBackendService.StopReceivingPlatformFriendEvents // (Native|Public|BlueprintCallable) // @ game+0xfc3a90
	void StopReceivingFriendEvents(struct UObject* Object); // Function Hardwired.HWBackendService.StopReceivingFriendEvents // (Native|Public|BlueprintCallable) // @ game+0xfc3a00
	void StartReceivingTeamEvents(struct FDelegate Handler, struct FDelegate InviteHandler); // Function Hardwired.HWBackendService.StartReceivingTeamEvents // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0xfc38d0
	void StartReceivingPlatformFriendEvents(struct FDelegate Handler); // Function Hardwired.HWBackendService.StartReceivingPlatformFriendEvents // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0xfc3820
	void StartReceivingFriendEvents(struct FDelegate Handler); // Function Hardwired.HWBackendService.StartReceivingFriendEvents // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0xfc3770
	void SetQuestionnaireShownThisWeek(struct FDelegate ResponseHandler, struct FDelegate ErrorHandler); // Function Hardwired.HWBackendService.SetQuestionnaireShownThisWeek // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0xfc3640
	void SendTeamInvite(struct FString PlayerId); // Function Hardwired.HWBackendService.SendTeamInvite // (Native|Public|BlueprintCallable) // @ game+0xfc3510
	void SendFriendInviteByName(struct FString PlayerName, struct FDelegate ResponseHandler, struct FDelegate ErrorHandler); // Function Hardwired.HWBackendService.SendFriendInviteByName // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0xfc3390
	void SendFriendInviteById(struct FString PlayerId, struct FDelegate ResponseHandler, struct FDelegate ErrorHandler); // Function Hardwired.HWBackendService.SendFriendInviteById // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0xfc3210
	void SendChatMessage(struct FString TeamId, struct FString Message); // Function Hardwired.HWBackendService.SendChatMessage // (Native|Public|BlueprintCallable) // @ game+0xfc3110
	void ResetPassword(struct FString Email, struct FDelegate ResponseHandler, struct FDelegate ErrorHandler); // Function Hardwired.HWBackendService.ResetPassword // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0xfc2ef0
	void RerollMissionReward(struct FString MissionId, struct FDelegate Response, struct FDelegate ErrorHandler); // Function Hardwired.HWBackendService.RerollMissionReward // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0xfc2d70
	void RemoveFriend(struct FString PlayerId); // Function Hardwired.HWBackendService.RemoveFriend // (Native|Public|BlueprintCallable) // @ game+0xfc2cd0
	void RejectTeamInvite(struct FString TeamId); // Function Hardwired.HWBackendService.RejectTeamInvite // (Native|Public|BlueprintCallable) // @ game+0xfc2c30
	void RejectFriendInvite(struct FString PlayerId); // Function Hardwired.HWBackendService.RejectFriendInvite // (Native|Public|BlueprintCallable) // @ game+0xfc2b90
	void RegisterUser(struct FString Username, struct FString Password, struct FString Email, struct FString Region, struct FDelegate ResponseHandler, struct FDelegate ErrorHandler); // Function Hardwired.HWBackendService.RegisterUser // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0xfc2910
	void Logout(struct FDelegate ResponseHandler, struct FDelegate ErrorHandler); // Function Hardwired.HWBackendService.Logout // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0xfc2740
	void Login(struct FString Username, struct FString Password, struct FString Region, struct FDelegate ResponseHandler, struct FDelegate ErrorHandler); // Function Hardwired.HWBackendService.Login // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0xfc2510
	void LoadPublicProfile(struct FString PlayerId, struct FDelegate ResponseHandler, struct FDelegate ErrorHandler); // Function Hardwired.HWBackendService.LoadPublicProfile // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0xfc2390
	void LoadContent(struct FString ID, struct FString Type); // Function Hardwired.HWBackendService.LoadContent // (Native|Public|BlueprintCallable) // @ game+0xfc2290
	void LoadAllMasterData(); // Function Hardwired.HWBackendService.LoadAllMasterData // (Native|Public|BlueprintCallable) // @ game+0xfc2270
	void LeaveTeam(); // Function Hardwired.HWBackendService.LeaveTeam // (Native|Public|BlueprintCallable) // @ game+0xfc2250
	void LeaveMatchWithSession(struct FString PlayerId, bool Disconnected, struct FString MatchID, struct FDelegate ResponseHandler, struct FDelegate ErrorHandler); // Function Hardwired.HWBackendService.LeaveMatchWithSession // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0xfc1fc0
	void LeaveMatch(bool Disconnected, struct FString MatchID, struct FDelegate ResponseHandler, struct FDelegate ErrorHandler); // Function Hardwired.HWBackendService.LeaveMatch // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0xfc1dc0
	void KickPlayerFromTeam(struct FString PlayerId); // Function Hardwired.HWBackendService.KickPlayerFromTeam // (Native|Public|BlueprintCallable) // @ game+0xfc1d20
	void GetStatus(struct FDelegate ResponseHandler, struct FDelegate ErrorHandler); // Function Hardwired.HWBackendService.GetStatus // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0xfc1bf0
	struct FHWFetchTeamResponse GetCurrentTeamData(); // Function Hardwired.HWBackendService.GetCurrentTeamData // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfc1aa0
	struct FHWFriendData GetCurrentFriendData(); // Function Hardwired.HWBackendService.GetCurrentFriendData // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfc19d0
	void FetchTeam(); // Function Hardwired.HWBackendService.FetchTeam // (Native|Public|BlueprintCallable) // @ game+0xfc19b0
	void FetchRewards(struct FDelegate Response, struct FDelegate ErrorHandler); // Function Hardwired.HWBackendService.FetchRewards // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0xfc1880
	void FetchPlayerIdsWithPlatformIds(struct TArray<struct FString> PlatformIds); // Function Hardwired.HWBackendService.FetchPlayerIdsWithPlatformIds // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0xfc17b0
	void FetchNews(struct FDelegate OnNewsFound); // Function Hardwired.HWBackendService.FetchNews // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0xfc1700
	void FetchFriends(); // Function Hardwired.HWBackendService.FetchFriends // (Native|Public|BlueprintCallable) // @ game+0xfc16e0
	void FetchChatMessages(struct FString TeamId, int64_t Timestamp); // Function Hardwired.HWBackendService.FetchChatMessages // (Native|Public|BlueprintCallable) // @ game+0xfc15f0
	void FetchAndShowRewards(struct FDelegate RewardsShownHandler, struct FDelegate ErrorHandler, struct FText Title, struct FText Message, struct FText CollectButtonTitle, struct UUserWidget* WidgetClass); // Function Hardwired.HWBackendService.FetchAndShowRewards // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0xfc12e0
	void ExitMatchmakingAndLeaveTeam(); // Function Hardwired.HWBackendService.ExitMatchmakingAndLeaveTeam // (Native|Public|BlueprintCallable) // @ game+0xfc12c0
	void ExitMatchmaking(); // Function Hardwired.HWBackendService.ExitMatchmaking // (Native|Public|BlueprintCallable) // @ game+0xfc12a0
	void EnterMatchmaking(bool IsTutorial); // Function Hardwired.HWBackendService.EnterMatchmaking // (Native|Public|BlueprintCallable) // @ game+0xfc1210
	void DismantleItem(struct FString ItemId, enum class EHWInventoryItemType Type, struct FDelegate Handler, struct FDelegate ErrorHandler); // Function Hardwired.HWBackendService.DismantleItem // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0xfc1060
	void DevUpdatePlayer(struct FString NewPlayerProfile, struct FDelegate Handler, struct FDelegate ErrorHandler); // Function Hardwired.HWBackendService.DevUpdatePlayer // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0xfc0ee0
	void DevSetPerfectMark(int32_t SecondsFromNow, struct FDelegate Handler, struct FDelegate ErrorHandler); // Function Hardwired.HWBackendService.DevSetPerfectMark // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0xfc0d70
	void DevRefreshMissions(); // Function Hardwired.HWBackendService.DevRefreshMissions // (Native|Public|BlueprintCallable) // @ game+0xfc0d50
	void DevAddWeaponPart(struct FString PartId, struct FString CosmeticId, struct FString SetId, enum class EHWInventoryItemType Type, enum class EHWRarity Rarity, struct FDelegate Handler, struct FDelegate ErrorHandler); // Function Hardwired.HWBackendService.DevAddWeaponPart // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0xfc0aa0
	void DevAddWeaponCode(struct FString WeaponID, enum class EHWCraftingParameterGroup ParamGroup, enum class EHWRarity Rarity, float RollValue, int32_t UpgradePoints, struct FDelegate Handler, struct FDelegate ErrorHandler); // Function Hardwired.HWBackendService.DevAddWeaponCode // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0xfc0820
	void DevAddWeapon(struct FString WeaponID, struct FDelegate Handler, struct FDelegate ErrorHandler); // Function Hardwired.HWBackendService.DevAddWeapon // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0xfc06a0
	void DevAddMissionTrackedStats(struct TArray<struct FHWMissionTrackedValue> Stats); // Function Hardwired.HWBackendService.DevAddMissionTrackedStats // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0xfc05f0
	void DevAddMissionProgression(struct FString MissionId, int32_t Amount); // Function Hardwired.HWBackendService.DevAddMissionProgression // (Native|Public|BlueprintCallable) // @ game+0xfc0510
	void DevAddCurrency(enum class EHWCurrencyType Type, int32_t Amount, struct FDelegate OnSuccess, struct FDelegate ErrorHandler); // Function Hardwired.HWBackendService.DevAddCurrency // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0xfc0370
	void DeleteLoadout(struct FString Name, struct FDelegate ResponseHandler, struct FDelegate ErrorHandler); // Function Hardwired.HWBackendService.DeleteLoadout // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0xfc01f0
	void CompleteMission(struct FString MissionId, struct FDelegate Response, struct FDelegate ErrorHandler); // Function Hardwired.HWBackendService.CompleteMission // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0xfc0070
	void CollectRewards(struct FDelegate Handler, struct FDelegate ErrorHandler); // Function Hardwired.HWBackendService.CollectRewards // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0xfbff40
	void ClearContactsCache(); // Function Hardwired.HWBackendService.ClearContactsCache // (Native|Public|BlueprintCallable) // @ game+0xfbff20
	void ClaimBonusCode(struct FString Code, struct FDelegate Response, struct FDelegate ErrorHandler); // Function Hardwired.HWBackendService.ClaimBonusCode // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0xfbfda0
	void ChangePassword(struct FString Email, struct FString Token, struct FString NewPassword, struct FDelegate ResponseHandler, struct FDelegate ErrorHandler); // Function Hardwired.HWBackendService.ChangePassword // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0xfbfb70
	void BuyShopItem(struct FString ItemId, struct FString SubsectionId, struct FString CampaignId, struct FDelegate Handler, struct FDelegate ErrorHandler); // Function Hardwired.HWBackendService.BuyShopItem // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0xfbf940
	void BlockPlayer(struct FString PlayerId); // Function Hardwired.HWBackendService.BlockPlayer // (Native|Public|BlueprintCallable) // @ game+0xfbf8a0
	void AdminMessageAcknowledged(struct FString MessageId); // Function Hardwired.HWBackendService.AdminMessageAcknowledged // (Native|Public|BlueprintCallable) // @ game+0xfbf800
	void AcceptTeamInvite(struct FString TeamId); // Function Hardwired.HWBackendService.AcceptTeamInvite // (Native|Public|BlueprintCallable) // @ game+0xfbf760
	void AcceptFriendInvite(struct FString PlayerId); // Function Hardwired.HWBackendService.AcceptFriendInvite // (Native|Public|BlueprintCallable) // @ game+0xfbf6c0
};

// Class Hardwired.HWBackendServiceHttp
// Size: 0x3b0 (Inherited: 0x118)
struct UHWBackendServiceHttp : UHWBackendService {
	struct TArray<struct FHWServerConfiguration> Servers; // 0x118(0x10)
	struct FString DefaultServer; // 0x128(0x10)
	bool HasCustomServerConfiguration; // 0x138(0x01)
	char pad_139[0x7]; // 0x139(0x07)
	struct FHWServerConfiguration CurrentServerConfiguration; // 0x140(0x48)
	char pad_188[0x204]; // 0x188(0x204)
	float BackendPollIntervalSeconds; // 0x38c(0x04)
	char pad_390[0x20]; // 0x390(0x20)

	void SelectServerConfiguration(struct FString Name); // Function Hardwired.HWBackendServiceHttp.SelectServerConfiguration // (Native|Public|BlueprintCallable) // @ game+0xfc3070
	void OnPollFailed(enum class EHWErrorMessage Error); // Function Hardwired.HWBackendServiceHttp.OnPollFailed // (Final|Native|Private) // @ game+0xfc2870
};

// Class Hardwired.HWBackendServiceOffline
// Size: 0x158 (Inherited: 0x118)
struct UHWBackendServiceOffline : UHWBackendService {
	bool EnableAnalyticsOutput; // 0x118(0x01)
	char pad_119[0x7]; // 0x119(0x07)
	struct UHWPlayerProfile* DefaultPlayerProfile; // 0x120(0x08)
	char pad_128[0x30]; // 0x128(0x30)

	struct UHWPlayerProfile* GetDefaultPlayerProfile(); // Function Hardwired.HWBackendServiceOffline.GetDefaultPlayerProfile // (Final|Native|Public|BlueprintCallable) // @ game+0xfc1bc0
};

// Class Hardwired.HWBarricadeComponent
// Size: 0xc8 (Inherited: 0xb0)
struct UHWBarricadeComponent : UActorComponent {
	struct FMulticastInlineDelegate OnBarricadeDimensionsSet; // 0xb0(0x10)
	struct FVector2D Dimensions; // 0xc0(0x08)

	void SetDimensions(struct FVector2D InDimensions); // Function Hardwired.HWBarricadeComponent.SetDimensions // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xfc35b0
	void OnRep_Dimensions(); // Function Hardwired.HWBarricadeComponent.OnRep_Dimensions // (Final|Native|Private) // @ game+0xfc28f0
};

// Class Hardwired.HWBarricadeSpot
// Size: 0x220 (Inherited: 0x200)
struct UHWBarricadeSpot : USceneComponent {
	bool Enabled; // 0x1f8(0x01)
	float Height; // 0x1fc(0x04)
	float Width; // 0x200(0x04)
	bool DrawDiag; // 0x204(0x01)
	struct AHWBarricadeSpotHelper* HelperActorClass; // 0x208(0x08)
	char pad_212[0xe]; // 0x212(0x0e)

	void SetDimensionFrom3Points(struct FVector BottomA, struct FVector BottomB, struct FVector Top); // Function Hardwired.HWBarricadeSpot.SetDimensionFrom3Points // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xfc8e80
	void SetBlockedBy(struct UObject* Object); // Function Hardwired.HWBarricadeSpot.SetBlockedBy // (Final|Native|Public|BlueprintCallable) // @ game+0xfc8ce0
	void ReleaseBlocker(); // Function Hardwired.HWBarricadeSpot.ReleaseBlocker // (Final|Native|Public|BlueprintCallable) // @ game+0xfc86d0
	void OnBlockerDestroyed(struct AActor* Actor); // Function Hardwired.HWBarricadeSpot.OnBlockerDestroyed // (Final|Native|Private) // @ game+0xfc8410
	void GetBarricadeSpot(enum class EHWFindResult Result, struct UHWBarricadeSpot* Component, struct AActor* Actor); // Function Hardwired.HWBarricadeSpot.GetBarricadeSpot // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xfc76f0
	void CheckBlockerOnFirstTick(); // Function Hardwired.HWBarricadeSpot.CheckBlockerOnFirstTick // (Final|Native|Private) // @ game+0xfc73e0
};

// Class Hardwired.HWBarricadeSpotHelper
// Size: 0x258 (Inherited: 0x220)
struct AHWBarricadeSpotHelper : AActor {
	struct UHWInteractionComponent* InteractionClass; // 0x220(0x08)
	struct AActor* BarricadeClass; // 0x228(0x08)
	bool DrawDiag; // 0x230(0x01)
	char pad_231[0x3]; // 0x231(0x03)
	struct FVector2D Dimensions; // 0x234(0x08)
	char pad_23C[0x1c]; // 0x23c(0x1c)

	void ShowHologram(struct AActor* Hologram, struct AHWCharacter* Character); // Function Hardwired.HWBarricadeSpotHelper.ShowHologram // (Final|Native|Public|BlueprintCallable) // @ game+0xfc9590
	void OnRep_Dimensions(); // Function Hardwired.HWBarricadeSpotHelper.OnRep_Dimensions // (Final|Native|Private) // @ game+0xfc8660
	void OnEndOverlap(struct UPrimitiveComponent* OverlappedComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function Hardwired.HWBarricadeSpotHelper.OnEndOverlap // (Final|Native|Private) // @ game+0xfc84a0
	void OnBeginOverlap(struct UPrimitiveComponent* OverlappedComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function Hardwired.HWBarricadeSpotHelper.OnBeginOverlap // (Final|Native|Private|HasOutParms) // @ game+0xfc81e0
	void OnBarricadePlaced(struct AHWCharacter* Character); // Function Hardwired.HWBarricadeSpotHelper.OnBarricadePlaced // (Final|Native|Private) // @ game+0xfc8150
	bool CanBePlaced(); // Function Hardwired.HWBarricadeSpotHelper.CanBePlaced // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfc73b0
	void ActivateBarricade(struct AActor* Barricade); // Function Hardwired.HWBarricadeSpotHelper.ActivateBarricade // (Final|Native|Public|BlueprintCallable) // @ game+0xfc7010
};

// Class Hardwired.HWBattlefieldNavigator
// Size: 0x40 (Inherited: 0x28)
struct UHWBattlefieldNavigator : UObject {
	float TrackingEndRange; // 0x28(0x04)
	float TrackingStartRange; // 0x2c(0x04)
	int32_t OwnerTeam; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct AHWMapMarker* TargetActor; // 0x38(0x08)
};

// Class Hardwired.HWBindCapturePrompt
// Size: 0x2c0 (Inherited: 0x2c0)
struct UHWBindCapturePrompt : UBindCapturePrompt {

	struct TArray<struct FKey> GetKeysDown(); // Function Hardwired.HWBindCapturePrompt.GetKeysDown // (Final|Native|Protected|BlueprintCallable) // @ game+0xfc78e0
};

// Class Hardwired.HWBorderSlot
// Size: 0x60 (Inherited: 0x38)
struct UHWBorderSlot : UPanelSlot {
	struct FMargin Padding; // 0x38(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x48(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x49(0x01)
	char pad_4A[0x16]; // 0x4a(0x16)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function Hardwired.HWBorderSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0xfc9490
	void SetPadding(struct FMargin InPadding); // Function Hardwired.HWBorderSlot.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0xfc9350
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function Hardwired.HWBorderSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0xfc9250
};

// Class Hardwired.HWBorderWidget
// Size: 0x168 (Inherited: 0x120)
struct UHWBorderWidget : UContentWidget {
	enum class EHorizontalAlignment HorizontalAlignment; // 0x120(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x121(0x01)
	char pad_122[0x2]; // 0x122(0x02)
	struct FLinearColor BackgroundColor; // 0x124(0x10)
	struct FLinearColor BorderColor; // 0x134(0x10)
	float BorderWidth; // 0x144(0x04)
	struct FMargin Padding; // 0x148(0x10)
	char pad_158[0x10]; // 0x158(0x10)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function Hardwired.HWBorderWidget.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0xfc9510
	void SetPadding(struct FMargin InPadding); // Function Hardwired.HWBorderWidget.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0xfc93e0
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function Hardwired.HWBorderWidget.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0xfc92d0
	void SetBorderWidth(float Width); // Function Hardwired.HWBorderWidget.SetBorderWidth // (Final|Native|Public|BlueprintCallable) // @ game+0xfc8e00
	void SetBorderColor(struct FLinearColor Color); // Function Hardwired.HWBorderWidget.SetBorderColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xfc8d70
	void SetBackgroundColor(struct FLinearColor Color); // Function Hardwired.HWBorderWidget.SetBackgroundColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xfc8c50
};

// Class Hardwired.HWBreakableActor
// Size: 0x230 (Inherited: 0x220)
struct AHWBreakableActor : AActor {
	struct UHWAudioOcclusionPathComponent* AudioOcclusionPathComponent; // 0x220(0x08)
	bool Broken; // 0x228(0x01)
	char pad_229[0x7]; // 0x229(0x07)

	void SetStateToBroken(); // Function Hardwired.HWBreakableActor.SetStateToBroken // (Final|Native|Public|BlueprintCallable) // @ game+0xfc9470
	void OnTriggerEffects(struct FHWObjectBreakData Data); // Function Hardwired.HWBreakableActor.OnTriggerEffects // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnSetStateToBroken(); // Function Hardwired.HWBreakableActor.OnSetStateToBroken // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnRep_Broken(); // Function Hardwired.HWBreakableActor.OnRep_Broken // (Final|Native|Public) // @ game+0xfc8600
	void MulticastBreak(struct FHWObjectBreakData Data); // Function Hardwired.HWBreakableActor.MulticastBreak // (Net|NetReliableNative|Event|NetMulticast|Public) // @ game+0xfc7fc0
	void Break(struct FHWObjectBreakData Data); // Function Hardwired.HWBreakableActor.Break // (Final|Native|Public|BlueprintCallable) // @ game+0xfc7320
};

// Class Hardwired.HWBulletTrail
// Size: 0x220 (Inherited: 0x220)
struct AHWBulletTrail : AActor {

	void SpawnTrail(struct FVector StartPosition, struct FVector EndPosition); // Function Hardwired.HWBulletTrail.SpawnTrail // (Event|Public|HasDefaults|BlueprintEvent) // @ game+0x13c4ca0
};

// Class Hardwired.HWCameraFeedProviderComponent
// Size: 0x9d0 (Inherited: 0x8b0)
struct UHWCameraFeedProviderComponent : USceneCaptureComponent2D {
	struct AController* CurrentController; // 0x8a8(0x08)
	struct TArray<struct AController*> CurrentViewers; // 0x8b0(0x10)
	struct FIntPoint RenderTextureSize; // 0x8c0(0x08)
	struct UMaterialInstanceDynamic* ViewMaterial; // 0x8c8(0x08)
	char pad_8D8[0x10]; // 0x8d8(0x10)
	struct FRotator DesiredRotation; // 0x8e8(0x0c)
	char pad_8F4[0x4]; // 0x8f4(0x04)
	struct AHWMapMarker* MapMarker; // 0x8f8(0x08)
	struct FText ControllerName; // 0x900(0x18)
	struct TArray<struct AController*> EnabledForPlayers; // 0x918(0x10)
	struct FText FeedLabel; // 0x928(0x18)
	struct FText FeedCategory; // 0x940(0x18)
	struct UMaterial* BaseMaterial; // 0x958(0x08)
	struct FName NameOfComponentToRotate; // 0x960(0x08)
	char pad_968[0x8]; // 0x968(0x08)
	float MaxYaw; // 0x970(0x04)
	float MinYaw; // 0x974(0x04)
	float MaxPitch; // 0x978(0x04)
	float MinPitch; // 0x97c(0x04)
	float MaxRotationSpeed; // 0x980(0x04)
	float RotationInputMultiplier; // 0x984(0x04)
	struct TArray<bool> EnabledForTeam; // 0x988(0x10)
	struct TArray<struct FHWTerminalAndTeam> Terminals; // 0x998(0x10)
	bool ShowMapMarker; // 0x9a8(0x01)
	bool AllowDetectingEnemies; // 0x9a9(0x01)
	char pad_9AA[0x2]; // 0x9aa(0x02)
	float DetectionMarkerDuration; // 0x9ac(0x04)
	float DetectionTime; // 0x9b0(0x04)
	enum class EHWCameraStatus CameraStatus; // 0x9b4(0x01)
	char pad_9B5[0x3]; // 0x9b5(0x03)
	struct FMulticastInlineDelegate OnCameraStatusChanged; // 0x9b8(0x10)
	char pad_9C8[0x8]; // 0x9c8(0x08)

	void StopViewing(struct AHWPlayerController* Viewer); // Function Hardwired.HWCameraFeedProviderComponent.StopViewing // (Final|Native|Public|BlueprintCallable) // @ game+0xfc9700
	struct UMaterialInstanceDynamic* StartViewing(struct AHWPlayerController* Viewer); // Function Hardwired.HWCameraFeedProviderComponent.StartViewing // (Final|Native|Public|BlueprintCallable) // @ game+0xfc9660
	void SetEnabledFromTerminal(struct FHWTerminalAndTeam TerminalAndTeam); // Function Hardwired.HWCameraFeedProviderComponent.SetEnabledFromTerminal // (Final|Native|Public|BlueprintCallable) // @ game+0xfc91b0
	void SetEnabledForTeam(int32_t Team, bool Enabled); // Function Hardwired.HWCameraFeedProviderComponent.SetEnabledForTeam // (Final|Native|Public|BlueprintCallable) // @ game+0xfc90e0
	void SetEnabledForPlayer(struct AController* Player); // Function Hardwired.HWCameraFeedProviderComponent.SetEnabledForPlayer // (Final|Native|Public|BlueprintCallable) // @ game+0xfc9050
	void SetEnabledForAll(bool Enabled); // Function Hardwired.HWCameraFeedProviderComponent.SetEnabledForAll // (Final|Native|Public|BlueprintCallable) // @ game+0xfc8fc0
	void OnRep_ControllerName(); // Function Hardwired.HWCameraFeedProviderComponent.OnRep_ControllerName // (Final|Native|Protected) // @ game+0xfc8640
	void OnRep_CameraStatus(); // Function Hardwired.HWCameraFeedProviderComponent.OnRep_CameraStatus // (Final|Native|Public) // @ game+0xfc8620
	bool IsEnabledForTeam(int32_t Team); // Function Hardwired.HWCameraFeedProviderComponent.IsEnabledForTeam // (Final|Native|Public|BlueprintCallable) // @ game+0xfc7ec0
	bool IsEnabledForPlayer(struct AHWPlayerController* Player); // Function Hardwired.HWCameraFeedProviderComponent.IsEnabledForPlayer // (Final|Native|Public|BlueprintCallable) // @ game+0xfc7e20
	struct TArray<struct AHWPlayerCharacter*> GetVisibleTargets(struct TArray<int32_t> TeamsToDetect); // Function Hardwired.HWCameraFeedProviderComponent.GetVisibleTargets // (Final|Native|Public|BlueprintCallable) // @ game+0xfc7ad0
	struct FText GetControllerName(); // Function Hardwired.HWCameraFeedProviderComponent.GetControllerName // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xfc7810
	void ClearTerminal(struct FName TerminalId); // Function Hardwired.HWCameraFeedProviderComponent.ClearTerminal // (Final|Native|Public|BlueprintCallable) // @ game+0xfc7400
};

// Class Hardwired.HWCameraModifierLeaning
// Size: 0x48 (Inherited: 0x48)
struct UHWCameraModifierLeaning : UCameraModifier {
};

// Class Hardwired.HWCharacter
// Size: 0x7d0 (Inherited: 0x4c0)
struct AHWCharacter : ACharacter {
	bool HasDied; // 0x4b8(0x01)
	struct AController* OldController; // 0x4c0(0x08)
	struct AHWPlayerState* OldPS; // 0x4c8(0x08)
	struct FMulticastInlineDelegate OnHWPlayerStateChanged; // 0x4d0(0x10)
	int32_t CharId; // 0x4e0(0x04)
	char pad_4E5[0x3]; // 0x4e5(0x03)
	struct USkeletalMeshComponent* AuthHitMesh; // 0x4e8(0x08)
	struct UHWHitMeshConfig* AuthHitMeshConfig; // 0x4f0(0x08)
	bool KeepFiring; // 0x4f8(0x01)
	char pad_4F9[0x3]; // 0x4f9(0x03)
	float AimStartTime; // 0x4fc(0x04)
	bool CanAim; // 0x500(0x01)
	bool WantsToAim; // 0x501(0x01)
	char pad_502[0x6]; // 0x502(0x06)
	struct FMulticastInlineDelegate OnFireBegin; // 0x508(0x10)
	struct FMulticastInlineDelegate OnFireEnd; // 0x518(0x10)
	struct FMulticastInlineDelegate OnReloadBegin; // 0x528(0x10)
	struct FMulticastInlineDelegate OnReloadEnd; // 0x538(0x10)
	struct FMulticastInlineDelegate OnEquipBegin; // 0x548(0x10)
	struct FMulticastInlineDelegate OnEquipEnd; // 0x558(0x10)
	char pad_568[0x8]; // 0x568(0x08)
	struct FMulticastInlineDelegate OnItemUpdated; // 0x570(0x10)
	char pad_580[0x8]; // 0x580(0x08)
	bool IsIndoors; // 0x588(0x01)
	char pad_589[0x3]; // 0x589(0x03)
	float MaxCharacterInteractionDistance; // 0x58c(0x04)
	float MaxItemInteractionDistance; // 0x590(0x04)
	char pad_594[0x4]; // 0x594(0x04)
	struct UHWInventoryComponent* InventoryComponent; // 0x598(0x08)
	struct UHWInteractionComponent* InteractionItemInView; // 0x5a0(0x08)
	struct UHWInteractionComponent* CurrentInteractionItem; // 0x5a8(0x08)
	struct AHWCharacter* CharacterInView; // 0x5b0(0x08)
	char pad_5B8[0x8]; // 0x5b8(0x08)
	struct UHWInteractionComponent* InteractionComponent; // 0x5c0(0x08)
	struct TArray<struct UHWInteractionComponent*> AttachedComponents; // 0x5c8(0x10)
	struct FName EnemyDownVOId; // 0x5d8(0x08)
	struct FName FriendlyDownVOId; // 0x5e0(0x08)
	struct FName CharacterDeathVOId; // 0x5e8(0x08)
	struct TMap<struct FName, struct FVOSound> VOSounds; // 0x5f0(0x50)
	char pad_640[0x54]; // 0x640(0x54)
	float EnemyVisibleBeforeShowingLabelSeconds; // 0x694(0x04)
	float MaxDistanceForNameLabels; // 0x698(0x04)
	char pad_69C[0x4]; // 0x69c(0x04)
	struct TSet<enum class EHWActionType> ActionStates; // 0x6a0(0x50)
	struct TSet<enum class EHWActionType> ActiveActions; // 0x6f0(0x50)
	struct TMap<struct FString, struct FHWActionSet> DisabledActions; // 0x740(0x50)
	bool ReleasingActions; // 0x790(0x01)
	char pad_791[0x13]; // 0x791(0x13)
	float InteractionTimeMultiplier; // 0x7a4(0x04)
	struct FMulticastInlineDelegate OnDamagePermissionChanged; // 0x7a8(0x10)
	struct FMulticastInlineDelegate OnObjectiveItemUpdated; // 0x7b8(0x10)
	char pad_7C8[0x8]; // 0x7c8(0x08)

	void UpdateIndoorsState(); // Function Hardwired.HWCharacter.UpdateIndoorsState // (Final|Native|Protected) // @ game+0xfc9790
	void ServerToggleLean(int32_t Direction); // Function Hardwired.HWCharacter.ServerToggleLean // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0xfc8b90
	void ServerEndFire(); // Function Hardwired.HWCharacter.ServerEndFire // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0xfc8b40
	void ServerEndAim(); // Function Hardwired.HWCharacter.ServerEndAim // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0xfc8af0
	void ServerBroadcastVO(struct FName SoundId, struct AHWCharacter* Target); // Function Hardwired.HWCharacter.ServerBroadcastVO // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0xfc89e0
	void ServerBeginInteract(struct UHWInteractionComponent* TargetItem, int32_t ItemSlot); // Function Hardwired.HWCharacter.ServerBeginInteract // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0xfc88d0
	void ServerBeginFire(); // Function Hardwired.HWCharacter.ServerBeginFire // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0xfc8880
	void ServerBeginAim(); // Function Hardwired.HWCharacter.ServerBeginAim // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0xfc8830
	void ServerAbortInteract(); // Function Hardwired.HWCharacter.ServerAbortInteract // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0xfc87e0
	void RestartDisabledActions(struct FString DisableID); // Function Hardwired.HWCharacter.RestartDisabledActions // (Final|Native|Public|BlueprintCallable) // @ game+0xfc86f0
	void OnWeaponStateChanged(enum class EHWWeaponState PrevState, enum class EHWWeaponState NewState); // Function Hardwired.HWCharacter.OnWeaponStateChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnRep_HWPlayerState(); // Function Hardwired.HWCharacter.OnRep_HWPlayerState // (Final|Native|Public) // @ game+0xfc8680
	void OnRep_HasDied(); // Function Hardwired.HWCharacter.OnRep_HasDied // (Native|Public) // @ game+0xfc86b0
	void OnPlayerStateSet(); // Function Hardwired.HWCharacter.OnPlayerStateSet // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPickupReceived(struct AHWPickup* NewPickup); // Function Hardwired.HWCharacter.OnPickupReceived // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMeleeHitReceived(bool HeavyAttack); // Function Hardwired.HWCharacter.OnMeleeHitReceived // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnEndSpectateCharacter(); // Function Hardwired.HWCharacter.OnEndSpectateCharacter // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnDeath(enum class EHWDamageType DamageType, struct FHitResult Hit); // Function Hardwired.HWCharacter.OnDeath // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnBeginSpectateCharacter(); // Function Hardwired.HWCharacter.OnBeginSpectateCharacter // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	bool NameTagVisible(); // Function Hardwired.HWCharacter.NameTagVisible // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xfc8120
	void MulticastBroadcastVO(struct FName SoundId, struct AHWCharacter* Target); // Function Hardwired.HWCharacter.MulticastBroadcastVO // (Net|NetReliableNative|Event|NetMulticast|Public) // @ game+0xfc8050
	bool IsLocallyHWControlled(); // Function Hardwired.HWCharacter.IsLocallyHWControlled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfc7f90
	bool IsFirstPerson(); // Function Hardwired.HWCharacter.IsFirstPerson // (Final|Native|Public|BlueprintCallable) // @ game+0xfc7f60
	bool IsDowned(); // Function Hardwired.HWCharacter.IsDowned // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfc7df0
	bool IsAiming(); // Function Hardwired.HWCharacter.IsAiming // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfc7dc0
	bool IsActionHeld(enum class EHWActionType Action); // Function Hardwired.HWCharacter.IsActionHeld // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xfc7d30
	bool IsActionDisabled(enum class EHWActionType Action); // Function Hardwired.HWCharacter.IsActionDisabled // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xfc7ca0
	bool IsActionActive(enum class EHWActionType Action); // Function Hardwired.HWCharacter.IsActionActive // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xfc7c10
	float GetSpreadMultiplier(); // Function Hardwired.HWCharacter.GetSpreadMultiplier // (Native|Public|BlueprintCallable) // @ game+0xfc7a90
	float GetRemoteViewPitch(); // Function Hardwired.HWCharacter.GetRemoteViewPitch // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfc7a50
	float GetRecoilMultiplier(); // Function Hardwired.HWCharacter.GetRecoilMultiplier // (Native|Public|BlueprintCallable) // @ game+0xfc7a10
	struct USkeletalMeshComponent* GetHitMesh(); // Function Hardwired.HWCharacter.GetHitMesh // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfc78b0
	struct AHWPlayerState* GetAnyHWPlayerState(); // Function Hardwired.HWCharacter.GetAnyHWPlayerState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfc76c0
	struct AHWPlayerController* GetAnyHWPlayerController(); // Function Hardwired.HWCharacter.GetAnyHWPlayerController // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfc7690
	void FinishInteract(); // Function Hardwired.HWCharacter.FinishInteract // (Final|Native|Public) // @ game+0xfc7670
	void DetachInteractableComponentFromActor(struct UHWInteractionComponent* Component); // Function Hardwired.HWCharacter.DetachInteractableComponentFromActor // (Final|Native|Public|BlueprintCallable) // @ game+0xfc75e0
	void ClientGiveActionQueue(struct TArray<struct FString> InDisabledKeys, struct TArray<struct FHWActionSet> InDisabledActions); // Function Hardwired.HWCharacter.ClientGiveActionQueue // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0xfc7490
	void BeginInteract(int32_t ItemSlot); // Function Hardwired.HWCharacter.BeginInteract // (Native|Event|Public|BlueprintEvent) // @ game+0xfc7290
	void AttachInteractableComponentToActor(struct UHWInteractionComponent* Component); // Function Hardwired.HWCharacter.AttachInteractableComponentToActor // (Final|Native|Public|BlueprintCallable) // @ game+0xfc7200
	void AddDisabledActions(struct FString DisableID, struct FHWActionSet NewDisabledActions); // Function Hardwired.HWCharacter.AddDisabledActions // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xfc70a0
	void AbortInteract(); // Function Hardwired.HWCharacter.AbortInteract // (Native|Event|Public|BlueprintEvent) // @ game+0xfc6ff0
};

// Class Hardwired.HWCharacterController
// Size: 0x28 (Inherited: 0x28)
struct UHWCharacterController : UInterface {

	bool IsActionHeld(enum class EHWActionType Action); // Function Hardwired.HWCharacterController.IsActionHeld // (Native|Event|Public|BlueprintEvent) // @ game+0xfcfac0
	void HandleHumanDeath(struct AHWHumanCharacter* KilledHuman, struct FString KillerId, struct AActor* DamageDealer, enum class EHWDamageType DamageType, bool WasHeadShot); // Function Hardwired.HWCharacterController.HandleHumanDeath // (Native|Event|Public|BlueprintEvent) // @ game+0xfcf720
};

// Class Hardwired.HWCharacterMovementComponent
// Size: 0xb00 (Inherited: 0xb00)
struct UHWCharacterMovementComponent : UCharacterMovementComponent {

	void OnCapsuleHit(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult Hit); // Function Hardwired.HWCharacterMovementComponent.OnCapsuleHit // (Final|Native|Private|HasOutParms|HasDefaults) // @ game+0xfcfda0
};

// Class Hardwired.HWCharacterMovementConfig
// Size: 0xc0 (Inherited: 0x30)
struct UHWCharacterMovementConfig : UDataAsset {
	struct FHWCharacterSpeedConfig SpeedConfig; // 0x30(0x80)
	struct FHWStaggerConfig StaggerConfig; // 0xb0(0x0c)
	char pad_BC[0x4]; // 0xbc(0x04)
};

// Class Hardwired.HWCharacterVisual
// Size: 0x28 (Inherited: 0x28)
struct UHWCharacterVisual : UInterface {

	struct UMeshComponent* GetArmorMeshComponent(enum class EHWArmorType Type, bool FirstPerson); // Function Hardwired.HWCharacterVisual.GetArmorMeshComponent // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xfce7d0
	void ArmorSetUpdated(); // Function Hardwired.HWCharacterVisual.ArmorSetUpdated // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xfcd660
	void ArmorMeshComponentUpdated(enum class EHWArmorType Type, bool FirstPerson); // Function Hardwired.HWCharacterVisual.ArmorMeshComponentUpdated // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xfcd590
};

// Class Hardwired.HWCheckIfInsideBPL
// Size: 0x28 (Inherited: 0x28)
struct UHWCheckIfInsideBPL : UBlueprintFunctionLibrary {

	float UpdateIndoorsState(struct AActor* Actor); // Function Hardwired.HWCheckIfInsideBPL.UpdateIndoorsState // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfd04c0
};

// Class Hardwired.HWColliderHistoryTracker
// Size: 0x38 (Inherited: 0x28)
struct UHWColliderHistoryTracker : UObject {
	struct TArray<struct UHWCollisionHistoryComponent*> ColliderHistory; // 0x28(0x10)
};

// Class Hardwired.HWCollisionHistoryComponent
// Size: 0x218 (Inherited: 0xb0)
struct UHWCollisionHistoryComponent : UActorComponent {
	bool bOverrideColliderNames; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
	struct TArray<struct USkeletalMeshComponent*> SkeletalMeshes; // 0xb8(0x10)
	struct TArray<struct UStaticMeshComponent*> StaticMeshes; // 0xc8(0x10)
	struct AHWHumanCharacter* HumanOwner; // 0xd8(0x08)
	char pad_E0[0x138]; // 0xe0(0x138)
};

// Class Hardwired.HWCombatBPL
// Size: 0x28 (Inherited: 0x28)
struct UHWCombatBPL : UBlueprintFunctionLibrary {

	bool UseClientSideHitReg(struct UObject* Ctx); // Function Hardwired.HWCombatBPL.UseClientSideHitReg // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xfd0550
	bool ShouldDealDamage(struct AHWPlayerState* MyPS, struct AHWPlayerState* HitPS, struct AHWGameMode* GM); // Function Hardwired.HWCombatBPL.ShouldDealDamage // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfd03c0
	void SendGasDamageAnalytics(struct AHWCharacter* HitCharacter, struct FString ShooterSessionID, bool WasNormal, bool WasBleeding, int32_t BleedAmount, int32_t ItemId); // Function Hardwired.HWCombatBPL.SendGasDamageAnalytics // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfd00a0
	void NextCombatEventId(); // Function Hardwired.HWCombatBPL.NextCombatEventId // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfcfd80
	void HealthDamageResult(struct FHWHealthDamageResult Result, float DamageDealt, bool HasDamage, bool IsDownShot, bool IsKillShot); // Function Hardwired.HWCombatBPL.HealthDamageResult // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xfcf8e0
	struct TArray<struct FHWPlayerHUDLabelInfo> GetPlayerNameLabels(struct UObject* WorldContextObject); // Function Hardwired.HWCombatBPL.GetPlayerNameLabels // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfcf450
	struct FVector GetMeleeHitLocation(struct FHWMeleeTargetData MeleeData, struct AHWCharacter* MeleeInstigator); // Function Hardwired.HWCombatBPL.GetMeleeHitLocation // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0xfcf0a0
	enum class EHWBodypart GetMeleeDataBodypart(struct FHWMeleeTargetData MeleeData); // Function Hardwired.HWCombatBPL.GetMeleeDataBodypart // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xfcef90
	enum class EHWBodypart GetBodypart(struct FHitResult Hit); // Function Hardwired.HWCombatBPL.GetBodypart // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xfce8a0
	void DamageResult(struct FHWCommonDamageResult Result, float DamageDealt, bool HasDamage, bool Destroyed); // Function Hardwired.HWCombatBPL.DamageResult // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xfcdf70
	struct FHWCommonDamageParams DamageParamsFromPlaceable(struct AHWPlaceable* Item); // Function Hardwired.HWCombatBPL.DamageParamsFromPlaceable // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xfcdeb0
	struct FHWCommonDamageParams DamageParamsFromItem(struct AActor* SpawnedItem); // Function Hardwired.HWCombatBPL.DamageParamsFromItem // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xfcdeb0
	struct FHWHumanDamageParams DamageParamsFromHumanTarget(struct AHWHumanCharacter* Human); // Function Hardwired.HWCombatBPL.DamageParamsFromHumanTarget // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xfcdd60
	struct FHWCommonDamageParams DamageParamsFromExplicit(struct AActor* DamageDealer, struct FName Name, struct FString OwnerID, int32_t ItemId); // Function Hardwired.HWCombatBPL.DamageParamsFromExplicit // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xfcdbb0
	void DamageHumanCustom(struct FHWHumanDamageParams Params, float ArmorDamage, float HealthDamage, struct FHWHumanDamageResult Result); // Function Hardwired.HWCombatBPL.DamageHumanCustom // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xfcd990
	void DamageHumanBasic(struct FHWHumanDamageParams Params, float Value, struct FHWHumanDamageResult Result); // Function Hardwired.HWCombatBPL.DamageHumanBasic // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xfcd7a0
	bool CanTargetBeHealed(struct AHWCharacter* Target, bool StopsBleeding, bool CheckOngoingHealing); // Function Hardwired.HWCombatBPL.CanTargetBeHealed // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfcd680
};

// Class Hardwired.HWDamageDealingItem
// Size: 0x28 (Inherited: 0x28)
struct UHWDamageDealingItem : UInterface {

	void SetOwnerSessionId(struct FString ID); // Function Hardwired.HWDamageDealingItem.SetOwnerSessionId // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xfd0320
	void SetItemAnalyticsId(int32_t ID); // Function Hardwired.HWDamageDealingItem.SetItemAnalyticsId // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xfd0290
	void GetOwnerSessionId(struct FString SessionId); // Function Hardwired.HWDamageDealingItem.GetOwnerSessionId // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xfcf3a0
	void GetItemId(struct FName ID); // Function Hardwired.HWDamageDealingItem.GetItemId // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xfcef00
	void GetItemAnalyticsId(int32_t AnalyticsId); // Function Hardwired.HWDamageDealingItem.GetItemAnalyticsId // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xfcee70
	void GetDamageOrigin(struct FVector Origin); // Function Hardwired.HWDamageDealingItem.GetDamageOrigin // (Native|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xfcea90
};

// Class Hardwired.HWDebugBPL
// Size: 0x28 (Inherited: 0x28)
struct UHWDebugBPL : UBlueprintFunctionLibrary {

	void SetViewMode(struct UObject* WorldContextObject, struct FString Mode); // Function Hardwired.HWDebugBPL.SetViewMode // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfce100
	void PrintMaterialCollectionParams(struct UObject* Context, struct UMaterialParameterCollection* Collection, struct FString Message); // Function Hardwired.HWDebugBPL.PrintMaterialCollectionParams // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xfcff80
	void MarkTestGroupExecuted(struct FString TestGroupName); // Function Hardwired.HWDebugBPL.MarkTestGroupExecuted // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfce540
	void MarkTestExecuted(struct FString TestName, struct FString TestResult); // Function Hardwired.HWDebugBPL.MarkTestExecuted // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfcfc10
	void ListViewModes(struct TArray<struct FString> List); // Function Hardwired.HWDebugBPL.ListViewModes // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xfcfb50
	struct FString GetTestInGroupByName(struct FString GroupName, struct FString TestName); // Function Hardwired.HWDebugBPL.GetTestInGroupByName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfcf570
	struct FString GetNextTestInGroup(struct FString GroupName); // Function Hardwired.HWDebugBPL.GetNextTestInGroup // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfcf270
	struct FString GetNextTestGroup(); // Function Hardwired.HWDebugBPL.GetNextTestGroup // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfcf1f0
	struct FString GetHWCharInfo(struct AActor* Actor, bool IncludePlayerInfo); // Function Hardwired.HWDebugBPL.GetHWCharInfo // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xfceb20
	void GetHistogramBin(struct FHWValueDistribution Data, int32_t Idx, float OutStart, float OutEnd, int32_t OutCount, int32_t OutTotal); // Function Hardwired.HWDebugBPL.GetHistogramBin // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xfcec30
	bool GetExplosionVisibilityTargetsDiag(); // Function Hardwired.HWDebugBPL.GetExplosionVisibilityTargetsDiag // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xc04480
	struct FString GetComponentPathName(struct UActorComponent* Component, bool StopAtLevel); // Function Hardwired.HWDebugBPL.GetComponentPathName // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xfce980
	struct TArray<struct FString> GetAllTestsInGroup(struct FString GroupName); // Function Hardwired.HWDebugBPL.GetAllTestsInGroup // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfce6a0
	struct TArray<struct FString> GetAllTestGroups(); // Function Hardwired.HWDebugBPL.GetAllTestGroups // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfce620
	void GenerateTestResults(struct FString Comment); // Function Hardwired.HWDebugBPL.GenerateTestResults // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfce540
	void DebugSavePresetProfile(struct UObject* WorldContextObject, struct FString Filename); // Function Hardwired.HWDebugBPL.DebugSavePresetProfile // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfce470
	bool DebugLoadPresetProfile(struct FString Name, struct FString OutData); // Function Hardwired.HWDebugBPL.DebugLoadPresetProfile // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xfce370
	struct FString DebugGetRarityVersion(struct FString BlueprintId, enum class EHWRarity Rarity); // Function Hardwired.HWDebugBPL.DebugGetRarityVersion // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xfce250
	struct TArray<struct FString> DebugFindPresetProfiles(); // Function Hardwired.HWDebugBPL.DebugFindPresetProfiles // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xfce1d0
	void DebugDumpObject(struct UObject* Object, struct FString Name); // Function Hardwired.HWDebugBPL.DebugDumpObject // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfce100
};

// Class Hardwired.HWDebugPawn
// Size: 0x7d0 (Inherited: 0x7d0)
struct AHWDebugPawn : AHWCharacter {
	struct UCameraComponent* CameraComp; // 0x7c8(0x08)

	void Turn(float Value); // Function Hardwired.HWDebugPawn.Turn // (Native|Event|Public|BlueprintEvent) // @ game+0xfd5590
	void MoveUp(float Value); // Function Hardwired.HWDebugPawn.MoveUp // (Native|Event|Public|BlueprintEvent) // @ game+0xfd4860
	void MoveRight(float Value); // Function Hardwired.HWDebugPawn.MoveRight // (Native|Event|Public|BlueprintEvent) // @ game+0xfd47d0
	void MoveForward(float Value); // Function Hardwired.HWDebugPawn.MoveForward // (Native|Event|Public|BlueprintEvent) // @ game+0xfd4740
	void LookUp(float Value); // Function Hardwired.HWDebugPawn.LookUp // (Native|Event|Public|BlueprintEvent) // @ game+0xfd46b0
};

// Class Hardwired.HWDesignableUserWidget
// Size: 0x260 (Inherited: 0x260)
struct UHWDesignableUserWidget : UUserWidget {

	void OnSynchronizeProperties(); // Function Hardwired.HWDesignableUserWidget.OnSynchronizeProperties // (Native|Event|Public|BlueprintEvent) // @ game+0x9fc3b0
	struct FGeometry GetGeometry(struct FPaintContext Context); // Function Hardwired.HWDesignableUserWidget.GetGeometry // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0xfd42a0
};

// Class Hardwired.HWDestructibleComponent
// Size: 0xf0 (Inherited: 0xb0)
struct UHWDestructibleComponent : UActorComponent {
	struct FMulticastInlineDelegate OnDroneHit; // 0xb0(0x10)
	struct FMulticastInlineDelegate OnVaulted; // 0xc0(0x10)
	struct FMulticastInlineDelegate OnHit; // 0xd0(0x10)
	int32_t Hitpoints; // 0xe0(0x04)
	bool bCanVaultDestroy; // 0xe4(0x01)
	bool bCanDroneDestroy; // 0xe5(0x01)
	bool AllowHitmarker; // 0xe6(0x01)
	char pad_E7[0x1]; // 0xe7(0x01)
	int32_t OwnerTeam; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)

	void Vault(struct AActor* Vaulter); // Function Hardwired.HWDestructibleComponent.Vault // (Final|Native|Public|BlueprintCallable) // @ game+0xfd5620
	void ReceiveDamage(struct AActor* Instigator, struct AActor* DamageDealer, int32_t DamageAmount, enum class EHWDamageType DamageType); // Function Hardwired.HWDestructibleComponent.ReceiveDamage // (Final|Native|Public|BlueprintCallable) // @ game+0xfd4ca0
	bool IsDestroyed(); // Function Hardwired.HWDestructibleComponent.IsDestroyed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfd4640
	void DroneHit(struct AActor* Drone); // Function Hardwired.HWDestructibleComponent.DroneHit // (Final|Native|Public|BlueprintCallable) // @ game+0xfd4070
	void Destroy(struct FHitResult Hit, struct AHWCharacter* Instigator, struct AActor* DamageDealer, enum class EHWDamageType DamageType); // Function Hardwired.HWDestructibleComponent.Destroy // (Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable) // @ game+0xfd3e70
};

// Class Hardwired.HWDetectableComponent
// Size: 0x148 (Inherited: 0xb0)
struct UHWDetectableComponent : UActorComponent {
	struct TArray<enum class EHWDetectionStatus> CurrentDetectionStatus; // 0xb0(0x10)
	struct FMulticastInlineDelegate DetectionStatusUpdated; // 0xc0(0x10)
	struct TArray<int32_t> PlayersNeedUpdate; // 0xd0(0x10)
	struct TArray<struct FHWDetectionEffect> ServerDetectionStatus; // 0xe0(0x10)
	char pad_F0[0x8]; // 0xf0(0x08)
	struct TArray<struct FHWDetectionEffect> ServerConcealmentStatus; // 0xf8(0x10)
	struct AHWMapMarker* LastPingMarker; // 0x108(0x08)
	char pad_110[0x10]; // 0x110(0x10)
	struct FMulticastInlineDelegate OnDynamicPing; // 0x120(0x10)
	char pad_130[0xc]; // 0x130(0x0c)
	float DetectableZOffset; // 0x13c(0x04)
	float VisualMarkerZOffset; // 0x140(0x04)
	bool PingableDetectablePoint; // 0x144(0x01)
	char pad_145[0x3]; // 0x145(0x03)

	void SetVisualMesh(struct USkinnedMeshComponent* Mesh); // Function Hardwired.HWDetectableComponent.SetVisualMesh // (Final|Native|Public|BlueprintCallable) // @ game+0xfd5110
	void SetTeam(int32_t Team); // Function Hardwired.HWDetectableComponent.SetTeam // (Final|Native|Public|BlueprintCallable) // @ game+0xfd5080
	void OnOwnerVitalityChanged(enum class EHWVitalityState VitalityState); // Function Hardwired.HWDetectableComponent.OnOwnerVitalityChanged // (Final|Native|Protected) // @ game+0xfd4b10
	void OnOwnerSpecterStateChanged(struct UHWPlayerEffectsComponent* Sender, bool State); // Function Hardwired.HWDetectableComponent.OnOwnerSpecterStateChanged // (Final|Native|Protected) // @ game+0xfd4a40
	bool HasDynamicPing(); // Function Hardwired.HWDetectableComponent.HasDynamicPing // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfd4470
	struct FVector GetDetectablePoint(); // Function Hardwired.HWDetectableComponent.GetDetectablePoint // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0xfd4230
	void CancelStatus(struct FString ID); // Function Hardwired.HWDetectableComponent.CancelStatus // (Final|Native|Public|BlueprintCallable) // @ game+0xfd3d90
	void CancelAllDetectionStatuses(); // Function Hardwired.HWDetectableComponent.CancelAllDetectionStatuses // (Final|Native|Public|BlueprintCallable) // @ game+0xfd3d70
	void AddDetectionStatusToTeam(int32_t Team, enum class EHWDetectionStatus Status, struct FString ID, struct FString Source, struct AActor* SourceActor, float Duration); // Function Hardwired.HWDetectableComponent.AddDetectionStatusToTeam // (Final|Native|Public|BlueprintCallable) // @ game+0xfd39f0
	void AddDetectionStatusToPlayer(struct AHWCharacter* Player, enum class EHWDetectionStatus Status, struct FString ID, struct FString Source, struct AActor* SourceActor, float Duration); // Function Hardwired.HWDetectableComponent.AddDetectionStatusToPlayer // (Final|Native|Public|BlueprintCallable) // @ game+0xfd3760
	void AddConcealmentStatus(enum class EHWDetectionStatus ConcealedStatus, struct FString ID, float Duration); // Function Hardwired.HWDetectableComponent.AddConcealmentStatus // (Final|Native|Public|BlueprintCallable) // @ game+0xfd35f0
};

// Class Hardwired.HWDirectorController
// Size: 0x570 (Inherited: 0x570)
struct AHWDirectorController : APlayerController {
};

// Class Hardwired.HWDirectorPawn
// Size: 0x870 (Inherited: 0x2a8)
struct AHWDirectorPawn : ASpectatorPawn {
	struct UCineCameraComponent* DirectorCamera; // 0x2a8(0x08)
	char pad_2B0[0x5c0]; // 0x2b0(0x5c0)
};

// Class Hardwired.HWDragDropContext
// Size: 0x58 (Inherited: 0x28)
struct UHWDragDropContext : UObject {
	struct FMulticastInlineDelegate OnDragStarted; // 0x28(0x10)
	struct FMulticastInlineDelegate OnDragCanceled; // 0x38(0x10)
	struct FMulticastInlineDelegate OnDragCompleted; // 0x48(0x10)

	void InvokeDragStarted(struct UObject* Obj); // Function Hardwired.HWDragDropContext.InvokeDragStarted // (Final|Native|Public|BlueprintCallable) // @ game+0xfd45b0
	void InvokeDragCompleted(struct UObject* Obj); // Function Hardwired.HWDragDropContext.InvokeDragCompleted // (Final|Native|Public|BlueprintCallable) // @ game+0xfd4520
	void InvokeDragCanceled(struct UObject* Obj); // Function Hardwired.HWDragDropContext.InvokeDragCanceled // (Final|Native|Public|BlueprintCallable) // @ game+0xfd4490
	bool CanDrag(struct UObject* Obj); // Function Hardwired.HWDragDropContext.CanDrag // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xfd3c80
};

// Class Hardwired.HWDroneAbility
// Size: 0x2c0 (Inherited: 0x220)
struct AHWDroneAbility : AActor {
	enum class EHWDroneAbilityMode AbilityMode; // 0x220(0x01)
	char pad_221[0x7]; // 0x221(0x07)
	struct FText AbilityName; // 0x228(0x18)
	struct FText AbilityDescription; // 0x240(0x18)
	struct FText AbilityActiveStatus; // 0x258(0x18)
	struct UTexture2D* AbilityImage; // 0x270(0x08)
	float ActivationThreshold; // 0x278(0x04)
	char pad_27C[0x4]; // 0x27c(0x04)
	struct AHWDroneCharacter* OwningDrone; // 0x280(0x08)
	bool IsAbilityActive; // 0x288(0x01)
	enum class EHWDroneAbilityType AbilityType; // 0x289(0x01)
	char pad_28A[0x2]; // 0x28a(0x02)
	float ActivationTime; // 0x28c(0x04)
	float Capacity; // 0x290(0x04)
	int32_t MaxCapacity; // 0x294(0x04)
	float RechargeTime; // 0x298(0x04)
	int32_t Team; // 0x29c(0x04)
	bool OnCooldown; // 0x2a0(0x01)
	char pad_2A1[0x3]; // 0x2a1(0x03)
	float CooldownRemaining; // 0x2a4(0x04)
	float CooldownTime; // 0x2a8(0x04)
	float CooldownStartTime; // 0x2ac(0x04)
	struct FTimerHandle TimerHandle_Cooldown; // 0x2b0(0x08)
	struct FTimerHandle AbilityUseTimer; // 0x2b8(0x08)

	void StartCooldown(); // Function Hardwired.HWDroneAbility.StartCooldown // (Final|Native|Public|BlueprintCallable) // @ game+0xfd51a0
	void SetOtherAbilityMode(enum class EHWDroneAbilityMode Mode); // Function Hardwired.HWDroneAbility.SetOtherAbilityMode // (Final|Native|Public|BlueprintCallable) // @ game+0xfd4f80
	void SetAbilityMode(enum class EHWDroneAbilityMode Mode); // Function Hardwired.HWDroneAbility.SetAbilityMode // (Final|Native|Public|BlueprintCallable) // @ game+0xfd4ef0
	void ServerUseSingleAbility(); // Function Hardwired.HWDroneAbility.ServerUseSingleAbility // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0xfd4ea0
	void ServerDeactivateAbility(); // Function Hardwired.HWDroneAbility.ServerDeactivateAbility // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0xfd4e50
	void ServerActivateAbility(); // Function Hardwired.HWDroneAbility.ServerActivateAbility // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0xfd4e00
	void OnUseSingleAbility(); // Function Hardwired.HWDroneAbility.OnUseSingleAbility // (Native|Event|Public|BlueprintEvent) // @ game+0xfd48f0
	void OnUseContinuousAbility(float DeltaTime); // Function Hardwired.HWDroneAbility.OnUseContinuousAbility // (Native|Event|Public|BlueprintEvent) // @ game+0xfd4c30
	void OnUnjammed(); // Function Hardwired.HWDroneAbility.OnUnjammed // (Final|Native|Public) // @ game+0x9ad4e0
	void OnRoutedAbilityEnd(); // Function Hardwired.HWDroneAbility.OnRoutedAbilityEnd // (Native|Event|Public|BlueprintEvent) // @ game+0xfd48f0
	void OnRoutedAbilityBegin(); // Function Hardwired.HWDroneAbility.OnRoutedAbilityBegin // (Native|Event|Public|BlueprintEvent) // @ game+0xfd48f0
	void OnRep_IsAbilityActive(); // Function Hardwired.HWDroneAbility.OnRep_IsAbilityActive // (Final|Native|Public) // @ game+0xfd4bd0
	void OnJammed(); // Function Hardwired.HWDroneAbility.OnJammed // (Final|Native|Public) // @ game+0xfd4a00
	void OnCooldownEnd(); // Function Hardwired.HWDroneAbility.OnCooldownEnd // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnAbilityInterrupted(); // Function Hardwired.HWDroneAbility.OnAbilityInterrupted // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnAbilityDepleted(); // Function Hardwired.HWDroneAbility.OnAbilityDepleted // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnAbilityDeactivated(); // Function Hardwired.HWDroneAbility.OnAbilityDeactivated // (Native|Event|Public|BlueprintEvent) // @ game+0xfd48f0
	void OnAbilityCreated(); // Function Hardwired.HWDroneAbility.OnAbilityCreated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnAbilityBeginUse(); // Function Hardwired.HWDroneAbility.OnAbilityBeginUse // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnAbilityActivated(); // Function Hardwired.HWDroneAbility.OnAbilityActivated // (Native|Event|Public|BlueprintEvent) // @ game+0xfd48f0
	bool IsInstant(); // Function Hardwired.HWDroneAbility.IsInstant // (Final|Native|Public|BlueprintCallable) // @ game+0xfd4670
	bool HasAbilityCapacity(); // Function Hardwired.HWDroneAbility.HasAbilityCapacity // (Native|Event|Public|BlueprintEvent) // @ game+0xfd4440
	float GetRemainingCooldown(); // Function Hardwired.HWDroneAbility.GetRemainingCooldown // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfd43f0
	struct AHWDroneAbility* GetOtherAbility(); // Function Hardwired.HWDroneAbility.GetOtherAbility // (Final|Native|Public|BlueprintCallable) // @ game+0xfd43a0
	struct AHWDroneCharacter* GetDrone(); // Function Hardwired.HWDroneAbility.GetDrone // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfd4270
	void EndCooldown(); // Function Hardwired.HWDroneAbility.EndCooldown // (Final|Native|Public) // @ game+0xfd4190
	float DepleteAbilityCapacity(); // Function Hardwired.HWDroneAbility.DepleteAbilityCapacity // (Native|Event|Public|BlueprintEvent) // @ game+0xfd3e30
	bool CanUseAbility(); // Function Hardwired.HWDroneAbility.CanUseAbility // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xfd3d00
	void BP_GetAbilityState(bool IsActive, float ActivityTime, float TotalTime, bool ShowTime); // Function Hardwired.HWDroneAbility.BP_GetAbilityState // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x13c4ca0
};

// Class Hardwired.HWDroneCharacter
// Size: 0x880 (Inherited: 0x7d0)
struct AHWDroneCharacter : AHWCharacter {
	struct AHWPlayerController* CompanionOwner; // 0x7c8(0x08)
	struct UCameraComponent* CameraComponent; // 0x7d0(0x08)
	struct UHWElectronicsComponent* ElectronicsComponent; // 0x7d8(0x08)
	struct UHWDestructibleComponent* DestructibleComponent; // 0x7e0(0x08)
	struct UHWDroneMovementComponent* DroneMovement; // 0x7e8(0x08)
	struct USceneCaptureComponent2D* SceneCaptureComp; // 0x7f0(0x08)
	float DefaultMouseSensitivity; // 0x7f8(0x04)
	float DefaultDroneHPMax; // 0x804(0x04)
	float DroneHPMax; // 0x808(0x04)
	float DefaultDroneHP; // 0x80c(0x04)
	float DroneHP; // 0x810(0x04)
	float DefaultDroneHPRegenRate; // 0x814(0x04)
	float DroneHPRegenRate; // 0x818(0x04)
	float DefaultDamageMultiplierRegular; // 0x81c(0x04)
	float DamageMultiplierRegular; // 0x820(0x04)
	float DefaultDamageMultiplierElectric; // 0x824(0x04)
	float DamageMultiplierElectric; // 0x828(0x04)
	struct FName DroneId; // 0x82c(0x08)
	struct FHWDroneMovementSpeed InitialMovementSpeed; // 0x834(0x0c)
	struct FHWDroneMovementSpeed MovementSpeed; // 0x840(0x0c)
	float MovementSpeedScale; // 0x84c(0x04)
	float WeaponRange; // 0x850(0x04)
	float WeaponDamage; // 0x854(0x04)
	float WeaponDamageToHuman; // 0x858(0x04)
	float WeaponJamDuration; // 0x85c(0x04)
	struct AHWDroneAbility* PrimaryAbility; // 0x860(0x08)
	struct AHWDroneAbility* SecondaryAbility; // 0x868(0x08)
	char pad_870[0x10]; // 0x870(0x10)

	void Turn(float Value); // Function Hardwired.HWDroneCharacter.Turn // (Native|Event|Public|BlueprintEvent) // @ game+0xfd5590
	void ToggleCombatCompanion(); // Function Hardwired.HWDroneCharacter.ToggleCombatCompanion // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate) // @ game+0xfd5540
	void TakeRegularDamage(struct AActor* DamageInstigator, struct FHitResult Hit, struct AActor* DamageDealer, bool Destroyed, int32_t Damage, enum class EHWDamageType DamageType); // Function Hardwired.HWDroneCharacter.TakeRegularDamage // (Final|Native|Public|HasOutParms) // @ game+0xfd5320
	void TakeElectricDamage(struct AActor* DamageInstigator, struct AActor* DamageDealer, bool Destroyed, float Damage); // Function Hardwired.HWDroneCharacter.TakeElectricDamage // (Final|Native|Public) // @ game+0xfd51c0
	void SetRelativeMovementSpeed(float Multiplier); // Function Hardwired.HWDroneCharacter.SetRelativeMovementSpeed // (Final|Native|Public|BlueprintCallable) // @ game+0xfd5000
	void OnUnjammed(); // Function Hardwired.HWDroneCharacter.OnUnjammed // (Native|Protected) // @ game+0xfd4c10
	void OnRep_MovementSpeedScale(); // Function Hardwired.HWDroneCharacter.OnRep_MovementSpeedScale // (Final|Native|Public) // @ game+0xfd4bf0
	void OnRep_InitialMovementSpeed(); // Function Hardwired.HWDroneCharacter.OnRep_InitialMovementSpeed // (Final|Native|Public) // @ game+0xfd4bb0
	void OnRep_DroneHPMax(); // Function Hardwired.HWDroneCharacter.OnRep_DroneHPMax // (Final|Native|Public) // @ game+0xfd4b90
	void OnJammed(); // Function Hardwired.HWDroneCharacter.OnJammed // (Native|Protected) // @ game+0xfd4a20
	void OnDroneHPSet(float OldHP, float NewHp, float Delta); // Function Hardwired.HWDroneCharacter.OnDroneHPSet // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnDroneHPDepleted(); // Function Hardwired.HWDroneCharacter.OnDroneHPDepleted // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnDestroyedBy(struct AActor* Killer, bool ElectronicDamage); // Function Hardwired.HWDroneCharacter.OnDestroyedBy // (Final|Native|Public|BlueprintCallable) // @ game+0xfd4930
	void OnCombatCompanionDestroyed(); // Function Hardwired.HWDroneCharacter.OnCombatCompanionDestroyed // (Final|Native|Public|BlueprintCallable) // @ game+0xfd4910
	void MoveUp(float Value); // Function Hardwired.HWDroneCharacter.MoveUp // (Native|Event|Public|BlueprintEvent) // @ game+0xfd4860
	void LookUp(float Value); // Function Hardwired.HWDroneCharacter.LookUp // (Native|Event|Public|BlueprintEvent) // @ game+0xfd46b0
	struct AHWDroneAbility* GetSecondaryAbility(); // Function Hardwired.HWDroneCharacter.GetSecondaryAbility // (Final|Native|Public|BlueprintCallable) // @ game+0xfd4420
	struct AHWDroneAbility* GetPrimaryAbility(); // Function Hardwired.HWDroneCharacter.GetPrimaryAbility // (Final|Native|Public|BlueprintCallable) // @ game+0xfd43d0
	struct FVector2D GetLastTickRotationInput(); // Function Hardwired.HWDroneCharacter.GetLastTickRotationInput // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0xfd4370
	void FireWeaponImpulse(float Duration); // Function Hardwired.HWDroneCharacter.FireWeaponImpulse // (Final|Native|Public|BlueprintCallable) // @ game+0xfd41b0
	void EnablePIP(bool Enabled); // Function Hardwired.HWDroneCharacter.EnablePIP // (Final|Native|Public|BlueprintCallable) // @ game+0xfd4100
	void BPEnableCamera(bool Value); // Function Hardwired.HWDroneCharacter.BPEnableCamera // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

// Class Hardwired.HWDroneMovementComponent
// Size: 0xb90 (Inherited: 0xb00)
struct UHWDroneMovementComponent : UCharacterMovementComponent {
	char pad_B00[0x4]; // 0xb00(0x04)
	float BoostSpeedMultiplier; // 0xb04(0x04)
	float BoostAccelerationMultiplier; // 0xb08(0x04)
	char pad_B0C[0x4]; // 0xb0c(0x04)
	float TraceRadius; // 0xb10(0x04)
	float ForwardSpeed; // 0xb14(0x04)
	float BackwardSpeed; // 0xb18(0x04)
	float StrafeSpeed; // 0xb1c(0x04)
	float UpwardSpeed; // 0xb20(0x04)
	float DownwardSpeed; // 0xb24(0x04)
	float SlowFallSpeed; // 0xb28(0x04)
	float FastFallSpeed; // 0xb2c(0x04)
	float SpeedMinMultiplier; // 0xb30(0x04)
	float ForwardAccelerationSpeed; // 0xb34(0x04)
	float BackwardAccelerationSpeed; // 0xb38(0x04)
	float StrafeAccelerationSpeed; // 0xb3c(0x04)
	float UpwardAccelerationSpeed; // 0xb40(0x04)
	float DownwardAccelerationSpeed; // 0xb44(0x04)
	float SlowFallAcceleration; // 0xb48(0x04)
	float FastFallAcceleration; // 0xb4c(0x04)
	float AccelerationMinMultiplier; // 0xb50(0x04)
	float BrakingDecelerationWithoutAHAUp; // 0xb54(0x04)
	float BrakingDecelerationAHAUp; // 0xb58(0x04)
	float BrakingDecelerationWithoutAHADown; // 0xb5c(0x04)
	float BrakingDecelerationAHADown; // 0xb60(0x04)
	float BrakingDecelerationHorizontal; // 0xb64(0x04)
	float AHADistanceUpper; // 0xb68(0x04)
	float AHADistanceNearLimitUpper; // 0xb6c(0x04)
	float AHADistanceLower; // 0xb70(0x04)
	float AHADistanceNearLimitLower; // 0xb74(0x04)
	float AHAMaxSpeedUp; // 0xb78(0x04)
	float AHAMaxSpeedDown; // 0xb7c(0x04)
	float AHAMaxAccelerationUp; // 0xb80(0x04)
	float AHAMaxAccelerationDown; // 0xb84(0x04)
	char pad_B88[0x8]; // 0xb88(0x08)

	bool IsBoostActive(); // Function Hardwired.HWDroneMovementComponent.IsBoostActive // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfdc270
	void GetAltitudeInfo(float Altitude, float Min, float Max); // Function Hardwired.HWDroneMovementComponent.GetAltitudeInfo // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0xfd7cf0
};

// Class Hardwired.HWMapMarker
// Size: 0x308 (Inherited: 0x220)
struct AHWMapMarker : AActor {
	struct FHWMarkerData MarkerData; // 0x220(0xb8)
	struct UBoxComponent* MarkerArea; // 0x2d8(0x08)
	struct FMulticastInlineDelegate OnMarkerColorChanged; // 0x2e0(0x10)
	bool IsHighlighted; // 0x2f0(0x01)
	char pad_2F1[0x7]; // 0x2f1(0x07)
	struct TArray<struct AHWPlayerState*> ConfirmedBy; // 0x2f8(0x10)

	void SetVisibleInObjectivePanel(bool Visible); // Function Hardwired.HWMapMarker.SetVisibleInObjectivePanel // (Final|Native|Public|BlueprintCallable) // @ game+0x1036c90
	void SetVisibleInMap(bool Visible); // Function Hardwired.HWMapMarker.SetVisibleInMap // (Final|Native|Public|BlueprintCallable) // @ game+0x1036c00
	void SetVisibleInHUD(bool Visible); // Function Hardwired.HWMapMarker.SetVisibleInHUD // (Final|Native|Public|BlueprintCallable) // @ game+0x1036b70
	void SetVisibility(bool Map, bool HUD); // Function Hardwired.HWMapMarker.SetVisibility // (Final|Native|Public|BlueprintCallable) // @ game+0x1036aa0
	void SetType(enum class EHWMapMarkerType NewType); // Function Hardwired.HWMapMarker.SetType // (Final|Native|Public|BlueprintCallable) // @ game+0x1036a20
	void SetTimerTimestamp(float ServerWorldTimeSeconds); // Function Hardwired.HWMapMarker.SetTimerTimestamp // (Final|Native|Public|BlueprintCallable) // @ game+0x10369a0
	void SetTimerDuration(float DurationSeconds); // Function Hardwired.HWMapMarker.SetTimerDuration // (Final|Native|Public|BlueprintCallable) // @ game+0x1036920
	void SetPingReason(enum class EHWPingReason Reason); // Function Hardwired.HWMapMarker.SetPingReason // (Final|Native|Public|BlueprintCallable) // @ game+0x10368a0
	void SetOwningTeam(int32_t Team); // Function Hardwired.HWMapMarker.SetOwningTeam // (Final|Native|Public|BlueprintCallable) // @ game+0x1036810
	void SetOwnerPS(struct AHWPlayerState* NewOwnerPS); // Function Hardwired.HWMapMarker.SetOwnerPS // (Final|Native|Public|BlueprintCallable) // @ game+0x1036780
	void SetObjectiveLetter(struct FString Letter); // Function Hardwired.HWMapMarker.SetObjectiveLetter // (Final|Native|Public|BlueprintCallable) // @ game+0x10366e0
	void SetNavigationActiveForTeam(int32_t Team, bool Active); // Function Hardwired.HWMapMarker.SetNavigationActiveForTeam // (Final|Native|Public|BlueprintCallable) // @ game+0x1036610
	void SetNavigationActiveForAll(bool Active); // Function Hardwired.HWMapMarker.SetNavigationActiveForAll // (Final|Native|Public|BlueprintCallable) // @ game+0x1036580
	void SetMarkerTexture(struct UTexture2D* Texture, bool Rotated); // Function Hardwired.HWMapMarker.SetMarkerTexture // (Final|Native|Public|BlueprintCallable) // @ game+0x10364b0
	void SetMarkerTextForTeam(struct FText Text, int32_t Team); // Function Hardwired.HWMapMarker.SetMarkerTextForTeam // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1036390
	void SetMarkerTextForAll(struct FText Text); // Function Hardwired.HWMapMarker.SetMarkerTextForAll // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x10362c0
	void SetLocked(bool Locked); // Function Hardwired.HWMapMarker.SetLocked // (Final|Native|Public|BlueprintCallable) // @ game+0x1036230
	void SetIsHighlighted(bool Value); // Function Hardwired.HWMapMarker.SetIsHighlighted // (Final|Native|Public|BlueprintCallable) // @ game+0x10361a0
	void SetHasVerticalPin(bool Value); // Function Hardwired.HWMapMarker.SetHasVerticalPin // (Final|Native|Public|BlueprintCallable) // @ game+0x1036000
	void SetConfirmedBy(struct AHWPlayerState* Player, bool Value); // Function Hardwired.HWMapMarker.SetConfirmedBy // (Final|Native|Public|BlueprintCallable) // @ game+0x1035f30
	void SetColor(struct FLinearColor NewColor); // Function Hardwired.HWMapMarker.SetColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1035ea0
	void SetAreaRadius(float NewAreaRadius); // Function Hardwired.HWMapMarker.SetAreaRadius // (Final|Native|Public|BlueprintCallable) // @ game+0x1035e20
	void SetActiveForTeam(int32_t Team, bool Active); // Function Hardwired.HWMapMarker.SetActiveForTeam // (Final|Native|Public|BlueprintCallable) // @ game+0x1035d50
	void SetActiveForPlayer(struct AHWPlayerController* Player, bool Enabled); // Function Hardwired.HWMapMarker.SetActiveForPlayer // (Final|Native|Public|BlueprintCallable) // @ game+0x1035c80
	void SetActiveForAll(bool Active); // Function Hardwired.HWMapMarker.SetActiveForAll // (Final|Native|Public|BlueprintCallable) // @ game+0x1035bf0
	void PauseTimer(bool Paused); // Function Hardwired.HWMapMarker.PauseTimer // (Final|Native|Public|BlueprintCallable) // @ game+0x1035770
	void OnRep_MarkerData(struct FHWMarkerData PreviousData); // Function Hardwired.HWMapMarker.OnRep_MarkerData // (Final|Native|Public|HasOutParms) // @ game+0x1035450
	void OnRep_MarkerColor(); // Function Hardwired.HWMapMarker.OnRep_MarkerColor // (Final|Native|Public) // @ game+0x1035430
	void OnMarkerDataChanged(struct FHWMarkerData NewMarkerData); // Function Hardwired.HWMapMarker.OnMarkerDataChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void MarkerUpdated(); // Function Hardwired.HWMapMarker.MarkerUpdated // (Final|Native|Protected) // @ game+0x1034e40
	bool IsNavigationActiveForTeam(int32_t Team); // Function Hardwired.HWMapMarker.IsNavigationActiveForTeam // (Final|Native|Public|BlueprintCallable) // @ game+0x1034d50
	bool IsActiveForTeam(int32_t Team); // Function Hardwired.HWMapMarker.IsActiveForTeam // (Final|Native|Public|BlueprintCallable) // @ game+0x1034c50
	bool IsActiveForMe(); // Function Hardwired.HWMapMarker.IsActiveForMe // (Final|Native|Public|BlueprintCallable) // @ game+0x1034c20
	bool IsActiveForAny(); // Function Hardwired.HWMapMarker.IsActiveForAny // (Final|Native|Public|BlueprintCallable) // @ game+0x1034bf0
	void InitializeMarkerData(struct FHWMarkerData Data); // Function Hardwired.HWMapMarker.InitializeMarkerData // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1034af0
	enum class EHWMapMarkerType GetType(); // Function Hardwired.HWMapMarker.GetType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1034ac0
	float GetTotalTimeSeconds(); // Function Hardwired.HWMapMarker.GetTotalTimeSeconds // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1034a90
	struct FText GetTextForTeam(int32_t Team); // Function Hardwired.HWMapMarker.GetTextForTeam // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1034780
	struct FText GetTextForMe(); // Function Hardwired.HWMapMarker.GetTextForMe // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10346e0
	float GetRemainingTimeSeconds(); // Function Hardwired.HWMapMarker.GetRemainingTimeSeconds // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1034320
	float GetProgress(); // Function Hardwired.HWMapMarker.GetProgress // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1034260
	struct TArray<struct AHWPlayerState*> GetConfirmedPlayers(); // Function Hardwired.HWMapMarker.GetConfirmedPlayers // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1034030
	void ClearTimer(); // Function Hardwired.HWMapMarker.ClearTimer // (Final|Native|Public|BlueprintCallable) // @ game+0x1033930
	void AdjustTimer(float Seconds); // Function Hardwired.HWMapMarker.AdjustTimer // (Final|Native|Public|BlueprintCallable) // @ game+0x10338b0
};

// Class Hardwired.HWDroneSpawnPoint
// Size: 0x320 (Inherited: 0x308)
struct AHWDroneSpawnPoint : AHWMapMarker {
	struct USceneCaptureComponent2D* SceneCapture; // 0x308(0x08)
	int32_t IndexInUI; // 0x310(0x04)
	char pad_314[0x4]; // 0x314(0x04)
	struct UArrowComponent* Arrow; // 0x318(0x08)
};

// Class Hardwired.HWElectronicsComponent
// Size: 0x138 (Inherited: 0xb0)
struct UHWElectronicsComponent : UActorComponent {
	struct FMulticastInlineDelegate OnHit; // 0xb0(0x10)
	struct FMulticastInlineDelegate OnJammed; // 0xc0(0x10)
	struct FMulticastInlineDelegate OnUnjammed; // 0xd0(0x10)
	struct FMulticastInlineDelegate OnJammedBy; // 0xe0(0x10)
	float Hitpoints; // 0xf0(0x04)
	bool IsJammed; // 0xf4(0x01)
	char pad_F5[0x3]; // 0xf5(0x03)
	float MaximumHitpoints; // 0xf8(0x04)
	int32_t RegenerationRate; // 0xfc(0x04)
	bool bAutoGenerateSphereCollision; // 0x100(0x01)
	char pad_101[0x3]; // 0x101(0x03)
	int32_t OwnerTeam; // 0x104(0x04)
	struct AActor* JammedEffectClass; // 0x108(0x08)
	struct FVector EffectLocation; // 0x110(0x0c)
	char pad_11C[0x4]; // 0x11c(0x04)
	struct AActor* SpawnedEffect; // 0x120(0x08)
	char pad_128[0x10]; // 0x128(0x10)

	void ReceiveElectricDamage(struct AActor* Instigator, struct AActor* DamageDealer, float DamageAmount, int32_t InstigatorTeam); // Function Hardwired.HWElectronicsComponent.ReceiveElectricDamage // (Final|Native|Public|BlueprintCallable) // @ game+0xfdc990
	void OnRep_IsJammed(); // Function Hardwired.HWElectronicsComponent.OnRep_IsJammed // (Final|Native|Public) // @ game+0xfdc930
	void Jam(int32_t JammerTeam, float Duration, struct AActor* Source, struct FString SessionId); // Function Hardwired.HWElectronicsComponent.Jam // (Final|Native|Public|BlueprintCallable) // @ game+0xfdc3d0
};

// Class Hardwired.HWFiringComponent
// Size: 0x2d8 (Inherited: 0xb0)
struct UHWFiringComponent : UActorComponent {
	struct AHWHumanCharacter* OwningCharacter; // 0xb0(0x08)
	struct UObject* WeaponClass; // 0xb8(0x08)
	struct AHWMeleeWeaponPart* MeleePartClass; // 0xc0(0x08)
	struct TArray<struct AHWWeapon*> Weapons; // 0xc8(0x10)
	struct FName WeaponAttachSocket1P; // 0xd8(0x08)
	struct FName WeaponAttachSocket3P; // 0xe0(0x08)
	struct FRotator WeaponRotation3P; // 0xe8(0x0c)
	struct FVector WeaponOffset3P; // 0xf4(0x0c)
	char pad_100[0x14]; // 0x100(0x14)
	struct FRotator LastCR; // 0x114(0x0c)
	float TurnDetectionThresholdDegrees; // 0x120(0x04)
	float RecoveryBreakTolerance; // 0x124(0x04)
	struct UCurveFloat* SwayAnimationCurve; // 0x128(0x08)
	float SwayMinimumDuration; // 0x130(0x04)
	float SwayAnimationSpeed; // 0x134(0x04)
	struct FRotator BurstStartRotation; // 0x138(0x0c)
	struct FRotator AimSwayTarget; // 0x144(0x0c)
	float AimSwayTime; // 0x150(0x04)
	float AimSwayDuration; // 0x154(0x04)
	float RecoilInterpolationSpeed; // 0x158(0x04)
	float SwayStartRecoilTolerance; // 0x15c(0x04)
	struct FRotator CurrentAimSway; // 0x160(0x0c)
	struct FRotator RecoilLeftToApply; // 0x16c(0x0c)
	struct FRotator CurrentRecoilSway; // 0x178(0x0c)
	struct FRotator SwayControl; // 0x184(0x0c)
	char pad_190[0x40]; // 0x190(0x40)
	struct FName ReloadVO; // 0x1d0(0x08)
	struct AHWWeapon* CurrentWeapon; // 0x1d8(0x08)
	struct AHWWeapon* DesiredWeapon; // 0x1e0(0x08)
	struct AHWWeapon* LastUnequippedWeapon; // 0x1e8(0x08)
	struct AHWMeleeWeapon* MeleeWeapon; // 0x1f0(0x08)
	struct FMulticastInlineDelegate OnWeaponEquipStarted; // 0x1f8(0x10)
	struct FMulticastInlineDelegate OnWeaponEquipFinished; // 0x208(0x10)
	struct FMulticastInlineDelegate OnWeaponUnequipStarted; // 0x218(0x10)
	struct FMulticastInlineDelegate OnWeaponEquipped; // 0x228(0x10)
	struct FMulticastInlineDelegate OnWeaponUnequipped; // 0x238(0x10)
	struct FMulticastInlineDelegate OnWeaponFired; // 0x248(0x10)
	struct FMulticastInlineDelegate OnWeaponAmmoUpdated; // 0x258(0x10)
	struct FHWActionSet EquipDisables; // 0x268(0x10)
	struct AHWWeapon* WeaponBeforeQuickMelee; // 0x278(0x08)
	struct FHWActionSet QuickMeleeDisables; // 0x280(0x10)
	bool EquipWeaponInProgress; // 0x290(0x01)
	char pad_291[0x7]; // 0x291(0x07)
	struct AHWWeapon* NextWeaponToEquip; // 0x298(0x08)
	bool IsWeaponEquipPending; // 0x2a0(0x01)
	bool IsUnequipInProgress; // 0x2a1(0x01)
	char pad_2A2[0x2]; // 0x2a2(0x02)
	float WeaponEquipOffscreenDuration; // 0x2a4(0x04)
	float WeaponEquipOffscreenMultiplier; // 0x2a8(0x04)
	char pad_2AC[0x4]; // 0x2ac(0x04)
	struct UAnimMontage* OffscreenPose; // 0x2b0(0x08)
	char pad_2B8[0x20]; // 0x2b8(0x20)

	void StartQuickMeleeAttack(struct AHWWeapon* UnequippedWeapon); // Function Hardwired.HWFiringComponent.StartQuickMeleeAttack // (Final|Native|Public) // @ game+0xfdcf70
	void ServerStopEquipWeapon(); // Function Hardwired.HWFiringComponent.ServerStopEquipWeapon // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0xfdcf20
	void ServerEquipWeapon(struct AHWWeapon* WeaponToEquip, enum class EHWUnequipType UnequipType, bool SkipUnequipSound); // Function Hardwired.HWFiringComponent.ServerEquipWeapon // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0xfdcdd0
	void ReplaceCurrentWeapon(struct FHWWeaponParts WeaponData, enum class EHWRarity WeaponRarity); // Function Hardwired.HWFiringComponent.ReplaceCurrentWeapon // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0xfdcb80
	void RefillAmmo(int32_t PercentageOfInitialAmmo); // Function Hardwired.HWFiringComponent.RefillAmmo // (Final|Native|Public|BlueprintCallable) // @ game+0xfdcaf0
	void RecoilAdded(struct FRotator InFrameRecoil); // Function Hardwired.HWFiringComponent.RecoilAdded // (Event|Public|HasDefaults|BlueprintEvent) // @ game+0x13c4ca0
	void Pause1PMontage(); // Function Hardwired.HWFiringComponent.Pause1PMontage // (Final|Native|Public) // @ game+0xfdc970
	void OnRep_Weapons(); // Function Hardwired.HWFiringComponent.OnRep_Weapons // (Final|Native|Private) // @ game+0xfdc950
	void OnRep_DesiredWeapon(struct AHWWeapon* LastWeapon); // Function Hardwired.HWFiringComponent.OnRep_DesiredWeapon // (Final|Native|Public) // @ game+0xfdc8a0
	void OnQuickMeleeEnd(); // Function Hardwired.HWFiringComponent.OnQuickMeleeEnd // (Final|Native|Public) // @ game+0xfdc880
	struct TArray<struct AHWWeapon*> GetWeapons(); // Function Hardwired.HWFiringComponent.GetWeapons // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfdc0b0
	bool CanRefillAmmo(int32_t PercentageOfInitialAmmo); // Function Hardwired.HWFiringComponent.CanRefillAmmo // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfd79d0
};

// Class Hardwired.HWConfigSection
// Size: 0x88 (Inherited: 0x28)
struct UHWConfigSection : UObject {
	struct FString SectionName; // 0x28(0x10)
	struct TMap<struct FString, struct FHWConfig> Entries; // 0x38(0x50)

	struct FString GetStringValue(struct FString Name, struct FString DefaultValue); // Function Hardwired.HWConfigSection.GetStringValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfdb790
	int32_t GetIntValue(struct FString Name, int32_t DefaultValue); // Function Hardwired.HWConfigSection.GetIntValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfda500
	float GetFloatValue(struct FString Name, float DefaultValue); // Function Hardwired.HWConfigSection.GetFloatValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfda1c0
	bool GetData(struct FString Name, struct FHWConfig OutData); // Function Hardwired.HWConfigSection.GetData // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0xfd9670
	bool GetBoolValue(struct FString Name, bool DefaultValue); // Function Hardwired.HWConfigSection.GetBoolValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfd88d0
};

// Class Hardwired.HWGlobals
// Size: 0xb8 (Inherited: 0x28)
struct UHWGlobals : UObject {
	struct TMap<enum class EHWWeaponType, struct UHWWeaponProfile*> DefaultWeaponProfiles; // 0x28(0x50)
	struct FHWMovementSpeeds MovementSpeeds; // 0x78(0x18)
	int32_t MaxArmorFeaturePoints; // 0x90(0x04)
	struct FCollisionProfileName ElectronicsCollisionProfile; // 0x94(0x08)
	float PingAssistDuration; // 0x9c(0x04)
	float MaxLoadoutWeight; // 0xa0(0x04)
	float OrganizedRigExtraMagazineAmount; // 0xa4(0x04)
	float TacticalPouchExtraThrowables; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
	struct UUserWidget* VoiceChatDiagWidget; // 0xb0(0x08)
};

// Class Hardwired.HWGameData
// Size: 0x310 (Inherited: 0x28)
struct UHWGameData : UObject {
	struct FString MasterDataConfigId; // 0x28(0x10)
	struct TArray<struct FHWArmorData> ArmorData; // 0x38(0x10)
	struct TArray<struct FHWArmorSetData> ArmorSetData; // 0x48(0x10)
	struct TArray<struct FHWArmorSetBaseData> ArmorSetBaseData; // 0x58(0x10)
	struct TArray<struct FHWAssembledWeaponData> AssembledWeaponData; // 0x68(0x10)
	struct TArray<struct FHWBoosterData> BoosterData; // 0x78(0x10)
	struct TArray<struct FHWCharacterData> CharacterData; // 0x88(0x10)
	struct TArray<struct FHWArmorFeatureData> ArmorFeatureData; // 0x98(0x10)
	struct TArray<struct FHWFactionData> FactionData; // 0xa8(0x10)
	struct TMap<struct FString, struct UHWConfigSection*> ConfigSections; // 0xb8(0x50)
	struct TArray<struct FHWDroneData> DroneData; // 0x108(0x10)
	struct TArray<struct FHWDroneAbilityData> DroneAbilityData; // 0x118(0x10)
	struct TArray<struct FHWItemData> ItemData; // 0x128(0x10)
	struct TArray<struct FHWLevelRewardData> LevelRewards; // 0x138(0x10)
	struct TArray<struct FHWLevelModifierData> LevelModifiers; // 0x148(0x10)
	struct TArray<struct FHWServerLocationData> ServerLocations; // 0x158(0x10)
	struct TArray<struct FHWWeaponPartData> WeaponPartData; // 0x168(0x10)
	struct TArray<struct FHWWeaponParameterData> WeaponParameterData; // 0x178(0x10)
	struct TArray<struct FHWWeaponCosmeticPartData> WeaponCosmeticPartData; // 0x188(0x10)
	struct TArray<struct FHWWeaponPartSetBonusData> WeaponPartSetData; // 0x198(0x10)
	struct TArray<struct FHWWeaponPartSetAvailabilityData> WeaponPartSetAvailabilityData; // 0x1a8(0x10)
	struct TArray<struct FHWCraftingParameterData> CraftingParameterData; // 0x1b8(0x10)
	struct TArray<struct FHWLevelFlowsData> LevelFlowData; // 0x1c8(0x10)
	struct TArray<struct FHWLevelProgressionData> LevelProgressionData; // 0x1d8(0x10)
	struct TMap<struct FString, struct FHWMissionData> MissionData; // 0x1e8(0x50)
	struct TMap<struct FString, struct FHWSpecialMissionData> SpecialMissionData; // 0x238(0x50)
	struct TArray<struct FHWRewardBoxesData> RewardBoxData; // 0x288(0x10)
	struct TArray<struct FHWContractData> ContractData; // 0x298(0x10)
	struct TArray<struct FHWPlatformProduct> PlatformProductData; // 0x2a8(0x10)
	struct TArray<struct FHWShopItem> ShopItemData; // 0x2b8(0x10)
	struct TArray<struct FHWPriceTier> PriceTierData; // 0x2c8(0x10)
	struct TArray<struct FHWPriceLocalization> PriceLocalizationData; // 0x2d8(0x10)
	struct TArray<struct FHWShopSubsection> ShopSubsectionData; // 0x2e8(0x10)
	struct UHWGlobals* Globals; // 0x2f8(0x08)
	char pad_300[0x10]; // 0x300(0x10)

	struct FHWDroneData LoadDroneData(struct FName DroneId); // Function Hardwired.HWGameData.LoadDroneData // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfdc6a0
	void LoadArmorData(struct FName ArmorId, struct FHWArmorData Out); // Function Hardwired.HWGameData.LoadArmorData // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0xfdc540
	bool IsReceiver(struct FName PartId); // Function Hardwired.HWGameData.IsReceiver // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfdc330
	bool IsContentLoaded(enum class EHWApplicationState State); // Function Hardwired.HWGameData.IsContentLoaded // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfdc2a0
	bool HasWeaponCosmeticPart(struct FName PartId, struct FHWWeaponCosmeticPartData Out); // Function Hardwired.HWGameData.HasWeaponCosmeticPart // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0xfdc140
	float GetWeaponUpgradeLimit(enum class EHWVendor Vendor); // Function Hardwired.HWGameData.GetWeaponUpgradeLimit // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfdc020
	struct TArray<struct FHWWeaponPartData> GetWeaponPartsSorted(); // Function Hardwired.HWGameData.GetWeaponPartsSorted // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfdbf70
	struct FHWWeaponPartSetBonusData GetWeaponPartSetDataBySetId(struct FName SetId, bool IsFullSet); // Function Hardwired.HWGameData.GetWeaponPartSetDataBySetId // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfdbe20
	bool GetWeaponPart(struct FName PartId, struct FHWWeaponPartData Out); // Function Hardwired.HWGameData.GetWeaponPart // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0xfdbcf0
	bool GetWeaponParameters(struct FName PartId, enum class EHWWeaponParameterDataValueType ValueType, struct FHWWeaponParameterData OutData); // Function Hardwired.HWGameData.GetWeaponParameters // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0xfdbba0
	bool GetWeaponCosmeticPart(struct FName PartId, struct FHWWeaponCosmeticPartData Out); // Function Hardwired.HWGameData.GetWeaponCosmeticPart // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0xfdba70
	int32_t GetUpgradePointsPerLevel(enum class EHWVendor Vendor); // Function Hardwired.HWGameData.GetUpgradePointsPerLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfdb9e0
	struct TArray<struct FHWShopItem> GetShopItemsForSubsection(struct FString SubsectionId); // Function Hardwired.HWGameData.GetShopItemsForSubsection // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xfdb630
	bool GetShopDisabled(); // Function Hardwired.HWGameData.GetShopDisabled // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xfdb600
	struct FHWRealMoneyPurchasePrice GetRMTPriceForShopItem(struct FString ShopItemId, struct FString CurrencyCode); // Function Hardwired.HWGameData.GetRMTPriceForShopItem // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xfdb210
	int32_t GetRequiredXpForLevelUp(int32_t CurrentXp); // Function Hardwired.HWGameData.GetRequiredXpForLevelUp // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfdb560
	int32_t GetRequiredXpForLevel(int32_t Level); // Function Hardwired.HWGameData.GetRequiredXpForLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfdb4c0
	void GetRarityWeightsForCraftedItemRarity(struct TMap<enum class EHWRarity, int32_t> Weights); // Function Hardwired.HWGameData.GetRarityWeightsForCraftedItemRarity // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0xfdb380
	struct FText GetPriceForShopItem(struct FString ShopItemId, struct FString CurrencyCode); // Function Hardwired.HWGameData.GetPriceForShopItem // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xfdb0b0
	int32_t GetNumArmorPointsUsed(struct FHWLoadoutData Loadout); // Function Hardwired.HWGameData.GetNumArmorPointsUsed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfdafb0
	int32_t GetNumArmorPointsFree(struct FHWLoadoutData Loadout); // Function Hardwired.HWGameData.GetNumArmorPointsFree // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xfdaeb0
	void GetLevelUpStatus(int32_t CurrentXp, int32_t CurrentLevel, int32_t CurrentLevelXP, int32_t NextLevel, int32_t NextLevelXP, float LevelProgress); // Function Hardwired.HWGameData.GetLevelUpStatus // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0xfdac90
	bool GetLevelProgressionData(int32_t Level, struct FHWLevelProgressionData Data); // Function Hardwired.HWGameData.GetLevelProgressionData // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0xfdab60
	void GetItemsByCategory(struct FString Category, struct TArray<struct FHWItemData> Out); // Function Hardwired.HWGameData.GetItemsByCategory // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0xfda960
	struct FHWItemData GetItemById(struct FName ItemId); // Function Hardwired.HWGameData.GetItemById // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfda6e0
	struct UHWGlobals* GetGlobals(); // Function Hardwired.HWGameData.GetGlobals // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfda4d0
	void GetFullWeaponPartTypesForReceiver(struct FName ReceiverPartId, struct TArray<enum class EHWWeaponPartType> PartTypes, bool IncludeDefaultPartTypes); // Function Hardwired.HWGameData.GetFullWeaponPartTypesForReceiver // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0xfda3a0
	struct TArray<enum class EHWFaction> GetFactionsForVendor(enum class EHWVendor Vendor); // Function Hardwired.HWGameData.GetFactionsForVendor // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfda0e0
	bool GetDroneAbilityData(struct FName AbilityId, struct FHWDroneAbilityData OutData); // Function Hardwired.HWGameData.GetDroneAbilityData // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0xfd9fd0
	struct AHWDroneAbility* GetDroneAbilityClass(struct FString AbilityName); // Function Hardwired.HWGameData.GetDroneAbilityClass // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfd9ee0
	void GetDefaultWeaponPartTypesForReceiver(struct FName ReceiverPartId, struct TArray<enum class EHWWeaponPartType> PartTypes); // Function Hardwired.HWGameData.GetDefaultWeaponPartTypesForReceiver // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0xfd9df0
	void GetDefaultWeaponPartIdsForReceiver(struct FName ReceiverId, struct TMap<enum class EHWWeaponPartType, struct FName> PartIds); // Function Hardwired.HWGameData.GetDefaultWeaponPartIdsForReceiver // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0xfd9c70
	bool GetDefaultWeaponPartForReceiverPart(struct FName ReceiverPartId, enum class EHWWeaponPartType PartType, struct FHWWeaponPartData PartData); // Function Hardwired.HWGameData.GetDefaultWeaponPartForReceiverPart // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0xfd9b00
	bool GetDefaultWeaponPartForReceiver(struct FName ReceiverPartId, enum class EHWWeaponPartType PartType, struct FHWWeaponPartData PartData); // Function Hardwired.HWGameData.GetDefaultWeaponPartForReceiver // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0xfd9990
	struct TArray<struct FHWCraftingParameterData> GetCraftingParametersInGroup(enum class EHWCraftingParameterGroup Group); // Function Hardwired.HWGameData.GetCraftingParametersInGroup // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfd9590
	struct TArray<struct FHWCraftingParameterData> GetCraftingParameters(enum class EHWCraftingItemType Type); // Function Hardwired.HWGameData.GetCraftingParameters // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfd94b0
	bool GetCraftingParameter(enum class EHWCraftingParameter Param, struct FHWCraftingParameterData OutData); // Function Hardwired.HWGameData.GetCraftingParameter // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0xfd93b0
	struct TArray<struct FHWWeaponCosmeticPartData> GetCosmeticWeaponPartsOfType(enum class EHWWeaponPartType PartType); // Function Hardwired.HWGameData.GetCosmeticWeaponPartsOfType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfd92b0
	struct UHWConfigSection* GetConfigSection(struct FString Section); // Function Hardwired.HWGameData.GetConfigSection // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfd9200
	struct TArray<struct FHWWeaponPartData> GetCompatibleWeaponParts(struct FHWWeaponPartData Receiver); // Function Hardwired.HWGameData.GetCompatibleWeaponParts // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfd8f40
	struct TArray<struct FHWWeaponCosmeticPartData> GetCompatibleCosmeticWeaponParts(struct FHWWeaponPartData Receiver); // Function Hardwired.HWGameData.GetCompatibleCosmeticWeaponParts // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0xfd8e00
	void GetCompatibleCharactersForArmorSet(struct FName ArmorSetId, struct TArray<struct FName> Out); // Function Hardwired.HWGameData.GetCompatibleCharactersForArmorSet // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0xfd8d10
	struct TArray<struct FHWRewardBoxesData> GetBoxData(struct FString BoxId, int32_t RecursionCount); // Function Hardwired.HWGameData.GetBoxData // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xfd8b50
	float GetBoosterMultiplier(int32_t Tier); // Function Hardwired.HWGameData.GetBoosterMultiplier // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfd8ab0
	bool GetAssembledWeaponParts(struct FName AssembledWeaponId, struct FHWWeaponParts OutParts); // Function Hardwired.HWGameData.GetAssembledWeaponParts // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0xfd8690
	bool GetAssembledWeapon(struct FName AssembledWeaponId, struct FHWAssembledWeaponData OutData); // Function Hardwired.HWGameData.GetAssembledWeapon // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0xfd8570
	void GetArmorSetsByBaseId(struct FName BaseId, struct TArray<struct FHWArmorSetData> Result); // Function Hardwired.HWGameData.GetArmorSetsByBaseId // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0xfd8440
	bool GetArmorSetData(struct FName ArmorSetId, struct FHWArmorSetData Out, struct FHWArmorSetBaseData OutBase); // Function Hardwired.HWGameData.GetArmorSetData // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0xfd8260
	bool GetArmorFeatureById(struct FName ID, struct FHWArmorFeatureData Out); // Function Hardwired.HWGameData.GetArmorFeatureById // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0xfd8120
	bool GetArmorFeature(enum class EHWArmorFeatureType Type, struct FHWArmorFeatureData Out); // Function Hardwired.HWGameData.GetArmorFeature // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0xfd7fe0
	bool GetArmorData(struct FName ArmorId, enum class EHWCharacterBodyType ForBodyType, struct FHWArmorData Out); // Function Hardwired.HWGameData.GetArmorData // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0xfd7e30
	struct TArray<struct FHWWeaponPartData> GetAllWeaponPartsOfType(enum class EHWWeaponPartType PartType); // Function Hardwired.HWGameData.GetAllWeaponPartsOfType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfd7bf0
	void GetAllArmorDataOfType(enum class EHWArmorType Type, struct TArray<struct FHWArmorData> Out); // Function Hardwired.HWGameData.GetAllArmorDataOfType // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0xfd7a70
};

// Class Hardwired.HWDamageType
// Size: 0x90 (Inherited: 0x40)
struct UHWDamageType : UDamageType {
	enum class EHWDamageType DamageType; // 0x40(0x01)
	bool bUseCustomSoundOnInjury; // 0x41(0x01)
	char pad_42[0x6]; // 0x42(0x06)
	struct FEventSound CustomInjurySound; // 0x48(0x20)
	bool bUseCustomSoundOnDeath; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct FEventSound CustomDeathSound; // 0x70(0x20)
};

// Class Hardwired.HWRecoloringAssetData
// Size: 0x30 (Inherited: 0x28)
struct UHWRecoloringAssetData : UAssetUserData {
	struct UTexture2D* WhiteBaseColor; // 0x28(0x08)
};

// Class Hardwired.HWGameEngine
// Size: 0xe30 (Inherited: 0xe30)
struct UHWGameEngine : UGameEngine {
};

// Class Hardwired.HWGameInstance
// Size: 0x530 (Inherited: 0x1a8)
struct UHWGameInstance : UGameInstance {
	char pad_1A8[0x20]; // 0x1a8(0x20)
	struct UHWPerformanceCapture* PerfrormanceCapture; // 0x1c8(0x08)
	struct UHWOnlineSystem* OnlineSystem; // 0x1d0(0x08)
	struct UHWPurchaseProcessor* PurchaseProcessor; // 0x1d8(0x08)
	bool bVirtualKeyboardVisible; // 0x1e0(0x01)
	char pad_1E1[0x3]; // 0x1e1(0x03)
	float HoldTeamChatActivationTime; // 0x1e4(0x04)
	float StadiaVirtualKeyboardOffset; // 0x1e8(0x04)
	bool IsMusicPlaying; // 0x1ec(0x01)
	char pad_1ED[0x3]; // 0x1ed(0x03)
	struct UAkAudioEvent* MusicEvent; // 0x1f0(0x08)
	char pad_1F8[0x8]; // 0x1f8(0x08)
	struct UUserWidget* LoadingScreenRef; // 0x200(0x08)
	char pad_208[0xb0]; // 0x208(0xb0)
	bool bIsDisconnectTest; // 0x2b8(0x01)
	bool OfflineMode; // 0x2b9(0x01)
	bool IsServerPingDone; // 0x2ba(0x01)
	char pad_2BB[0x5]; // 0x2bb(0x05)
	struct TArray<struct FString> SessionIdsTeam1; // 0x2c0(0x10)
	struct TArray<struct FString> SessionIdsTeam2; // 0x2d0(0x10)
	struct TArray<struct FString> SessionIdsTeam3; // 0x2e0(0x10)
	struct TArray<struct FString> TeamIds1; // 0x2f0(0x10)
	struct TArray<struct FString> TeamIds2; // 0x300(0x10)
	struct TArray<struct FString> TeamIds3; // 0x310(0x10)
	struct FString MatchTeamId1; // 0x320(0x10)
	struct FString MatchTeamId2; // 0x330(0x10)
	struct FString MatchTeamId3; // 0x340(0x10)
	struct FString MatchID; // 0x350(0x10)
	struct FText PopupMessage; // 0x360(0x18)
	struct FString ExternalServerIP; // 0x378(0x10)
	struct UHWGameData* GlobalGameData; // 0x388(0x08)
	struct UHWShopData* ShopData; // 0x390(0x08)
	struct UHWActorPoolManager* GlobalActorPoolManager; // 0x398(0x08)
	struct UHWBackendService* BackendService; // 0x3a0(0x08)
	struct UHWMatchmakingService* MatchmakingService; // 0x3a8(0x08)
	struct UHWImageService* ImageService; // 0x3b0(0x08)
	struct UHWSessionData* SessionData; // 0x3b8(0x08)
	struct UHWPingBase* HWPing; // 0x3c0(0x08)
	char pad_3C8[0x8]; // 0x3c8(0x08)
	struct UHWVoiceChatVivox* VoiceChat; // 0x3d0(0x08)
	char pad_3D8[0x58]; // 0x3d8(0x58)
	struct TMap<enum class EHWServerLocation, int32_t> ServerPings; // 0x430(0x50)
	bool bFriendOutlinesEnabled; // 0x480(0x01)
	char pad_481[0x9f]; // 0x481(0x9f)
	struct FMulticastInlineDelegate OnMaintenanceIsDue; // 0x520(0x10)

	void ToggleVirtualKeyboard(); // Function Hardwired.HWGameInstance.ToggleVirtualKeyboard // (Final|Native|Public|BlueprintCallable) // @ game+0xfedef0
	void StoreMapLoadProgress(struct FString InLastLoadedLevel, float InProgress); // Function Hardwired.HWGameInstance.StoreMapLoadProgress // (Final|Native|Public|BlueprintCallable) // @ game+0xfede00
	void ShowVirtualKeyboard(bool bValue); // Function Hardwired.HWGameInstance.ShowVirtualKeyboard // (Final|Native|Public|BlueprintCallable) // @ game+0xfedb90
	void ShowLoadingScreen(); // Function Hardwired.HWGameInstance.ShowLoadingScreen // (Final|Native|Public|BlueprintCallable) // @ game+0xfedb70
	bool ShouldSkipTutorialLocally(struct FString TutorialId); // Function Hardwired.HWGameInstance.ShouldSkipTutorialLocally // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfeda70
	void SetServerPing(enum class EHWServerLocation Location, int32_t Ping); // Function Hardwired.HWGameInstance.SetServerPing // (Final|Native|Public|BlueprintCallable) // @ game+0xfed920
	void SetPreferredServerLocation(enum class EHWServerLocation NewLocation); // Function Hardwired.HWGameInstance.SetPreferredServerLocation // (Final|Native|Public|BlueprintCallable) // @ game+0xfed8a0
	void SetOfflineMode(bool Offline, bool GoToMainMenu); // Function Hardwired.HWGameInstance.SetOfflineMode // (Final|Native|Public|BlueprintCallable) // @ game+0xfed7d0
	void SetLockMMToSelectedRegion(bool Allow); // Function Hardwired.HWGameInstance.SetLockMMToSelectedRegion // (Final|Native|Public|BlueprintCallable) // @ game+0xfed740
	void SetAppState(enum class EHWApplicationState NewState); // Function Hardwired.HWGameInstance.SetAppState // (Final|Native|Public|BlueprintCallable) // @ game+0xfed440
	void SendSessionStartEvent(); // Function Hardwired.HWGameInstance.SendSessionStartEvent // (Final|Native|Private) // @ game+0xfed420
	void SendSessionEndEvent(); // Function Hardwired.HWGameInstance.SendSessionEndEvent // (Final|Native|Private) // @ game+0xfed400
	void SendClientHeartbeat(); // Function Hardwired.HWGameInstance.SendClientHeartbeat // (Final|Native|Private) // @ game+0xfed3a0
	void RemoveTutorialToSkip(struct FString TutorialId); // Function Hardwired.HWGameInstance.RemoveTutorialToSkip // (Final|Native|Public|BlueprintCallable) // @ game+0xfed2f0
	void OnStartMapLoad(struct FString InMapName); // Function Hardwired.HWGameInstance.OnStartMapLoad // (Final|Native|Public|BlueprintCallable) // @ game+0xfed130
	void OnServerpingsRefreshed(); // Function Hardwired.HWGameInstance.OnServerpingsRefreshed // (Final|Native|Public) // @ game+0xfed110
	void OnEndMapLoad(struct UWorld* World); // Function Hardwired.HWGameInstance.OnEndMapLoad // (Final|Native|Public) // @ game+0xfec200
	void OnClientDisconnected(struct UWorld* World, struct UNetDriver* NetDriver, enum class ENetworkFailure Type, struct FString Message); // Function Hardwired.HWGameInstance.OnClientDisconnected // (Final|Native|Public) // @ game+0xfec090
	void OnChangeUIVolume(); // Function Hardwired.HWGameInstance.OnChangeUIVolume // (Final|Native|Public) // @ game+0xfec070
	void OnChangeSpeechVolume(); // Function Hardwired.HWGameInstance.OnChangeSpeechVolume // (Final|Native|Public) // @ game+0xfec050
	void OnChangeSFXVolume(); // Function Hardwired.HWGameInstance.OnChangeSFXVolume // (Final|Native|Public) // @ game+0xfec030
	void OnChangeResolutionScale(); // Function Hardwired.HWGameInstance.OnChangeResolutionScale // (Final|Native|Public) // @ game+0xfec010
	void OnChangeMusicVolume(); // Function Hardwired.HWGameInstance.OnChangeMusicVolume // (Final|Native|Public) // @ game+0xfebff0
	void OnChangeMouseSmoothing(); // Function Hardwired.HWGameInstance.OnChangeMouseSmoothing // (Final|Native|Public) // @ game+0xfebfd0
	void OnChangeMouseSensitivity(); // Function Hardwired.HWGameInstance.OnChangeMouseSensitivity // (Final|Native|Public) // @ game+0xfebfb0
	void OnChangeMasterVolume(); // Function Hardwired.HWGameInstance.OnChangeMasterVolume // (Final|Native|Public) // @ game+0xfebf90
	void OnChangeLanguage(); // Function Hardwired.HWGameInstance.OnChangeLanguage // (Final|Native|Public) // @ game+0xfebf70
	void OnChangeInvertMouseY(); // Function Hardwired.HWGameInstance.OnChangeInvertMouseY // (Final|Native|Public) // @ game+0xfebf50
	void OnChangeFriendlyOutlines(); // Function Hardwired.HWGameInstance.OnChangeFriendlyOutlines // (Final|Native|Public) // @ game+0xfebf30
	void OnChangeFOV(); // Function Hardwired.HWGameInstance.OnChangeFOV // (Final|Native|Public) // @ game+0xfebf10
	void OnChangeDLSS(); // Function Hardwired.HWGameInstance.OnChangeDLSS // (Final|Native|Public) // @ game+0xfebef0
	void OnChangeBassModifier(); // Function Hardwired.HWGameInstance.OnChangeBassModifier // (Final|Native|Public) // @ game+0xfebed0
	void OnChangeAudioDevice(); // Function Hardwired.HWGameInstance.OnChangeAudioDevice // (Final|Native|Public) // @ game+0xfebeb0
	void OnAppClosed(); // Function Hardwired.HWGameInstance.OnAppClosed // (Final|Native|Private) // @ game+0xfebc90
	void Logout(struct FDelegate ResponseHandler, struct FDelegate ErrorHandler); // Function Hardwired.HWGameInstance.Logout // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xfebb70
	void LoadLocalPlayerProfile(); // Function Hardwired.HWGameInstance.LoadLocalPlayerProfile // (Final|Native|Public|BlueprintCallable) // @ game+0xfebb50
	bool IsLocalPlayerLoggedIn(); // Function Hardwired.HWGameInstance.IsLocalPlayerLoggedIn // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfebb20
	bool IsInBattle(struct UObject* WorldContextObject); // Function Hardwired.HWGameInstance.IsInBattle // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xfeba80
	void InvalidateSession(); // Function Hardwired.HWGameInstance.InvalidateSession // (Final|Native|Public|BlueprintCallable) // @ game+0xfeba60
	void HideLoadingScreen(bool Force); // Function Hardwired.HWGameInstance.HideLoadingScreen // (Final|Native|Public|BlueprintCallable) // @ game+0xfeb9d0
	bool HasNetworkError(); // Function Hardwired.HWGameInstance.HasNetworkError // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfeb9a0
	bool HasMatchResults(); // Function Hardwired.HWGameInstance.HasMatchResults // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfeb970
	struct UHWVoiceChatVivox* GetVoiceChat(); // Function Hardwired.HWGameInstance.GetVoiceChat // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xfeb890
	enum class EHWTeamStatus GetTeamStatus(); // Function Hardwired.HWGameInstance.GetTeamStatus // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfeb860
	struct UHWShopData* GetShopData(); // Function Hardwired.HWGameInstance.GetShopData // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfeb840
	struct UHWSessionData* GetSessionData(); // Function Hardwired.HWGameInstance.GetSessionData // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfeb820
	struct TMap<enum class EHWServerLocation, float> GetServerRelativePings(); // Function Hardwired.HWGameInstance.GetServerRelativePings // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xfeb750
	struct TMap<enum class EHWServerLocation, int32_t> GetServerPings(); // Function Hardwired.HWGameInstance.GetServerPings // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfeb5f0
	enum class EHWServerLocation GetPreferredServerLocation(); // Function Hardwired.HWGameInstance.GetPreferredServerLocation // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfeb5a0
	struct FString GetPlayerDisplayName(struct FString ID); // Function Hardwired.HWGameInstance.GetPlayerDisplayName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfeb400
	int32_t GetPingForLocation(enum class EHWServerLocation Location); // Function Hardwired.HWGameInstance.GetPingForLocation // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfeb370
	struct UHWPingBase* GetPing(); // Function Hardwired.HWGameInstance.GetPing // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfeb350
	struct UHWOnlineSystem* GetOnlineSystem(); // Function Hardwired.HWGameInstance.GetOnlineSystem // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfeb330
	struct FText GetNetworkErrorMessage(); // Function Hardwired.HWGameInstance.GetNetworkErrorMessage // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfeb290
	struct UHWMatchResults* GetMatchResults(); // Function Hardwired.HWGameInstance.GetMatchResults // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xfeb240
	struct UHWMatchmakingService* GetMatchmakingService(); // Function Hardwired.HWGameInstance.GetMatchmakingService // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfeb270
	bool GetLockMMToSelectedRegion(); // Function Hardwired.HWGameInstance.GetLockMMToSelectedRegion // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfeb220
	struct FString GetLocalSessionId(); // Function Hardwired.HWGameInstance.GetLocalSessionId // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfeb1a0
	struct UHWPlayerProfile* GetLocalPlayerProfile(); // Function Hardwired.HWGameInstance.GetLocalPlayerProfile // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfeb170
	struct UHWImageService* GetImageService(); // Function Hardwired.HWGameInstance.GetImageService // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfeb150
	struct UHWGameData* GetGlobalGamedata(); // Function Hardwired.HWGameInstance.GetGlobalGamedata // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfeb130
	struct UHWActorPoolManager* GetGlobalActorPoolManager(); // Function Hardwired.HWGameInstance.GetGlobalActorPoolManager // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfeb110
	enum class EHWInputType GetCurrentInputType(); // Function Hardwired.HWGameInstance.GetCurrentInputType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfeb0e0
	struct UHWBackendService* GetBackendService(); // Function Hardwired.HWGameInstance.GetBackendService // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfeb010
	void ForceBuildId(struct FString ID); // Function Hardwired.HWGameInstance.ForceBuildId // (Final|Exec|Native|Public) // @ game+0xfeae80
	bool ConsumeAutoConnect(); // Function Hardwired.HWGameInstance.ConsumeAutoConnect // (Final|Native|Public|BlueprintCallable) // @ game+0xfea6c0
	void ClearNetworkError(); // Function Hardwired.HWGameInstance.ClearNetworkError // (Final|Native|Public|BlueprintCallable) // @ game+0xfea6a0
	void AddTutorialToSkip(struct FString TutorialId); // Function Hardwired.HWGameInstance.AddTutorialToSkip // (Final|Native|Public|BlueprintCallable) // @ game+0xfea460
};

// Class Hardwired.HWGameMode
// Size: 0x970 (Inherited: 0x308)
struct AHWGameMode : AGameMode {
	char pad_308[0x68]; // 0x308(0x68)
	struct TArray<struct AActor*> GamemodeListeners; // 0x370(0x10)
	struct TArray<struct AActor*> PlayerListeners; // 0x380(0x10)
	struct FString GameplayMap; // 0x390(0x10)
	struct FString LevelBasePath; // 0x3a0(0x10)
	bool Quickstart; // 0x3b0(0x01)
	bool NoIntroVideo; // 0x3b1(0x01)
	char pad_3B2[0x2]; // 0x3b2(0x02)
	float MaxTimeToWaitForACK; // 0x3b4(0x04)
	float MaxTimeToWaitForFirstACK; // 0x3b8(0x04)
	int32_t NumRounds; // 0x3bc(0x04)
	int32_t NumPlayersNeeded; // 0x3c0(0x04)
	float RoundResultsDuration; // 0x3c4(0x04)
	float RoundBriefingDuration; // 0x3c8(0x04)
	float SelectLoadoutDuration; // 0x3cc(0x04)
	float MapBriefingDuration; // 0x3d0(0x04)
	float RoundIntroDuration; // 0x3d4(0x04)
	float RoundDuration; // 0x3d8(0x04)
	float RoundOutroDuration; // 0x3dc(0x04)
	float ShowResultsDuration; // 0x3e0(0x04)
	float RoundEndDuration; // 0x3e4(0x04)
	float DurationStartAnyway; // 0x3e8(0x04)
	float DurationMaxTimeToWaitForPlayers; // 0x3ec(0x04)
	bool RecordReplay; // 0x3f0(0x01)
	bool DisableBackfill; // 0x3f1(0x01)
	char pad_3F2[0x2]; // 0x3f2(0x02)
	float WaitForMissingPlayer; // 0x3f4(0x04)
	char pad_3F8[0x8]; // 0x3f8(0x08)
	struct FString MapName; // 0x400(0x10)
	struct FString FlowId; // 0x410(0x10)
	struct FString FlowVariation; // 0x420(0x10)
	int32_t MVPScoringKillPoints; // 0x430(0x04)
	int32_t MVPScoringAssistPoints; // 0x434(0x04)
	int32_t MVPScoringWinByObjectivePoints; // 0x438(0x04)
	bool AllowSpectateOtherTeams; // 0x43c(0x01)
	char pad_43D[0x13]; // 0x43d(0x13)
	struct TArray<struct FString> Team1PlayerNames; // 0x450(0x10)
	struct TArray<struct FString> Team2PlayerNames; // 0x460(0x10)
	struct TArray<struct FString> Team3PlayerNames; // 0x470(0x10)
	struct TArray<struct FString> DevelopmentSessionIDs; // 0x480(0x10)
	struct FString AnalyticsUploadScript; // 0x490(0x10)
	char pad_4A0[0xb1]; // 0x4a0(0xb1)
	bool DevelopmentFastLogin; // 0x551(0x01)
	char pad_552[0x6e]; // 0x552(0x6e)
	struct TMap<struct FString, struct UHWPlayerProfile*> PlayerProfiles; // 0x5c0(0x50)
	struct TMap<struct FString, struct FHWLoadoutData> PlayerSelectedLoadouts; // 0x610(0x50)
	char pad_660[0x50]; // 0x660(0x50)
	struct TArray<struct AHWPlayerController*> ConnectedPlayers; // 0x6b0(0x10)
	struct TMap<struct FString, struct AHWPlayerController*> PlayerControllers; // 0x6c0(0x50)
	struct TSet<struct AHWPlayerController*> ReconnectingPlayers; // 0x710(0x50)
	struct TArray<int32_t> ForceTeams; // 0x760(0x10)
	bool EnableForceTeams; // 0x770(0x01)
	bool AutoSpawnProfiler; // 0x771(0x01)
	char pad_772[0x6]; // 0x772(0x06)
	struct TMap<struct FString, struct AController*> AllControllers; // 0x778(0x50)
	char pad_7C8[0xb8]; // 0x7c8(0xb8)
	float AnalyticsPlayerHeartbeatFrequency; // 0x880(0x04)
	float AnalyticsServerHeartbeatFrequency; // 0x884(0x04)
	char pad_888[0x30]; // 0x888(0x30)
	struct TArray<struct UHWCameraFeedProviderComponent*> AvailableCameraFeeds; // 0x8b8(0x10)
	struct UHWColliderHistoryTracker* ColliderHistoryTracker; // 0x8c8(0x08)
	struct TArray<struct FHWTeamDamagePermission> TeamDamagePermission; // 0x8d0(0x10)
	char pad_8E0[0x4]; // 0x8e0(0x04)
	bool ClientSideHitReg; // 0x8e4(0x01)
	char pad_8E5[0x3]; // 0x8e5(0x03)
	struct TArray<struct FHWMatchChatMessage> ChatMessages; // 0x8e8(0x10)
	char pad_8F8[0x8]; // 0x8f8(0x08)
	struct TMap<struct FString, struct UHWPlayerProfile*> InitialPlayerProfiles; // 0x900(0x50)
	char pad_950[0x18]; // 0x950(0x18)
	int32_t MaxTimeToWaitForProfileRefresh; // 0x968(0x04)
	char pad_96C[0x4]; // 0x96c(0x04)

	void TimeoutRound(); // Function Hardwired.HWGameMode.TimeoutRound // (Final|Exec|Native|Private) // @ game+0x9ad4e0
	void StopViewingCamera(struct UHWCameraFeedProviderComponent* Camera, struct AHWPlayerController* Viewer); // Function Hardwired.HWGameMode.StopViewingCamera // (Final|Native|Public) // @ game+0xfedd30
	void StopReplayRecording(); // Function Hardwired.HWGameMode.StopReplayRecording // (Final|Native|Private|BlueprintCallable) // @ game+0xfedd10
	void StartViewingCamera(struct UHWCameraFeedProviderComponent* Camera, struct AHWPlayerController* Viewer); // Function Hardwired.HWGameMode.StartViewingCamera // (Final|Native|Public) // @ game+0xfedc40
	void StartReplayRecording(); // Function Hardwired.HWGameMode.StartReplayRecording // (Final|Native|Private|BlueprintCallable) // @ game+0xfedc20
	void SetTimeRemaining(float TimeRemaining); // Function Hardwired.HWGameMode.SetTimeRemaining // (Final|Native|Public|BlueprintCallable) // @ game+0xfed9f0
	void SetCanDealDamageAgainstTeam(int32_t SourceTeam, int32_t TargetTeam, bool CanDealDamage); // Function Hardwired.HWGameMode.SetCanDealDamageAgainstTeam // (Final|Native|Public|BlueprintCallable) // @ game+0xfed630
	void SetCanDealDamage(int32_t SourceTeam, bool AgainstTeam0, bool AgainstTeam1, bool AgainstTeam2); // Function Hardwired.HWGameMode.SetCanDealDamage // (Final|Native|Public|BlueprintCallable) // @ game+0xfed4c0
	void SendServerHeartbeatEvent(); // Function Hardwired.HWGameMode.SendServerHeartbeatEvent // (Final|Native|Private) // @ game+0xfed3e0
	void SendPlayerHeartbeatEvent(); // Function Hardwired.HWGameMode.SendPlayerHeartbeatEvent // (Final|Native|Private) // @ game+0xfed3c0
	void RestartRoundFast(); // Function Hardwired.HWGameMode.RestartRoundFast // (Final|Exec|Native|Private) // @ game+0x9ad4e0
	void RestartRound(); // Function Hardwired.HWGameMode.RestartRound // (Final|Exec|Native|Private) // @ game+0x9ad4e0
	void RemoveCameraFeed(struct UHWCameraFeedProviderComponent* Camera); // Function Hardwired.HWGameMode.RemoveCameraFeed // (Final|Native|Public) // @ game+0xfed260
	void OnUserLoaded(struct UHWPlayerProfile* Player); // Function Hardwired.HWGameMode.OnUserLoaded // (Final|Native|Public) // @ game+0xfed1d0
	void OnPlayerProfilesRefreshed(struct FHWLoadMatchProfilesResponse Response, struct TArray<struct FString> PlayerIds); // Function Hardwired.HWGameMode.OnPlayerProfilesRefreshed // (Final|Native|Private) // @ game+0xfece50
	void OnPlayerProfileLoadAtRoundStartFailed(enum class EHWErrorMessage Message, struct TArray<struct FString> PlayerIds); // Function Hardwired.HWGameMode.OnPlayerProfileLoadAtRoundStartFailed // (Final|Native|Private) // @ game+0xfecc90
	void OnMatchLeftFailed(enum class EHWErrorMessage ErrorMessage); // Function Hardwired.HWGameMode.OnMatchLeftFailed // (Final|Native|Private) // @ game+0xfecc10
	void OnMatchLeft(struct FHWResponseBase Response); // Function Hardwired.HWGameMode.OnMatchLeft // (Final|Native|Private) // @ game+0xfecb90
	void OnInitialPlayerProfilesLoaded(struct FHWLoadMatchProfilesResponse Response, struct TArray<struct FString> PlayerIds); // Function Hardwired.HWGameMode.OnInitialPlayerProfilesLoaded // (Final|Native|Private) // @ game+0xfec8d0
	void OnInitialPlayerProfileLoadFailed(enum class EHWErrorMessage Message, struct TArray<struct FString> PlayerIds); // Function Hardwired.HWGameMode.OnInitialPlayerProfileLoadFailed // (Final|Native|Private) // @ game+0xfec710
	void OnIndividualProfileLoadFailed(enum class EHWErrorMessage Message, struct TArray<struct FString> PlayerIds); // Function Hardwired.HWGameMode.OnIndividualProfileLoadFailed // (Final|Native|Private) // @ game+0xfec290
	void OnIndividualProfileLoaded(struct FHWLoadMatchProfilesResponse Response, struct TArray<struct FString> PlayerIds); // Function Hardwired.HWGameMode.OnIndividualProfileLoaded // (Final|Native|Private) // @ game+0xfec450
	void OnBackfillError(enum class EHWErrorMessage Error); // Function Hardwired.HWGameMode.OnBackfillError // (Final|Native|Private) // @ game+0xfebe30
	void OnBackfill(struct FHWMatchBackfillResponse Response); // Function Hardwired.HWGameMode.OnBackfill // (Final|Native|Private) // @ game+0xfebcb0
	void HandleRoundTimeout(); // Function Hardwired.HWGameMode.HandleRoundTimeout // (Final|Native|Private) // @ game+0xfeb950
	void GoToRoundFast(int32_t Round); // Function Hardwired.HWGameMode.GoToRoundFast // (Final|Exec|Native|Private) // @ game+0xfeb8c0
	void GoToRound(int32_t Round); // Function Hardwired.HWGameMode.GoToRound // (Final|Exec|Native|Private) // @ game+0xfeb8c0
	float GetRoundTimeElapsed(); // Function Hardwired.HWGameMode.GetRoundTimeElapsed // (Final|Native|Private|BlueprintCallable|BlueprintPure|Const) // @ game+0xfeb5c0
	struct AHWPlayerState* GetPlayerStateBySessionId(struct FString SessionId); // Function Hardwired.HWGameMode.GetPlayerStateBySessionId // (Final|Native|Public) // @ game+0xfeb4f0
	struct AHWPlayerController* GetControllerBySessionId(struct FString SessionId); // Function Hardwired.HWGameMode.GetControllerBySessionId // (Final|Native|Public) // @ game+0xfeb030
	struct TArray<struct AHWPlayerController*> GetAllPlayers(); // Function Hardwired.HWGameMode.GetAllPlayers // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfeaf50
	void EndRound(struct FText Reason, int32_t ChosenWinner, struct TArray<bool> TeamWinners, struct TArray<struct FText> TeamResults, bool MergeTeams, struct TArray<struct FText> InstructionsForNextRoundWinner, struct TArray<struct FText> InstructionsForNextRoundLoser); // Function Hardwired.HWGameMode.EndRound // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xfeaa00
	struct FString EACGetGUIDDelegate(struct APlayerState* TargetPlayer); // Function Hardwired.HWGameMode.EACGetGUIDDelegate // (Final|Native|Public) // @ game+0xfea920
	void DoHistoryLineTrace(struct APawn* Shooter, struct FVector TraceStart, struct FVector TraceEnd, struct TArray<struct FHitResult> OutHits, struct TArray<struct AActor*> ActorsToIgnore); // Function Hardwired.HWGameMode.DoHistoryLineTrace // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xfea6f0
	bool CanTeamDealDamage(int32_t SourceTeam, int32_t TargetTeam); // Function Hardwired.HWGameMode.CanTeamDealDamage // (Final|Native|Public|BlueprintCallable) // @ game+0xfea5d0
	void AddCameraFeed(struct UHWCameraFeedProviderComponent* Camera); // Function Hardwired.HWGameMode.AddCameraFeed // (Final|Native|Public) // @ game+0xfea3d0
};

// Class Hardwired.HWGamemodeListener
// Size: 0x28 (Inherited: 0x28)
struct UHWGamemodeListener : UInterface {

	void OnTeamWiped(int32_t Team, bool Disconnected); // Function Hardwired.HWGamemodeListener.OnTeamWiped // (Native|Event|Public|BlueprintEvent) // @ game+0x1011bc0
	void OnRoundTimeout(); // Function Hardwired.HWGamemodeListener.OnRoundTimeout // (Native|Event|Public|BlueprintEvent) // @ game+0x1011ba0
	void OnRoundStateSet(int32_t Round, enum class EHWRoundState NewState); // Function Hardwired.HWGamemodeListener.OnRoundStateSet // (Native|Event|Public|BlueprintEvent) // @ game+0x1011ad0
	void OnRoundOver(int32_t Round, struct TArray<struct FHWPublicMatchReward> Rewards); // Function Hardwired.HWGamemodeListener.OnRoundOver // (Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1011940
	void OnRoundEnd(); // Function Hardwired.HWGamemodeListener.OnRoundEnd // (Native|Event|Public|BlueprintEvent) // @ game+0x1011920
	void OnPlayerReadyCountUpdated(int32_t NumReady); // Function Hardwired.HWGamemodeListener.OnPlayerReadyCountUpdated // (Native|Event|Public|BlueprintEvent) // @ game+0x1011660
	void OnPlayerKilled(struct AHWPlayerController* Killer, struct AHWPlayerController* Victim, bool Disconnected); // Function Hardwired.HWGamemodeListener.OnPlayerKilled // (Native|Event|Public|BlueprintEvent) // @ game+0x1011550
	void OnOneTeamLeft(int32_t Team, bool Disconnected); // Function Hardwired.HWGamemodeListener.OnOneTeamLeft // (Native|Event|Public|BlueprintEvent) // @ game+0x1011480
	void OnMakeScreenActive(bool IsActive); // Function Hardwired.HWGamemodeListener.OnMakeScreenActive // (Native|Event|Public|BlueprintEvent) // @ game+0x10113f0
	void OnLastPlayerAlive(bool Disconnected); // Function Hardwired.HWGamemodeListener.OnLastPlayerAlive // (Native|Event|Public|BlueprintEvent) // @ game+0x1011360
	void OnBotKilled(struct AHWHumanCharacter* Victim); // Function Hardwired.HWGamemodeListener.OnBotKilled // (Native|Event|Public|BlueprintEvent) // @ game+0x1011240
	void OnBaseLevelLoaded(int32_t Round); // Function Hardwired.HWGamemodeListener.OnBaseLevelLoaded // (Native|Event|Public|BlueprintEvent) // @ game+0x10111b0
	void OnAllPlayersKilled(bool Disconnected); // Function Hardwired.HWGamemodeListener.OnAllPlayersKilled // (Native|Event|Public|BlueprintEvent) // @ game+0x1011120
};

// Class Hardwired.HWGameObjectsComponent
// Size: 0x160 (Inherited: 0xb0)
struct UHWGameObjectsComponent : UActorComponent {
	struct FMulticastInlineDelegate OnCharacterAdded; // 0xb0(0x10)
	struct FMulticastInlineDelegate OnCharacterRemoved; // 0xc0(0x10)
	struct FMulticastInlineDelegate OnDetectableAdded; // 0xd0(0x10)
	struct FMulticastInlineDelegate OnDetectableRemoved; // 0xe0(0x10)
	struct FMulticastInlineDelegate OnMarkerAdded; // 0xf0(0x10)
	struct FMulticastInlineDelegate OnMarkerRemoved; // 0x100(0x10)
	struct FMulticastInlineDelegate OnSpecterChanged; // 0x110(0x10)
	struct TArray<struct AHWCharacter*> HWCharacters; // 0x120(0x10)
	struct TArray<struct AHWMapMarker*> MapMarkers; // 0x130(0x10)
	struct TArray<struct UHWDetectableComponent*> Detectables; // 0x140(0x10)
	struct TArray<struct AHWCharacter*> Specters; // 0x150(0x10)

	void OnItemDestroyed(struct AActor* Actor); // Function Hardwired.HWGameObjectsComponent.OnItemDestroyed // (Final|Native|Private) // @ game+0x10112d0
	struct TArray<struct AHWCharacter*> GetSpecters(); // Function Hardwired.HWGameObjectsComponent.GetSpecters // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1010d30
	struct TArray<struct AHWMapMarker*> GetMapMarkers(); // Function Hardwired.HWGameObjectsComponent.GetMapMarkers // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1010560
	struct TArray<struct UHWDetectableComponent*> GetDetectables(); // Function Hardwired.HWGameObjectsComponent.GetDetectables // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1010400
	struct TArray<struct AHWCharacter*> GetCharacters(); // Function Hardwired.HWGameObjectsComponent.GetCharacters // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1010330
};

// Class Hardwired.HWGameSession
// Size: 0x288 (Inherited: 0x238)
struct AHWGameSession : AGameSession {
	char pad_238[0x50]; // 0x238(0x50)
};

// Class Hardwired.HWGameSingleton
// Size: 0x28 (Inherited: 0x28)
struct UHWGameSingleton : UObject {
};

// Class Hardwired.HWGameState
// Size: 0x3e8 (Inherited: 0x290)
struct AHWGameState : AGameState {
	int32_t TotalPlayers; // 0x290(0x04)
	int32_t NumRounds; // 0x294(0x04)
	struct FString FlowId; // 0x298(0x10)
	float StateChangeTimestamp; // 0x2a8(0x04)
	float TimeLeftUntilStateChange; // 0x2ac(0x04)
	struct FString MapName; // 0x2b0(0x10)
	struct FString MatchID; // 0x2c0(0x10)
	float PrematchDuration; // 0x2d0(0x04)
	float PrematchDurationWithResults; // 0x2d4(0x04)
	int32_t TeamWonLastRound; // 0x2d8(0x04)
	int32_t CurrentRound; // 0x2dc(0x04)
	enum class EHWRoundState RoundState; // 0x2e0(0x01)
	char pad_2E1[0x7]; // 0x2e1(0x07)
	struct FHWLevelFlowsData LevelFlowData; // 0x2e8(0x90)
	struct TArray<struct FHWRoundResultInfo> RoundResultInfo; // 0x378(0x10)
	struct TArray<struct FText> InstructionsForNextRoundWinner; // 0x388(0x10)
	struct TArray<struct FText> InstructionsForNextRoundLoser; // 0x398(0x10)
	struct TArray<struct FString> PlayersReady; // 0x3a8(0x10)
	int32_t NumPlayersReady; // 0x3b8(0x04)
	struct FName RoundStreamLevel; // 0x3bc(0x08)
	struct FName BaseLevel; // 0x3c4(0x08)
	struct FName GameplayLevel; // 0x3cc(0x08)
	enum class EHWHostileTeam HostileTeam; // 0x3d4(0x01)
	bool ClientSideHitReg; // 0x3d5(0x01)
	bool ShowIntroVideo; // 0x3d6(0x01)
	char pad_3D7[0x1]; // 0x3d7(0x01)
	struct FMulticastInlineDelegate OnPlayerTeamInfoChanged; // 0x3d8(0x10)

	void OnRep_StateChangeTimestamp(); // Function Hardwired.HWGameState.OnRep_StateChangeTimestamp // (Final|Native|Public) // @ game+0x1011900
	void OnRep_RoundStreamLevel(struct FName Previous); // Function Hardwired.HWGameState.OnRep_RoundStreamLevel // (Final|Native|Public) // @ game+0x1011870
	void OnRep_PlayersReady(); // Function Hardwired.HWGameState.OnRep_PlayersReady // (Native|Public) // @ game+0x1011850
	void OnRep_NumReady(); // Function Hardwired.HWGameState.OnRep_NumReady // (Final|Native|Public) // @ game+0x1011830
	void OnRep_MatchId(); // Function Hardwired.HWGameState.OnRep_MatchId // (Final|Native|Public) // @ game+0x1011810
	void OnRep_GameplayLevel(struct FName Previous); // Function Hardwired.HWGameState.OnRep_GameplayLevel // (Final|Native|Public) // @ game+0x1011780
	void OnRep_BaseLevel(struct FName Previous); // Function Hardwired.HWGameState.OnRep_BaseLevel // (Final|Native|Public) // @ game+0x10116f0
	int32_t NumTeamsAlive(); // Function Hardwired.HWGameState.NumTeamsAlive // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10110f0
	int32_t NumPlayersAliveInTeam(int32_t Team); // Function Hardwired.HWGameState.NumPlayersAliveInTeam // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1011050
	int32_t NumPlayersAlive(); // Function Hardwired.HWGameState.NumPlayersAlive // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1011020
	bool IsTeamDead(int32_t Team); // Function Hardwired.HWGameState.IsTeamDead // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1010f80
	struct TArray<int32_t> GetTeamsAlive(); // Function Hardwired.HWGameState.GetTeamsAlive // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1010e00
	bool GetRewardsOnRound(int32_t RoundIndex, struct FString BackendPlayerId, int32_t Credits, int32_t Xp, float Multiplier, char Kills, char Assists); // Function Hardwired.HWGameState.GetRewardsOnRound // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x1010a90
	struct AHWPlayerState* GetPlayerStateById(struct FString ID); // Function Hardwired.HWGameState.GetPlayerStateById // (Final|Native|Public|BlueprintCallable) // @ game+0x10108b0
	struct TArray<struct AHWPlayerState*> GetPlayersInTeam(int32_t Team); // Function Hardwired.HWGameState.GetPlayersInTeam // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10109b0
	struct TArray<struct FString> GetPlayerNamesInTeam(int32_t Team); // Function Hardwired.HWGameState.GetPlayerNamesInTeam // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10107d0
	struct FString GetPlayerNameById(struct FString ID); // Function Hardwired.HWGameState.GetPlayerNameById // (Final|Native|Public|BlueprintCallable) // @ game+0x1010690
	int32_t GetNumHumanPlayers(); // Function Hardwired.HWGameState.GetNumHumanPlayers // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1010660
	struct TArray<struct FString> GetAllPlayerNamesSorted(); // Function Hardwired.HWGameState.GetAllPlayerNamesSorted // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10102b0
	bool AreAllPlayersDead(); // Function Hardwired.HWGameState.AreAllPlayersDead // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1010240
};

// Class Hardwired.HWGameUserSettings
// Size: 0x188 (Inherited: 0x120)
struct UHWGameUserSettings : UGameUserSettings {
	float MainVolume; // 0x120(0x04)
	float MouseSensitivity; // 0x124(0x04)
	bool InvertMouse; // 0x128(0x01)
	char pad_129[0x7]; // 0x129(0x07)
	struct TMap<struct FString, bool> SurveysShown; // 0x130(0x50)
	enum class EHWServerLocation UserPreferredLocation; // 0x180(0x01)
	bool bFriendlistConsentGiven; // 0x181(0x01)
	bool bShownFriendlistConsent; // 0x182(0x01)
	bool PrivacyPolicyAccepted; // 0x183(0x01)
	bool TermsOfServiceAccepted; // 0x184(0x01)
	bool bMissionsScreenSeen; // 0x185(0x01)
	char pad_186[0x2]; // 0x186(0x02)

	void TriggerResolutionChange(); // Function Hardwired.HWGameUserSettings.TriggerResolutionChange // (Final|Native|Public|BlueprintCallable) // @ game+0x1012030
	void SetShowFriendlistConsent(bool bShown); // Function Hardwired.HWGameUserSettings.SetShowFriendlistConsent // (Final|Native|Public|BlueprintCallable) // @ game+0x1011fa0
	void SetMouseSensitivity(float Sensitivity); // Function Hardwired.HWGameUserSettings.SetMouseSensitivity // (Final|Native|Public|BlueprintCallable) // @ game+0x1011f20
	void SetMainVolume(float Volume); // Function Hardwired.HWGameUserSettings.SetMainVolume // (Final|Native|Public|BlueprintCallable) // @ game+0x1011ea0
	void SetInvertMouse(bool Value); // Function Hardwired.HWGameUserSettings.SetInvertMouse // (Final|Native|Public|BlueprintCallable) // @ game+0x1011e10
	void SetHasSeenSurvey(struct FString Key); // Function Hardwired.HWGameUserSettings.SetHasSeenSurvey // (Final|Native|Public|BlueprintCallable) // @ game+0x1011d20
	void SetFriendlistConsent(bool bConsent); // Function Hardwired.HWGameUserSettings.SetFriendlistConsent // (Final|Native|Public|BlueprintCallable) // @ game+0x1011c90
	bool HasSeenSurvey(struct FString Key); // Function Hardwired.HWGameUserSettings.HasSeenSurvey // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1010e80
	bool GetShownFriendlistConsent(); // Function Hardwired.HWGameUserSettings.GetShownFriendlistConsent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1010d00
	float GetMouseSensitivity(); // Function Hardwired.HWGameUserSettings.GetMouseSensitivity // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1010630
	float GetMainVolume(); // Function Hardwired.HWGameUserSettings.GetMainVolume // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1010530
	bool GetInvertMouse(); // Function Hardwired.HWGameUserSettings.GetInvertMouse // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1010500
	bool GetFriendlistConsent(); // Function Hardwired.HWGameUserSettings.GetFriendlistConsent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10104d0
	void ConfirmResolutionChange(); // Function Hardwired.HWGameUserSettings.ConfirmResolutionChange // (Final|Native|Public|BlueprintCallable) // @ game+0x1010290
	void CancelResolutionChange(); // Function Hardwired.HWGameUserSettings.CancelResolutionChange // (Final|Native|Public|BlueprintCallable) // @ game+0x1010270
	void ApplyToPlayerController(struct AHWPlayerController* PC); // Function Hardwired.HWGameUserSettings.ApplyToPlayerController // (Final|Native|Public|BlueprintCallable) // @ game+0x10101b0
};

// Class Hardwired.HWCustomTickable
// Size: 0x28 (Inherited: 0x28)
struct UHWCustomTickable : UInterface {
};

// Class Hardwired.HWGameViewportClient
// Size: 0x3a0 (Inherited: 0x360)
struct UHWGameViewportClient : UGameViewportClient {
	struct UFont* WatermarkFont; // 0x360(0x08)
	char pad_368[0x38]; // 0x368(0x38)

	void SetLoadingScreenVisible(bool Visible); // Function Hardwired.HWGameViewportClient.SetLoadingScreenVisible // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnControllerConnectionChanged(bool bIsConnection); // Function Hardwired.HWGameViewportClient.OnControllerConnectionChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
};

// Class Hardwired.HWWidgetBase
// Size: 0x268 (Inherited: 0x260)
struct UHWWidgetBase : UUserWidget {
	bool bCaptureMouseButtonDown; // 0x260(0x01)
	char pad_261[0x7]; // 0x261(0x07)

	struct UUMGSequencePlayer* PlayAnimationWithCallback(struct UWidgetAnimation* InAnimation, struct FDelegate Callback, float OutAnimationDuration, float StartAtTime, int32_t NumLoopsToPlay, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed, bool bRestoreState); // Function Hardwired.HWWidgetBase.PlayAnimationWithCallback // (Final|Native|Protected|HasOutParms|BlueprintCallable) // @ game+0x10810e0
	void OnEnableStateChanged(bool Enabled); // Function Hardwired.HWWidgetBase.OnEnableStateChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnBack(bool IsHandled); // Function Hardwired.HWWidgetBase.OnBack // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	struct AHWPlayerState* GetOwningHWPlayerState(); // Function Hardwired.HWWidgetBase.GetOwningHWPlayerState // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x107fc10
	struct AHWPlayerController* GetOwningHWPlayerController(); // Function Hardwired.HWWidgetBase.GetOwningHWPlayerController // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x107fbe0
	struct AHWPlayerCharacter* GetOwningHWPlayerCharacter(); // Function Hardwired.HWWidgetBase.GetOwningHWPlayerCharacter // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x107fbb0
	struct AHWCharacter* GetOwningHWCharacter(); // Function Hardwired.HWWidgetBase.GetOwningHWCharacter // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x107fb80
	void DrawBoxRotated(struct FPaintContext Context, struct FVector2D Position, struct FVector2D Size, struct USlateBrushAsset* Brush, struct FLinearColor Tint, float Rotation); // Function Hardwired.HWWidgetBase.DrawBoxRotated // (Final|Native|Static|Protected|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x107f550
};

// Class Hardwired.HWGenericPopupWidget
// Size: 0x290 (Inherited: 0x268)
struct UHWGenericPopupWidget : UHWWidgetBase {
	char pad_268[0x28]; // 0x268(0x28)

	bool IsRewardPopup(); // Function Hardwired.HWGenericPopupWidget.IsRewardPopup // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1017a20
	bool IsRewardCollectingDisabled(); // Function Hardwired.HWGenericPopupWidget.IsRewardCollectingDisabled // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1017a00
	bool IsInputPopup(); // Function Hardwired.HWGenericPopupWidget.IsInputPopup // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x10179e0
	void InvokeMessageCallback(bool Result); // Function Hardwired.HWGenericPopupWidget.InvokeMessageCallback // (Final|Native|Private|BlueprintCallable) // @ game+0x1017950
	void InvokeInputCallback(struct FString Text); // Function Hardwired.HWGenericPopupWidget.InvokeInputCallback // (Final|Native|Private|BlueprintCallable) // @ game+0x1017860
	void InitializeRewardsPopup(struct TArray<struct FHWReward> Rewards, struct FText Title, struct FText Message, struct FText CollectButtonTitle); // Function Hardwired.HWGenericPopupWidget.InitializeRewardsPopup // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void InitializePurchasePopup(struct FText Title, struct FText Message, struct FString OfferedPrice, struct FString ActualPrice, enum class EHWCurrencyType CurrencyType, struct FText OkButtonTitle, struct FText CancelButtonTitle, enum class EHWGenericPopupStyle Style); // Function Hardwired.HWGenericPopupWidget.InitializePurchasePopup // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void InitializeMessagePopupWithTimestamp(struct FText Timestamp, struct FText Title, struct FText Message, struct FText OkButtonTitle, struct FText CancelButtonTitle, enum class EHWGenericPopupStyle Style, bool isOneOptionPopup); // Function Hardwired.HWGenericPopupWidget.InitializeMessagePopupWithTimestamp // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void InitializeMessagePopup(struct FText Title, struct FText Message, struct FText OkButtonTitle, struct FText CancelButtonTitle, enum class EHWGenericPopupStyle Style, bool isOneOptionPopup, enum class ETextJustify Justification); // Function Hardwired.HWGenericPopupWidget.InitializeMessagePopup // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void InitializeInputPopup(struct FText Title, struct FText Message, struct FString InputText, struct TArray<struct FText> InputOptions, enum class EHWGenericPopupInputType InputType, struct FText OkButtonTitle, struct FText CancelButtonTitle, enum class EHWGenericPopupStyle Style); // Function Hardwired.HWGenericPopupWidget.InitializeInputPopup // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void InitializeDismantlePopup(struct FText Title, struct FText Message, int32_t Credits, int32_t Materials, enum class EHWFaction Faction, struct FText OkButtonTitle, struct FText CancelButtonTitle, enum class EHWGenericPopupStyle Style); // Function Hardwired.HWGenericPopupWidget.InitializeDismantlePopup // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	enum class EHWGenericPopupInputType GetInputType(); // Function Hardwired.HWGenericPopupWidget.GetInputType // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1017720
};

// Class Hardwired.HWRewardPopupWidget
// Size: 0x278 (Inherited: 0x268)
struct UHWRewardPopupWidget : UHWWidgetBase {
	char pad_268[0x10]; // 0x268(0x10)

	void InvokeClosedCallback(bool Result); // Function Hardwired.HWRewardPopupWidget.InvokeClosedCallback // (Final|Native|Public|BlueprintCallable) // @ game+0x10177d0
	void InitializeWithRewards(struct TArray<struct FHWReward> Rewards, struct FText Title, struct FText Message, struct FText CollectButtonTitle); // Function Hardwired.HWRewardPopupWidget.InitializeWithRewards // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
};

// Class Hardwired.HWHealingItem
// Size: 0x28 (Inherited: 0x28)
struct UHWHealingItem : UInterface {

	void OnRevived(struct AHWHumanCharacter* Character); // Function Hardwired.HWHealingItem.OnRevived // (Native|Event|Public|BlueprintEvent) // @ game+0x1017e70
};

// Class Hardwired.HWHeldItemComponent
// Size: 0x218 (Inherited: 0xb0)
struct UHWHeldItemComponent : UActorComponent {
	struct AHWHumanCharacter* OwningPlayer; // 0xb0(0x08)
	struct USkeletalMeshComponent* Mesh1P; // 0xb8(0x08)
	struct USkeletalMeshComponent* Mesh3P; // 0xc0(0x08)
	struct UStaticMeshComponent* StaticMesh1P; // 0xc8(0x08)
	struct USkeletalMeshComponent* SkeletalMesh1P; // 0xd0(0x08)
	struct UStaticMeshComponent* StaticMesh3P; // 0xd8(0x08)
	struct USkeletalMeshComponent* SkeletalMesh3P; // 0xe0(0x08)
	struct UMaterialParameterCollection* PlayerFOVMPC; // 0xe8(0x08)
	struct FMulticastInlineDelegate ItemCleared; // 0xf0(0x10)
	struct FMulticastInlineDelegate ItemVisiblityChanged; // 0x100(0x10)
	struct FMulticastInlineDelegate ItemEquipped; // 0x110(0x10)
	struct FMulticastInlineDelegate ItemUnequipped; // 0x120(0x10)
	bool IsVisible; // 0x130(0x01)
	bool IsHeldItemActive; // 0x131(0x01)
	char pad_132[0x2]; // 0x132(0x02)
	float DesiredFOV; // 0x134(0x04)
	struct UHWHeldItemDataObject* DataObject; // 0x138(0x08)
	struct AHWWeapon* LastWeapon; // 0x140(0x08)
	bool WeaponActionInProgress; // 0x148(0x01)
	char pad_149[0x7]; // 0x149(0x07)
	struct TArray<struct FHWHeldItemAnimation> QueuedAnimations; // 0x150(0x10)
	struct FHWHeldItemAnimation CurrentAnimation; // 0x160(0x58)
	struct FHWHeldItemAnimation LastAnimation; // 0x1b8(0x58)
	bool PlayingAnimation; // 0x210(0x01)
	char pad_211[0x7]; // 0x211(0x07)

	void StopAnimation(bool ClearQueue); // Function Hardwired.HWHeldItemComponent.StopAnimation // (Final|Native|Public|BlueprintCallable) // @ game+0x1018610
	void SetMeshVisible(bool NewVisible); // Function Hardwired.HWHeldItemComponent.SetMeshVisible // (Final|Native|Public|BlueprintCallable) // @ game+0x1018580
	void SetHeldSkeletalMesh(struct UHWHeldItemDataObject* NewDataObject, struct USkeletalMesh* InSkeletalMesh, enum class EHWUnequipType UnequipType, float DesiredHandFOV); // Function Hardwired.HWHeldItemComponent.SetHeldSkeletalMesh // (Final|Native|Public|BlueprintCallable) // @ game+0x1018420
	void SetHeldMesh(struct UHWHeldItemDataObject* NewDataObject, struct UStaticMesh* InStaticMesh, enum class EHWUnequipType UnequipType, float DesiredHandFOV); // Function Hardwired.HWHeldItemComponent.SetHeldMesh // (Final|Native|Public|BlueprintCallable) // @ game+0x10182c0
	void RemoveItem(); // Function Hardwired.HWHeldItemComponent.RemoveItem // (Final|Native|Public|BlueprintCallable) // @ game+0x10182a0
	void PlayNextQueuedAnimation(); // Function Hardwired.HWHeldItemComponent.PlayNextQueuedAnimation // (Final|Native|Public|BlueprintCallable) // @ game+0x1018280
	void PlayAnimation(struct FHWHeldItemAnimation Animation, struct FDelegate OnAnimationStarted, struct FDelegate OnAnimationFinished, struct FDelegate OnAnimationNotify); // Function Hardwired.HWHeldItemComponent.PlayAnimation // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1018020
	void OnWeaponUnequipped(struct AHWWeapon* Weapon); // Function Hardwired.HWHeldItemComponent.OnWeaponUnequipped // (Final|Native|Public) // @ game+0x1017f90
	void OnWeaponEquipped(struct AHWWeapon* Weapon); // Function Hardwired.HWHeldItemComponent.OnWeaponEquipped // (Final|Native|Public) // @ game+0x1017f00
	void OnMontageNotifyBegin(struct FName NotifyName, struct FBranchingPointNotifyPayload BranchingPointPayload); // Function Hardwired.HWHeldItemComponent.OnMontageNotifyBegin // (Final|Native|Public|HasOutParms) // @ game+0x1017d80
	void OnMontageEnd(struct UAnimMontage* Montage, bool Interrupted); // Function Hardwired.HWHeldItemComponent.OnMontageEnd // (Final|Native|Public) // @ game+0x1017cb0
	void MulticastMesh(struct UHWHeldItemDataObject* NewDataObject, struct UStaticMesh* InStaticMesh, struct USkeletalMesh* InSkeletalMesh, float DesiredHandFOV); // Function Hardwired.HWHeldItemComponent.MulticastMesh // (Net|NetReliableNative|Event|NetMulticast|Public) // @ game+0x1017b50
	void MulticastAnimation(struct UAnimMontage* FPMontage, struct UAnimMontage* TPMontage, struct UAnimSequence* ItemAnimation); // Function Hardwired.HWHeldItemComponent.MulticastAnimation // (Net|NetReliableNative|Event|NetMulticast|Protected) // @ game+0x1017a40
	void InternalOnAnimationEnd(struct UAnimMontage* Montage); // Function Hardwired.HWHeldItemComponent.InternalOnAnimationEnd // (Final|Native|Public) // @ game+0x1017740
	void DisableActions(struct TArray<enum class EHWActionType> ActionsToDisable); // Function Hardwired.HWHeldItemComponent.DisableActions // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1017670
	void ClearQueuedAnimations(); // Function Hardwired.HWHeldItemComponent.ClearQueuedAnimations // (Final|Native|Public|BlueprintCallable) // @ game+0x1017650
	void ClearDisabledActions(); // Function Hardwired.HWHeldItemComponent.ClearDisabledActions // (Final|Native|Public|BlueprintCallable) // @ game+0x1017630
};

// Class Hardwired.HWHeldItemDataObject
// Size: 0x28 (Inherited: 0x28)
struct UHWHeldItemDataObject : UObject {
};

// Class Hardwired.HWHitMeshConfig
// Size: 0x50 (Inherited: 0x30)
struct UHWHitMeshConfig : UDataAsset {
	bool Enabled; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct USkeletalMesh* Mesh; // 0x38(0x08)
	struct UAnimInstance* AnimInstance; // 0x40(0x08)
	struct FCollisionProfileName CollisionProfile; // 0x48(0x08)
};

// Class Hardwired.HWHitMeshDiagComponent
// Size: 0xc0 (Inherited: 0xb0)
struct UHWHitMeshDiagComponent : UActorComponent {
	struct TArray<struct FHWHitRegBodyState> ServerData; // 0xb0(0x10)
};

// Class Hardwired.HWHitRegRecorder
// Size: 0x2b8 (Inherited: 0x220)
struct AHWHitRegRecorder : AInfo {
	struct TArray<struct AHWHumanCharacter*> Characters; // 0x220(0x10)
	char pad_230[0x28]; // 0x230(0x28)
	struct TMap<struct AController*, int32_t> Players; // 0x258(0x50)
	char pad_2A8[0x10]; // 0x2a8(0x10)
};

// Class Hardwired.HWHitRegValidation
// Size: 0x48 (Inherited: 0x28)
struct UHWHitRegValidation : UObject {
	struct FHWHitRegValidationConfig Config; // 0x28(0x1c)
	char pad_44[0x4]; // 0x44(0x04)
};

// Class Hardwired.HWHitRegWeaponObject
// Size: 0x70 (Inherited: 0x28)
struct UHWHitRegWeaponObject : UObject {
	char pad_28[0x48]; // 0x28(0x48)
};

// Class Hardwired.HWHitRegStatRecorder
// Size: 0x2f8 (Inherited: 0x220)
struct AHWHitRegStatRecorder : AActor {
	char pad_220[0x18]; // 0x220(0x18)
	float MinTraceStartError; // 0x238(0x04)
	float MaxTraceStartError; // 0x23c(0x04)
	int32_t TraceStartErrorBins; // 0x240(0x04)
	char pad_244[0x34]; // 0x244(0x34)
	float MaxImpactPointError; // 0x278(0x04)
	float MaxImpactPointRelError; // 0x27c(0x04)
	int32_t ImpactPointErrorBins; // 0x280(0x04)
	char pad_284[0x4]; // 0x284(0x04)
	struct TMap<struct AHWWeapon*, struct UHWHitRegWeaponObject*> Objects; // 0x288(0x50)
	char pad_2D8[0x20]; // 0x2d8(0x20)

	void OnRoundStateChanged(struct AHWGameMode* GameMode, enum class EHWRoundState RoundState); // Function Hardwired.HWHitRegStatRecorder.OnRoundStateChanged // (Final|Native|Private) // @ game+0x101ef50
	void OnMatchEnded(); // Function Hardwired.HWHitRegStatRecorder.OnMatchEnded // (Final|Native|Private) // @ game+0x101eeb0
};

// Class Hardwired.HWHitRegValidationDiag
// Size: 0x240 (Inherited: 0x220)
struct AHWHitRegValidationDiag : AActor {
	struct TArray<struct FHWKeyCharacterState> Items; // 0x220(0x10)
	struct TArray<struct APlayerController*> Watchers; // 0x230(0x10)
};

// Class Hardwired.HWPingBase
// Size: 0x48 (Inherited: 0x28)
struct UHWPingBase : UObject {
	struct FMulticastInlineDelegate OnPingCompleted; // 0x28(0x10)
	struct FMulticastInlineDelegate OnPingFailure; // 0x38(0x10)

	void RefreshPing(); // Function Hardwired.HWPingBase.RefreshPing // (Native|Public|BlueprintCallable) // @ game+0x102c020
};

// Class Hardwired.HWHttpPing
// Size: 0x48 (Inherited: 0x48)
struct UHWHttpPing : UHWPingBase {
};

// Class Hardwired.HWHUD
// Size: 0x310 (Inherited: 0x310)
struct AHWHUD : AHUD {
};

// Class Hardwired.HWVisualArmorComponent
// Size: 0x108 (Inherited: 0xb0)
struct UHWVisualArmorComponent : UActorComponent {
	struct FMulticastInlineDelegate OnArmorChanged; // 0xb0(0x10)
	struct UDataTable* HairData; // 0xc0(0x08)
	struct UDataTable* FacialHairData; // 0xc8(0x08)
	struct FHWArmorPartIds Parts; // 0xd0(0x30)
	struct UDataTable* SkinDataTable; // 0x100(0x08)

	void Update(); // Function Hardwired.HWVisualArmorComponent.Update // (Native|Public) // @ game+0x1047e40
	void SetArmorFromData(struct FName NewArmorSetId, struct FName NewCharacterId, struct TArray<struct FHWArmorPart> CosmeticParts); // Function Hardwired.HWVisualArmorComponent.SetArmorFromData // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x107c840
};

// Class Hardwired.HWHumanArmorComponent
// Size: 0x170 (Inherited: 0x108)
struct UHWHumanArmorComponent : UHWVisualArmorComponent {
	struct AHWHumanCharacter* OwningCharacter; // 0x108(0x08)
	float MaxDamageOverflowMultiplierForBlockArmorFeature; // 0x110(0x04)
	char pad_114[0x4]; // 0x114(0x04)
	struct FString ArmorSetSound; // 0x118(0x10)
	struct TArray<struct FHWArmorFeature> ArmorFeatures; // 0x128(0x10)
	struct FMulticastInlineDelegate OnArmorTierChanged; // 0x138(0x10)
	struct FMulticastInlineDelegate OnArmorFeatureActivated; // 0x148(0x10)
	struct FMulticastInlineDelegate OnArmorHit; // 0x158(0x10)
	float Hitpoints; // 0x168(0x04)
	float MaxHitpoints; // 0x16c(0x04)

	void RestoreArmorState(); // Function Hardwired.HWHumanArmorComponent.RestoreArmorState // (Final|Native|Public|BlueprintCallable) // @ game+0x101f5a0
	void RepairArmor(float AmountToRepair, bool AllowBonusArmor, float MaxBonusArmor); // Function Hardwired.HWHumanArmorComponent.RepairArmor // (Final|Native|Public|BlueprintCallable) // @ game+0x101f480
	void OnUnjammed(); // Function Hardwired.HWHumanArmorComponent.OnUnjammed // (Final|Native|Public|BlueprintCallable) // @ game+0x101f190
	void OnRep_ArmorSetSound(); // Function Hardwired.HWHumanArmorComponent.OnRep_ArmorSetSound // (Final|Native|Public) // @ game+0x101eef0
	void OnRep_ArmorFeatures(); // Function Hardwired.HWHumanArmorComponent.OnRep_ArmorFeatures // (Final|Native|Public) // @ game+0x101eed0
	void OnJammed(); // Function Hardwired.HWHumanArmorComponent.OnJammed // (Final|Native|Public|BlueprintCallable) // @ game+0x101ee90
	void MulticastReceiveArmorHit(struct FHWHumanArmorHitParams Params); // Function Hardwired.HWHumanArmorComponent.MulticastReceiveArmorHit // (Net|NetReliableNative|Event|NetMulticast|Public) // @ game+0x101ecd0
	void MulticastArmorChanged(struct FHWArmorPartIds InParts, struct TArray<struct FHWArmorFeature> InArmorFeatures); // Function Hardwired.HWHumanArmorComponent.MulticastArmorChanged // (Net|NetReliableNative|Event|NetMulticast|Public) // @ game+0x101eae0
	bool HasDamagedArmor(); // Function Hardwired.HWHumanArmorComponent.HasDamagedArmor // (Final|Native|Public|BlueprintCallable) // @ game+0x101e900
	bool HasArmorFeature(enum class EHWArmorFeatureType Feature); // Function Hardwired.HWHumanArmorComponent.HasArmorFeature // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x101e840
	bool HasAnyDamagedArmor(bool CheckForBonusArmor, float MaxBonusArmor); // Function Hardwired.HWHumanArmorComponent.HasAnyDamagedArmor // (Final|Native|Public|BlueprintCallable) // @ game+0x101e760
	float GetMaxHitpoints(); // Function Hardwired.HWHumanArmorComponent.GetMaxHitpoints // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x101e4c0
	float GetHitpoints(); // Function Hardwired.HWHumanArmorComponent.GetHitpoints // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x101e450
	bool CanUseArmorFeature(enum class EHWArmorFeatureType Feature); // Function Hardwired.HWHumanArmorComponent.CanUseArmorFeature // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x101d9c0
	void ActivateArmorFeature(enum class EHWArmorFeatureType FeatureType, bool Active, float Duration); // Function Hardwired.HWHumanArmorComponent.ActivateArmorFeature // (Final|Native|Public|BlueprintCallable) // @ game+0x101d5f0
};

// Class Hardwired.HWHumanCharacter
// Size: 0xdf0 (Inherited: 0x7d0)
struct AHWHumanCharacter : AHWCharacter {
	char pad_7D0[0x8]; // 0x7d0(0x08)
	struct FMulticastInlineDelegate OnPostInitializeComponents; // 0x7d8(0x10)
	float FallDamageHeightThreshold; // 0x7e8(0x04)
	float DamagePerMeterOfFall; // 0x7ec(0x04)
	float FallStartHeight; // 0x7f0(0x04)
	bool IsControllingCombatCompanion; // 0x7f4(0x01)
	char pad_7F5[0x3]; // 0x7f5(0x03)
	struct UAnimMontage* DeployDroneAnim1P; // 0x7f8(0x08)
	struct UAnimMontage* DeployDroneAnim3P; // 0x800(0x08)
	float HeaveAttackDamage; // 0x808(0x04)
	float LightAttackDamage; // 0x80c(0x04)
	float MeleeCooldown; // 0x810(0x04)
	float LightAttackDamageDelayFromStart; // 0x814(0x04)
	float HeavyAttackDamageDelayFromStart; // 0x818(0x04)
	float LightAttackSpeedMultiplier; // 0x81c(0x04)
	float HeavyAttackSpeedMultiplier; // 0x820(0x04)
	float HeavyAttackChargeTime; // 0x824(0x04)
	float LightAttackTriggerThresholdTime; // 0x828(0x04)
	char pad_82C[0x4]; // 0x82c(0x04)
	struct FText HeavyAttackChargeText; // 0x830(0x18)
	struct AActor* OwningActor; // 0x848(0x08)
	char pad_850[0x34]; // 0x850(0x34)
	float MovementSpeedBase; // 0x884(0x04)
	struct UHWCharacterMovementConfig* MovementConfig; // 0x888(0x08)
	float CalculatedMovementSpeedWalking; // 0x890(0x04)
	float CalculatedMovementSpeedRunning; // 0x894(0x04)
	float CalculatedMovementSpeedCrouched; // 0x898(0x04)
	float CalculatedBrakingDeceleration; // 0x89c(0x04)
	float CalculatedAcceleration; // 0x8a0(0x04)
	float CalculatedMaxSpeed; // 0x8a4(0x04)
	struct FHWCharacterSpeeds CurrentSpeeds; // 0x8a8(0x0c)
	float CombatEnhancerReloadTimeModifier; // 0x8b4(0x04)
	float CombatEnhancerAimTimeModifier; // 0x8b8(0x04)
	float CombatEnhancerAimSwayModifier; // 0x8bc(0x04)
	float CombatEnhancerRecoilModifier; // 0x8c0(0x04)
	bool WantsToRun; // 0x8c4(0x01)
	bool IsRunning; // 0x8c5(0x01)
	bool IsSprintBoostEnabled; // 0x8c6(0x01)
	char pad_8C7[0x1]; // 0x8c7(0x01)
	float SprintStartTime; // 0x8c8(0x04)
	float SprintEndTime; // 0x8cc(0x04)
	bool SprintBoostActive; // 0x8d0(0x01)
	char pad_8D1[0x3]; // 0x8d1(0x03)
	float SprintBoostStartTime; // 0x8d4(0x04)
	float SprintBoostModifier; // 0x8d8(0x04)
	float SprintBoostFirstInterval; // 0x8dc(0x04)
	float SprintBoostTimeWindow; // 0x8e0(0x04)
	float SprintBoostInterval; // 0x8e4(0x04)
	float SprintMaxTapDuration; // 0x8e8(0x04)
	float ServerSprintWindowTolerance; // 0x8ec(0x04)
	struct UCurveFloat* LeanAnimationCurve; // 0x8f0(0x08)
	float LeanTime; // 0x8f8(0x04)
	float LeanAngle; // 0x8fc(0x04)
	float LeanSlide; // 0x900(0x04)
	char pad_904[0x4]; // 0x904(0x04)
	struct FMulticastInlineDelegate OnBeginRun; // 0x908(0x10)
	struct FMulticastInlineDelegate OnEndRun; // 0x918(0x10)
	struct TArray<struct FVector> NPCControlRotationBuffer; // 0x928(0x10)
	int32_t CurrentLeanTarget; // 0x938(0x04)
	float CurrentLeanValue; // 0x93c(0x04)
	float SmoothSpread; // 0x940(0x04)
	char pad_944[0xc]; // 0x944(0x0c)
	float AutoFireSpreadRecoverySpeed; // 0x950(0x04)
	char pad_954[0x98]; // 0x954(0x98)
	float TimeNoSprintAfterCrouch; // 0x9ec(0x04)
	float CrouchSpeedMinDuration; // 0x9f0(0x04)
	char pad_9F4[0x4]; // 0x9f4(0x04)
	struct UHWFiringComponent* FiringComponent; // 0x9f8(0x08)
	struct UHWHumanArmorComponent* ArmorComponent; // 0xa00(0x08)
	struct UHWInjuryComponent* InjuryComponent; // 0xa08(0x08)
	struct UHWInteractionComponent_Revive* ReviveComponent; // 0xa10(0x08)
	struct UHWCollisionHistoryComponent* CollisionHistoryComponent; // 0xa18(0x08)
	struct UHWHeldItemComponent* HeldItemComponent; // 0xa20(0x08)
	struct FName ItemAttachSocketName; // 0xa28(0x08)
	struct TArray<struct AActor*> SeaLevelObject; // 0xa30(0x10)
	struct USkeletalMeshComponent* SKCamera; // 0xa40(0x08)
	struct UCameraComponent* FPCamera; // 0xa48(0x08)
	float SprintFireDelay; // 0xa50(0x04)
	float SFDResetDuration; // 0xa54(0x04)
	float SFDDurationToMaxDelay; // 0xa58(0x04)
	float SFDSlackDuration; // 0xa5c(0x04)
	float SFDSlackEndTime; // 0xa60(0x04)
	char pad_A64[0x4]; // 0xa64(0x04)
	struct UMaterialParameterCollection* PlayerMPC; // 0xa68(0x08)
	char pad_A70[0x8]; // 0xa70(0x08)
	struct USkeletalMeshComponent* Mesh3PHead; // 0xa78(0x08)
	struct USkeletalMeshComponent* Mesh3PLegs; // 0xa80(0x08)
	struct USkeletalMeshComponent* Mesh3PGloves; // 0xa88(0x08)
	struct USkeletalMeshComponent* Mesh1P; // 0xa90(0x08)
	struct USkeletalMeshComponent* Mesh1PGloves; // 0xa98(0x08)
	struct USkeletalMeshComponent* MeshBackpack; // 0xaa0(0x08)
	struct USkeletalMeshComponent* MeshBackpackCharm; // 0xaa8(0x08)
	struct USkeletalMeshComponent* MeshFace; // 0xab0(0x08)
	struct USkeletalMeshComponent* MeshHair; // 0xab8(0x08)
	struct USkeletalMeshComponent* MeshFacialHair; // 0xac0(0x08)
	float LoadoutWeight; // 0xac8(0x04)
	struct FHWBodyDamageMultiplierSet HealthDamage; // 0xacc(0x10)
	struct FHWBodyDamageMultiplierSet ArmorDamage; // 0xadc(0x10)
	char pad_AEC[0x4]; // 0xaec(0x04)
	struct UCapsuleComponent* LogicalCapsule; // 0xaf0(0x08)
	struct FMulticastInlineDelegate OnStatusEffectEvent; // 0xaf8(0x10)
	struct TMap<enum class EHWPlayerVaultType, struct FHWVaultMontage> VaultMontages; // 0xb08(0x50)
	struct TArray<struct AActor*> IgnoreDuringVault; // 0xb58(0x10)
	enum class ETraceTypeQuery VaultTraceChannel; // 0xb68(0x01)
	char pad_B69[0x7]; // 0xb69(0x07)
	struct TArray<struct FHWVaultChecksToPerform> VaultChecksToPerform; // 0xb70(0x10)
	bool bClientAuthorityVault; // 0xb80(0x01)
	char pad_B81[0x3]; // 0xb81(0x03)
	float VaultStaircheckTolerance; // 0xb84(0x04)
	float VaultDebugTime; // 0xb88(0x04)
	float VaultDebugPointSize; // 0xb8c(0x04)
	char pad_B90[0x8]; // 0xb90(0x08)
	struct TMap<struct UAnimMontage*, struct FVector> BakedAnimOffsets; // 0xb98(0x50)
	struct TMap<struct FName, struct FDelegate> ItemDropDelegates; // 0xbe8(0x50)
	struct TMap<struct FName, struct FDelegate> ItemUseDelegates; // 0xc38(0x50)
	float ObjectiveSpeedMultiplier; // 0xc88(0x04)
	float SuppressionFlyByMaxDistance; // 0xc8c(0x04)
	float SuppressionImpactMaxDistance; // 0xc90(0x04)
	char pad_C94[0x4]; // 0xc94(0x04)
	struct TMap<enum class EHWImpactSoundType, struct FEventSound> ImpactSounds; // 0xc98(0x50)
	struct UAkAudioEvent* AimBeginSound; // 0xce8(0x08)
	struct UAkAudioEvent* AimEndSound; // 0xcf0(0x08)
	struct UAkAudioEvent* WeaponSwapSound; // 0xcf8(0x08)
	struct UAkAudioEvent* PlayerLandSound; // 0xd00(0x08)
	struct UAkAudioEvent* FriendlyLandSound; // 0xd08(0x08)
	struct UAkAudioEvent* EnemyLandSound; // 0xd10(0x08)
	struct UAkAudioEvent* PlayerVaultSound; // 0xd18(0x08)
	struct UAkAudioEvent* FriendlyVaultSound; // 0xd20(0x08)
	struct UAkAudioEvent* EnemyVaultSound; // 0xd28(0x08)
	struct FEventSound MeleeSwingSound; // 0xd30(0x20)
	struct FEventSound MeleeFinisherSound; // 0xd50(0x20)
	struct FEventSound MeleeHitSound; // 0xd70(0x20)
	struct AHWMapMarker* CNSHitMarker; // 0xd90(0x08)
	char pad_D98[0x10]; // 0xd98(0x10)
	struct UHWBattlefieldNavigator* Navigator; // 0xda8(0x08)
	struct UHWBattlefieldNavigator* NavigationArmorFeatureClass; // 0xdb0(0x08)
	struct UHWAutoHeal* AutoHeal; // 0xdb8(0x08)
	struct UHWAutoHeal* AutoHealArmorFeatureClass; // 0xdc0(0x08)
	struct FHWArmorPhysAssets ArmorPhysAssets; // 0xdc8(0x18)
	float StaggerCooldown; // 0xde0(0x04)
	char pad_DE4[0xc]; // 0xde4(0x0c)

	void VaultResultBPI(struct FHWVaultResult VaultResult, struct FHWVaultMontagePlayerData MontagePlayerData); // Function Hardwired.HWHumanCharacter.VaultResultBPI // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void UseObjectiveItems(struct FNameAndCount Items); // Function Hardwired.HWHumanCharacter.UseObjectiveItems // (Final|Native|Protected|BlueprintCallable) // @ game+0x101feb0
	void UseItem(int32_t Slot); // Function Hardwired.HWHumanCharacter.UseItem // (Native|Event|Public|BlueprintEvent) // @ game+0x101fe20
	void UpdateRotationBuffer(struct FRotator ControlRotation); // Function Hardwired.HWHumanCharacter.UpdateRotationBuffer // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x101fd90
	void UpdatePhysAsset(); // Function Hardwired.HWHumanCharacter.UpdatePhysAsset // (Final|Native|Public) // @ game+0x101fd70
	void Turn(float Value); // Function Hardwired.HWHumanCharacter.Turn // (Native|Event|Public|BlueprintEvent) // @ game+0x101fce0
	void TriggerStatusEffect(enum class EHWPlayerStatusEffectType Effect, struct FVector Position, struct AActor* DamageDealer, float Duration, float Intensity); // Function Hardwired.HWHumanCharacter.TriggerStatusEffect // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x101fb10
	struct FVector TransformLocationToFOVSpace(struct FVector Location); // Function Hardwired.HWHumanCharacter.TransformLocationToFOVSpace // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x101fa60
	void ToggleMenu(); // Function Hardwired.HWHumanCharacter.ToggleMenu // (Native|Event|Public|BlueprintEvent) // @ game+0x101fa40
	void ToggleMap(); // Function Hardwired.HWHumanCharacter.ToggleMap // (Native|Event|Public|BlueprintEvent) // @ game+0x101fa20
	void ToggleLean(int32_t Direction); // Function Hardwired.HWHumanCharacter.ToggleLean // (Native|Event|Public|BlueprintEvent) // @ game+0x101f990
	void ToggleHelp(); // Function Hardwired.HWHumanCharacter.ToggleHelp // (Native|Event|Public|BlueprintEvent) // @ game+0x101f970
	void ToggleFlashlight(); // Function Hardwired.HWHumanCharacter.ToggleFlashlight // (Native|Event|Public|BlueprintEvent) // @ game+0x101f950
	void Suppression_PlayerEffect(struct AHWCharacter* EffectInstigator, struct AHWWeapon* Weapon); // Function Hardwired.HWHumanCharacter.Suppression_PlayerEffect // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Stagger(); // Function Hardwired.HWHumanCharacter.Stagger // (Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable) // @ game+0x101f930
	struct AHWWeapon* SpawnWeapon(struct FHWWeaponParts Weapon); // Function Hardwired.HWHumanCharacter.SpawnWeapon // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x101f730
	void SetObjectiveSpeedMultiplier(float MovementSpeedMultiplier); // Function Hardwired.HWHumanCharacter.SetObjectiveSpeedMultiplier // (Final|Native|Protected|BlueprintCallable) // @ game+0x101f6b0
	void ServerVault(); // Function Hardwired.HWHumanCharacter.ServerVault // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x101f660
	void ServerEndLeaning(); // Function Hardwired.HWHumanCharacter.ServerEndLeaning // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x101f610
	void ServerDropItem(); // Function Hardwired.HWHumanCharacter.ServerDropItem // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x101f5c0
	void Reload(); // Function Hardwired.HWHumanCharacter.Reload // (Native|Event|Public|BlueprintEvent) // @ game+0x101f460
	void RegisterStatusEffectBySessionId(struct FString InstigatorSessionId, float Duration); // Function Hardwired.HWHumanCharacter.RegisterStatusEffectBySessionId // (Final|Native|Public|BlueprintCallable) // @ game+0x101f370
	void RegisterStatusEffect(struct AHWCharacter* EffectInstigator, float Duration); // Function Hardwired.HWHumanCharacter.RegisterStatusEffect // (Final|Native|Public|BlueprintCallable) // @ game+0x101f2a0
	void PlayImpactSound(enum class EHWImpactSoundType Type, struct AActor* HitInstigator); // Function Hardwired.HWHumanCharacter.PlayImpactSound // (Final|Native|Public|BlueprintCallable) // @ game+0x101f1d0
	void Ping(); // Function Hardwired.HWHumanCharacter.Ping // (Native|Event|Public|BlueprintEvent) // @ game+0x101f1b0
	void OnStatusEffectApplied(enum class EHWPlayerStatusEffectType Effect, struct FVector Position, struct AActor* DamageDealer, float Duration, float Intensity); // Function Hardwired.HWHumanCharacter.OnStatusEffectApplied // (Native|Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x101f020
	void OnSprintBoostWindowOpen(); // Function Hardwired.HWHumanCharacter.OnSprintBoostWindowOpen // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnSprintBoostActivated(); // Function Hardwired.HWHumanCharacter.OnSprintBoostActivated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnRep_IsRunning(); // Function Hardwired.HWHumanCharacter.OnRep_IsRunning // (Final|Native|Public) // @ game+0x101ef30
	void OnRep_IsControllingCombatCompanion(); // Function Hardwired.HWHumanCharacter.OnRep_IsControllingCombatCompanion // (Final|Native|Public) // @ game+0x101ef10
	void OnMeleeExecuted(struct TMap<struct AActor*, struct FHWMeleeTargetData> Targets); // Function Hardwired.HWHumanCharacter.OnMeleeExecuted // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnLightMeleeAttackExecuted(float AnimationSpeed); // Function Hardwired.HWHumanCharacter.OnLightMeleeAttackExecuted // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnItemDropped_Delegate__DelegateSignature(struct FNameAndCount Items, struct FVector OwnerLocation, struct AHWHumanCharacter* ItemOwner); // DelegateFunction Hardwired.HWHumanCharacter.OnItemDropped_Delegate__DelegateSignature // (Public|Delegate|HasDefaults) // @ game+0x13c4ca0
	void OnHeavyMeleeAttackExecuted(float AnimationSpeed); // Function Hardwired.HWHumanCharacter.OnHeavyMeleeAttackExecuted // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnHeavyAttackStarted(float AnimationSpeed); // Function Hardwired.HWHumanCharacter.OnHeavyAttackStarted // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnHeavyAttackAborted(); // Function Hardwired.HWHumanCharacter.OnHeavyAttackAborted // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnFirstPersonHandsSet(); // Function Hardwired.HWHumanCharacter.OnFirstPersonHandsSet // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnControllingCombatCompanionChanged(bool NewIsControllingCombatCompanion); // Function Hardwired.HWHumanCharacter.OnControllingCombatCompanionChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnClientCleanupPostProcess(); // Function Hardwired.HWHumanCharacter.OnClientCleanupPostProcess // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnBoostActivated(struct AHWCharacter* Source); // Function Hardwired.HWHumanCharacter.OnBoostActivated // (Final|Native|Public|BlueprintCallable) // @ game+0x101ee00
	void OnBeginVaultBPI(); // Function Hardwired.HWHumanCharacter.OnBeginVaultBPI // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void OnAutoHealStarting(float Delay); // Function Hardwired.HWHumanCharacter.OnAutoHealStarting // (Native|Event|Public|BlueprintEvent) // @ game+0xfd47d0
	void OnAutoHealStarted(float Duration); // Function Hardwired.HWHumanCharacter.OnAutoHealStarted // (Native|Event|Public|BlueprintEvent) // @ game+0xfd4860
	void OnAutoHealAborted(); // Function Hardwired.HWHumanCharacter.OnAutoHealAborted // (Native|Event|Public|BlueprintEvent) // @ game+0x101ede0
	void OnArmorPartSet(enum class EHWArmorType ArmorType); // Function Hardwired.HWHumanCharacter.OnArmorPartSet // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void MulticastOnBeginVault(); // Function Hardwired.HWHumanCharacter.MulticastOnBeginVault // (Net|NetReliableNative|Event|NetMulticast|Protected) // @ game+0x101ecb0
	void MulticastHandleCharacterDeath(struct AHWCharacter* Killer); // Function Hardwired.HWHumanCharacter.MulticastHandleCharacterDeath // (Net|NetReliableNative|Event|NetMulticast|Public) // @ game+0x101ec20
	void MulticastCharacterLanded(); // Function Hardwired.HWHumanCharacter.MulticastCharacterLanded // (Net|Native|Event|NetMulticast|Public) // @ game+0x101ec00
	void MoveRight(float Value); // Function Hardwired.HWHumanCharacter.MoveRight // (Native|Event|Public|BlueprintEvent) // @ game+0x101ea50
	void MoveForward(float Value); // Function Hardwired.HWHumanCharacter.MoveForward // (Native|Event|Public|BlueprintEvent) // @ game+0x101e9c0
	void LookUp(float Value); // Function Hardwired.HWHumanCharacter.LookUp // (Native|Event|Public|BlueprintEvent) // @ game+0x101e930
	bool HasBeenInitialized(); // Function Hardwired.HWHumanCharacter.HasBeenInitialized // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x101e8d0
	void GetWeaponFOV(float OutWeaponFOV, float OutCameraFOV); // Function Hardwired.HWHumanCharacter.GetWeaponFOV // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x101e680
	float GetStrafeCurveFloat(); // Function Hardwired.HWHumanCharacter.GetStrafeCurveFloat // (Final|Native|Private|BlueprintCallable|BlueprintPure|Const) // @ game+0x101e650
	float GetStaggerStrafeMultiplier(); // Function Hardwired.HWHumanCharacter.GetStaggerStrafeMultiplier // (Final|Native|Private|BlueprintCallable|BlueprintPure|Const) // @ game+0x101e620
	struct FRotator GetSmoothedControlRotation(); // Function Hardwired.HWHumanCharacter.GetSmoothedControlRotation // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x101e5e0
	float GetRelativeLoadoutWeight(); // Function Hardwired.HWHumanCharacter.GetRelativeLoadoutWeight // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x101e5b0
	float GetObjectiveSpeedMultiplier(); // Function Hardwired.HWHumanCharacter.GetObjectiveSpeedMultiplier // (Final|Native|Protected|BlueprintCallable|BlueprintPure) // @ game+0x101e580
	int32_t GetObjectiveItemAmount(struct FName ItemId); // Function Hardwired.HWHumanCharacter.GetObjectiveItemAmount // (Final|Native|Protected|BlueprintCallable|BlueprintPure) // @ game+0x101e4e0
	struct UCapsuleComponent* GetLogicalCapsule(); // Function Hardwired.HWHumanCharacter.GetLogicalCapsule // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x101e4a0
	float GetLoadoutWeight(); // Function Hardwired.HWHumanCharacter.GetLoadoutWeight // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x101e470
	float GetHeightFromSeaLevel(); // Function Hardwired.HWHumanCharacter.GetHeightFromSeaLevel // (Final|Native|Public|BlueprintCallable) // @ game+0x101e420
	struct AHWWeapon* GetCurrentWeapon(); // Function Hardwired.HWHumanCharacter.GetCurrentWeapon // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x101e3f0
	float GetCurrentLeanSlide(); // Function Hardwired.HWHumanCharacter.GetCurrentLeanSlide // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x101e3c0
	float GetCurrentLeanRatio(); // Function Hardwired.HWHumanCharacter.GetCurrentLeanRatio // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x101e390
	float GetCurrentLeanAngle(); // Function Hardwired.HWHumanCharacter.GetCurrentLeanAngle // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x101e360
	struct FVector GetAnimOffsetDuringEditor(struct UAnimMontage* MyMontage); // Function Hardwired.HWHumanCharacter.GetAnimOffsetDuringEditor // (Final|Native|Protected|HasDefaults|BlueprintCallable) // @ game+0x101e2b0
	struct FVector GetAnimOffset(struct UAnimMontage* MyMontage); // Function Hardwired.HWHumanCharacter.GetAnimOffset // (Final|Native|Protected|HasDefaults|BlueprintCallable) // @ game+0x101e200
	void FlashMine_PlayerEffect(struct AHWCharacter* EffectInstigator); // Function Hardwired.HWHumanCharacter.FlashMine_PlayerEffect // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Flashbang_PlayerEffect(struct AHWCharacter* EffectInstigator); // Function Hardwired.HWHumanCharacter.Flashbang_PlayerEffect // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void FindVaultLocation(struct FHWVaultResult OutResult, bool bForceDisabledDebug); // Function Hardwired.HWHumanCharacter.FindVaultLocation // (Final|Native|Protected|HasOutParms|BlueprintCallable) // @ game+0x101e0c0
	void EquipLoadout(struct UHWPlayerProfile* PlayerData, struct FHWLoadoutData Loadout, struct FString PlayerName, bool StartEmpty); // Function Hardwired.HWHumanCharacter.EquipLoadout // (Final|Native|Public|BlueprintCallable) // @ game+0x101de90
	void EndRun(bool bForced); // Function Hardwired.HWHumanCharacter.EndRun // (Native|Event|Public|BlueprintEvent) // @ game+0x101de00
	void EndMelee(); // Function Hardwired.HWHumanCharacter.EndMelee // (Final|Native|Public) // @ game+0x101dde0
	void EndJump(); // Function Hardwired.HWHumanCharacter.EndJump // (Native|Event|Public|BlueprintEvent) // @ game+0x101ddc0
	void EndFire(); // Function Hardwired.HWHumanCharacter.EndFire // (Native|Event|Public|BlueprintEvent) // @ game+0x101dda0
	void EndCrouch(); // Function Hardwired.HWHumanCharacter.EndCrouch // (Native|Event|Public|BlueprintEvent) // @ game+0x101dd80
	void EndAim(); // Function Hardwired.HWHumanCharacter.EndAim // (Native|Event|Public|BlueprintEvent) // @ game+0x101dd60
	void DropObjectiveItems(struct FNameAndCount Items); // Function Hardwired.HWHumanCharacter.DropObjectiveItems // (Final|Native|Protected|BlueprintCallable) // @ game+0x101dcc0
	void DropItem(); // Function Hardwired.HWHumanCharacter.DropItem // (Native|Event|Public|BlueprintEvent) // @ game+0x101dca0
	void DropAllObjectiveItems(); // Function Hardwired.HWHumanCharacter.DropAllObjectiveItems // (Final|Native|Protected|BlueprintCallable) // @ game+0x101dc80
	void DroneFlash_PlayerEffect(struct AHWCharacter* EffectInstigator, float Duration); // Function Hardwired.HWHumanCharacter.DroneFlash_PlayerEffect // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ClientOnHumanDeath(); // Function Hardwired.HWHumanCharacter.ClientOnHumanDeath // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0xfd4a20
	void ClientNotifyStatusEffect(enum class EHWPlayerStatusEffectType Effect, struct FVector Position, struct AActor* DamageDealer, float Duration, float Intensity); // Function Hardwired.HWHumanCharacter.ClientNotifyStatusEffect // (Net|NetReliableNative|Event|Public|HasDefaults|NetClient) // @ game+0x101dab0
	void ClientHandleDowned(); // Function Hardwired.HWHumanCharacter.ClientHandleDowned // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x101da90
	void ChangeWeaponPrevious(); // Function Hardwired.HWHumanCharacter.ChangeWeaponPrevious // (Native|Event|Public|BlueprintEvent) // @ game+0x101da70
	void ChangeWeaponNext(); // Function Hardwired.HWHumanCharacter.ChangeWeaponNext // (Native|Event|Public|BlueprintEvent) // @ game+0x101da50
	void BP_OnTriggeredBallisticChip(struct AHWHumanCharacter* Shooter); // Function Hardwired.HWHumanCharacter.BP_OnTriggeredBallisticChip // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void BP_DealFallDamage(float Height, struct FHitResult Hit); // Function Hardwired.HWHumanCharacter.BP_DealFallDamage // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void BeginRun(bool ResetSprintTimer); // Function Hardwired.HWHumanCharacter.BeginRun // (Native|Event|Public|BlueprintEvent) // @ game+0x101d930
	void BeginMelee(); // Function Hardwired.HWHumanCharacter.BeginMelee // (Final|Native|Public) // @ game+0x101d910
	void BeginJump(); // Function Hardwired.HWHumanCharacter.BeginJump // (Native|Event|Public|BlueprintEvent) // @ game+0x101d8f0
	void BeginFire(); // Function Hardwired.HWHumanCharacter.BeginFire // (Native|Event|Public|BlueprintEvent) // @ game+0x101d8d0
	void BeginCrouch(); // Function Hardwired.HWHumanCharacter.BeginCrouch // (Native|Event|Public|BlueprintEvent) // @ game+0x101d8b0
	void BeginAim(); // Function Hardwired.HWHumanCharacter.BeginAim // (Native|Event|Public|BlueprintEvent) // @ game+0x101d890
	void AddObjectiveItems(struct FNameAndCount Items, struct FDelegate OnDroppedDelegate, struct FDelegate OnUsedDelegate); // Function Hardwired.HWHumanCharacter.AddObjectiveItems // (Final|Native|Protected|HasOutParms|BlueprintCallable) // @ game+0x101d710
	void AbortItemUse(); // Function Hardwired.HWHumanCharacter.AbortItemUse // (Native|Event|Public|BlueprintEvent) // @ game+0x101d5d0
};

// Class Hardwired.HWIcmpPing
// Size: 0x48 (Inherited: 0x48)
struct UHWIcmpPing : UHWPingBase {
};

// Class Hardwired.HWImageRendererSetup
// Size: 0x228 (Inherited: 0x220)
struct AHWImageRendererSetup : AActor {
	struct TWeakObjectPtr<struct UHWImageRenderer> Renderer; // 0x220(0x08)

	void SetRenderTargets(struct UTextureRenderTarget2D* Color, struct UTextureRenderTarget2D* Alpha); // Function Hardwired.HWImageRendererSetup.SetRenderTargets // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1025370
};

// Class Hardwired.HWImageRenderer
// Size: 0xa8 (Inherited: 0x28)
struct UHWImageRenderer : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct TSoftObjectPtr<struct UWorld> Map; // 0x30(0x28)
	bool RenderingEnabled; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
	struct AHWImageRendererSetup* Setup; // 0x60(0x08)
	struct TArray<struct USceneCaptureComponent2D*> SceneCaptureComponents; // 0x68(0x10)
	struct FString DebugName; // 0x78(0x10)
	struct TArray<struct AActor*> SpawnedActors; // 0x88(0x10)
	char pad_98[0x10]; // 0x98(0x10)

	struct AHWWeapon* SpawnWeapon(struct FHWWeaponInfo Info, struct UObject* WeaponBaseClass); // Function Hardwired.HWImageRenderer.SpawnWeapon // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1025620
	struct AActor* Spawn(struct AActor* ActorClass); // Function Hardwired.HWImageRenderer.Spawn // (Final|Native|Public|BlueprintCallable) // @ game+0x10254b0
	void SetRenderingEnabled(bool Enabled); // Function Hardwired.HWImageRenderer.SetRenderingEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x1025420
	void RenderOnce(); // Function Hardwired.HWImageRenderer.RenderOnce // (Final|Native|Public|BlueprintCallable) // @ game+0x1024770
	struct AHWImageRendererSetup* Initialize(struct AHWImageRendererSetup* SetupClass); // Function Hardwired.HWImageRenderer.Initialize // (Final|Native|Public|BlueprintCallable) // @ game+0x1023b60
	struct ALevelScriptActor* GetLevelScriptActor(); // Function Hardwired.HWImageRenderer.GetLevelScriptActor // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1023550
};

// Class Hardwired.HWImageService
// Size: 0x28 (Inherited: 0x28)
struct UHWImageService : UObject {

	bool StoreImage(struct FString ID, struct UTextureRenderTarget2D* ColorRenderTarget, struct UTextureRenderTarget2D* AlphaRenderTarget, int32_t DownScaleFactor, bool TrimAlpha, bool TrimRGB); // Function Hardwired.HWImageService.StoreImage // (Final|Native|Public|BlueprintCallable) // @ game+0x1025a20
	bool RemoveImage(struct FString ID); // Function Hardwired.HWImageService.RemoveImage // (Final|Native|Public|BlueprintCallable) // @ game+0x10246c0
	struct UTexture2D* LoadImageWithDefault(struct FString ID, struct UTexture2D* DefaultImage); // Function Hardwired.HWImageService.LoadImageWithDefault // (Final|Native|Public|BlueprintCallable) // @ game+0x1023ea0
	bool HasImage(struct FString ID); // Function Hardwired.HWImageService.HasImage // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1023140
	bool DoesImageExist(struct FString ID); // Function Hardwired.HWImageService.DoesImageExist // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1023140
	void DeleteCachedFiles(); // Function Hardwired.HWImageService.DeleteCachedFiles // (Final|Native|Public|BlueprintCallable) // @ game+0x1023120
};

// Class Hardwired.HWImpactSFX
// Size: 0x228 (Inherited: 0x220)
struct AHWImpactSFX : AActor {
	struct UAkComponent* AkImpactAudioComponent; // 0x220(0x08)
};

// Class Hardwired.HWImpactVFX
// Size: 0x230 (Inherited: 0x220)
struct AHWImpactVFX : AActor {
	struct FName ID; // 0x220(0x08)
	float WeaponDamage; // 0x228(0x04)
	int32_t VfxTag; // 0x22c(0x04)

	void OnEffectActivated(); // Function Hardwired.HWImpactVFX.OnEffectActivated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
};

// Class Hardwired.HWInjuryComponent
// Size: 0x1f0 (Inherited: 0xb0)
struct UHWInjuryComponent : UActorComponent {
	float CurrentBloodLevel; // 0xb0(0x04)
	float MaxBloodLevel; // 0xb4(0x04)
	float BleedRate; // 0xb8(0x04)
	float RelDownedBloodLevel; // 0xbc(0x04)
	bool BeingRevived; // 0xc0(0x01)
	char pad_C1[0x3]; // 0xc1(0x03)
	float MaxDownedBloodLevel; // 0xc4(0x04)
	float InitialDownedBloodLevel; // 0xc8(0x04)
	float DownedBleedRateCoef; // 0xcc(0x04)
	float DownedBleedRateCoefSmokeGuard; // 0xd0(0x04)
	float DownedInvincibilityDuration; // 0xd4(0x04)
	struct FName ReceivedInjuryVOId; // 0xd8(0x08)
	struct FName StartedBleedginVOId; // 0xe0(0x08)
	struct FMulticastInlineDelegate OnBeingRevived; // 0xe8(0x10)
	struct FMulticastInlineDelegate OnVitalityStateChanged; // 0xf8(0x10)
	struct FMulticastInlineDelegate OnInjuryReceived; // 0x108(0x10)
	struct AHWHumanCharacter* OwningCharacter; // 0x118(0x08)
	bool bIsInvulnerable; // 0x120(0x01)
	bool BleedingBlocked; // 0x121(0x01)
	char pad_122[0x6]; // 0x122(0x06)
	struct FString BleedCausedBySessionId; // 0x128(0x10)
	enum class EHWVitalityState VitalityState; // 0x138(0x01)
	bool IsBleedingState; // 0x139(0x01)
	char pad_13A[0xb6]; // 0x13a(0xb6)

	void StopHealing(struct AActor* ItemObject); // Function Hardwired.HWInjuryComponent.StopHealing // (Final|Native|Public|BlueprintCallable) // @ game+0x1025990
	void StopBleeding(); // Function Hardwired.HWInjuryComponent.StopBleeding // (Final|Native|Public|BlueprintCallable) // @ game+0x1025970
	void StartHealing(struct AActor* ItemObject, float AmountPerSecond, bool HealNormal, bool HealDowned); // Function Hardwired.HWInjuryComponent.StartHealing // (Final|Native|Public|BlueprintCallable) // @ game+0x1025810
	void SetBleedingBlocked(struct UObject* Blocker, bool bLocked); // Function Hardwired.HWInjuryComponent.SetBleedingBlocked // (Final|Native|Public|BlueprintCallable) // @ game+0x1024af0
	void SetBeingRevivedBy(struct UObject* Reviver, bool Reviving); // Function Hardwired.HWInjuryComponent.SetBeingRevivedBy // (Final|Native|Public|BlueprintCallable) // @ game+0x1024a20
	void Revive(struct AHWCharacter* Reviver); // Function Hardwired.HWInjuryComponent.Revive // (Final|Native|Public|BlueprintCallable) // @ game+0x1024790
	void OnRep_VitalityState(); // Function Hardwired.HWInjuryComponent.OnRep_VitalityState // (Final|Native|Public) // @ game+0x1024520
	void OnRep_IsBleeding(bool PreviousState); // Function Hardwired.HWInjuryComponent.OnRep_IsBleeding // (Final|Native|Public) // @ game+0x1024470
	void OnRep_BeingRevived(); // Function Hardwired.HWInjuryComponent.OnRep_BeingRevived // (Final|Native|Public) // @ game+0x1024430
	void MulticastReceiveInjury(struct FHWInjuryReceivedParams Params); // Function Hardwired.HWInjuryComponent.MulticastReceiveInjury // (Net|NetReliableNative|Event|NetMulticast|Public) // @ game+0x1024150
	void MulticastReceiveBleedDamage(float Value); // Function Hardwired.HWInjuryComponent.MulticastReceiveBleedDamage // (Net|NetReliableNative|Event|NetMulticast|Public) // @ game+0x10240c0
	void MulticastHealInjury(struct FString ItemName, float Value, bool OverwriteMessage); // Function Hardwired.HWInjuryComponent.MulticastHealInjury // (Net|NetReliableNative|Event|NetMulticast|Public) // @ game+0x1023f90
	bool IsDowned(); // Function Hardwired.HWInjuryComponent.IsDowned // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1023ce0
	bool IsDead(); // Function Hardwired.HWInjuryComponent.IsDead // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1023cb0
	bool IsBleedingBlocked(); // Function Hardwired.HWInjuryComponent.IsBleedingBlocked // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1023c80
	bool IsBleeding(); // Function Hardwired.HWInjuryComponent.IsBleeding // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1023c50
	bool IsBeingRevived(); // Function Hardwired.HWInjuryComponent.IsBeingRevived // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1023c30
	bool IsAlive(); // Function Hardwired.HWInjuryComponent.IsAlive // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1023c00
	void HealInjury(struct AHWItemBase* Item, struct AHWCharacter* Healer, bool StopBleeding, float RestoreBloodAmount, bool HealNormal, bool HealDowned, float Duration); // Function Hardwired.HWInjuryComponent.HealInjury // (Final|Native|Public|BlueprintCallable) // @ game+0x1023920
	bool HasDamage(); // Function Hardwired.HWInjuryComponent.HasDamage // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10238f0
	enum class EHWVitalityState GetVitalityState(); // Function Hardwired.HWInjuryComponent.GetVitalityState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfd4470
};

// Class Hardwired.HWInputTypeListener
// Size: 0x28 (Inherited: 0x28)
struct UHWInputTypeListener : UInterface {

	void OnMouseKeyboardInput(); // Function Hardwired.HWInputTypeListener.OnMouseKeyboardInput // (Native|Event|Public|BlueprintEvent) // @ game+0xfcd660
	void OnGamepadInput(); // Function Hardwired.HWInputTypeListener.OnGamepadInput // (Native|Event|Public|BlueprintEvent) // @ game+0x1024260
};

// Class Hardwired.HWInteractionComponent
// Size: 0x1d8 (Inherited: 0xb0)
struct UHWInteractionComponent : UActorComponent {
	struct FMulticastInlineDelegate OnInteract; // 0xb0(0x10)
	struct FMulticastInlineDelegate OnStartInteraction; // 0xc0(0x10)
	struct FMulticastInlineDelegate OnAbortInteraction; // 0xd0(0x10)
	struct FMulticastInlineDelegate OnEnterView; // 0xe0(0x10)
	struct FMulticastInlineDelegate OnExitView; // 0xf0(0x10)
	char pad_100[0x4]; // 0x100(0x04)
	float Distance; // 0x104(0x04)
	float InteractionDuration; // 0x108(0x04)
	enum class EHWItemUsageType ItemType; // 0x10c(0x01)
	bool bAllowMovement; // 0x10d(0x01)
	bool BlockDroneInteraction; // 0x10e(0x01)
	char pad_10F[0x1]; // 0x10f(0x01)
	float DegreesRequiredToInteract; // 0x110(0x04)
	bool CheckAngle; // 0x114(0x01)
	bool OnlyCheckAngleForAutoInteract; // 0x115(0x01)
	bool FlipAngleFwdDir; // 0x116(0x01)
	bool TwoSidedAngle; // 0x117(0x01)
	bool AllowAutoInteract; // 0x118(0x01)
	bool AutoInteractOnlyFromRun; // 0x119(0x01)
	char pad_11A[0x6]; // 0x11a(0x06)
	struct TSet<enum class EHWActionType> AutoInteractRequiredHeldActions; // 0x120(0x50)
	bool HasAutoInteracted; // 0x170(0x01)
	char pad_171[0x7]; // 0x171(0x07)
	struct TArray<bool> EnabledForTeam; // 0x178(0x10)
	struct AHWCharacter* OnlyInteractableBy; // 0x188(0x08)
	bool IsSelfInteractable; // 0x190(0x01)
	char pad_191[0x7]; // 0x191(0x07)
	struct TArray<struct FText> TeamInteractionPrompt; // 0x198(0x10)
	struct TArray<struct FHWPlayerText> PlayerInteractionPrompt; // 0x1a8(0x10)
	struct TArray<struct FText> TeamInteractingText; // 0x1b8(0x10)
	struct TArray<struct FHWPlayerText> PlayerInteractingText; // 0x1c8(0x10)

	void SetPromptForTeam(struct FText Prompt, int32_t Team); // Function Hardwired.HWInteractionComponent.SetPromptForTeam // (Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable) // @ game+0x1025260
	void SetPromptForPlayer(struct FText Prompt, struct AHWCharacter* Character); // Function Hardwired.HWInteractionComponent.SetPromptForPlayer // (Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable) // @ game+0x1025150
	void SetPromptForAll(struct FText Prompt); // Function Hardwired.HWInteractionComponent.SetPromptForAll // (Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable) // @ game+0x1025090
	void SetInteractingTextForTeam(struct FText InteractingText, int32_t Team); // Function Hardwired.HWInteractionComponent.SetInteractingTextForTeam // (Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable) // @ game+0x1024f80
	void SetInteractingTextForPlayer(struct FText InteractingText, struct AHWCharacter* Character); // Function Hardwired.HWInteractionComponent.SetInteractingTextForPlayer // (Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable) // @ game+0x1024e70
	void SetInteractingTextForAll(struct FText InteractingText); // Function Hardwired.HWInteractionComponent.SetInteractingTextForAll // (Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable) // @ game+0x1024db0
	void SetEnabledOnlyForTeam(int32_t Team); // Function Hardwired.HWInteractionComponent.SetEnabledOnlyForTeam // (Final|Native|Public|BlueprintCallable) // @ game+0x1024d20
	void SetEnabledForTeam(int32_t Team, bool Enabled); // Function Hardwired.HWInteractionComponent.SetEnabledForTeam // (Final|Native|Public|BlueprintCallable) // @ game+0x1024c50
	void SetEnabledForAll(bool Enabled); // Function Hardwired.HWInteractionComponent.SetEnabledForAll // (Final|Native|Public|BlueprintCallable) // @ game+0x1024bc0
	bool IsEnabledForTeam(int32_t Team); // Function Hardwired.HWInteractionComponent.IsEnabledForTeam // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1023d70
	bool IsEnabledForAnyTeam(); // Function Hardwired.HWInteractionComponent.IsEnabledForAnyTeam // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1023d40
	bool IsEnabledForAllTeams(); // Function Hardwired.HWInteractionComponent.IsEnabledForAllTeams // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1023d10
	struct TArray<struct FText> GetPromptForPlayer(struct ACharacter* Character, struct TArray<int32_t> OutItemSlot); // Function Hardwired.HWInteractionComponent.GetPromptForPlayer // (Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x1023740
	float GetInteractionDistance(struct AActor* Interactor); // Function Hardwired.HWInteractionComponent.GetInteractionDistance // (Final|Native|Public|BlueprintCallable) // @ game+0x10232f0
	struct FText GetInteractingTextForPlayer(struct ACharacter* Character); // Function Hardwired.HWInteractionComponent.GetInteractingTextForPlayer // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10231f0
	bool CanInteractWithCharacter(struct AHWCharacter* Player); // Function Hardwired.HWInteractionComponent.CanInteractWithCharacter // (Native|Event|Public|BlueprintEvent|Const) // @ game+0x1022f50
	bool CanAutoInteract(struct AHWCharacter* Player); // Function Hardwired.HWInteractionComponent.CanAutoInteract // (Native|Event|Public|BlueprintEvent) // @ game+0x1022eb0
	void BlockCurrentAutoInteract(); // Function Hardwired.HWInteractionComponent.BlockCurrentAutoInteract // (Final|Native|Public|BlueprintCallable) // @ game+0x1022e90
};

// Class Hardwired.HWInteractionComponent_Character
// Size: 0x1e0 (Inherited: 0x1d8)
struct UHWInteractionComponent_Character : UHWInteractionComponent {
	int32_t OwnerTeam; // 0x1d8(0x04)
	char pad_1DC[0x4]; // 0x1dc(0x04)
};

// Class Hardwired.HWInteractionComponent_Revive
// Size: 0x1d8 (Inherited: 0x1d8)
struct UHWInteractionComponent_Revive : UHWInteractionComponent {

	void OnInteract_Started(struct AHWCharacter* Character); // Function Hardwired.HWInteractionComponent_Revive.OnInteract_Started // (Final|Native|Private) // @ game+0x10243a0
	void OnInteract_Finished(struct AHWCharacter* Character); // Function Hardwired.HWInteractionComponent_Revive.OnInteract_Finished // (Final|Native|Private) // @ game+0x1024310
	void OnInteract_Aborted(struct AHWCharacter* Character); // Function Hardwired.HWInteractionComponent_Revive.OnInteract_Aborted // (Final|Native|Private) // @ game+0x1024280
};

// Class Hardwired.HWInventoryComponent
// Size: 0x148 (Inherited: 0xb0)
struct UHWInventoryComponent : UActorComponent {
	struct TArray<struct AHWItemBase*> ItemInstances; // 0xb0(0x10)
	struct TArray<struct FNameAndCount> Inventory; // 0xc0(0x10)
	struct TArray<struct FNameAndCount> ObjectiveItems; // 0xd0(0x10)
	struct AHWCharacter* MyPawn; // 0xe0(0x08)
	struct AHWItemBase* EquippedItem; // 0xe8(0x08)
	enum class EHWItemUsageType CombatCompanionItemType; // 0xf0(0x01)
	bool CombatCompanionItemActive; // 0xf1(0x01)
	char pad_F2[0x2]; // 0xf2(0x02)
	int32_t NumItemsInCombatCompanion; // 0xf4(0x04)
	struct AHWItemBase* ItemBeingUsed; // 0xf8(0x08)
	struct AHWCharacter* ItemUseTarget; // 0x100(0x08)
	struct FMulticastInlineDelegate OnBeginThrow; // 0x108(0x10)
	struct FMulticastInlineDelegate OnEndThrow; // 0x118(0x10)
	char pad_128[0x1c]; // 0x128(0x1c)
	int32_t ItemCountBonus; // 0x144(0x04)

	void UseItemVO(); // Function Hardwired.HWInventoryComponent.UseItemVO // (Final|Native|Public) // @ game+0x1025d20
	void UseItemTimerFinished(); // Function Hardwired.HWInventoryComponent.UseItemTimerFinished // (Final|Native|Public) // @ game+0x1025d00
	void UseItemFinished(); // Function Hardwired.HWInventoryComponent.UseItemFinished // (Final|Native|Public) // @ game+0x1025ce0
	void UseItem(int32_t ItemSlot, struct AHWCharacter* Target); // Function Hardwired.HWInventoryComponent.UseItem // (Native|Event|Public|BlueprintEvent) // @ game+0x1025c10
	void UnequipItem(); // Function Hardwired.HWInventoryComponent.UnequipItem // (Final|Native|Public) // @ game+0x9ad4e0
	void SpawnItems(struct USceneComponent* AttachTarget, struct FName SocketName); // Function Hardwired.HWInventoryComponent.SpawnItems // (Final|Native|Public|BlueprintCallable) // @ game+0x1025550
	void ServerUseItem(struct AHWItemBase* Item, struct AHWCharacter* Target); // Function Hardwired.HWInventoryComponent.ServerUseItem // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x1024910
	void ServerAbortUseItem(); // Function Hardwired.HWInventoryComponent.ServerAbortUseItem // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x10248c0
	void SelectItem(struct FNameAndCount itemAndCapacity); // Function Hardwired.HWInventoryComponent.SelectItem // (Final|Native|Public) // @ game+0x1024820
	void PickUpItems(struct TArray<struct FName> ItemIDs); // Function Hardwired.HWInventoryComponent.PickUpItems // (Final|Native|Public|BlueprintCallable) // @ game+0x10245d0
	void PickUpItem(struct FName ItemId); // Function Hardwired.HWInventoryComponent.PickUpItem // (Final|Native|Public|BlueprintCallable) // @ game+0x1024540
	void OnRep_ObjectiveItems(); // Function Hardwired.HWInventoryComponent.OnRep_ObjectiveItems // (Final|Native|Public) // @ game+0x1024500
	void OnRep_Inventory(); // Function Hardwired.HWInventoryComponent.OnRep_Inventory // (Final|Native|Public) // @ game+0x1024450
	void OnRep_CombatCompanionItem(); // Function Hardwired.HWInventoryComponent.OnRep_CombatCompanionItem // (Final|Native|Public) // @ game+0x9ad4e0
	void OnBeginItemUse(struct AHWCharacter* User, struct AHWCharacter* Target); // Function Hardwired.HWInventoryComponent.OnBeginItemUse // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnAbortItemUse(struct AHWCharacter* User, struct AHWCharacter* Target); // Function Hardwired.HWInventoryComponent.OnAbortItemUse // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	bool IsMissingItemsWithUseType(enum class EHWItemUsageType UseType); // Function Hardwired.HWInventoryComponent.IsMissingItemsWithUseType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1023e10
	struct TArray<struct FNameAndCount> GetObjectiveItems(); // Function Hardwired.HWInventoryComponent.GetObjectiveItems // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1023680
	void GetMissingItemsWithUseType(struct TArray<struct FName> ItemIDs, enum class EHWItemUsageType UseType); // Function Hardwired.HWInventoryComponent.GetMissingItemsWithUseType // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x1023580
	struct TArray<struct AHWItemBase*> GetItemInstances(); // Function Hardwired.HWInventoryComponent.GetItemInstances // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10234c0
	struct AHWItemBase* GetItemInstance(enum class EHWItemUsageType Type); // Function Hardwired.HWInventoryComponent.GetItemInstance // (Final|Native|Public|BlueprintCallable) // @ game+0x1023430
	struct AHWItemBase* GetItemById(struct FName ItemId); // Function Hardwired.HWInventoryComponent.GetItemById // (Final|Native|Public|BlueprintCallable) // @ game+0x1023390
	void EquipItem(); // Function Hardwired.HWInventoryComponent.EquipItem // (Final|Native|Public) // @ game+0x9ad4e0
	void CooldownFinished(struct AHWItemBase* Item); // Function Hardwired.HWInventoryComponent.CooldownFinished // (Final|Native|Public) // @ game+0x1023090
	bool CanPickUpItem(struct FName ItemId); // Function Hardwired.HWInventoryComponent.CanPickUpItem // (Final|Native|Public|BlueprintCallable) // @ game+0x1022ff0
	void BeginUseItem(struct AHWItemBase* Item, struct AHWCharacter* Target); // Function Hardwired.HWInventoryComponent.BeginUseItem // (Final|Native|Public) // @ game+0x1022dc0
	void AbortUseItem(enum class EHWUseAbortReason AbortReason); // Function Hardwired.HWInventoryComponent.AbortUseItem // (Final|Native|Public) // @ game+0x1022d40
};

// Class Hardwired.HWInventoryItemFilter
// Size: 0x208 (Inherited: 0x28)
struct UHWInventoryItemFilter : UObject {
	struct TSet<enum class EHWVendor> Vendors; // 0x28(0x50)
	struct TSet<enum class EHWRarity> Rarities; // 0x78(0x50)
	struct TSet<int32_t> Tiers; // 0xc8(0x50)
	struct TSet<enum class EHWWeaponType> WeaponTypes; // 0x118(0x50)
	struct TSet<enum class EHWWeaponCategory> WeaponCategories; // 0x168(0x50)
	struct TSet<enum class EHWWeaponPartType> PartTypes; // 0x1b8(0x50)

	void Reset(); // Function Hardwired.HWInventoryItemFilter.Reset // (Final|Native|Public|BlueprintCallable) // @ game+0x102c5c0
	bool Matches(struct UHWInventoryItemBase* Data); // Function Hardwired.HWInventoryItemFilter.Matches // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x102c100
};

// Class Hardwired.HWItemAnalyticsBPL
// Size: 0x28 (Inherited: 0x28)
struct UHWItemAnalyticsBPL : UBlueprintFunctionLibrary {

	void SendTriggerEventAnalytics(struct FHWTriggerItemEventParams Params); // Function Hardwired.HWItemAnalyticsBPL.SendTriggerEventAnalytics // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x102d080
	void SendPickUpEventAnalytics(struct FHWPickupEventParams Params); // Function Hardwired.HWItemAnalyticsBPL.SendPickUpEventAnalytics // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x102cf70
	void SendJamEventAnalytics(struct FHWJamItemEventParams Params); // Function Hardwired.HWItemAnalyticsBPL.SendJamEventAnalytics // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x102ce40
	void SendInteractEventAnalytics(struct FHWInteractItemEventParams Params); // Function Hardwired.HWItemAnalyticsBPL.SendInteractEventAnalytics // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x102cd30
	void SendImpactEventAnalytics(struct FHWImpactItemEventParams Params); // Function Hardwired.HWItemAnalyticsBPL.SendImpactEventAnalytics // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x102cc20
	void SendGenericItemUseEvent(struct AActor* ItemObject, struct AHWCharacter* Target, enum class EHWAnalyticsItemUseEventType EventType); // Function Hardwired.HWItemAnalyticsBPL.SendGenericItemUseEvent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x102cb20
	void SendExplosionEventAnalytics(struct AActor* ItemObject, struct FString OwnerSessionId, struct FHWItemData ItemData, int32_t ItemId); // Function Hardwired.HWItemAnalyticsBPL.SendExplosionEventAnalytics // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x102c970
	void SendExplodeEventAnalytics(struct FHWItemEventParams Params); // Function Hardwired.HWItemAnalyticsBPL.SendExplodeEventAnalytics // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x102c860
	void SendDestroyEventAnalytics(struct FHWDestroyItemEventParams Params); // Function Hardwired.HWItemAnalyticsBPL.SendDestroyEventAnalytics // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x102c750
	void SendCameraTerminalEvent(struct AActor* Actor, struct AHWCharacter* Character, enum class EHWAnalyticsItemUseEventType EventType, int32_t ItemUseID); // Function Hardwired.HWItemAnalyticsBPL.SendCameraTerminalEvent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x102c600
	int32_t IncrementItemUseID(); // Function Hardwired.HWItemAnalyticsBPL.IncrementItemUseID // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x102bff0
};

// Class Hardwired.HWItemBase
// Size: 0x338 (Inherited: 0x220)
struct AHWItemBase : AActor {
	int32_t ItemId; // 0x220(0x04)
	int32_t Amount; // 0x224(0x04)
	int32_t ItemSlot; // 0x228(0x04)
	char pad_22C[0x4]; // 0x22c(0x04)
	struct FHWItemData Data; // 0x230(0x78)
	struct FText UsingItemText; // 0x2a8(0x18)
	struct FText UseItemPromptText; // 0x2c0(0x18)
	bool OnCooldown; // 0x2d8(0x01)
	char pad_2D9[0x3]; // 0x2d9(0x03)
	struct FName ItemUseVOSoundId; // 0x2dc(0x08)
	char pad_2E4[0x4]; // 0x2e4(0x04)
	struct FEventSound ItemUseSound; // 0x2e8(0x20)
	struct UAnimMontage* Animation1P; // 0x308(0x08)
	struct UAnimMontage* Animation3P; // 0x310(0x08)
	struct UAnimMontage* AnimationCamera; // 0x318(0x08)
	struct FString OwnerSessionId; // 0x320(0x10)
	bool UserTriggerable; // 0x330(0x01)
	bool WasTriggered; // 0x331(0x01)
	char pad_332[0x6]; // 0x332(0x06)

	void UseItem(struct AHWCharacter* User, struct AHWCharacter* Target); // Function Hardwired.HWItemBase.UseItem // (Final|Native|Public) // @ game+0x1030590
	void Unequip(); // Function Hardwired.HWItemBase.Unequip // (Final|Native|Public) // @ game+0x9ad4e0
	void TriggerItem(); // Function Hardwired.HWItemBase.TriggerItem // (Final|Native|Public) // @ game+0x1030570
	bool ShouldTrigger(); // Function Hardwired.HWItemBase.ShouldTrigger // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x10303f0
	void ResetTrigger(); // Function Hardwired.HWItemBase.ResetTrigger // (Final|Native|Public) // @ game+0x102c5e0
	void OnRep_Amount(); // Function Hardwired.HWItemBase.OnRep_Amount // (Final|Native|Public) // @ game+0x102c270
	void OnItemUnequipped(); // Function Hardwired.HWItemBase.OnItemUnequipped // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnItemTriggered(); // Function Hardwired.HWItemBase.OnItemTriggered // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnItemThrown(struct AHWCharacter* Thrower); // Function Hardwired.HWItemBase.OnItemThrown // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnItemThrowBegin(struct AHWCharacter* User); // Function Hardwired.HWItemBase.OnItemThrowBegin // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnItemThrowAborted(struct AHWCharacter* User); // Function Hardwired.HWItemBase.OnItemThrowAborted // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnItemReadyToBePlaced(struct AHWCharacter* User); // Function Hardwired.HWItemBase.OnItemReadyToBePlaced // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnItemPlaced(struct AHWCharacter* User); // Function Hardwired.HWItemBase.OnItemPlaced // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnItemPlaceBegin(struct AHWCharacter* User); // Function Hardwired.HWItemBase.OnItemPlaceBegin // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnItemPlaceAborted(struct AHWCharacter* User); // Function Hardwired.HWItemBase.OnItemPlaceAborted // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnItemEquipped(); // Function Hardwired.HWItemBase.OnItemEquipped // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnItemConsumed(struct AHWCharacter* User, struct AHWCharacter* Target); // Function Hardwired.HWItemBase.OnItemConsumed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnItemConsumeBegin(struct AHWCharacter* User, struct AHWCharacter* Target); // Function Hardwired.HWItemBase.OnItemConsumeBegin // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnItemConsumeAborted(struct AHWCharacter* User, struct AHWCharacter* Target); // Function Hardwired.HWItemBase.OnItemConsumeAborted // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnInitialize(); // Function Hardwired.HWItemBase.OnInitialize // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void MulticastPlayItemSound(struct AHWCharacter* User, struct AHWCharacter* Target); // Function Hardwired.HWItemBase.MulticastPlayItemSound // (Net|NetReliableNative|Event|NetMulticast|Public) // @ game+0x102c1a0
	struct FName GetVOSoundId(struct AHWCharacter* User, struct AHWCharacter* Target); // Function Hardwired.HWItemBase.GetVOSoundId // (Native|Event|Public|BlueprintEvent) // @ game+0x102bf10
	struct FString GetItemParameterString(struct FString Key); // Function Hardwired.HWItemBase.GetItemParameterString // (Final|Native|Protected|BlueprintCallable) // @ game+0x102b1b0
	int32_t GetItemParameterInt(struct FString Key); // Function Hardwired.HWItemBase.GetItemParameterInt // (Final|Native|Protected|BlueprintCallable) // @ game+0x102b0b0
	float GetItemParameterFloat(struct FString Key); // Function Hardwired.HWItemBase.GetItemParameterFloat // (Final|Native|Protected|BlueprintCallable) // @ game+0x102afb0
	void Equip(); // Function Hardwired.HWItemBase.Equip // (Final|Native|Public) // @ game+0x9ad4e0
	bool CanInteractWith(struct AHWCharacter* Target); // Function Hardwired.HWItemBase.CanInteractWith // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	bool CanFinishItemUse(struct AHWCharacter* User, struct AHWCharacter* Target); // Function Hardwired.HWItemBase.CanFinishItemUse // (Native|Event|Public|BlueprintEvent) // @ game+0x102a3b0
	bool CanContinueItemUse(struct AHWCharacter* User, struct AHWCharacter* Target); // Function Hardwired.HWItemBase.CanContinueItemUse // (Native|Event|Public|BlueprintEvent) // @ game+0x102a2e0
};

// Class Hardwired.HWItemComponent
// Size: 0x148 (Inherited: 0xb0)
struct UHWItemComponent : UActorComponent {
	char pad_B0[0x98]; // 0xb0(0x98)

	struct FHWItemIdentifier GetIdentifier(); // Function Hardwired.HWItemComponent.GetIdentifier // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x102af60
	void AddUniqueItemComponent(struct AActor* Actor, struct FHWItemData ItemData, int32_t ItemId, struct FString OwnerSessionId); // Function Hardwired.HWItemComponent.AddUniqueItemComponent // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x102a130
	void AddCustomItemComponent(struct AActor* Actor, struct FName Name, struct FString OwnerSessionId); // Function Hardwired.HWItemComponent.AddCustomItemComponent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1029ab0
};

// Class Hardwired.HWItemParameterInfo
// Size: 0x60 (Inherited: 0x28)
struct UHWItemParameterInfo : UObject {
	enum class EHWCraftingParameter Parameter; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float MinValue; // 0x2c(0x04)
	float MaxValue; // 0x30(0x04)
	float CurrentValue; // 0x34(0x04)
	float UpgradedValue; // 0x38(0x04)
	float CurrentRangeMin; // 0x3c(0x04)
	float CurrentRangeMax; // 0x40(0x04)
	float ComparisonValue; // 0x44(0x04)
	struct FString DebugString; // 0x48(0x10)
	bool IsPercentage; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)

	void SetComparison(float OriginalValue); // Function Hardwired.HWItemParameterInfo.SetComparison // (Final|Native|Public|BlueprintCallable) // @ game+0x102d190
	bool IsZero(); // Function Hardwired.HWItemParameterInfo.IsZero // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x102c0d0
	bool IsFixed(); // Function Hardwired.HWItemParameterInfo.IsFixed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x102c060
	float GetRelativeValue(); // Function Hardwired.HWItemParameterInfo.GetRelativeValue // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x102b6b0
	float GetRelativeRangeMin(); // Function Hardwired.HWItemParameterInfo.GetRelativeRangeMin // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x102b660
	float GetRelativeRangeMax(); // Function Hardwired.HWItemParameterInfo.GetRelativeRangeMax // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x102b610
};

// Class Hardwired.HWItemParameters
// Size: 0x38 (Inherited: 0x28)
struct UHWItemParameters : UObject {
	char pad_28[0x10]; // 0x28(0x10)

	struct TMap<enum class EHWCraftingParameter, struct UHWItemParameterInfo*> ToMap(); // Function Hardwired.HWItemParameters.ToMap // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10304a0
	struct TArray<struct UHWItemParameterInfo*> ToArray(); // Function Hardwired.HWItemParameters.ToArray // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1030420
};

// Class Hardwired.HWLevelBPL
// Size: 0x28 (Inherited: 0x28)
struct UHWLevelBPL : UBlueprintFunctionLibrary {

	void SetTeamObjectiveStatus(struct UObject* WorldContextObject, struct FText Text, int32_t Team); // Function Hardwired.HWLevelBPL.SetTeamObjectiveStatus // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x10302a0
	void SetSingleGoalForTeam(struct UObject* WorldContextObject, int32_t Team, struct FHWRoundGoal Goal); // Function Hardwired.HWLevelBPL.SetSingleGoalForTeam // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1030150
	void SetSingleGoalForPlayer(struct UObject* WorldContextObject, struct AHWPlayerController* Player, struct FHWRoundGoal Goal); // Function Hardwired.HWLevelBPL.SetSingleGoalForPlayer // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1030000
	void SetSingleGoalForAll(struct UObject* WorldContextObject, struct FHWRoundGoal Goal); // Function Hardwired.HWLevelBPL.SetSingleGoalForAll // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x102ff00
	void SetScoreForTeam(struct UObject* WorldContextObject, struct FHWTeamScoreData ScoreData); // Function Hardwired.HWLevelBPL.SetScoreForTeam // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x102fce0
	void SetRoundIntroTextsForTeam(struct UObject* WorldContextObject, int32_t Team, struct FHWRoundIntroData Texts); // Function Hardwired.HWLevelBPL.SetRoundIntroTextsForTeam // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x102fb50
	void SetRoundIntroTextsForPlayer(struct UObject* WorldContextObject, struct AHWPlayerController* Player, struct FHWRoundIntroData Texts); // Function Hardwired.HWLevelBPL.SetRoundIntroTextsForPlayer // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x102f9c0
	void SetRoundIntroTextsForAll(struct UObject* WorldContextObject, struct FHWRoundIntroData Texts); // Function Hardwired.HWLevelBPL.SetRoundIntroTextsForAll // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x102f880
	void SetRoundHeaderForTeam(struct UObject* WorldContextObject, int32_t Team, struct FText NewRoundHeader); // Function Hardwired.HWLevelBPL.SetRoundHeaderForTeam // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x102f730
	void SetRoundHeaderForPlayer(struct UObject* WorldContextObject, struct AHWPlayerController* Player, struct FText NewRoundHeader); // Function Hardwired.HWLevelBPL.SetRoundHeaderForPlayer // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x102f5e0
	void SetRoundHeaderForAll(struct UObject* WorldContextObject, struct FText NewRoundHeader); // Function Hardwired.HWLevelBPL.SetRoundHeaderForAll // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x102f4e0
	void SetPlayerObjectiveImage(struct UObject* WorldContextObject, struct UTexture2D* Image, struct AHWCharacter* InCharacter); // Function Hardwired.HWLevelBPL.SetPlayerObjectiveImage // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x102f3e0
	void SetObjectiveTextForTeam(struct UObject* WorldContextObject, int32_t Team, struct FText NewText, struct FText SecondaryText, int32_t Seconds); // Function Hardwired.HWLevelBPL.SetObjectiveTextForTeam // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x102f1a0
	void SetObjectiveTextForPlayer(struct UObject* WorldContextObject, struct AHWPlayerController* Player, struct FText NewText, struct FText SecondaryText, int32_t Seconds); // Function Hardwired.HWLevelBPL.SetObjectiveTextForPlayer // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x102ef60
	void SetObjectiveTextForAll(struct UObject* WorldContextObject, struct FText NewText, struct FText SecondaryText, int32_t Seconds); // Function Hardwired.HWLevelBPL.SetObjectiveTextForAll // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x102ed70
	void SetObjectiveInfoTextForTeam(struct UObject* WorldContextObject, int32_t Team, int32_t ObjectiveIndex, struct FText NewObjectiveText); // Function Hardwired.HWLevelBPL.SetObjectiveInfoTextForTeam // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x102ebe0
	void SetObjectiveInfoTextForPlayer(struct UObject* WorldContextObject, struct AHWPlayerController* Player, int32_t ObjectiveIndex, struct FText NewObjectiveText); // Function Hardwired.HWLevelBPL.SetObjectiveInfoTextForPlayer // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x102ea50
	void SetObjectiveInfoTextForAll(struct UObject* WorldContextObject, int32_t ObjectiveIndex, struct FText NewObjectiveText); // Function Hardwired.HWLevelBPL.SetObjectiveInfoTextForAll // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x102e900
	void SetObjectiveDataForTeam(struct UObject* WorldContextObject, int32_t Team, struct FHWRoundObjectivesData ObjectiveData); // Function Hardwired.HWLevelBPL.SetObjectiveDataForTeam // (Final|Native|Static|Public|HasOutParms) // @ game+0x102e760
	void SetObjectiveDataForPlayer(struct UObject* WorldContextObject, struct AHWPlayerController* Player, struct FHWRoundObjectivesData ObjectiveData); // Function Hardwired.HWLevelBPL.SetObjectiveDataForPlayer // (Final|Native|Static|Public|HasOutParms) // @ game+0x102e5c0
	void SetObjectiveDataForAll(struct UObject* WorldContextObject, struct FHWRoundObjectivesData ObjectiveData); // Function Hardwired.HWLevelBPL.SetObjectiveDataForAll // (Final|Native|Static|Public|HasOutParms) // @ game+0x102e470
	void SetObjectiveCardForTeam(struct UObject* WorldContextObject, int32_t Team, int32_t CardIndex, struct FHWObjectiveCardData NewCardData); // Function Hardwired.HWLevelBPL.SetObjectiveCardForTeam // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x102e290
	void SetObjectiveCardForPlayer(struct UObject* WorldContextObject, struct AHWPlayerController* Player, int32_t CardIndex, struct FHWObjectiveCardData NewCardData); // Function Hardwired.HWLevelBPL.SetObjectiveCardForPlayer // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x102e0b0
	void SetObjectiveCardForAll(struct UObject* WorldContextObject, int32_t CardIndex, struct FHWObjectiveCardData NewCardData); // Function Hardwired.HWLevelBPL.SetObjectiveCardForAll // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x102df10
	void SetNotificationTextForTeam(struct UObject* WorldContextObject, int32_t Team, struct FText UpperText, struct FLinearColor UpperTextColor, bool AnimateUpperText, struct FText LowerText, struct FLinearColor LowerTextColor, bool AnimateLowerText, float Duration); // Function Hardwired.HWLevelBPL.SetNotificationTextForTeam // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x102dba0
	void SetNotificationTextForPlayer(struct UObject* WorldContextObject, struct AHWPlayerController* Player, struct FText UpperText, struct FLinearColor UpperTextColor, bool AnimateUpperText, struct FText LowerText, struct FLinearColor LowerTextColor, bool AnimateLowerText, float Duration); // Function Hardwired.HWLevelBPL.SetNotificationTextForPlayer // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x102d810
	void SetNotificationTextForAll(struct UObject* WorldContextObject, struct FText UpperText, struct FLinearColor UpperTextColor, bool AnimateUpperText, struct FText LowerText, struct FLinearColor LowerTextColor, bool AnimateLowerText, float Duration); // Function Hardwired.HWLevelBPL.SetNotificationTextForAll // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x102d4e0
	void SetCurrentObjectiveIndexForTeam(struct UObject* WorldContextObject, int32_t Team, int32_t NewObjectiveIndex); // Function Hardwired.HWLevelBPL.SetCurrentObjectiveIndexForTeam // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x102d3e0
	void SetCurrentObjectiveIndexForPlayer(struct UObject* WorldContextObject, struct AHWPlayerController* Player, int32_t NewObjectiveIndex); // Function Hardwired.HWLevelBPL.SetCurrentObjectiveIndexForPlayer // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x102d2e0
	void SetCurrentObjectiveIndexForAll(struct UObject* WorldContextObject, int32_t NewObjectiveIndex); // Function Hardwired.HWLevelBPL.SetCurrentObjectiveIndexForAll // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x102d220
	void RecordGameplayEventForCharacter(struct UObject* WorldContextObject, struct AHWHumanCharacter* Player, enum class EHWGameplayEventType EventType, int32_t NumUnits); // Function Hardwired.HWLevelBPL.RecordGameplayEventForCharacter // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x102c3e0
	void RecordGameplayEvent(struct UObject* WorldContextObject, struct AHWPlayerState* PS, enum class EHWGameplayEventType EventType, int32_t NumUnits); // Function Hardwired.HWLevelBPL.RecordGameplayEvent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x102c290
	struct FHWToastMessageData GetToastForLevelReward(struct FHWLevelRewardData Reward, int32_t Amount); // Function Hardwired.HWLevelBPL.GetToastForLevelReward // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x102bd30
	struct TArray<struct FString> GetTeamReceiverIds(struct UObject* WorldContextObject, int32_t Team); // Function Hardwired.HWLevelBPL.GetTeamReceiverIds // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x102bbd0
	struct TArray<struct AHWPlayerState*> GetTeamPlayerStates(struct UObject* WorldContextObject, int32_t Team); // Function Hardwired.HWLevelBPL.GetTeamPlayerStates // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x102bac0
	struct FText GetTeamName(int32_t Team); // Function Hardwired.HWLevelBPL.GetTeamName // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x102b9e0
	bool GetTeamMateWithDrone(struct UObject* WorldContextObject, struct FName InDroneId, int32_t TeamId, struct FString OutPlayerName); // Function Hardwired.HWLevelBPL.GetTeamMateWithDrone // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x102b880
	struct TMap<struct FString, struct FHWLoadoutData> GetTeamLoadouts(struct UObject* WorldContextObject, int32_t Team); // Function Hardwired.HWLevelBPL.GetTeamLoadouts // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x102b700
	int32_t GetNumPlayers(struct UObject* WorldContextObject); // Function Hardwired.HWLevelBPL.GetNumPlayers // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x102b4e0
	int32_t GetLocalPlayerTeam(struct UObject* WorldContextObject); // Function Hardwired.HWLevelBPL.GetLocalPlayerTeam // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x102b450
	struct AHWPlayerState* GetLocalPlayerState(struct UObject* WorldContextObject); // Function Hardwired.HWLevelBPL.GetLocalPlayerState // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x102b3c0
	struct AHWLevelFlow* GetLevelFlow(struct UObject* WorldContextObject, bool Master); // Function Hardwired.HWLevelBPL.GetLevelFlow // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x102b2f0
	struct AHWGameState* GetHWGameState(struct UObject* WorldContextObject); // Function Hardwired.HWLevelBPL.GetHWGameState // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x102aed0
	struct AHWGameMode* GetHWGameMode(struct UObject* WorldContextObject); // Function Hardwired.HWLevelBPL.GetHWGameMode // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x102ae40
	int32_t GetCurrentRound(struct UObject* WorldContextObject); // Function Hardwired.HWLevelBPL.GetCurrentRound // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x102ad80
	int32_t GetControllerTeam(struct AHWPlayerController* Controller); // Function Hardwired.HWLevelBPL.GetControllerTeam // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x102acf0
	struct AHWMapMarker* GetClosestNavigatableMapMarker(struct UObject* WorldContextObject, struct FVector Location, int32_t Team, float Distance); // Function Hardwired.HWLevelBPL.GetClosestNavigatableMapMarker // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x102ab90
	struct FText GetActorTeamName(struct AActor* Actor); // Function Hardwired.HWLevelBPL.GetActorTeamName // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x102aaa0
	int32_t GetActorTeam(struct AActor* Actor); // Function Hardwired.HWLevelBPL.GetActorTeam // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x102aa10
	struct TArray<struct AHWMapMarker*> GetActiveMapMarkers(struct UObject* WorldContextObject, int32_t Team); // Function Hardwired.HWLevelBPL.GetActiveMapMarkers // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x102a900
	void ClearAllObjectives(struct UObject* WorldContextObject); // Function Hardwired.HWLevelBPL.ClearAllObjectives // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x102a880
	void ClearAllObjectiveInfoTextForTeam(struct UObject* WorldContextObject, int32_t Team); // Function Hardwired.HWLevelBPL.ClearAllObjectiveInfoTextForTeam // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x102a7c0
	void ClearAllObjectiveInfoTextForPlayer(struct UObject* WorldContextObject, struct AHWPlayerController* Player); // Function Hardwired.HWLevelBPL.ClearAllObjectiveInfoTextForPlayer // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x102a700
	void ClearAllObjectiveInfoTextForAll(struct UObject* WorldContextObject); // Function Hardwired.HWLevelBPL.ClearAllObjectiveInfoTextForAll // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x102a680
	void ClearAllObjectiveCardsForTeam(struct UObject* WorldContextObject, int32_t Team); // Function Hardwired.HWLevelBPL.ClearAllObjectiveCardsForTeam // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x102a5c0
	void ClearAllObjectiveCardsForPlayer(struct UObject* WorldContextObject, struct AHWPlayerController* Player); // Function Hardwired.HWLevelBPL.ClearAllObjectiveCardsForPlayer // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x102a500
	void ClearAllObjectiveCardsForAll(struct UObject* WorldContextObject); // Function Hardwired.HWLevelBPL.ClearAllObjectiveCardsForAll // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x102a480
	void AddToastMessage(struct UObject* WorldContextObject, struct FHWToastMessageData Data, struct AHWCharacter* Player); // Function Hardwired.HWLevelBPL.AddToastMessage // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1029f80
	void AddMetaMessageForTeam(struct UObject* WorldContextObject, struct FHWMetaMessageData Data, int32_t Team); // Function Hardwired.HWLevelBPL.AddMetaMessageForTeam // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1029e30
	void AddMetaMessageForPlayer(struct UObject* WorldContextObject, struct FHWMetaMessageData Data, struct AHWCharacter* Player); // Function Hardwired.HWLevelBPL.AddMetaMessageForPlayer // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1029cd0
	void AddMetaMessageForAll(struct UObject* WorldContextObject, struct FHWMetaMessageData Data); // Function Hardwired.HWLevelBPL.AddMetaMessageForAll // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1029bd0
	void AcknowledgeLevelLoaded(struct UObject* WorldContextObject, bool BaseLevel); // Function Hardwired.HWLevelBPL.AcknowledgeLevelLoaded // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x10299f0
};

// Class Hardwired.HWLevelFlow
// Size: 0x230 (Inherited: 0x220)
struct AHWLevelFlow : AActor {
	char pad_220[0x8]; // 0x220(0x08)
	bool bIsMaster; // 0x228(0x01)
	enum class EHWHostileTeam HostileTeam; // 0x229(0x01)
	char pad_22A[0x6]; // 0x22a(0x06)

	void SetHostileTeam(int32_t SingleTeam, bool AllTeams, bool NoTeams); // Function Hardwired.HWLevelFlow.SetHostileTeam // (Final|Native|Public|BlueprintCallable) // @ game+0x1036090
	void OnTeamWiped(int32_t Team, bool Disconnected); // Function Hardwired.HWLevelFlow.OnTeamWiped // (Native|Event|Public|BlueprintEvent) // @ game+0x10356a0
	void OnRoundTimeout(); // Function Hardwired.HWLevelFlow.OnRoundTimeout // (Native|Event|Public|BlueprintEvent) // @ game+0x1035670
	void OnRoundStateSet(int32_t Round, enum class EHWRoundState NewState); // Function Hardwired.HWLevelFlow.OnRoundStateSet // (Native|Event|Public|BlueprintEvent) // @ game+0x10355a0
	void OnRoundEnd(); // Function Hardwired.HWLevelFlow.OnRoundEnd // (Native|Event|Public|BlueprintEvent) // @ game+0x1035570
	void OnPlayerKilled(struct AHWPlayerController* Killer, struct AHWPlayerController* Victim, bool Disconnected); // Function Hardwired.HWLevelFlow.OnPlayerKilled // (Native|Event|Public|BlueprintEvent) // @ game+0x1035320
	void OnOneTeamLeft(int32_t Team, bool Disconnected); // Function Hardwired.HWLevelFlow.OnOneTeamLeft // (Native|Event|Public|BlueprintEvent) // @ game+0x1035250
	void OnLastPlayerAlive(bool Disconnected); // Function Hardwired.HWLevelFlow.OnLastPlayerAlive // (Native|Event|Public|BlueprintEvent) // @ game+0x10350f0
	void OnAllPlayersKilled(bool Disconnected); // Function Hardwired.HWLevelFlow.OnAllPlayersKilled // (Native|Event|Public|BlueprintEvent) // @ game+0x1035060
	void EndRound(struct FText Reason, int32_t ChosenWinner, struct TArray<bool> TeamWinners, struct TArray<struct FText> TeamResults, bool MergeTeams, struct TArray<struct FText> InstructionsForNextRoundWinner, struct TArray<struct FText> InstructionsForNextRoundLoser); // Function Hardwired.HWLevelFlow.EndRound // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1033a90
};

// Class Hardwired.HWLevelObjective
// Size: 0x220 (Inherited: 0x220)
struct AHWLevelObjective : AActor {
};

// Class Hardwired.HWLevelScriptActor
// Size: 0x228 (Inherited: 0x228)
struct AHWLevelScriptActor : ALevelScriptActor {
};

// Class Hardwired.HWListView
// Size: 0x368 (Inherited: 0x368)
struct UHWListView : UListView {
};

// Class Hardwired.HWMapMarkerAreaWidget
// Size: 0x270 (Inherited: 0x260)
struct UHWMapMarkerAreaWidget : UUserWidget {
	float Height; // 0x260(0x04)
	float Taper; // 0x264(0x04)
	bool UsePerspective; // 0x268(0x01)
	char pad_269[0x3]; // 0x269(0x03)
	float Perspective; // 0x26c(0x04)

	struct FVector2D GetSize(); // Function Hardwired.HWMapMarkerAreaWidget.GetSize // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x1034350
	struct FVector2D GetProjectedPoint(struct FVector2D UV); // Function Hardwired.HWMapMarkerAreaWidget.GetProjectedPoint // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x1034290
};

// Class Hardwired.HWMapValidator
// Size: 0x228 (Inherited: 0x220)
struct AHWMapValidator : AActor {
	char pad_220[0x8]; // 0x220(0x08)
};

// Class Hardwired.HWMapVolume
// Size: 0x258 (Inherited: 0x258)
struct AHWMapVolume : AVolume {

	float WorldDistanceToLocalDistance(float WorldDistance); // Function Hardwired.HWMapVolume.WorldDistanceToLocalDistance // (Final|Native|Private|BlueprintCallable|BlueprintPure|Const) // @ game+0x1036d60
	struct FVector2D GetPointLocalCoordinates(struct FVector Point); // Function Hardwired.HWMapVolume.GetPointLocalCoordinates // (Final|Native|Private|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x10341b0
	void GetBoxBounds(struct FVector Origin, struct FVector Extent); // Function Hardwired.HWMapVolume.GetBoxBounds // (Final|Native|Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x1033f50
};

// Class Hardwired.HWMapWidget
// Size: 0x378 (Inherited: 0x108)
struct UHWMapWidget : UWidget {
	struct FSlateBrush WorldmapBrush; // 0x108(0x88)
	struct FDelegate WorldmapBrushDelegate; // 0x190(0x10)
	struct FSlateBrush PlayerIconBrush; // 0x1a0(0x88)
	struct FDelegate PlayerIconBrushDelegate; // 0x228(0x10)
	struct FSlateBrush ObjectiveIconBrush; // 0x238(0x88)
	struct FDelegate ObjectiveIconBrushDelegate; // 0x2c0(0x10)
	struct FSlateBrush ObjectiveArrowBrush; // 0x2d0(0x88)
	struct FDelegate ObjectiveArrowBrushDelegate; // 0x358(0x10)
	char pad_368[0x10]; // 0x368(0x10)
};

// Class Hardwired.HWMatchmakingService
// Size: 0x90 (Inherited: 0x28)
struct UHWMatchmakingService : UObject {
	char pad_28[0x68]; // 0x28(0x68)

	void TeamUnReady(); // Function Hardwired.HWMatchmakingService.TeamUnReady // (Final|Native|Public|BlueprintCallable) // @ game+0x1036d40
	void TeamLeave(); // Function Hardwired.HWMatchmakingService.TeamLeave // (Final|Native|Public|BlueprintCallable) // @ game+0x1036d20
	void Reset(); // Function Hardwired.HWMatchmakingService.Reset // (Final|Native|Public|BlueprintCallable) // @ game+0x1035890
	void ReconnectDecisionMade(bool bDoReconnect); // Function Hardwired.HWMatchmakingService.ReconnectDecisionMade // (Final|Native|Public|BlueprintCallable) // @ game+0x1035800
	void LeaveMatchmaking(); // Function Hardwired.HWMatchmakingService.LeaveMatchmaking // (Final|Native|Public|BlueprintCallable) // @ game+0x1034e20
	bool IsInQueue(); // Function Hardwired.HWMatchmakingService.IsInQueue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1034d20
	bool IsInMatchmaking(); // Function Hardwired.HWMatchmakingService.IsInMatchmaking // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1034cf0
	enum class EHWMatchStatus GetMatchmakingStatus(); // Function Hardwired.HWMatchmakingService.GetMatchmakingStatus // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1034190
	void EnterMatchmaking(); // Function Hardwired.HWMatchmakingService.EnterMatchmaking // (Final|Native|Public|BlueprintCallable) // @ game+0x1033f10
};

// Class Hardwired.HWMatchResults
// Size: 0xb0 (Inherited: 0x28)
struct UHWMatchResults : UObject {
	struct TArray<struct FHWRoundPublicProfiles> RoundProfiles; // 0x28(0x10)
	struct TArray<struct FHWPlayerPublicProfile> Team1Profiles; // 0x38(0x10)
	struct TArray<struct FHWPlayerPublicProfile> Team2Profiles; // 0x48(0x10)
	struct TArray<struct FHWPlayerPublicProfile> Team3Profiles; // 0x58(0x10)
	struct TArray<struct FHWPublicMatchReward> MatchRewards; // 0x68(0x10)
	struct TArray<struct FHWRoundResultInfo> RoundResults; // 0x78(0x10)
	int32_t LocalPlayerIndexInRewards; // 0x88(0x04)
	int32_t LocalPlayerTeam; // 0x8c(0x04)
	struct FString MapName; // 0x90(0x10)
	struct FString FlowId; // 0xa0(0x10)

	bool IsVictory(); // Function Hardwired.HWMatchResults.IsVictory // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1034df0
	bool GetTotalRewards(struct FHWPublicMatchReward Reward); // Function Hardwired.HWMatchResults.GetTotalRewards // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x1034870
	struct TArray<struct FHWPlayerPublicProfile> GetTeamProfiles(int32_t TeamIndex); // Function Hardwired.HWMatchResults.GetTeamProfiles // (Final|Native|Public|BlueprintCallable) // @ game+0x1034530
	struct TArray<struct FHWLoadoutData> GetTeamLoadouts(int32_t TeamIndex); // Function Hardwired.HWMatchResults.GetTeamLoadouts // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1034390
	void FillWithDebugData(); // Function Hardwired.HWMatchResults.FillWithDebugData // (Final|Native|Public|BlueprintCallable) // @ game+0x1033f30
};

// Class Hardwired.HWMathBPL
// Size: 0x28 (Inherited: 0x28)
struct UHWMathBPL : UBlueprintFunctionLibrary {

	float SafeDivide(float X, float Y, float IfZero); // Function Hardwired.HWMathBPL.SafeDivide // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x10358b0
	float GetFallHeightFromImpactVelocity(float ImpactVelocityUUPerSecond, float GravityMetersPerSecond); // Function Hardwired.HWMathBPL.GetFallHeightFromImpactVelocity // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x10340c0
	struct TArray<struct FVector2D> CreateCirclePoints(struct FVector2D Center, float Radius, int32_t Segments); // Function Hardwired.HWMathBPL.CreateCirclePoints // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x1033950
};

// Class Hardwired.HWWeapon
// Size: 0x728 (Inherited: 0x220)
struct AHWWeapon : AActor {
	float DecalFadeOutDelay; // 0x220(0x04)
	float DecalFadeOutDuration; // 0x224(0x04)
	struct AHWImpactSFX* ImpactSFX; // 0x228(0x08)
	char pad_230[0x8]; // 0x230(0x08)
	struct FHWWeaponParts WeaponData; // 0x238(0xb0)
	bool IsFlashlightOn; // 0x2e8(0x01)
	char pad_2E9[0x7]; // 0x2e9(0x07)
	struct AHWWeaponPart* Receiver1P; // 0x2f0(0x08)
	struct AHWWeaponPart* Receiver3P; // 0x2f8(0x08)
	struct FString WeaponName; // 0x300(0x10)
	enum class EHWWeaponType WeaponType; // 0x310(0x01)
	char pad_311[0x7]; // 0x311(0x07)
	struct TMap<enum class EHWWeaponType, struct UCurveFloat*> ArmorDamageCurves; // 0x318(0x50)
	struct TArray<struct AHWWeaponPart*> SpawnedWeaponParts; // 0x368(0x10)
	struct TArray<struct AHWWeaponPart*> SpawnedWeaponParts3P; // 0x378(0x10)
	float ReloadDelay; // 0x388(0x04)
	char pad_38C[0x4]; // 0x38c(0x04)
	struct AHWCharacter* OwningPawn; // 0x390(0x08)
	char pad_398[0x18]; // 0x398(0x18)
	struct FHWWeaponAnimation FireAnimation; // 0x3b0(0x18)
	struct FHWWeaponAnimation AimedFireAnimation; // 0x3c8(0x18)
	struct FHWWeaponAnimation ReloadAnimation; // 0x3e0(0x18)
	struct FHWWeaponAnimation EquipAnimation; // 0x3f8(0x18)
	struct FHWWeaponAnimation MeleeAnimation; // 0x410(0x18)
	struct TArray<enum class EHWWeaponPartType> WeaponPartsAnimationsPriority; // 0x428(0x10)
	struct UParticleSystemComponent* MuzzleFlashComponent; // 0x438(0x08)
	struct AHWMuzzleFlash* MuzzleFlashEffect; // 0x440(0x08)
	bool IsMeleeWeapon; // 0x448(0x01)
	char pad_449[0x3]; // 0x449(0x03)
	float NextShotTime; // 0x44c(0x04)
	float LastShotTime; // 0x450(0x04)
	bool DryShotFired; // 0x454(0x01)
	char pad_455[0x3]; // 0x455(0x03)
	int32_t RemoteShotCounter; // 0x458(0x04)
	char pad_45C[0x10]; // 0x45c(0x10)
	int32_t BurstCounter; // 0x46c(0x04)
	bool PendingReload; // 0x470(0x01)
	char pad_471[0x3]; // 0x471(0x03)
	float ReloadStartDeltaTime; // 0x474(0x04)
	struct FTimerHandle TimerHandle_DelayReload; // 0x478(0x08)
	char pad_480[0x38]; // 0x480(0x38)
	struct FTimerHandle TimerHandle_PartialReloadFire; // 0x4b8(0x08)
	char pad_4C0[0x4]; // 0x4c0(0x04)
	int32_t DamageTierModifier; // 0x4c4(0x04)
	char pad_4C8[0x8]; // 0x4c8(0x08)
	struct TMap<enum class EHWWeaponPartSoundType, struct FHWWeaponPartSound> WeaponSounds; // 0x4d0(0x50)
	struct FName DryShotVOId; // 0x520(0x08)
	struct UAkAudioEvent* HitEnvironmentSoundTemp; // 0x528(0x08)
	struct TArray<int32_t> SavedAmmoInMag; // 0x530(0x10)
	struct TArray<int32_t> SavedAmmoTotal; // 0x540(0x10)
	int32_t TotalDiscardedShots; // 0x550(0x04)
	int32_t AcknowledgedDiscardedShots; // 0x554(0x04)
	int32_t ReplicatedAmmoInMag; // 0x558(0x04)
	int32_t ReplicatedAmmoTotal; // 0x55c(0x04)
	int32_t CurrentAmmoInMag; // 0x560(0x04)
	int32_t CurrentAmmoTotal; // 0x564(0x04)
	char pad_568[0x10]; // 0x568(0x10)
	struct FHWWeaponAttributes Attributes; // 0x578(0xd4)
	char pad_64C[0x1c]; // 0x64c(0x1c)
	struct FHWSingleShotDiag LastShotDiag; // 0x668(0x30)
	struct UHWWeaponProfile* WeaponProfile; // 0x698(0x08)
	char pad_6A0[0x30]; // 0x6a0(0x30)
	struct FVector ShiftingAimpointLocation; // 0x6d0(0x0c)
	struct FVector AimIntersectionLS; // 0x6dc(0x0c)
	struct FVector AimIntersectionWS; // 0x6e8(0x0c)
	struct FVector AimIntersectionFOVSpaceLS; // 0x6f4(0x0c)
	struct FVector AimIntersectionFOVSpaceWS; // 0x700(0x0c)
	char pad_70C[0x1c]; // 0x70c(0x1c)

	bool ShouldShowAimdot(); // Function Hardwired.HWWeapon.ShouldShowAimdot // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x107cd30
	void SetWeaponVisibility(enum class EHWWeaponVisibility Visibility); // Function Hardwired.HWWeapon.SetWeaponVisibility // (Final|Native|Public|BlueprintCallable) // @ game+0x107ccb0
	void SetAmmo(int32_t Amount); // Function Hardwired.HWWeapon.SetAmmo // (Final|Native|Public|BlueprintCallable) // @ game+0x107c7b0
	void ServerStopFire(bool StopImmediately); // Function Hardwired.HWWeapon.ServerStopFire // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x107c6f0
	void ServerStartReload(); // Function Hardwired.HWWeapon.ServerStartReload // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x107c6a0
	void ServerStartFire(); // Function Hardwired.HWWeapon.ServerStartFire // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x107c650
	void ServerRemoteShot(struct FHWRemoteProjectileTraceContainer Container); // Function Hardwired.HWWeapon.ServerRemoteShot // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0x107c530
	void ServerHandleFiring(bool ClientHadEnoughAmmo); // Function Hardwired.HWWeapon.ServerHandleFiring // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x107c470
	void ServerFireTrace(struct FHWFireTrace Trace); // Function Hardwired.HWWeapon.ServerFireTrace // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x107c390
	void PlaySound(enum class EHWWeaponPartSoundType Type, bool PlayAtMuzzle, bool FirstPerson); // Function Hardwired.HWWeapon.PlaySound // (Final|Native|Public|BlueprintCallable) // @ game+0x107bf30
	void PlayDelayedMeleeEnvironmentEffect(struct FHWHitImpactArray Impacts); // Function Hardwired.HWWeapon.PlayDelayedMeleeEnvironmentEffect // (Final|Native|Public) // @ game+0x107bd60
	void PlayAnimationDelayedFinish(enum class EHWWeaponPartAnimationType Animation, float Duration); // Function Hardwired.HWWeapon.PlayAnimationDelayedFinish // (Final|Native|Public) // @ game+0x107bc90
	void OnRep_WeaponData(); // Function Hardwired.HWWeapon.OnRep_WeaponData // (Final|Native|Public) // @ game+0x107ba50
	void OnRep_WeaponAttributes(); // Function Hardwired.HWWeapon.OnRep_WeaponAttributes // (Final|Native|Public) // @ game+0x107ba30
	void OnRep_RemoteShotCounter(); // Function Hardwired.HWWeapon.OnRep_RemoteShotCounter // (Final|Native|Public) // @ game+0x107ba10
	void OnRep_Reload(); // Function Hardwired.HWWeapon.OnRep_Reload // (Final|Native|Public) // @ game+0x107b9f0
	void OnRep_OwningPawn(); // Function Hardwired.HWWeapon.OnRep_OwningPawn // (Final|Native|Protected) // @ game+0x107b9d0
	void OnRep_DiscardedShots(int32_t OldTotalDiscardedShots); // Function Hardwired.HWWeapon.OnRep_DiscardedShots // (Final|Native|Public) // @ game+0x107b940
	void OnRep_CurrentAmmoTotal(); // Function Hardwired.HWWeapon.OnRep_CurrentAmmoTotal // (Final|Native|Public) // @ game+0x107b920
	void OnRep_CurrentAmmoMag(); // Function Hardwired.HWWeapon.OnRep_CurrentAmmoMag // (Final|Native|Public) // @ game+0x107b900
	void OnPartialReloadEndStart(); // Function Hardwired.HWWeapon.OnPartialReloadEndStart // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPartialReloadEndFinish(); // Function Hardwired.HWWeapon.OnPartialReloadEndFinish // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void MulticastPlayImpactEffect(struct FHWHitImpactArray Impacts, struct TArray<struct FVector> Misses); // Function Hardwired.HWWeapon.MulticastPlayImpactEffect // (Net|NetReliableNative|Event|NetMulticast|Public) // @ game+0x107b5a0
	void MulticastPlayAftershotAnimation(); // Function Hardwired.HWWeapon.MulticastPlayAftershotAnimation // (Net|Native|Event|NetMulticast|Public) // @ game+0x107b580
	bool HasOpticalScope(); // Function Hardwired.HWWeapon.HasOpticalScope // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x107b470
	struct UHWWeaponProfile* GetWeaponProfile(); // Function Hardwired.HWWeapon.GetWeaponProfile // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x107b440
	void GetWeaponBounds(struct FVector Origin, struct FVector Extent); // Function Hardwired.HWWeapon.GetWeaponBounds // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x107b360
	struct TArray<struct FVector> GetScopePositions(); // Function Hardwired.HWWeapon.GetScopePositions // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x107b220
	enum class EHWWeaponType GetReceiverType(); // Function Hardwired.HWWeapon.GetReceiverType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x107b1f0
	struct FName GetReceiverName(); // Function Hardwired.HWWeapon.GetReceiverName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x107b1b0
	struct TMap<enum class EHWWeaponPartType, struct FVector> GetPartLocations(struct TArray<enum class EHWWeaponPartType> Types); // Function Hardwired.HWWeapon.GetPartLocations // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x107aea0
	bool GetPartBounds(enum class EHWWeaponPartType PartType, struct FVector Origin, struct FVector Extent); // Function Hardwired.HWWeapon.GetPartBounds // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x107ad70
	struct AHWWeaponPart* GetPart(enum class EHWWeaponPartType Type); // Function Hardwired.HWWeapon.GetPart // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x107ace0
	struct AHWWeaponPart* GetLeftHandGripPart(enum class EHWViewpoint ViewPoint); // Function Hardwired.HWWeapon.GetLeftHandGripPart // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x107ac20
	int32_t GetInitialAmmo(); // Function Hardwired.HWWeapon.GetInitialAmmo // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x107abf0
	struct FRotator GetFiringDirection(); // Function Hardwired.HWWeapon.GetFiringDirection // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x107ab20
	struct UAnimSequence* GetFingerPoseR(enum class EHWFingerPoseTypes Type); // Function Hardwired.HWWeapon.GetFingerPoseR // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x107aa90
	struct UAnimSequence* GetFingerPoseL(enum class EHWFingerPoseTypes Type); // Function Hardwired.HWWeapon.GetFingerPoseL // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x107aa00
	struct UObject* GetAnimDataClass(enum class EHWWeaponPartType WeaponPartType); // Function Hardwired.HWWeapon.GetAnimDataClass // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x107a7d0
	struct TArray<struct AHWWeaponPart*> GetAllParts(bool FirstPerson); // Function Hardwired.HWWeapon.GetAllParts // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x107a6c0
	struct FVector GetAimpointSocketPosition(); // Function Hardwired.HWWeapon.GetAimpointSocketPosition // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x107a680
	struct AHWWeaponPart* GetAimpointPart(); // Function Hardwired.HWWeapon.GetAimpointPart // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x107a650
	struct UMaterialInterface* GetAimdotMaterial(); // Function Hardwired.HWWeapon.GetAimdotMaterial // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x107a620
	void FitWeaponToBounds3D(struct FVector Origin, struct FVector Extent); // Function Hardwired.HWWeapon.FitWeaponToBounds3D // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x107a490
	void FitWeaponToBounds(struct FVector2D Bounds); // Function Hardwired.HWWeapon.FitWeaponToBounds // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x107a570
	void DestroyWeaponParts(); // Function Hardwired.HWWeapon.DestroyWeaponParts // (Final|Native|Public|BlueprintCallable) // @ game+0x107a0f0
	void DelayFireAfterPartialReload(); // Function Hardwired.HWWeapon.DelayFireAfterPartialReload // (Final|Native|Public) // @ game+0x107a0d0
	struct AHWWeaponPart* DebugSpawnWeaponPart(struct UObject* WorldContextObject, struct FString PartName, struct AHWCharacter* OwnerChar); // Function Hardwired.HWWeapon.DebugSpawnWeaponPart // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1079fa0
	void ClientDebugShotTrace(bool HitSomething, struct FHitResult HitInfo, struct FString HitActorName); // Function Hardwired.HWWeapon.ClientDebugShotTrace // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x1079dd0
	bool CanFire(); // Function Hardwired.HWWeapon.CanFire // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1079d00
	void AftershotEnableAim(); // Function Hardwired.HWWeapon.AftershotEnableAim // (Final|Native|Public) // @ game+0x1079ce0
	void AddForceToShiftingAimpoint(struct FVector2D Force); // Function Hardwired.HWWeapon.AddForceToShiftingAimpoint // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1079c60
};

// Class Hardwired.HWMeleeWeapon
// Size: 0x838 (Inherited: 0x728)
struct AHWMeleeWeapon : AHWWeapon {
	struct USceneComponent* SceneComp; // 0x728(0x08)
	struct AHWMeleeWeaponPart* MeleePartClass; // 0x730(0x08)
	struct FHWMeleeAttributes MeleeAttributes; // 0x738(0x78)
	struct TMap<enum class EHWMeleeType, float> LastMeleeTimes; // 0x7b0(0x50)
	struct FMulticastInlineDelegate MeleeCooldownEndDelegate; // 0x800(0x10)
	struct UAnimMontage* LastMeleeAnim; // 0x810(0x08)
	struct FMulticastInlineDelegate MeleeAnimationEndDelegate; // 0x818(0x10)
	struct FMulticastInlineDelegate MeleeBeginDelegate; // 0x828(0x10)

	void ServerProcessMelee(struct TArray<struct AActor*> Actors, struct TArray<struct FHWMeleeTargetData> TargetData, enum class EHWMeleeType MeleeType); // Function Hardwired.HWMeleeWeapon.ServerProcessMelee // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x1035a80
	void ServerMeleeAnimation(enum class EHWMeleeType MeleeType); // Function Hardwired.HWMeleeWeapon.ServerMeleeAnimation // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x10359d0
	void OnRep_MeleePartClass(); // Function Hardwired.HWMeleeWeapon.OnRep_MeleePartClass // (Final|Native|Protected) // @ game+0x1035550
	void OnMeleeAnimFinished(struct UAnimMontage* Montage, bool bInterrupted); // Function Hardwired.HWMeleeWeapon.OnMeleeAnimFinished // (Final|Native|Public) // @ game+0x1035180
	void MulticastMeleeHit(struct TArray<struct AActor*> Actors, struct TArray<struct FHWMeleeTargetData> TargetData); // Function Hardwired.HWMeleeWeapon.MulticastMeleeHit // (Net|Native|Event|NetMulticast|Protected) // @ game+0x1034f60
	void MulticastMeleeAnimation(enum class EHWMeleeType MeleeType); // Function Hardwired.HWMeleeWeapon.MulticastMeleeAnimation // (Net|NetReliableNative|Event|NetMulticast|Public) // @ game+0x1034ee0
	void MeleeCooldownEnd(enum class EHWMeleeType MeleeType); // Function Hardwired.HWMeleeWeapon.MeleeCooldownEnd // (Final|Native|Public) // @ game+0x1034e60
};

// Class Hardwired.HWWeaponPart
// Size: 0x670 (Inherited: 0x220)
struct AHWWeaponPart : AActor {
	struct FHWWeaponSkinParams Skin; // 0x220(0x28)
	struct FHWWeaponPartData PartData; // 0x248(0xc8)
	bool IsSilenced; // 0x310(0x01)
	bool PartialReload; // 0x311(0x01)
	char pad_312[0x2]; // 0x312(0x02)
	int32_t AmmoPerPartialReload; // 0x314(0x04)
	bool OverridePartialReload; // 0x318(0x01)
	bool UseFullReloadAnimSlot; // 0x319(0x01)
	char pad_31A[0x6]; // 0x31a(0x06)
	struct TArray<struct FRecoilStageData> RecoilStageData; // 0x320(0x10)
	bool BlendBetweenStages; // 0x330(0x01)
	char pad_331[0x7]; // 0x331(0x07)
	struct FTimerHandle TimerHandle_AnimationEnd; // 0x338(0x08)
	char pad_340[0x8]; // 0x340(0x08)
	struct USkeletalMeshComponent* Hands1P; // 0x348(0x08)
	struct USkeletalMeshComponent* Hands3P; // 0x350(0x08)
	struct AHWWeaponPart* Receiver; // 0x358(0x08)
	float AftershotAnimationLength; // 0x360(0x04)
	bool UseAftershotAnimation; // 0x364(0x01)
	bool AftershotUnaimWhileAiming; // 0x365(0x01)
	bool AftershotAnimationUnaims; // 0x366(0x01)
	bool AftershotUnaimUseAnimLength; // 0x367(0x01)
	bool SkipAftershotIfAiming; // 0x368(0x01)
	char pad_369[0x3]; // 0x369(0x03)
	float AllowReloadBeginScaling; // 0x36c(0x04)
	float AllowReloadMiddleScaling; // 0x370(0x04)
	float AllowReloadEndScaling; // 0x374(0x04)
	struct UObject* AnimDataClass; // 0x378(0x08)
	bool PlayWeaponAnimationsOnReceiver; // 0x380(0x01)
	char pad_381[0x7]; // 0x381(0x07)
	struct TMap<enum class EHWWeaponPartAnimationType, struct UAnimSequence*> Animations1P; // 0x388(0x50)
	struct TMap<enum class EHWWeaponPartAnimationType, struct UAnimSequence*> Animations3P; // 0x3d8(0x50)
	struct TMap<enum class EHWWeaponPartAnimationType, struct UAnimMontage*> AnimationsHands1P; // 0x428(0x50)
	struct TMap<enum class EHWWeaponPartAnimationType, struct UAnimMontage*> AnimationsCharacter3P; // 0x478(0x50)
	struct TMap<enum class EHWFingerPoseTypes, struct UAnimSequence*> FingerPoseMapR; // 0x4c8(0x50)
	struct TMap<enum class EHWFingerPoseTypes, struct UAnimSequence*> FingerPoseMapL; // 0x518(0x50)
	enum class EHWWeaponType OverrideTypeForLoadoutAnims; // 0x568(0x01)
	char pad_569[0x27]; // 0x569(0x27)
	struct UAnimMontage* LastMontage; // 0x590(0x08)
	struct TMap<enum class EHWWeaponPartSoundType, struct FHWWeaponPartSound> Sounds; // 0x598(0x50)
	enum class EHWPhysicalMaterialImpactSoundType ImpactSoundType; // 0x5e8(0x01)
	bool IsFirstPerson; // 0x5e9(0x01)
	bool bIsAnimated; // 0x5ea(0x01)
	char pad_5EB[0x5]; // 0x5eb(0x05)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x5f0(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x5f8(0x08)
	char pad_600[0x8]; // 0x600(0x08)
	struct AHWMuzzleFlash* MuzzleFlashEffect; // 0x608(0x08)
	struct UParticleSystem* MuzzleFlashEffect1P; // 0x610(0x08)
	struct UParticleSystem* MuzzleFlashEffect3P; // 0x618(0x08)
	struct AHWBulletTrail* TrailEffect; // 0x620(0x08)
	struct UNiagaraSystem* ShellCasingEffect1P; // 0x628(0x08)
	struct UNiagaraSystem* ShellCasingEffect3P; // 0x630(0x08)
	struct UMaterialInterface* AimdotMaterial; // 0x638(0x08)
	float AimdotSize; // 0x640(0x04)
	struct FHWWeaponAimpointParams AimpointParams; // 0x644(0x1c)
	struct TArray<struct UMaterialInstanceDynamic*> MaterialArray; // 0x660(0x10)

	void SetLightingChannels(bool Channel0, bool Channel1, bool Channel2); // Function Hardwired.HWWeaponPart.SetLightingChannels // (Final|Native|Public|BlueprintCallable) // @ game+0x1081850
	void PlayMontageSequence(struct TArray<enum class EHWWeaponPartAnimationType> InAnimations, struct TArray<float> InDurations, struct USkeletalMeshComponent* InHands1P, struct USkeletalMeshComponent* InHands3P, struct AHWWeaponPart* InReceiver); // Function Hardwired.HWWeaponPart.PlayMontageSequence // (Final|Native|Public|BlueprintCallable) // @ game+0x1081370
	struct UAnimMontage* PlayAnimation(enum class EHWWeaponPartAnimationType AnimType, float Duration, struct USkeletalMeshComponent* InHands1P, struct USkeletalMeshComponent* InHands3P, struct AHWWeaponPart* InReceiver); // Function Hardwired.HWWeaponPart.PlayAnimation // (Final|Native|Public|BlueprintCallable) // @ game+0x1080f30
	void OnWeaponInitialized(struct FHWWeaponParts WeaponData); // Function Hardwired.HWWeaponPart.OnWeaponInitialized // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	bool IsOwnerAiming(); // Function Hardwired.HWWeaponPart.IsOwnerAiming // (Final|Native|Public|BlueprintCallable) // @ game+0x1080ce0
	void GotoNextAnimation(); // Function Hardwired.HWWeaponPart.GotoNextAnimation // (Final|Native|Public) // @ game+0x1080b60
	void GetSocketPositionAndRotation(struct FName SocketName, struct FVector Position, struct FRotator Rotation, enum class EHWSocketActionResult Result); // Function Hardwired.HWWeaponPart.GetSocketPositionAndRotation // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1080150
};

// Class Hardwired.HWMeleeWeaponPart
// Size: 0x6e8 (Inherited: 0x670)
struct AHWMeleeWeaponPart : AHWWeaponPart {
	struct FHWMeleeAttributes MeleeAttributes; // 0x670(0x78)
};

// Class Hardwired.HWPlayerControllerBase
// Size: 0x5e0 (Inherited: 0x570)
struct AHWPlayerControllerBase : APlayerController {
	struct FMulticastInlineDelegate OnDiagDisplayChanged; // 0x570(0x10)
	char pad_580[0x60]; // 0x580(0x60)

	struct FVector2D WorldToScreen(struct FVector Location); // Function Hardwired.HWPlayerControllerBase.WorldToScreen // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1061290
	void HWDiagDisplayDelegate__DelegateSignature(bool State); // DelegateFunction Hardwired.HWPlayerControllerBase.HWDiagDisplayDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x13c4ca0
	bool GetDiagDisplay(); // Function Hardwired.HWPlayerControllerBase.GetDiagDisplay // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x105bb50
	bool GetActionForKeyEvent(struct FKeyEvent KeyEvent, struct FName ActionName); // Function Hardwired.HWPlayerControllerBase.GetActionForKeyEvent // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x105af40
};

// Class Hardwired.HWMenuPlayerController
// Size: 0x600 (Inherited: 0x5e0)
struct AHWMenuPlayerController : AHWPlayerControllerBase {
	struct TWeakObjectPtr<struct UWidget> MainWidget; // 0x5dc(0x08)
	char pad_5E8[0x18]; // 0x5e8(0x18)

	void SetMainWidget(struct UWidget* MainWidget); // Function Hardwired.HWMenuPlayerController.SetMainWidget // (Final|Native|Public|BlueprintCallable) // @ game+0x1043400
	void ClearWidgetFilter(); // Function Hardwired.HWMenuPlayerController.ClearWidgetFilter // (Final|Native|Protected|BlueprintCallable) // @ game+0x103a340
	void AddToWidgetFilter(struct UWidget* AllowedWidget); // Function Hardwired.HWMenuPlayerController.AddToWidgetFilter // (Final|Native|Protected|BlueprintCallable) // @ game+0x1039b70
};

// Class Hardwired.HWMetaGameCheatManager
// Size: 0x78 (Inherited: 0x78)
struct UHWMetaGameCheatManager : UCheatManager {
};

// Class Hardwired.HWMiscBPL
// Size: 0x28 (Inherited: 0x28)
struct UHWMiscBPL : UBlueprintFunctionLibrary {

	void UpdateItemSlotInLoadout(struct FHWLoadoutData Loadout, struct FName ItemId, struct FString ItemCategory, int32_t SlotIdx); // Function Hardwired.HWMiscBPL.UpdateItemSlotInLoadout // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1043da0
	void UpdateItemsForArmorSet(struct FHWLoadoutData Loadout, struct FName NewArmorSetId); // Function Hardwired.HWMiscBPL.UpdateItemsForArmorSet // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1043fa0
	void UpdateAssesForArmorSet(struct FHWLoadoutData Loadout, struct FName NewArmorSetId); // Function Hardwired.HWMiscBPL.UpdateAssesForArmorSet // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1043c60
	void UnregisterActorComponent(enum class EHWDataOperation Result, struct FHWActorComponents Data, struct AActor* Actor, struct UActorComponent* Component); // Function Hardwired.HWMiscBPL.UnregisterActorComponent // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1043a70
	void TeamUnReady(struct UObject* WorldContextObject); // Function Hardwired.HWMiscBPL.TeamUnReady // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x10439f0
	void TeamReady(struct UObject* WorldContextObject); // Function Hardwired.HWMiscBPL.TeamReady // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1043970
	void StartDedicatedServer(struct FString MatchID); // Function Hardwired.HWMiscBPL.StartDedicatedServer // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x10438e0
	void SortArray(struct TArray<struct UObject*> InObjects, struct TArray<struct UObject*> OutObjects, struct FDelegate Comparator); // Function Hardwired.HWMiscBPL.SortArray // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1043770
	void SortActorsByDistance(struct TArray<struct AActor*> InActors, struct TArray<struct AActor*> OutActors, struct FVector DistanceTo); // Function Hardwired.HWMiscBPL.SortActorsByDistance // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x10435e0
	bool SetRegistryValue(struct FString KeyName, struct FString ValueName, struct FString Value); // Function Hardwired.HWMiscBPL.SetRegistryValue // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1043490
	void SetGameRegistryValueEncrypted(struct FString ValueName, struct FString Value); // Function Hardwired.HWMiscBPL.SetGameRegistryValueEncrypted // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1043310
	bool SetGameRegistryValue(struct FString ValueName, struct FString Value); // Function Hardwired.HWMiscBPL.SetGameRegistryValue // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1043220
	void SetCosmeticPartInLoadout(struct FHWLoadoutData Loadout, enum class EHWArmorType ArmorType, struct FName ArmorId); // Function Hardwired.HWMiscBPL.SetCosmeticPartInLoadout // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1043090
	void SavePlayerProfileToFile(struct UObject* WorldContextObject); // Function Hardwired.HWMiscBPL.SavePlayerProfileToFile // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1041990
	void RhgLog(enum class EHWLogLevel LoggingLevel, struct FString Message); // Function Hardwired.HWMiscBPL.RhgLog // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1042f70
	void RhgFancyLog(enum class EHWLogLevel LoggingLevel, struct FText Message, bool PrintToScreen, float Duration, struct FLinearColor Color); // Function Hardwired.HWMiscBPL.RhgFancyLog // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x1042d70
	void ReturnToMainMenu(struct UObject* WorldContextObject); // Function Hardwired.HWMiscBPL.ReturnToMainMenu // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1042cf0
	void RemoveFriend(struct UObject* WorldContextObject, struct FString PlayerId); // Function Hardwired.HWMiscBPL.RemoveFriend // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1042c20
	void RejectTeamInvite(struct UObject* WorldContextObject, struct FString TeamId); // Function Hardwired.HWMiscBPL.RejectTeamInvite // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1042b50
	void RegisterDestroyedItemChar(struct AHWCharacter* Instigator, struct AActor* Item); // Function Hardwired.HWMiscBPL.RegisterDestroyedItemChar // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1042a90
	void RegisterDestroyedItem(struct AActor* Instigator, struct AActor* Item); // Function Hardwired.HWMiscBPL.RegisterDestroyedItem // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x10429d0
	void RegisterActorComponent(enum class EHWDataOperation Result, struct FHWActorComponents Data, struct AActor* Actor, struct UActorComponent* Component); // Function Hardwired.HWMiscBPL.RegisterActorComponent // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x10427e0
	float ReadRegistryValueAsFloat(struct FString KeyName, struct FString ValueName, float Default); // Function Hardwired.HWMiscBPL.ReadRegistryValueAsFloat // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x10426a0
	struct FString ReadRegistryValue(struct FString KeyName, struct FString ValueName); // Function Hardwired.HWMiscBPL.ReadRegistryValue // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1042560
	bool ReadGameRegistryValueEncrypted(struct FString ValueName, struct FString Value); // Function Hardwired.HWMiscBPL.ReadGameRegistryValueEncrypted // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1042460
	float ReadGameRegistryValueAsFloat(struct FString ValueName, float Default); // Function Hardwired.HWMiscBPL.ReadGameRegistryValueAsFloat // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1042370
	struct FString ReadGameRegistryValue(struct FString ValueName); // Function Hardwired.HWMiscBPL.ReadGameRegistryValue // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1042290
	struct UDataTable* MakeRichTextDataTable(struct FDataTableRowHandle Row, int32_t CustomSize); // Function Hardwired.HWMiscBPL.MakeRichTextDataTable // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x10421b0
	struct UHWPlayerProfile* MakePlayerProfile(struct UObject* Ctx, struct FString Data); // Function Hardwired.HWMiscBPL.MakePlayerProfile // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x10420d0
	struct FHWActionSet MakeActionSet(bool Fire, bool Aim, bool Reload, bool Vault, bool Melee, bool WeaponSwitch, bool Interact, bool Lean, bool Move, bool Crouch, bool CombatCompanionDeploy, bool Sprint, bool Place, bool Throw, bool Consume, bool Item1, bool Item2, bool Item3); // Function Hardwired.HWMiscBPL.MakeActionSet // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1041b10
	struct UTexture2D* LoadTextureFromPath(struct FString Path, struct FString Filename); // Function Hardwired.HWMiscBPL.LoadTextureFromPath // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1041a10
	void LoadOfflinePlayerDataInEditor(struct UObject* WorldContextObject); // Function Hardwired.HWMiscBPL.LoadOfflinePlayerDataInEditor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1041990
	struct UObject* LoadObjectByName(struct UObject* Class, struct FString Folder, struct FString Name); // Function Hardwired.HWMiscBPL.LoadObjectByName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1041850
	struct UMaterialInterface* LoadMaterialFromPath(struct FString Path); // Function Hardwired.HWMiscBPL.LoadMaterialFromPath // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x10417b0
	struct UTexture2D* LoadItemIcon(struct UObject* WorldContextObject, struct FName ItemId); // Function Hardwired.HWMiscBPL.LoadItemIcon // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x10416d0
	struct UHWGameData* LoadGameDataInEditor(); // Function Hardwired.HWMiscBPL.LoadGameDataInEditor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x10416a0
	struct USkeletalMesh* LoadBodypartMesh(struct UObject* WorldContextObject, struct FString Folder, struct FString Mesh); // Function Hardwired.HWMiscBPL.LoadBodypartMesh // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1041560
	void LeaveMatchmaking(struct UObject* WorldContextObject); // Function Hardwired.HWMiscBPL.LeaveMatchmaking // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x10414e0
	bool LaunchEACInstaller(); // Function Hardwired.HWMiscBPL.LaunchEACInstaller // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x10414b0
	void KickTeamMember(struct UObject* WorldContextObject, struct FString PlayerId); // Function Hardwired.HWMiscBPL.KickTeamMember // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x10413e0
	enum class EHWActionType ItemSlotToActionType(int32_t Slot); // Function Hardwired.HWMiscBPL.ItemSlotToActionType // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1041350
	bool IsValidLoadout(struct FHWLoadoutData Loadout); // Function Hardwired.HWMiscBPL.IsValidLoadout // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1041260
	bool IsValidEmailAddress(struct FString Email); // Function Hardwired.HWMiscBPL.IsValidEmailAddress // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x10411c0
	bool IsTeammate(struct UObject* WorldContextObject, struct FString PlayerId); // Function Hardwired.HWMiscBPL.IsTeammate // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x10410e0
	bool IsRunningInPreviewWorld(struct UObject* WorldContextObject); // Function Hardwired.HWMiscBPL.IsRunningInPreviewWorld // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1041050
	bool IsRunningInPIE(struct UObject* WorldContextObject); // Function Hardwired.HWMiscBPL.IsRunningInPIE // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1040fc0
	bool IsMissionReward(struct UObject* WorldContextObject, struct FHWReward Reward); // Function Hardwired.HWMiscBPL.IsMissionReward // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1040eb0
	bool IsLocallyControlledOrSpectatorPure(struct UObject* WorldContextObject); // Function Hardwired.HWMiscBPL.IsLocallyControlledOrSpectatorPure // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1040e20
	void IsLocallyControlledOrSpectator(struct UObject* WorldContextObject, enum class EHWLocallyControlledBranches Branches); // Function Hardwired.HWMiscBPL.IsLocallyControlledOrSpectator // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1040d50
	bool IsGamePad(); // Function Hardwired.HWMiscBPL.IsGamePad // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1040d20
	bool IsEACClientAvailable(); // Function Hardwired.HWMiscBPL.IsEACClientAvailable // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1040cf0
	bool IsDLSSSupported(); // Function Hardwired.HWMiscBPL.IsDLSSSupported // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1040cc0
	bool IsDebugMenuEnabled(); // Function Hardwired.HWMiscBPL.IsDebugMenuEnabled // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xc04480
	bool IsCosmeticArmorType(enum class EHWArmorType Type); // Function Hardwired.HWMiscBPL.IsCosmeticArmorType // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1040c40
	bool IsClientEACAuthenticated(struct AController* Controller); // Function Hardwired.HWMiscBPL.IsClientEACAuthenticated // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1040bb0
	bool IsBackendPlayerIdValid(struct FString BackendPlayerId); // Function Hardwired.HWMiscBPL.IsBackendPlayerIdValid // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1040b10
	bool InTeam(struct UObject* WorldContextObject); // Function Hardwired.HWMiscBPL.InTeam // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1040a80
	float GetWeaponWeight(struct FHWWeaponParts WeaponData); // Function Hardwired.HWMiscBPL.GetWeaponWeight // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x10408a0
	struct FString GetVersionInfoString(enum class EHWVersionInfoField Field); // Function Hardwired.HWMiscBPL.GetVersionInfoString // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x10407d0
	struct FString GetUniqueNetId(struct APlayerState* PS); // Function Hardwired.HWMiscBPL.GetUniqueNetId // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1040700
	struct FString GetUniqueDeviceIdentifier(); // Function Hardwired.HWMiscBPL.GetUniqueDeviceIdentifier // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1040680
	struct FText GetTextForInputKey(struct UObject* WorldContextObject, struct FInputActionKeyMapping KeyMapping); // Function Hardwired.HWMiscBPL.GetTextForInputKey // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1040480
	int32_t GetTeamForSessionId(struct UObject* WorldContextObject, struct FString SessionId); // Function Hardwired.HWMiscBPL.GetTeamForSessionId // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x10403a0
	void GetStreamingLevelNames(struct UObject* Context, struct TArray<struct FName> OutNames); // Function Hardwired.HWMiscBPL.GetStreamingLevelNames // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x10402c0
	struct FString GetSessionIdForController(struct UObject* WorldContextObject, struct AController* Controller); // Function Hardwired.HWMiscBPL.GetSessionIdForController // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x10401b0
	struct FString GetSessionIdForCharacter(struct UObject* WorldContextObject, struct ACharacter* Character); // Function Hardwired.HWMiscBPL.GetSessionIdForCharacter // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x10400a0
	struct UHWSessionData* GetSessionData(struct UObject* WorldContextObject); // Function Hardwired.HWMiscBPL.GetSessionData // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1040010
	struct TArray<struct FIntPoint> GetResolutions(); // Function Hardwired.HWMiscBPL.GetResolutions // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x103ff90
	struct AHWPlayerState* GetPlayerStateForSessionId(struct UObject* WorldContextObject, struct FString SessionId); // Function Hardwired.HWMiscBPL.GetPlayerStateForSessionId // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x103feb0
	struct FString GetPlayerId(struct UObject* WorldContextObject); // Function Hardwired.HWMiscBPL.GetPlayerId // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x103fde0
	struct FString GetPlayerDebugInfo(struct AHWPlayerState* PS); // Function Hardwired.HWMiscBPL.GetPlayerDebugInfo // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x103fd10
	int32_t GetPlayerCurrentItemCount(struct AHWCharacter* Player, enum class EHWItemUsageType ItemType); // Function Hardwired.HWMiscBPL.GetPlayerCurrentItemCount // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x103fc40
	float GetPingAssistDuration(); // Function Hardwired.HWMiscBPL.GetPingAssistDuration // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x103fc10
	struct FString GetParams(); // Function Hardwired.HWMiscBPL.GetParams // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x103fb90
	struct UHWOnlineSystem* GetOnlineSystem(struct UObject* WorldContextObject); // Function Hardwired.HWMiscBPL.GetOnlineSystem // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x103fb00
	bool GetMyTeamPlayers(struct UObject* WorldContextObject, struct TArray<struct FHWTeamPlayer> TeamPlayers, struct TArray<struct FHWPlayerPublicProfile> PublicProfiles); // Function Hardwired.HWMiscBPL.GetMyTeamPlayers // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x103f8d0
	struct TArray<struct FString> GetMyTeamPlayerIds(struct UObject* WorldContextObject); // Function Hardwired.HWMiscBPL.GetMyTeamPlayerIds // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x103f7b0
	int32_t GetMovementSpeedTierBasedOnInventoryWeight(float LoadoutWeight); // Function Hardwired.HWMiscBPL.GetMovementSpeedTierBasedOnInventoryWeight // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x103f730
	float GetMovementSpeedBasedOnInventoryWeight(float LoadoutWeight); // Function Hardwired.HWMiscBPL.GetMovementSpeedBasedOnInventoryWeight // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x103f6a0
	int32_t GetMissionUnlockLevel(struct UObject* WorldContextObject, enum class EHWFaction Faction, enum class EHWRarity Rarity); // Function Hardwired.HWMiscBPL.GetMissionUnlockLevel // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x103f5a0
	struct TArray<struct FHWReward> GetMissionRewards(struct UObject* WorldContextObject, struct FHWFetchRewardsResponse Response); // Function Hardwired.HWMiscBPL.GetMissionRewards // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x103f2d0
	struct FString GetMD5Hash(struct FString Data); // Function Hardwired.HWMiscBPL.GetMD5Hash // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x103f160
	enum class EHWMatchStatus GetMatchmakingStatus(struct UObject* WorldContextObject); // Function Hardwired.HWMiscBPL.GetMatchmakingStatus // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x103f240
	int32_t GetLocalTeamCharacterIndex(struct UObject* WorldContextObject, struct FString PlayerId); // Function Hardwired.HWMiscBPL.GetLocalTeamCharacterIndex // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x103f080
	struct FString GetLocalSessionId(struct UObject* WorldContextObject); // Function Hardwired.HWMiscBPL.GetLocalSessionId // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x103efb0
	struct UHWPlayerProfile* GetLocalPlayerProfile(struct UObject* WorldContextObject); // Function Hardwired.HWMiscBPL.GetLocalPlayerProfile // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x103ef20
	struct FString GetLocalIPAddress(); // Function Hardwired.HWMiscBPL.GetLocalIPAddress // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x103eea0
	struct ALevelScriptActor* GetLevelScriptActor(struct UObject* WorldContextObject); // Function Hardwired.HWMiscBPL.GetLevelScriptActor // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x103ee10
	struct FText GetKeyForInputAction(struct UObject* WorldContextObject, struct FName InputAction, bool bAddQuotes); // Function Hardwired.HWMiscBPL.GetKeyForInputAction // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x103ecb0
	int32_t GetItemSlotIndex(struct FHWLoadoutData Loadout, struct FName ItemId); // Function Hardwired.HWMiscBPL.GetItemSlotIndex // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x103eb60
	struct FString GetItemParameterString(struct FString Key, struct FHWItemData Data); // Function Hardwired.HWMiscBPL.GetItemParameterString // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x103e9a0
	int32_t GetItemParameterInt(struct FString Key, struct FHWItemData Data); // Function Hardwired.HWMiscBPL.GetItemParameterInt // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x103e800
	float GetItemParameterFloat(struct FString Key, struct FHWItemData Data); // Function Hardwired.HWMiscBPL.GetItemParameterFloat // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x103e660
	int32_t GetItemCountForArmor(enum class EHWItemUsageType ItemType, struct FHWLoadoutData Loadout, struct FName ArmorId, enum class EHWArmorType ArmorType); // Function Hardwired.HWMiscBPL.GetItemCountForArmor // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x103e480
	int32_t GetItemCount(struct FName ItemId, enum class EHWItemUsageType ItemType, struct FHWLoadoutData Loadout); // Function Hardwired.HWMiscBPL.GetItemCount // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x103e2f0
	int32_t GetItemCategorySlotIndex(struct FHWLoadoutData Loadout, struct FString ItemCategory); // Function Hardwired.HWMiscBPL.GetItemCategorySlotIndex // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x103e150
	float GetItemCapacity(struct FHWLoadoutData Loadout, enum class EHWItemUsageType Type); // Function Hardwired.HWMiscBPL.GetItemCapacity // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x103e010
	float GetInventoryWeightForLoadout(struct FHWLoadoutData Loadout, struct UHWPlayerProfile* PlayerProfile); // Function Hardwired.HWMiscBPL.GetInventoryWeightForLoadout // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x103dec0
	struct UHWImageService* GetImageService(struct UObject* WorldContextObject); // Function Hardwired.HWMiscBPL.GetImageService // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x103de30
	enum class EHWIKType GetIKType(); // Function Hardwired.HWMiscBPL.GetIKType // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x103de00
	struct UHWGameObjectsComponent* GetHWGameObjects(enum class EHWObjectFound Result, struct UObject* Context); // Function Hardwired.HWMiscBPL.GetHWGameObjects // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x103db10
	struct UHWGameInstance* GetHWGameInstance(struct UObject* WorldContextObject); // Function Hardwired.HWMiscBPL.GetHWGameInstance // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x103da80
	struct FString GetHostByName(struct FString Hostname); // Function Hardwired.HWMiscBPL.GetHostByName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x103dcd0
	void GetHiddenComponents(struct USceneCaptureComponent* SceneCapture, struct TArray<struct UPrimitiveComponent*> OutArray); // Function Hardwired.HWMiscBPL.GetHiddenComponents // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x103dbf0
	struct FString GetGPUBrandName(); // Function Hardwired.HWMiscBPL.GetGPUBrandName // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x103d860
	struct UHWGameData* GetGlobalGamedata(struct UObject* WorldContextObject); // Function Hardwired.HWMiscBPL.GetGlobalGamedata // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x103d9f0
	struct FText GetGameVersionFromSettings(); // Function Hardwired.HWMiscBPL.GetGameVersionFromSettings // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x103d960
	struct FString GetGameRegistryKey(); // Function Hardwired.HWMiscBPL.GetGameRegistryKey // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x103d8e0
	struct FString GetFormattedTime(struct UObject* WorldContextObject, int32_t TotalSeconds); // Function Hardwired.HWMiscBPL.GetFormattedTime // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x103d750
	struct FString GetFormattedDateTime(struct UObject* WorldContextObject, struct FDateTime DateTime); // Function Hardwired.HWMiscBPL.GetFormattedDateTime // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x103d640
	float GetExpirationDurationInSeconds(struct UObject* WorldContextObject, struct FString ExpirationTime); // Function Hardwired.HWMiscBPL.GetExpirationDurationInSeconds // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x103d560
	struct FString GetExpirationDuration(struct UObject* WorldContextObject, struct FString ExpirationTime); // Function Hardwired.HWMiscBPL.GetExpirationDuration // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x103d440
	struct FText GetErrorMessage(enum class EHWErrorMessage Error); // Function Hardwired.HWMiscBPL.GetErrorMessage // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x103d360
	bool GetEngineConfigInt(struct FString Section, struct FString Key, int32_t Result); // Function Hardwired.HWMiscBPL.GetEngineConfigInt // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x103d1a0
	int32_t GetDayOfWeek(struct UObject* WorldContextObject, struct FDateTime DateTime); // Function Hardwired.HWMiscBPL.GetDayOfWeek // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x103d0d0
	enum class EHWGamepadType GetCurrentGamepadType(); // Function Hardwired.HWMiscBPL.GetCurrentGamepadType // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x103d0a0
	struct FName GetCosmeticPartInLoadout(struct FHWLoadoutData Loadout, enum class EHWArmorType ArmorType); // Function Hardwired.HWMiscBPL.GetCosmeticPartInLoadout // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x103cf50
	enum class EHWBuildType GetBuildType(); // Function Hardwired.HWMiscBPL.GetBuildType // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x103cf20
	float GetBoundsScale(struct UPrimitiveComponent* Primitive); // Function Hardwired.HWMiscBPL.GetBoundsScale // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x103ce90
	struct FString GetBackendURL(struct UObject* WorldContextObject); // Function Hardwired.HWMiscBPL.GetBackendURL // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x103cdc0
	struct UHWBackendService* GetBackendService(struct UObject* WorldContextObject); // Function Hardwired.HWMiscBPL.GetBackendService // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x103cd30
	void GetArmorItemCapacity(struct FHWLoadoutData Loadout, struct FHWArmorData Armor, enum class EHWItemUsageType ItemType, float ItemCapacity, int32_t ItemCount); // Function Hardwired.HWMiscBPL.GetArmorItemCapacity // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x103c870
	struct FString GetActorDebugString(struct AActor* Actor); // Function Hardwired.HWMiscBPL.GetActorDebugString // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x103c7a0
	struct FString FormatDuration(struct FTimespan Time, struct FString NegativeLabel); // Function Hardwired.HWMiscBPL.FormatDuration // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x103c670
	void FixViewportForWeaponScreenshot(struct AHWWeapon* Weapon, struct AActor* CaptureCam, float ZoomLevel, struct FString What); // Function Hardwired.HWMiscBPL.FixViewportForWeaponScreenshot // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x103c510
	void FixViewportForScreenshot(struct UMeshComponent* MeshComp, struct AActor* CaptureCam, float ZoomLevel, struct FString What); // Function Hardwired.HWMiscBPL.FixViewportForScreenshot // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x103c3b0
	void FinishLoadingBeforeScreenshot(); // Function Hardwired.HWMiscBPL.FinishLoadingBeforeScreenshot // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x103c390
	bool FindPathAsync(struct APawn* Navigator, struct FVector TargetLocation, struct TArray<struct FVector> Path); // Function Hardwired.HWMiscBPL.FindPathAsync // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x103c250
	struct AActor* FindActorOfClass(enum class EHWObjectFound Result, struct UObject* Context, struct AActor* Class); // Function Hardwired.HWMiscBPL.FindActorOfClass // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x103c130
	struct TArray<struct FHWItemData> FetchUsableItemsInInventory(struct UObject* WorldContextObject, enum class EHWItemUsageType UsageType); // Function Hardwired.HWMiscBPL.FetchUsableItemsInInventory // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x103bfe0
	void FetchTeam(struct UObject* WorldContextObject); // Function Hardwired.HWMiscBPL.FetchTeam // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x103bf60
	struct TArray<struct FHWItemData> FetchItemsInInventoryByCategory(struct UObject* WorldContextObject, struct FString Category); // Function Hardwired.HWMiscBPL.FetchItemsInInventoryByCategory // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x103bdc0
	void FetchFriends(struct UObject* WorldContextObject); // Function Hardwired.HWMiscBPL.FetchFriends // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x103bd40
	struct TArray<struct FHWArmorFeatureData> FetchArmorFeaturesInInventory(struct UObject* WorldContextObject); // Function Hardwired.HWMiscBPL.FetchArmorFeaturesInInventory // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x103bbc0
	struct TArray<struct FHWArmorData> FetchArmorCustomizationInInventory(struct UObject* WorldContextObject, enum class EHWArmorType ArmorType); // Function Hardwired.HWMiscBPL.FetchArmorCustomizationInInventory // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x103b970
	void FetchAndShowRewards(struct UObject* WorldContextObject, struct FDelegate ErrorHandler, struct FDelegate RewardsCollected, struct FText RewardPopupTitle, struct FText RewardPopupDescription, struct FText RewardsCollectButtonText, struct UUserWidget* Widget); // Function Hardwired.HWMiscBPL.FetchAndShowRewards // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x103b600
	void EnterMatchmaking(struct UObject* WorldContextObject); // Function Hardwired.HWMiscBPL.EnterMatchmaking // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x103b580
	void EndInputIdlePeriod(); // Function Hardwired.HWMiscBPL.EndInputIdlePeriod // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x103b560
	void DrawDebugSweptSphere(struct UWorld* InWorld, struct FVector Start, struct FVector End, float Radius, struct FColor Color, bool bPersistentLines, float LifeTime, char DepthPriority); // Function Hardwired.HWMiscBPL.DrawDebugSweptSphere // (Final|Native|Static|Public|HasOutParms|HasDefaults) // @ game+0x103b2e0
	struct AHWWeaponPart* DebugSpawnWeaponPart(struct UObject* WorldContextObject, struct FString PartId); // Function Hardwired.HWMiscBPL.DebugSpawnWeaponPart // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x103b200
	struct AHWWeapon* DebugSpawnWeapon(struct UObject* WorldContextObject, struct FHWWeaponParts WeaponParts, struct UObject* WeaponBaseClass, struct FString Error, struct AActor* Owner); // Function Hardwired.HWMiscBPL.DebugSpawnWeapon // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x103aec0
	struct FVector2D ConvertWorldToScreenNonSquare(struct FVector WorldPos, struct FTransform CameraTransform, float CameraFOVH, float CameraFOVV); // Function Hardwired.HWMiscBPL.ConvertWorldToScreenNonSquare // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x103acf0
	struct FVector2D ConvertWorldToScreen(struct FVector WorldPos, struct FTransform CameraTransform, float CameraFOV); // Function Hardwired.HWMiscBPL.ConvertWorldToScreen // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x103ab60
	struct FDateTime ConvertUnixTimestampToDatetime(struct UObject* WorldContextObject, int32_t Timestamp); // Function Hardwired.HWMiscBPL.ConvertUnixTimestampToDatetime // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x103aa90
	struct FString ConvertToStringTableKey(struct FString Str); // Function Hardwired.HWMiscBPL.ConvertToStringTableKey // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x103a9b0
	struct FString ConvertToRomanNumeral(int32_t Value); // Function Hardwired.HWMiscBPL.ConvertToRomanNumeral // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x103a8e0
	struct FString ConvertDebugNameToBackendId(struct FString ID); // Function Hardwired.HWMiscBPL.ConvertDebugNameToBackendId // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x103a710
	int32_t CompareVersionNumbers(struct FString A, struct FString B); // Function Hardwired.HWMiscBPL.CompareVersionNumbers // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x103a620
	bool ComparePublicProfiles(struct FHWPlayerPublicProfile A, struct FHWPlayerPublicProfile B); // Function Hardwired.HWMiscBPL.ComparePublicProfiles // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x103a360
	bool CanVoiceOnline(struct UObject* WorldContextObject); // Function Hardwired.HWMiscBPL.CanVoiceOnline // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x103a2b0
	bool CanPlayOnline(struct UObject* WorldContextObject); // Function Hardwired.HWMiscBPL.CanPlayOnline // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x103a220
	bool CanChatOnline(struct UObject* WorldContextObject); // Function Hardwired.HWMiscBPL.CanChatOnline // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x103a190
	struct FBoxSphereBounds CalcSkelmeshBounds(struct USkeletalMeshComponent* SkelMesh, struct FTransform LocalToWorld); // Function Hardwired.HWMiscBPL.CalcSkelmeshBounds // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x103a010
	struct FBoxSphereBounds CalcLocalBounds(struct USkeletalMeshComponent* SkelMesh); // Function Hardwired.HWMiscBPL.CalcLocalBounds // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x1039f60
	bool BoxOverlapComponentsWithRotation(struct UObject* WorldContext, struct FVector BoxPos, struct FRotator BoxRot, struct FVector BoxExtent, struct TArray<enum class EObjectTypeQuery> Filter, struct UObject* ClassFilter, struct TArray<struct AActor*> ActorsToIgnore, struct TArray<struct UPrimitiveComponent*> OutComponents); // Function Hardwired.HWMiscBPL.BoxOverlapComponentsWithRotation // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1039c80
	void BeginInputIdlePeriod(int32_t IdleTimeInSeconds); // Function Hardwired.HWMiscBPL.BeginInputIdlePeriod // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1039c00
	void AcceptTeamInvite(struct UObject* WorldContextObject, struct FString TeamId); // Function Hardwired.HWMiscBPL.AcceptTeamInvite // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1039aa0
};

// Class Hardwired.HWMuzzleFlash
// Size: 0x2e8 (Inherited: 0x220)
struct AHWMuzzleFlash : AActor {
	struct FHWWeaponPartData ReceiverData; // 0x220(0xc8)

	void Initialize(struct FHWWeaponPartData PartData, struct FHWWeaponAttributes Attributes, bool IsFirstPerson); // Function Hardwired.HWMuzzleFlash.Initialize // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void Activate(); // Function Hardwired.HWMuzzleFlash.Activate // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
};

// Class Hardwired.HWNavigationDisplayComponent
// Size: 0x120 (Inherited: 0xb0)
struct UHWNavigationDisplayComponent : UActorComponent {
	float NavigationPointHeightOffset; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct FMulticastInlineDelegate OnPathUpdated; // 0xb8(0x10)
	struct AHWNavigationPoint* NavigationPointClass; // 0xc8(0x08)
	float PathFindInterval; // 0xd0(0x04)
	char pad_D4[0x4c]; // 0xd4(0x4c)

	void StopNavigation(); // Function Hardwired.HWNavigationDisplayComponent.StopNavigation // (Final|Native|Public|BlueprintCallable) // @ game+0x1049860
	void StartNavigationToTargetActor(struct AActor* InTargetActor); // Function Hardwired.HWNavigationDisplayComponent.StartNavigationToTargetActor // (Final|Native|Public|BlueprintCallable) // @ game+0x10497b0
	void StartNavigationToTarget(struct FVector InTarget); // Function Hardwired.HWNavigationDisplayComponent.StartNavigationToTarget // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1049720
	void OnNavigationUpdated__DelegateSignature(bool PathFound, struct TArray<struct AHWNavigationPoint*> Path); // DelegateFunction Hardwired.HWNavigationDisplayComponent.OnNavigationUpdated__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x13c4ca0
	void ClientStopNavigation(); // Function Hardwired.HWNavigationDisplayComponent.ClientStopNavigation // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x1047e40
	void ClientPathUpdated(bool PathFound, struct TArray<struct FVector> Path); // Function Hardwired.HWNavigationDisplayComponent.ClientPathUpdated // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x1047cb0
};

// Class Hardwired.HWNavigationPoint
// Size: 0x240 (Inherited: 0x220)
struct AHWNavigationPoint : AActor {
	bool Active; // 0x220(0x01)
	char pad_221[0x7]; // 0x221(0x07)
	struct AHWNavigationPoint* PreviousPoint; // 0x228(0x08)
	struct AHWNavigationPoint* NextPoint; // 0x230(0x08)
	int32_t SequenceNumber; // 0x238(0x04)
	bool IsLast; // 0x23c(0x01)
	char pad_23D[0x3]; // 0x23d(0x03)

	void NextPointUpdated(); // Function Hardwired.HWNavigationPoint.NextPointUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void Activated(bool IsActive); // Function Hardwired.HWNavigationPoint.Activated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
};

// Class Hardwired.HWOnlineSystem
// Size: 0xe0 (Inherited: 0x28)
struct UHWOnlineSystem : UObject {
	char pad_28[0x14]; // 0x28(0x14)
	int32_t RefreshFriendListInterval; // 0x3c(0x04)
	struct TArray<struct FHWOnlineFriend> Friends; // 0x40(0x10)
	char pad_50[0x8]; // 0x50(0x08)
	struct TMap<struct FString, struct FString> BlockedPlatformPlayers; // 0x58(0x50)
	char pad_A8[0x18]; // 0xa8(0x18)
	struct FMulticastInlineDelegate OnPlatformReadyDelegate; // 0xc0(0x10)
	struct FMulticastInlineDelegate OnFamilyRestrictionsDelegate; // 0xd0(0x10)

	void StopPlatformFriendPolling(); // Function Hardwired.HWOnlineSystem.StopPlatformFriendPolling // (Final|Native|Public|BlueprintCallable) // @ game+0x1049880
	void StartPlatformFriendPolling(); // Function Hardwired.HWOnlineSystem.StartPlatformFriendPolling // (Final|Native|Public|BlueprintCallable) // @ game+0x1049840
	void ShowProfileOverlay(struct FString PlatformId); // Function Hardwired.HWOnlineSystem.ShowProfileOverlay // (Final|Native|Public|BlueprintCallable) // @ game+0x1049460
	void ShowFamilyRestrictionOverlay(); // Function Hardwired.HWOnlineSystem.ShowFamilyRestrictionOverlay // (Final|Native|Public|BlueprintCallable) // @ game+0x9ad4e0
	void OnPlatformReadyDelegate__DelegateSignature(); // DelegateFunction Hardwired.HWOnlineSystem.OnPlatformReadyDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x13c4ca0
	void OnFamilyRestrictionsDelegate__DelegateSignature(); // DelegateFunction Hardwired.HWOnlineSystem.OnFamilyRestrictionsDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x13c4ca0
	bool IsPlatformReady(); // Function Hardwired.HWOnlineSystem.IsPlatformReady // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1048670
	bool IsFamilyRestrictionsReady(); // Function Hardwired.HWOnlineSystem.IsFamilyRestrictionsReady // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1048670
	struct FString GetPlatformFriendDisplayName(struct FString PlayerPlatformId); // Function Hardwired.HWOnlineSystem.GetPlatformFriendDisplayName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1048460
	struct TArray<struct FHWOnlineFriend> GetFriends(); // Function Hardwired.HWOnlineSystem.GetFriends // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1047fe0
	bool CanVoiceOnline(); // Function Hardwired.HWOnlineSystem.CanVoiceOnline // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1047c80
	bool CanPlayOnline(); // Function Hardwired.HWOnlineSystem.CanPlayOnline // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1047c50
	bool CanChatOnline(); // Function Hardwired.HWOnlineSystem.CanChatOnline // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1047b80
};

// Class Hardwired.HWPaymentPlatformBase
// Size: 0x38 (Inherited: 0x28)
struct UHWPaymentPlatformBase : UObject {
	struct FDelegate OnPaymentCompleted; // 0x28(0x10)
};

// Class Hardwired.HWPaymentPlatformStadia
// Size: 0x58 (Inherited: 0x38)
struct UHWPaymentPlatformStadia : UHWPaymentPlatformBase {
	char pad_38[0x20]; // 0x38(0x20)
};

// Class Hardwired.HWPaymentPlatformSteam
// Size: 0x78 (Inherited: 0x38)
struct UHWPaymentPlatformSteam : UHWPaymentPlatformBase {
	char pad_38[0x40]; // 0x38(0x40)
};

// Class Hardwired.HWPaymentPlatformTest
// Size: 0x48 (Inherited: 0x38)
struct UHWPaymentPlatformTest : UHWPaymentPlatformBase {
	char pad_38[0x10]; // 0x38(0x10)
};

// Class Hardwired.HWPerformanceCapture
// Size: 0xb0 (Inherited: 0x28)
struct UHWPerformanceCapture : UObject {
	char pad_28[0x88]; // 0x28(0x88)
};

// Class Hardwired.HWPhysicalMaterial
// Size: 0xf8 (Inherited: 0x80)
struct UHWPhysicalMaterial : UPhysicalMaterial {
	enum class EHWPhysicalMaterialAudioType AudioType; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
	struct TMap<enum class EHWPhysicalMaterialImpactSoundType, struct UAkAudioEvent*> ImpactSounds; // 0x88(0x50)
	struct FName BulletImpactEffectId; // 0xd8(0x08)
	struct UMaterialInterface* DecalMaterial; // 0xe0(0x08)
	struct FVector DecalSize; // 0xe8(0x0c)
	bool AllowSticking; // 0xf4(0x01)
	char pad_F5[0x3]; // 0xf5(0x03)
};

// Class Hardwired.HWPickup
// Size: 0x248 (Inherited: 0x220)
struct AHWPickup : AActor {
	struct UStaticMeshComponent* MeshComp; // 0x220(0x08)
	struct UBoxComponent* CollisionComp; // 0x228(0x08)
	enum class EHWPickupMode PickupMode; // 0x230(0x01)
	char pad_231[0x3]; // 0x231(0x03)
	struct FName Name; // 0x234(0x08)
	int32_t PickupCount; // 0x23c(0x04)
	bool bAddToInventory; // 0x240(0x01)
	char pad_241[0x7]; // 0x241(0x07)

	void OnPickupActivated(struct AActor* Actor); // Function Hardwired.HWPickup.OnPickupActivated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnBeginOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function Hardwired.HWPickup.OnBeginOverlap // (Final|Native|Public|HasOutParms) // @ game+0x1048920
	bool CanPickup(struct AHWCharacter* Character); // Function Hardwired.HWPickup.CanPickup // (Native|Event|Public|BlueprintEvent|Const) // @ game+0x1047bb0
};

// Class Hardwired.HWPlaceable
// Size: 0x2d0 (Inherited: 0x220)
struct AHWPlaceable : AActor {
	char pad_220[0xa0]; // 0x220(0xa0)
	struct AHWItemBase* ItemBaseDbg; // 0x2c0(0x08)
	struct UHWItemComponent* ItemComponent; // 0x2c8(0x08)

	struct AHWPlaceable* SpawnPlaceable(struct AHWPlaceable* Class, struct FTransform Transform, struct AHWItemBase* ItemBase, struct AHWCharacter* User); // Function Hardwired.HWPlaceable.SpawnPlaceable // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1049550
	void SetOwnerSessionId(struct FString ID); // Function Hardwired.HWPlaceable.SetOwnerSessionId // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x10493c0
	void SetItemAnalyticsId(int32_t ID); // Function Hardwired.HWPlaceable.SetItemAnalyticsId // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1049330
	void SendTriggerEvent(struct AHWCharacter* Character); // Function Hardwired.HWPlaceable.SendTriggerEvent // (Final|Native|Public|BlueprintCallable) // @ game+0x1048f80
	void SendJammedEvent(struct FString JammerSessionId); // Function Hardwired.HWPlaceable.SendJammedEvent // (Final|Native|Public|BlueprintCallable) // @ game+0x1048ee0
	void SendInteractEvent(struct AHWCharacter* Character); // Function Hardwired.HWPlaceable.SendInteractEvent // (Final|Native|Public|BlueprintCallable) // @ game+0x1048e50
	void SendImpactEvent(struct AHWCharacter* Victim); // Function Hardwired.HWPlaceable.SendImpactEvent // (Final|Native|Public|BlueprintCallable) // @ game+0x1048dc0
	void SendExplodeEvent(); // Function Hardwired.HWPlaceable.SendExplodeEvent // (Final|Native|Public|BlueprintCallable) // @ game+0x1048da0
	void PickUp(struct AHWCharacter* User); // Function Hardwired.HWPlaceable.PickUp // (Final|Native|Public|BlueprintCallable) // @ game+0x1048cf0
	bool IsReady(); // Function Hardwired.HWPlaceable.IsReady // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10486a0
	void HitBy(struct AActor* Shooter, bool Destroyed); // Function Hardwired.HWPlaceable.HitBy // (Final|Native|Public|BlueprintCallable) // @ game+0x10485a0
	void GetOwnerSessionId(struct FString SessionId); // Function Hardwired.HWPlaceable.GetOwnerSessionId // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x10483b0
	void GetItemId(struct FName ID); // Function Hardwired.HWPlaceable.GetItemId // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1048310
	struct AHWItemBase* GetItemBase(); // Function Hardwired.HWPlaceable.GetItemBase // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10482e0
	void GetItemAnalyticsId(int32_t OutAnalyticsId); // Function Hardwired.HWPlaceable.GetItemAnalyticsId // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1048240
};

// Class Hardwired.HWPlayerCharacter
// Size: 0x1190 (Inherited: 0xdf0)
struct AHWPlayerCharacter : AHWHumanCharacter {
	float CurrentWeaponFOV; // 0xde8(0x04)
	struct UHWPhysicalMaterial* FootstepSurfaceMaterial; // 0xdf0(0x08)
	struct UAkAudioEvent* StartBleedingSound; // 0xdf8(0x08)
	struct UAkAudioEvent* StopBleedingSound; // 0xe00(0x08)
	char pad_E0C[0xc]; // 0xe0c(0x0c)
	struct UHWAudioOcclusionComponent* AudioOcclusionComponent; // 0xe18(0x08)
	struct UAnimMontage* LadderClimbEntryAnim3P; // 0xe20(0x08)
	struct UAnimMontage* LadderClimbdownEntryAnim3P; // 0xe28(0x08)
	struct UAnimMontage* LadderClimbExitAnim3P; // 0xe30(0x08)
	struct UAnimMontage* LadderClimbdownExitAnim3P; // 0xe38(0x08)
	bool ClimbingLadder; // 0xe40(0x01)
	char pad_E41[0x7]; // 0xe41(0x07)
	struct AActor* Ladder; // 0xe48(0x08)
	struct FVector LadderBottomRail; // 0xe50(0x0c)
	struct FVector LadderTopRail; // 0xe5c(0x0c)
	char pad_E68[0x10]; // 0xe68(0x10)
	struct FTimerHandle TimerHandle_RemoveMontageAcceleration; // 0xe78(0x08)
	bool MontageAccelerationActive; // 0xe80(0x01)
	char pad_E81[0x3]; // 0xe81(0x03)
	float MontageAccelerationValue; // 0xe84(0x04)
	float MontageAccelerationDuration; // 0xe88(0x04)
	bool bRotateCamera; // 0xe8c(0x01)
	char pad_E8D[0x3]; // 0xe8d(0x03)
	struct FHWMontageData MontageData; // 0xe90(0x1c0)
	struct FHWRelocationData ActiveRelocation; // 0x1050(0xa8)
	bool bHandleMontageTick; // 0x10f8(0x01)
	char pad_10F9[0x3]; // 0x10f9(0x03)
	float LastTickTime; // 0x10fc(0x04)
	bool bMontageFinished; // 0x1100(0x01)
	char pad_1101[0x3]; // 0x1101(0x03)
	int32_t NumMontageMulticastsBeingLocallyPredicted; // 0x1104(0x04)
	struct UCapsuleComponent* SprintIntoDestructibleCollider; // 0x1108(0x08)
	struct TSet<struct AActor*> SprintIntoDestructibles; // 0x1110(0x50)
	struct FTimerHandle TimerHandle_SprintIntoDestroy; // 0x1160(0x08)
	struct AActor* SprintIntoDestructibleActor; // 0x1168(0x08)
	float SprintIntoDelayToDestruction; // 0x1170(0x04)
	float SprintIntoDisableDuration; // 0x1174(0x04)
	float SprintIntoMinRequiredSpeed; // 0x1178(0x04)
	bool DestroyWhileWalking; // 0x117c(0x01)
	char pad_117D[0x3]; // 0x117d(0x03)
	struct FTimerHandle TimerHandle_SprintIntoDisable; // 0x1180(0x08)
	char pad_1188[0x8]; // 0x1188(0x08)

	void TriggerAnim(struct FHWMontageData MontageStruct, struct FDelegate NewEndDelegate); // Function Hardwired.HWPlayerCharacter.TriggerAnim // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x10498a0
	void SprintIntoTimer(); // Function Hardwired.HWPlayerCharacter.SprintIntoTimer // (Final|Native|Public) // @ game+0x1049700
	void ServerTriggerAnim(struct FHWMontageData NewMontageInfo); // Function Hardwired.HWPlayerCharacter.ServerTriggerAnim // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x1049230
	void ServerStartClimbingLadder(struct AActor* NewLadder, struct FVector NewBottomRail, struct FVector NewTopRail); // Function Hardwired.HWPlayerCharacter.ServerStartClimbingLadder // (Net|NetReliableNative|Event|Public|NetServer|HasDefaults|BlueprintCallable|NetValidate) // @ game+0x10490b0
	void ServerMontageStop(); // Function Hardwired.HWPlayerCharacter.ServerMontageStop // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x1049060
	void ServerJumpOffLadder(); // Function Hardwired.HWPlayerCharacter.ServerJumpOffLadder // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x1049010
	void RemoveMontageAcceleration(); // Function Hardwired.HWPlayerCharacter.RemoveMontageAcceleration // (Final|Native|Public) // @ game+0x1048d80
	void OnSprintIntoDestructible(struct AActor* Actor); // Function Hardwired.HWPlayerCharacter.OnSprintIntoDestructible // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMontageFinished(struct UAnimMontage* Montage, bool bInterrupted); // Function Hardwired.HWPlayerCharacter.OnMontageFinished // (Final|Native|Public) // @ game+0x1048c20
	void OnLadderJumpOff(); // Function Hardwired.HWPlayerCharacter.OnLadderJumpOff // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnLadderFinished(bool ClimbedUp, struct AActor* LadderActor); // Function Hardwired.HWPlayerCharacter.OnLadderFinished // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnExitLadder(); // Function Hardwired.HWPlayerCharacter.OnExitLadder // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnEnterLadder(struct AActor* LadderActor); // Function Hardwired.HWPlayerCharacter.OnEnterLadder // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnCameraMontageFinished(struct UAnimMontage* Montage, bool bInterrupted); // Function Hardwired.HWPlayerCharacter.OnCameraMontageFinished // (Final|Native|Public) // @ game+0x1048b50
	void MulticastTriggerAnim(struct FHWMontageData NewMontageInfo); // Function Hardwired.HWPlayerCharacter.MulticastTriggerAnim // (Net|NetReliableNative|Event|NetMulticast|Public) // @ game+0x1048860
	void MulticastStartClimbingLadder(struct AActor* NewLadder, struct FVector NewBottomRail, struct FVector NewTopRail); // Function Hardwired.HWPlayerCharacter.MulticastStartClimbingLadder // (Net|NetReliableNative|Event|NetMulticast|Public|HasDefaults) // @ game+0x1048720
	void MulticastMontageStop(); // Function Hardwired.HWPlayerCharacter.MulticastMontageStop // (Net|NetReliableNative|Event|NetMulticast|Public) // @ game+0x1048700
	void MulticastExitLadder(); // Function Hardwired.HWPlayerCharacter.MulticastExitLadder // (Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable) // @ game+0x10486e0
	void MontageStop(); // Function Hardwired.HWPlayerCharacter.MontageStop // (Final|Native|Public|BlueprintCallable) // @ game+0x10486c0
	struct AHWPlayerState* GetHWPlayerState(); // Function Hardwired.HWPlayerCharacter.GetHWPlayerState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10481d0
	int32_t GetGrenadesInInventory(); // Function Hardwired.HWPlayerCharacter.GetGrenadesInInventory // (Final|Native|Public|BlueprintCallable) // @ game+0x10481a0
	void GetFootstepSurface(); // Function Hardwired.HWPlayerCharacter.GetFootstepSurface // (Final|Native|Public|BlueprintCallable) // @ game+0x1047fc0
	void ForceClientPositionToServer(struct FVector ClientLocation); // Function Hardwired.HWPlayerCharacter.ForceClientPositionToServer // (Net|NetReliableNative|Event|Public|NetServer|HasDefaults|NetValidate) // @ game+0x1047ef0
	void EnterLadderBPI(struct AActor* LadderActor); // Function Hardwired.HWPlayerCharacter.EnterLadderBPI // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void EnterLadder(struct AActor* LadderActor); // Function Hardwired.HWPlayerCharacter.EnterLadder // (Final|Native|Public|BlueprintCallable) // @ game+0x1047e60
	void ClientPostAudioEvent(struct UAkAudioEvent* Event); // Function Hardwired.HWPlayerCharacter.ClientPostAudioEvent // (Net|NetReliableNative|Event|Protected|NetClient|BlueprintCallable) // @ game+0x1047db0
};

// Class Hardwired.HWPlayerController
// Size: 0xe50 (Inherited: 0x5e0)
struct AHWPlayerController : AHWPlayerControllerBase {
	struct APawn* DebugCameraPawn; // 0x5e0(0x08)
	struct AHWCharacter* DebugCameraPrevChar; // 0x5e8(0x08)
	char pad_5F0[0x38]; // 0x5f0(0x38)
	bool bMapOpen; // 0x628(0x01)
	bool bMapViewed; // 0x629(0x01)
	char pad_62A[0xc6]; // 0x62a(0xc6)
	struct FMulticastInlineDelegate OnToggleTeamChat; // 0x6f0(0x10)
	char pad_700[0xd8]; // 0x700(0xd8)
	struct AHWPlayerCharacter* PrimaryPawn; // 0x7d8(0x08)
	struct AHWCharacter* CurrentPawn; // 0x7e0(0x08)
	struct UHWGameObjectsComponent* GameObjects; // 0x7e8(0x08)
	struct UMaterialParameterCollection* PlayerMPCAsset; // 0x7f0(0x08)
	char pad_7F8[0x10]; // 0x7f8(0x10)
	struct TArray<struct FHWPublicMatchReward> RoundResultsRewards; // 0x808(0x10)
	struct UUserWidget* CurrentHUD; // 0x818(0x08)
	struct UUserWidget* WidgetHUD; // 0x820(0x08)
	struct UUserWidget* RoundIntroHUD; // 0x828(0x08)
	char pad_830[0x5]; // 0x830(0x05)
	bool PreloadLoadoutAssets; // 0x835(0x01)
	char pad_836[0x2]; // 0x836(0x02)
	struct UHWPreloadHelper* PreloadHelper; // 0x838(0x08)
	struct TArray<struct TWeakObjectPtr<struct UUserWidget>> PlayerListenerWidgets; // 0x840(0x10)
	char pad_850[0x24]; // 0x850(0x24)
	int32_t CurrentObjectiveIndex; // 0x874(0x04)
	struct FText RoundHeader; // 0x878(0x18)
	struct FText FirstObjectiveText; // 0x890(0x18)
	struct FText SecondObjectiveText; // 0x8a8(0x18)
	struct FText ThirdObjectiveText; // 0x8c0(0x18)
	struct FHWObjectiveCardData FirstObjectiveCard; // 0x8d8(0x48)
	struct FHWObjectiveCardData SecondObjectiveCard; // 0x920(0x48)
	struct FHWObjectiveCardData ThirdObjectiveCard; // 0x968(0x48)
	char pad_9B0[0x8]; // 0x9b0(0x08)
	struct TArray<struct AActor*> MyPingMarkers; // 0x9b8(0x10)
	struct UHWCameraFeedProviderComponent* ControlledCamera; // 0x9c8(0x08)
	struct UHWCameraFeedProviderComponent* ViewedCamera; // 0x9d0(0x08)
	char pad_9D8[0x8]; // 0x9d8(0x08)
	struct UUserWidget* WidgetPauseMenu; // 0x9e0(0x08)
	struct UUserWidget* WidgetDebugMenu; // 0x9e8(0x08)
	char pad_9F0[0x8]; // 0x9f0(0x08)
	struct UUserWidget* PauseMenu; // 0x9f8(0x08)
	struct UUserWidget* DebugMenu; // 0xa00(0x08)
	struct UUserWidget* WidgetMatchmakingScreen; // 0xa08(0x08)
	struct UUserWidget* WidgetPrematchScreen; // 0xa10(0x08)
	struct UUserWidget* WidgetMatchIntroScreen; // 0xa18(0x08)
	struct UUserWidget* WidgetRoundOutroScreen; // 0xa20(0x08)
	struct UUserWidget* WidgetMapBriefingScreen; // 0xa28(0x08)
	struct UUserWidget* CurrentScreen; // 0xa30(0x08)
	float PingMarkerLifespan; // 0xa38(0x04)
	float DynamicPingDuration; // 0xa3c(0x04)
	float MaxAngleToDynamicPingTarget; // 0xa40(0x04)
	struct FHWPingAntiSpamConfig PingAntiSpamConfig; // 0xa44(0x10)
	char pad_A54[0x4]; // 0xa54(0x04)
	struct FMulticastInlineDelegate OnClientMarkerUpdated; // 0xa58(0x10)
	struct FMulticastInlineDelegate OnPingWheelState; // 0xa68(0x10)
	char pad_A78[0xd0]; // 0xa78(0xd0)
	struct FString MyKillersName; // 0xb48(0x10)
	struct FMulticastInlineDelegate OnSpectatedPlayerChanged; // 0xb58(0x10)
	struct AHWPlayerState* SpectatedPlayer; // 0xb68(0x08)
	struct FHWSpectatedCharacter SpectatedCharacter; // 0xb70(0x18)
	char pad_B88[0x20]; // 0xb88(0x20)
	struct TArray<struct FString> ReconnectingPlayers; // 0xba8(0x10)
	char pad_BB8[0x8]; // 0xbb8(0x08)
	struct TArray<enum class EHWRoundState> SpectateAllowedRoundStates; // 0xbc0(0x10)
	char pad_BD0[0x18]; // 0xbd0(0x18)
	struct TArray<struct FHWMetaMessageData> MetaMessageQueue; // 0xbe8(0x10)
	char pad_BF8[0x38]; // 0xbf8(0x38)
	struct FTimerHandle CombatCompanionResetTimerHandle; // 0xc30(0x08)
	struct FMulticastInlineDelegate OnCompanionCameraActive; // 0xc38(0x10)
	struct AHWDroneCharacter* CombatCompanion; // 0xc48(0x08)
	bool bCombatCompanionDead; // 0xc50(0x01)
	bool bCarryingCombatCompanion; // 0xc51(0x01)
	bool bControllingCombatCompanion; // 0xc52(0x01)
	bool CombatCompanionStatus; // 0xc53(0x01)
	char pad_C54[0x4]; // 0xc54(0x04)
	struct FHWCombatCompanionType CompanionType; // 0xc58(0x10)
	char pad_C68[0xc0]; // 0xc68(0xc0)
	struct FMulticastInlineDelegate OnDeveloperModeChanged; // 0xd28(0x10)
	struct FMulticastInlineDelegate OnHumanDamageDealt; // 0xd38(0x10)
	bool DeveloperMode; // 0xd48(0x01)
	char pad_D49[0x7]; // 0xd49(0x07)
	struct FMulticastInlineDelegate OnDummyToastMessage; // 0xd50(0x10)
	struct FMulticastInlineDelegate OnDummyMetaMessage; // 0xd60(0x10)
	char pad_D70[0x1]; // 0xd70(0x01)
	bool DebugCameraActive; // 0xd71(0x01)
	char pad_D72[0x6]; // 0xd72(0x06)
	struct TSet<enum class EHWActionType> HeldActions; // 0xd78(0x50)
	struct TArray<struct FHWDetectionUpdate> PendingDetectionUpdates; // 0xdc8(0x10)
	struct FVector DisconnectLocation; // 0xdd8(0x0c)
	bool bSkipEACCheck; // 0xde4(0x01)
	bool IsTutorial; // 0xde5(0x01)
	char pad_DE6[0x2]; // 0xde6(0x02)
	struct UHWAimAssistComponent* AimAssistComponent; // 0xde8(0x08)
	char pad_DF0[0x8]; // 0xdf0(0x08)
	struct TMap<struct FString, struct FString> MapWhoPlayedWith; // 0xdf8(0x50)
	char pad_E48[0x8]; // 0xe48(0x08)

	void WaitForGameStateWhenReconnecting(); // Function Hardwired.HWPlayerController.WaitForGameStateWhenReconnecting // (Final|Native|Public) // @ game+0x1056f70
	void UpdatePingMarker(struct FVector ImpactPoint, struct FVector ImpactNormal, struct AHWPlayerState* PS); // Function Hardwired.HWPlayerController.UpdatePingMarker // (Net|NetReliableNative|Event|Public|HasDefaults|NetClient) // @ game+0x1056e30
	void UpdateOracleVoice(); // Function Hardwired.HWPlayerController.UpdateOracleVoice // (Final|Native|Public) // @ game+0x1056e10
	bool UpdateCurrentWeapon(struct FHWWeaponParts WeaponParts, enum class EHWRarity WeaponRarity, struct FString Error); // Function Hardwired.HWPlayerController.UpdateCurrentWeapon // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1056b60
	void UnregisterWidgetInput(struct UWidget* Widget); // Function Hardwired.HWPlayerController.UnregisterWidgetInput // (Final|Native|Public|BlueprintCallable) // @ game+0x1056ad0
	bool TryPlayPingVoiceover(enum class EHWPingReason Reason); // Function Hardwired.HWPlayerController.TryPlayPingVoiceover // (Final|Native|Public|BlueprintCallable) // @ game+0x1056a40
	void ToggleMenu(); // Function Hardwired.HWPlayerController.ToggleMenu // (Final|Native|Public|BlueprintCallable) // @ game+0x1056a20
	void ToggleDebugMenu(); // Function Hardwired.HWPlayerController.ToggleDebugMenu // (Final|Native|Public|BlueprintCallable) // @ game+0x1056a00
	void ToggleAudioOcclusionLogTimes(); // Function Hardwired.HWPlayerController.ToggleAudioOcclusionLogTimes // (Final|Exec|Native|Private) // @ game+0x10569e0
	void ToggleAudioOcclusionDebugPaths(); // Function Hardwired.HWPlayerController.ToggleAudioOcclusionDebugPaths // (Final|Exec|Native|Private) // @ game+0x10569c0
	void ToggleAudioOcclusion(); // Function Hardwired.HWPlayerController.ToggleAudioOcclusion // (Final|Exec|Native|Private) // @ game+0x10569a0
	void ToggleAudioMuted(); // Function Hardwired.HWPlayerController.ToggleAudioMuted // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x1056980
	void TeleportOthersToMe(); // Function Hardwired.HWPlayerController.TeleportOthersToMe // (Final|Exec|Native|Protected) // @ game+0x9ad4e0
	void Teleport(struct FString Name); // Function Hardwired.HWPlayerController.Teleport // (Final|Exec|Native|Protected) // @ game+0x10568e0
	void StartRailMovement(struct FVector StartLocation, struct FRotator StartRotation, struct FVector EndLocation, struct FVector OutLocation, float Duration); // Function Hardwired.HWPlayerController.StartRailMovement // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1056700
	void SpectatePrev(); // Function Hardwired.HWPlayerController.SpectatePrev // (Final|Native|Public|BlueprintCallable) // @ game+0x10566e0
	void SpectateNext(); // Function Hardwired.HWPlayerController.SpectateNext // (Final|Native|Public|BlueprintCallable) // @ game+0x10566c0
	void SpawnDeathDrone(struct FName DroneId, struct AHWDroneSpawnPoint* Loc); // Function Hardwired.HWPlayerController.SpawnDeathDrone // (Native|Public|BlueprintCallable) // @ game+0x10565f0
	void ShowTextChat(); // Function Hardwired.HWPlayerController.ShowTextChat // (Final|Native|Public) // @ game+0x10565d0
	void ShowHUD(bool B); // Function Hardwired.HWPlayerController.ShowHUD // (Final|Exec|Native|Private) // @ game+0x1056560
	void SetTeamVoiceChannelName(struct FString Name); // Function Hardwired.HWPlayerController.SetTeamVoiceChannelName // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x10564c0
	void SetSpeedOverride(int32_t NewSpeed); // Function Hardwired.HWPlayerController.SetSpeedOverride // (Final|Exec|Native|Private) // @ game+0xfeb8c0
	void SetRoundIntroData(struct FHWRoundIntroData RoundIntroData); // Function Hardwired.HWPlayerController.SetRoundIntroData // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x10563c0
	void SetRecoilCompensation(int32_t Horizontal, int32_t Vertical, float Strength); // Function Hardwired.HWPlayerController.SetRecoilCompensation // (Final|Exec|Native|Private) // @ game+0x10562b0
	void SetPingMarker(enum class EHWPingReason Reason); // Function Hardwired.HWPlayerController.SetPingMarker // (Final|Native|Protected|BlueprintCallable) // @ game+0x1056230
	void SetObjectiveText(struct FText NewText, bool UseAnimation, bool PlaySound); // Function Hardwired.HWPlayerController.SetObjectiveText // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x10560d0
	void SetObjectiveData(struct FHWRoundObjectivesData ObjectiveData); // Function Hardwired.HWPlayerController.SetObjectiveData // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x1055fc0
	void SetNotificationText(struct FText NewText, struct FLinearColor UpperTextColor, bool UseAnimationUpper, struct FText NewNotificationTextLower, struct FLinearColor LowerTextColor, bool UseAnimationLower, float Duration); // Function Hardwired.HWPlayerController.SetNotificationText // (Net|NetReliableNative|Event|Public|HasDefaults|NetClient) // @ game+0x1055d10
	void SetMyInvulnerability(bool Value); // Function Hardwired.HWPlayerController.SetMyInvulnerability // (Final|Exec|Native|Protected) // @ game+0x1052ad0
	void SetMouseSensitivity(float Mult); // Function Hardwired.HWPlayerController.SetMouseSensitivity // (Final|Native|Public|BlueprintCallable) // @ game+0x1055c90
	void SetMouseBaseSensitivity(float Sensitivity); // Function Hardwired.HWPlayerController.SetMouseBaseSensitivity // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1055c10
	void SetMergedTeamVoiceChannelName(struct FString Name); // Function Hardwired.HWPlayerController.SetMergedTeamVoiceChannelName // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x1055b70
	void SetInfiniteItems(bool B); // Function Hardwired.HWPlayerController.SetInfiniteItems // (Final|Exec|Native|Public) // @ game+0x1052ad0
	void SetHUDVisibility(bool Visible); // Function Hardwired.HWPlayerController.SetHUDVisibility // (Final|Native|Public|BlueprintCallable) // @ game+0x1055ae0
	void SetCurrentScreen(struct UUserWidget* SourceWidget); // Function Hardwired.HWPlayerController.SetCurrentScreen // (Final|Native|Private|BlueprintCallable) // @ game+0x1055a50
	void SetCompanionCameraActive(bool Active); // Function Hardwired.HWPlayerController.SetCompanionCameraActive // (Final|Native|Public|BlueprintCallable) // @ game+0x10559c0
	void SetAudioMuted(bool Muted); // Function Hardwired.HWPlayerController.SetAudioMuted // (Final|Native|Public|BlueprintCallable) // @ game+0x1052ad0
	void ServerUpdateMyCameras(); // Function Hardwired.HWPlayerController.ServerUpdateMyCameras // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate) // @ game+0x10554f0
	void ServerToggleDebugCamera(); // Function Hardwired.HWPlayerController.ServerToggleDebugCamera // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x10554a0
	void ServerToggleCombatCompanion(); // Function Hardwired.HWPlayerController.ServerToggleCombatCompanion // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x1055450
	void ServerTeleportTo(struct FVector Location, struct FRotator Rotation); // Function Hardwired.HWPlayerController.ServerTeleportTo // (Net|NetReliableNative|Event|Protected|NetServer|HasDefaults|NetValidate) // @ game+0x1055310
	void ServerTeleportOthersToMe(); // Function Hardwired.HWPlayerController.ServerTeleportOthersToMe // (Net|NetReliableNative|Event|Protected|NetServer|BlueprintCallable|NetValidate) // @ game+0x10552c0
	void ServerTeleport(struct FString Name); // Function Hardwired.HWPlayerController.ServerTeleport // (Net|Native|Event|Protected|NetServer|BlueprintCallable) // @ game+0x1055220
	void ServerSync(int32_t S); // Function Hardwired.HWPlayerController.ServerSync // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x1055190
	void ServerStopViewingCamera(struct UHWCameraFeedProviderComponent* Target); // Function Hardwired.HWPlayerController.ServerStopViewingCamera // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate) // @ game+0x10550d0
	void ServerStartViewingCamera(struct UHWCameraFeedProviderComponent* Target); // Function Hardwired.HWPlayerController.ServerStartViewingCamera // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate) // @ game+0x1055010
	void ServerStartRailMovement(struct FVector StartLocation, struct FRotator StartRotation, struct FVector EndLocation, struct FVector OutLocation, float Duration); // Function Hardwired.HWPlayerController.ServerStartRailMovement // (Net|NetReliableNative|Event|Public|NetServer|HasDefaults|NetValidate) // @ game+0x1054db0
	void ServerSetSpeedOverride(int32_t NewSpeed); // Function Hardwired.HWPlayerController.ServerSetSpeedOverride // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0x1054cf0
	void ServerSetPlayerReady(bool Ready); // Function Hardwired.HWPlayerController.ServerSetPlayerReady // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate) // @ game+0x1054c30
	void ServerSetPingMarker(struct FHWPlayerPing Ping); // Function Hardwired.HWPlayerController.ServerSetPingMarker // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0x1054b10
	void ServerSetMyInvulnerability(bool Value); // Function Hardwired.HWPlayerController.ServerSetMyInvulnerability // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x1054a50
	void ServerSetInfiniteItems(bool B); // Function Hardwired.HWPlayerController.ServerSetInfiniteItems // (Net|Native|Event|Public|NetServer) // @ game+0x10549c0
	void ServerSetInfiniteAmmo(int32_t Mode); // Function Hardwired.HWPlayerController.ServerSetInfiniteAmmo // (Net|Native|Event|Public|NetServer) // @ game+0x1054930
	void ServerSetDeveloperMode(bool Value); // Function Hardwired.HWPlayerController.ServerSetDeveloperMode // (Net|NetReliableNative|Event|Protected|NetServer|BlueprintCallable|NetValidate) // @ game+0x1054870
	void ServerSendDiagMessage(struct FHWClientDiagMessage Message, struct FString Tag); // Function Hardwired.HWPlayerController.ServerSendDiagMessage // (Net|NetReliableNative|Event|Protected|NetServer|BlueprintCallable|NetValidate) // @ game+0x1054720
	void ServerSelectLoadout(struct FHWLoadoutData LoadoutData); // Function Hardwired.HWPlayerController.ServerSelectLoadout // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x1054620
	void ServerRotateCameraYaw(float Value); // Function Hardwired.HWPlayerController.ServerRotateCameraYaw // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x1054560
	void ServerRotateCameraPitch(float Value); // Function Hardwired.HWPlayerController.ServerRotateCameraPitch // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x10544a0
	void ServerRevivePawn(); // Function Hardwired.HWPlayerController.ServerRevivePawn // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x1054450
	void ServerReplaceLoadout(struct UHWPlayerProfile* Profile, struct FHWLoadoutData NewLoadout); // Function Hardwired.HWPlayerController.ServerReplaceLoadout // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0x10542d0
	void ServerRefillAmmo(int32_t Amount); // Function Hardwired.HWPlayerController.ServerRefillAmmo // (Net|Native|Event|Public|NetServer) // @ game+0x1054240
	void ServerRecordHitRegistration(bool Enabled); // Function Hardwired.HWPlayerController.ServerRecordHitRegistration // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x1054180
	void ServerReconnectingComplete(); // Function Hardwired.HWPlayerController.ServerReconnectingComplete // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x1054130
	void ServerPingDynamic(struct UHWDetectableComponent* TargetDetectable); // Function Hardwired.HWPlayerController.ServerPingDynamic // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0x1054070
	void ServerPauseRoundTimer(bool Pause); // Function Hardwired.HWPlayerController.ServerPauseRoundTimer // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0x1053fb0
	void ServerLogChatMessage(struct FString Msg); // Function Hardwired.HWPlayerController.ServerLogChatMessage // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x1053ef0
	void ServerKillEveryoneElse(); // Function Hardwired.HWPlayerController.ServerKillEveryoneElse // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x1053ea0
	void ServerInteractWithMarker(struct AHWMapMarker* Marker); // Function Hardwired.HWPlayerController.ServerInteractWithMarker // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0x1053de0
	void ServerHWRecordPerfData(bool Start); // Function Hardwired.HWPlayerController.ServerHWRecordPerfData // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x1053c60
	void ServerHitRegDiag(bool State); // Function Hardwired.HWPlayerController.ServerHitRegDiag // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x1053d20
	void ServerGiveInjury(float Value); // Function Hardwired.HWPlayerController.ServerGiveInjury // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x1053ba0
	void ServerGiveFullArmorFeatures(); // Function Hardwired.HWPlayerController.ServerGiveFullArmorFeatures // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x1053b50
	void ServerEndRun(); // Function Hardwired.HWPlayerController.ServerEndRun // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x1053b00
	void ServerEndRailMovement(bool snapToOutPosition); // Function Hardwired.HWPlayerController.ServerEndRailMovement // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x1053a40
	void ServerEndMelee(); // Function Hardwired.HWPlayerController.ServerEndMelee // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x10539f0
	void ServerEndFire(); // Function Hardwired.HWPlayerController.ServerEndFire // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x10539a0
	void ServerEndAim(); // Function Hardwired.HWPlayerController.ServerEndAim // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x1053950
	void ServerDie(); // Function Hardwired.HWPlayerController.ServerDie // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x1053900
	void ServerCrashServer(); // Function Hardwired.HWPlayerController.ServerCrashServer // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x10538b0
	void ServerChangeSpectateTarget(int32_t Delta); // Function Hardwired.HWPlayerController.ServerChangeSpectateTarget // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x10537f0
	void ServerBeginRun(); // Function Hardwired.HWPlayerController.ServerBeginRun // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x10537a0
	void ServerBeginMelee(); // Function Hardwired.HWPlayerController.ServerBeginMelee // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x1053750
	void ServerBeginFire(); // Function Hardwired.HWPlayerController.ServerBeginFire // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x1053700
	void ServerBeginDetectEnemies(); // Function Hardwired.HWPlayerController.ServerBeginDetectEnemies // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x10536b0
	void ServerBeginAim(); // Function Hardwired.HWPlayerController.ServerBeginAim // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x1053660
	void ServerAdvanceRoundState(); // Function Hardwired.HWPlayerController.ServerAdvanceRoundState // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x1053610
	void ServerAbortDetectEnemies(); // Function Hardwired.HWPlayerController.ServerAbortDetectEnemies // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x10535c0
	void Server_DebugSetItems(struct AHWHumanCharacter* Human, struct FName ArmorSetId, struct FName Item1, struct FName Item2, struct FName Item3); // Function Hardwired.HWPlayerController.Server_DebugSetItems // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x10557e0
	void Server_DebugSetASS(struct AHWHumanCharacter* Human, struct FName ArmorSetId, struct TArray<struct FName> Features); // Function Hardwired.HWPlayerController.Server_DebugSetASS // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x1055540
	void Server_DebugSetArmorSet(struct AHWHumanCharacter* Human, struct FName ArmorSetId, struct FName CharacterId); // Function Hardwired.HWPlayerController.Server_DebugSetArmorSet // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x10556a0
	void SendTeamChatMessage(struct FString Msg); // Function Hardwired.HWPlayerController.SendTeamChatMessage // (Final|Native|Public|BlueprintCallable) // @ game+0x1053520
	void SelectLoadout(struct FHWLoadoutData LoadoutData); // Function Hardwired.HWPlayerController.SelectLoadout // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1053430
	void ResetCombatCompanion(); // Function Hardwired.HWPlayerController.ResetCombatCompanion // (Final|Native|Public|BlueprintCallable) // @ game+0x1053410
	void ReplaceLoadout(struct FHWLoadoutData NewLoadout); // Function Hardwired.HWPlayerController.ReplaceLoadout // (Final|Native|Private|BlueprintCallable) // @ game+0x1053320
	void RemoveCompanionRender(); // Function Hardwired.HWPlayerController.RemoveCompanionRender // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void RegisterWidgetInput(struct UWidget* Widget, bool HasMusic, bool BlockGameInput); // Function Hardwired.HWPlayerController.RegisterWidgetInput // (Final|Native|Public|BlueprintCallable) // @ game+0x1053210
	void RegisterSpawnedDecal(struct UDecalComponent* Decal); // Function Hardwired.HWPlayerController.RegisterSpawnedDecal // (Final|Native|Public|BlueprintCallable) // @ game+0x1053180
	void RefreshListenerWidgets(); // Function Hardwired.HWPlayerController.RefreshListenerWidgets // (Final|Native|Private|BlueprintCallable) // @ game+0x1053160
	void ProcessNextMetaMessage(); // Function Hardwired.HWPlayerController.ProcessNextMetaMessage // (Final|Native|Public) // @ game+0x1053140
	void PickUpCombatCompanion(); // Function Hardwired.HWPlayerController.PickUpCombatCompanion // (Final|Native|Public|BlueprintCallable) // @ game+0x1053120
	void PauseRoundTimer(bool Pause); // Function Hardwired.HWPlayerController.PauseRoundTimer // (Final|Exec|Native|Private) // @ game+0x1052ad0
	void OpenMap(); // Function Hardwired.HWPlayerController.OpenMap // (Final|Native|Public|BlueprintCallable) // @ game+0x1053100
	void OnTeamDronePossessed(); // Function Hardwired.HWPlayerController.OnTeamDronePossessed // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x10530e0
	void OnTeamChatMessageReceived(struct FHWTextChatMessage Msg); // Function Hardwired.HWPlayerController.OnTeamChatMessageReceived // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnSpawnDeathdrone(); // Function Hardwired.HWPlayerController.OnSpawnDeathdrone // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnRoundStateSetClient(enum class EHWRoundState State); // Function Hardwired.HWPlayerController.OnRoundStateSetClient // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnRep_SpectatedCharacter(); // Function Hardwired.HWPlayerController.OnRep_SpectatedCharacter // (Final|Native|Private) // @ game+0x10530c0
	void OnRep_DeveloperMode(); // Function Hardwired.HWPlayerController.OnRep_DeveloperMode // (Final|Native|Protected) // @ game+0x9ad4e0
	void OnRep_DebugCameraActive(); // Function Hardwired.HWPlayerController.OnRep_DebugCameraActive // (Final|Native|Private) // @ game+0x9ad4e0
	void OnRep_CurrentPawn(); // Function Hardwired.HWPlayerController.OnRep_CurrentPawn // (Final|Native|Public) // @ game+0x10530a0
	void OnRep_CombatCompanionDestroyed(); // Function Hardwired.HWPlayerController.OnRep_CombatCompanionDestroyed // (Final|Native|Public) // @ game+0x1053080
	void OnRep_CombatCompanion(); // Function Hardwired.HWPlayerController.OnRep_CombatCompanion // (Final|Native|Public) // @ game+0x1053060
	void OnRep_CarryingCombatCompanion(); // Function Hardwired.HWPlayerController.OnRep_CarryingCombatCompanion // (Final|Native|Public) // @ game+0x1053040
	void OnPingMarkerActivated(struct AHWPlayerState* PS, struct FVector Pos, struct FVector Normal); // Function Hardwired.HWPlayerController.OnPingMarkerActivated // (Event|Public|HasDefaults|BlueprintEvent) // @ game+0x13c4ca0
	void OnObjectiveItemsUpdated(struct TArray<struct FNameAndCount> Inventory); // Function Hardwired.HWPlayerController.OnObjectiveItemsUpdated // (Final|Native|Public|HasOutParms) // @ game+0x1052f90
	void OnInputMappingChanged(struct APlayerController* Controller); // Function Hardwired.HWPlayerController.OnInputMappingChanged // (Final|Native|Public) // @ game+0x1052f00
	void OnGameplayEvent(struct FHWLevelRewardData Data, int32_t Amount); // Function Hardwired.HWPlayerController.OnGameplayEvent // (Final|Native|Public|HasOutParms) // @ game+0x1052e10
	void OnDroneUnjammed(); // Function Hardwired.HWPlayerController.OnDroneUnjammed // (Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable) // @ game+0x1052df0
	void OnDroneJammed(); // Function Hardwired.HWPlayerController.OnDroneJammed // (Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable) // @ game+0x1052dd0
	void OnDetected(struct AActor* DetectedActor, bool Detected, struct AActor* SourceActor, float Duration); // Function Hardwired.HWPlayerController.OnDetected // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnDeathdroneDestroyed(struct AActor* Killer, struct AActor* DamageDealer); // Function Hardwired.HWPlayerController.OnDeathdroneDestroyed // (Native|Public|BlueprintCallable) // @ game+0x1052d00
	void OnCameraControllerChanged(struct UHWCameraFeedProviderComponent* Camera); // Function Hardwired.HWPlayerController.OnCameraControllerChanged // (Final|Native|Public) // @ game+0x1052c70
	void KillEveryoneElse(); // Function Hardwired.HWPlayerController.KillEveryoneElse // (Final|Exec|Native|Protected) // @ game+0x9ad4e0
	bool IsTeamReallyDead(int32_t Team); // Function Hardwired.HWPlayerController.IsTeamReallyDead // (Final|Native|Public) // @ game+0x1052bd0
	bool IsMapOpen(); // Function Hardwired.HWPlayerController.IsMapOpen // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1052bb0
	bool IsAudioMuted(); // Function Hardwired.HWPlayerController.IsAudioMuted // (Final|Native|Public|BlueprintCallable) // @ game+0x1052b80
	void IntroVideoDone(); // Function Hardwired.HWPlayerController.IntroVideoDone // (Final|Native|Public|BlueprintCallable) // @ game+0x1052b60
	void HWRecordPerfData(bool Start); // Function Hardwired.HWPlayerController.HWRecordPerfData // (Final|Exec|Native|Protected) // @ game+0x1052ad0
	void HWRecordHitRegistration(bool Enabled); // Function Hardwired.HWPlayerController.HWRecordHitRegistration // (Final|Exec|Native|Protected) // @ game+0x1052ad0
	void HWOnHumanDamageDealt__DelegateSignature(struct AHWPlayerController* Controller, struct FHWDiagDamageDealt Value); // DelegateFunction Hardwired.HWPlayerController.HWOnHumanDamageDealt__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x13c4ca0
	void HWOnDeveloperModeChangedDel__DelegateSignature(struct AHWPlayerController* Controller, bool Value); // DelegateFunction Hardwired.HWPlayerController.HWOnDeveloperModeChangedDel__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x13c4ca0
	void Goto(struct FString BookMark); // Function Hardwired.HWPlayerController.Goto // (Final|Exec|Native|Protected) // @ game+0x1049460
	void GiveInjury(float Value); // Function Hardwired.HWPlayerController.GiveInjury // (Final|Exec|Native|Protected) // @ game+0x104f3f0
	void GetSpectatedPlayer(struct AHWCharacter* HWCharacter, struct FString Name); // Function Hardwired.HWPlayerController.GetSpectatedPlayer // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x10529c0
	struct FText GetRoundHeader(struct UObject* WorldContextObject); // Function Hardwired.HWPlayerController.GetRoundHeader // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x10528d0
	struct FText GetObjectiveText(struct UObject* WorldContextObject, int32_t Index); // Function Hardwired.HWPlayerController.GetObjectiveText // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x10527a0
	struct FHWObjectiveCardData GetObjectiveCard(struct UObject* WorldContextObject, int32_t Index); // Function Hardwired.HWPlayerController.GetObjectiveCard // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x10525d0
	struct AHWCharacter* GetLocalOrSpectatedCharacter(); // Function Hardwired.HWPlayerController.GetLocalOrSpectatedCharacter // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10525a0
	struct AHWMapMarker* GetFocusedMarker(); // Function Hardwired.HWPlayerController.GetFocusedMarker // (Final|Native|Private|BlueprintCallable|BlueprintPure|Const) // @ game+0x1052570
	bool GetDeveloperMode(); // Function Hardwired.HWPlayerController.GetDeveloperMode // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfea6c0
	int32_t GetCurrentObjectiveIndex(struct UObject* WorldContextObject); // Function Hardwired.HWPlayerController.GetCurrentObjectiveIndex // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x10524b0
	struct AActor* GetCurrentlyViewedActor(); // Function Hardwired.HWPlayerController.GetCurrentlyViewedActor // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1052540
	bool GetActionForItemType(enum class EHWItemUsageType Type, struct TArray<struct FName> OutActions); // Function Hardwired.HWPlayerController.GetActionForItemType // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x10523b0
	struct FName GetActionForItemSlot(int32_t Slot); // Function Hardwired.HWPlayerController.GetActionForItemSlot // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1052320
	void FullArmorFeatures(); // Function Hardwired.HWPlayerController.FullArmorFeatures // (Final|Exec|Native|Protected) // @ game+0x9ad4e0
	void FinishDroneControlAnim(); // Function Hardwired.HWPlayerController.FinishDroneControlAnim // (Final|Native|Public) // @ game+0x1052300
	void EndRailMovement(bool snapToOutPosition); // Function Hardwired.HWPlayerController.EndRailMovement // (Final|Native|Public|BlueprintCallable) // @ game+0x1052270
	void DumpWeaponAttributes(); // Function Hardwired.HWPlayerController.DumpWeaponAttributes // (Final|Exec|Native|Private) // @ game+0x9ad4e0
	void Die(); // Function Hardwired.HWPlayerController.Die // (Final|Exec|Native|Protected) // @ game+0x9ad4e0
	void DevLoginResponse(struct FHWLoginResponse Response); // Function Hardwired.HWPlayerController.DevLoginResponse // (Final|Native|Protected) // @ game+0x1052180
	void DevLoginErrorResponse(struct FHWErrorResponse Response); // Function Hardwired.HWPlayerController.DevLoginErrorResponse // (Final|Native|Protected) // @ game+0x1052040
	void DevLogin(struct FString Username); // Function Hardwired.HWPlayerController.DevLogin // (Final|Exec|Native|Protected) // @ game+0x1049460
	void DetectEnemies(); // Function Hardwired.HWPlayerController.DetectEnemies // (Final|Native|Public) // @ game+0x1052020
	void DestroyInGameHUD(); // Function Hardwired.HWPlayerController.DestroyInGameHUD // (Final|Native|Public|BlueprintCallable) // @ game+0x1052000
	void DelayedResetCombatCompanion(float Delay); // Function Hardwired.HWPlayerController.DelayedResetCombatCompanion // (Final|Native|Public|BlueprintCallable) // @ game+0x1051f80
	void DefocusTextChat(); // Function Hardwired.HWPlayerController.DefocusTextChat // (Final|Native|Public|BlueprintCallable) // @ game+0x1051f60
	void DebugSetItems(struct AHWHumanCharacter* Human, struct FName ArmorSetId, struct FName Item1, struct FName Item2, struct FName Item3); // Function Hardwired.HWPlayerController.DebugSetItems // (Final|Native|Public|BlueprintCallable) // @ game+0x1051dd0
	void DebugSetASS(struct AHWHumanCharacter* Human, struct FName ArmorSetId, struct TArray<struct FName> Features); // Function Hardwired.HWPlayerController.DebugSetASS // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1051b90
	void DebugSetArmorSet(struct AHWHumanCharacter* Human, struct FName ArmorSetId, struct FName CharacterId); // Function Hardwired.HWPlayerController.DebugSetArmorSet // (Final|Native|Public|BlueprintCallable) // @ game+0x1051cc0
	void DebugLoadNextSubLevel(); // Function Hardwired.HWPlayerController.DebugLoadNextSubLevel // (Final|Native|Protected) // @ game+0x9ad4e0
	void DebugCheckCurrentSpawnPoints(); // Function Hardwired.HWPlayerController.DebugCheckCurrentSpawnPoints // (Final|Native|Protected) // @ game+0x9ad4e0
	void DebugCheckAllSpawnPointsContains(struct FString StringToCheck); // Function Hardwired.HWPlayerController.DebugCheckAllSpawnPointsContains // (Final|Exec|Native|Protected) // @ game+0x1049460
	void DebugCheckAllSpawnPoints(); // Function Hardwired.HWPlayerController.DebugCheckAllSpawnPoints // (Final|Exec|Native|Protected) // @ game+0x9ad4e0
	void DebugAutomatedCheckSpawnPoints(struct FString MapName); // Function Hardwired.HWPlayerController.DebugAutomatedCheckSpawnPoints // (Final|Exec|Native|Public) // @ game+0x1049460
	void CreateInGameHUD(struct UUserWidget* Widget); // Function Hardwired.HWPlayerController.CreateInGameHUD // (Final|Native|Public|BlueprintCallable) // @ game+0x1051b00
	void CrashServer(); // Function Hardwired.HWPlayerController.CrashServer // (Final|Exec|Native|Protected) // @ game+0x9ad4e0
	void CombatCompanionInvalidSpawnLocation(); // Function Hardwired.HWPlayerController.CombatCompanionInvalidSpawnLocation // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void CloseMap(); // Function Hardwired.HWPlayerController.CloseMap // (Final|Native|Public|BlueprintCallable) // @ game+0x1051ae0
	void ClientUpdateDetectionStatus(struct TArray<struct FHWDetectionUpdate> Updates); // Function Hardwired.HWPlayerController.ClientUpdateDetectionStatus // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x10518a0
	void ClientUnPossessCombatCompanion(); // Function Hardwired.HWPlayerController.ClientUnPossessCombatCompanion // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x1051880
	void ClientSync(int32_t S); // Function Hardwired.HWPlayerController.ClientSync // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x10517f0
	void ClientStartRoundStateTransition(int32_t Round, enum class EHWRoundState State); // Function Hardwired.HWPlayerController.ClientStartRoundStateTransition // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x1051720
	void ClientSpectateLookAt(struct FString PlayerName, struct FVector LookAtLocation); // Function Hardwired.HWPlayerController.ClientSpectateLookAt // (Net|NetReliableNative|Event|Public|HasDefaults|NetClient) // @ game+0x1051640
	void ClientSetTeamScore(struct FHWTeamScoreData ScoreData); // Function Hardwired.HWPlayerController.ClientSetTeamScore // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x1051580
	void ClientSetTeamObjectiveStatus(struct FText Text, int32_t Team); // Function Hardwired.HWPlayerController.ClientSetTeamObjectiveStatus // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x1051470
	void ClientSetTeamAudioSwitch(int32_t Team); // Function Hardwired.HWPlayerController.ClientSetTeamAudioSwitch // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x10513e0
	void ClientSetRoundRewards(int32_t Round, struct TArray<struct FHWPublicMatchReward> MatchRewards, struct TArray<struct FHWRoundResultInfo> RoundResults, struct TArray<struct FHWRoundPublicProfiles> RoundProfiles); // Function Hardwired.HWPlayerController.ClientSetRoundRewards // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x1051120
	void ClientSetRoundHeader(struct FText NewRoundHeader); // Function Hardwired.HWPlayerController.ClientSetRoundHeader // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x1051060
	void ClientSetPlayerObjectiveImage(struct AHWPlayerState* InPlayerState, struct UTexture2D* Texture); // Function Hardwired.HWPlayerController.ClientSetPlayerObjectiveImage // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x1050f90
	void ClientSetObjectiveText(int32_t Index, struct FText NewObjectiveText); // Function Hardwired.HWPlayerController.ClientSetObjectiveText // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x1050e80
	void ClientSetObjectiveCard(int32_t Index, struct FHWObjectiveCardData NewCardData); // Function Hardwired.HWPlayerController.ClientSetObjectiveCard // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x1050cd0
	void ClientSetInputEnabled(bool Enabled); // Function Hardwired.HWPlayerController.ClientSetInputEnabled // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x1050c40
	void ClientSetCurrentObjectiveIndex(int32_t Index); // Function Hardwired.HWPlayerController.ClientSetCurrentObjectiveIndex // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x1050bb0
	void ClientSetCurrentHUD(struct FName HUDName); // Function Hardwired.HWPlayerController.ClientSetCurrentHUD // (Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable) // @ game+0x1050b20
	void ClientSetControlRotation(struct FRotator Rotation); // Function Hardwired.HWPlayerController.ClientSetControlRotation // (Net|NetReliableNative|Event|Protected|HasDefaults|NetClient) // @ game+0x1050aa0
	void ClientReconnectingPlayersUpdated(struct TArray<struct FString> InReconnectingPlayers); // Function Hardwired.HWPlayerController.ClientReconnectingPlayersUpdated // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x10509d0
	void ClientPossessCombatCompanion(); // Function Hardwired.HWPlayerController.ClientPossessCombatCompanion // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x10509b0
	void ClientOnPlayerKilled(struct FString KillerId, struct FString VictimId, bool WasKilledByDrone, struct FName KillerItemId, enum class EHWDamageType DamageType, bool WasHeadShot, enum class EHWWeaponType WeaponType, struct TArray<struct FString> Assists, struct AActor* DamageDealer, struct FName BleedCausedByDamageDealer, enum class EHWDamageType BleedCausedByDamageType); // Function Hardwired.HWPlayerController.ClientOnPlayerKilled // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x1050610
	void ClientOnPlayerDowned(struct FString KillerId, struct FString VictimId, bool WasHeadShot); // Function Hardwired.HWPlayerController.ClientOnPlayerDowned // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x10504d0
	void ClientOnDisconnect(struct FString DisconnectedPlayerId); // Function Hardwired.HWPlayerController.ClientOnDisconnect // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x1050430
	void ClientNotifyTeammateLoadoutDataChanged(int32_t CharIndex, struct FHWLoadoutData LoadoutData); // Function Hardwired.HWPlayerController.ClientNotifyTeammateLoadoutDataChanged // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x10502e0
	void ClientNotifyTeammateLoadoutChange(struct FString PlayerId, struct FString Primary, struct FString Secondary, int32_t PrimaryTier, int32_t SecondaryTier, int32_t ArmorTier, struct FName Item1, struct FName Item2, struct FName Item3); // Function Hardwired.HWPlayerController.ClientNotifyTeammateLoadoutChange // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x1050000
	void ClientNotifyHumanDamageDealt(struct FHWDiagDamageDealt Value); // Function Hardwired.HWPlayerController.ClientNotifyHumanDamageDealt // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x104fea0
	void ClientNotifyHostilityChanged(enum class EHWHostileTeam NewHostileTeam); // Function Hardwired.HWPlayerController.ClientNotifyHostilityChanged // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x104fe20
	void ClientNotifyHitScored(struct FHWPlayerHitScoredParams Params); // Function Hardwired.HWPlayerController.ClientNotifyHitScored // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x104fd80
	void ClientNotifyHitReceived(struct FHWPlayerHitReceivedParams Params); // Function Hardwired.HWPlayerController.ClientNotifyHitReceived // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x104fce0
	void ClientNotifyDetected(struct AActor* DetectedActor, bool Detected, struct AActor* SourceActor, float Duration); // Function Hardwired.HWPlayerController.ClientNotifyDetected // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x104fb70
	void ClientNotifyCamerasUpdated(struct TArray<struct UHWCameraFeedProviderComponent*> Cameras); // Function Hardwired.HWPlayerController.ClientNotifyCamerasUpdated // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x104fad0
	void ClientNotifyArmorFeatureActivated(enum class EHWArmorFeatureType Feature, bool Active, float Duration); // Function Hardwired.HWPlayerController.ClientNotifyArmorFeatureActivated // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x104f9b0
	void ClientItemExitView(struct UHWInteractionComponent* Item); // Function Hardwired.HWPlayerController.ClientItemExitView // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x104f920
	void ClientItemEnterView(struct UHWInteractionComponent* Item); // Function Hardwired.HWPlayerController.ClientItemEnterView // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x104f890
	void ClientInvalidCompanionSpawnLocation(); // Function Hardwired.HWPlayerController.ClientInvalidCompanionSpawnLocation // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x104f870
	void ClientEndRoundStateTransition(int32_t Round, enum class EHWRoundState State); // Function Hardwired.HWPlayerController.ClientEndRoundStateTransition // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x104f7a0
	void ClientClearAllObjectiveTexts(); // Function Hardwired.HWPlayerController.ClientClearAllObjectiveTexts // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x104f780
	void ClientClearAllCards(); // Function Hardwired.HWPlayerController.ClientClearAllCards // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x104f760
	void ClientAddToastMessage(struct FHWToastMessageData Data); // Function Hardwired.HWPlayerController.ClientAddToastMessage // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x104f640
	void ClientAddMetaMessage(struct FHWMetaMessageData MessageData); // Function Hardwired.HWPlayerController.ClientAddMetaMessage // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x104f580
	void Client_Offline_UpdateTeamPlayerIds(struct TArray<struct FString> Ids); // Function Hardwired.HWPlayerController.Client_Offline_UpdateTeamPlayerIds // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x1051a10
	void Client_Offline_AddTeammateId(struct FString ID); // Function Hardwired.HWPlayerController.Client_Offline_AddTeammateId // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x1051970
	void CheckMarkerForFocus(struct AHWMapMarker* MapMarker, struct FVector2D MarkerScreenLoc); // Function Hardwired.HWPlayerController.CheckMarkerForFocus // (Final|Native|Private|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x104f4b0
	bool CanUseMap(); // Function Hardwired.HWPlayerController.CanUseMap // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x104f490
	void BPUnPossessCompanion(); // Function Hardwired.HWPlayerController.BPUnPossessCompanion // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void BPPossessCompanion(); // Function Hardwired.HWPlayerController.BPPossessCompanion // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void BP_SpawnTargetDummy(); // Function Hardwired.HWPlayerController.BP_SpawnTargetDummy // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void BP_ReviveTargetDummy(); // Function Hardwired.HWPlayerController.BP_ReviveTargetDummy // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void BP_MoveTargetDummySpawner(); // Function Hardwired.HWPlayerController.BP_MoveTargetDummySpawner // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void BP_InitDebugTools(); // Function Hardwired.HWPlayerController.BP_InitDebugTools // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void AnnounceToggleTeamChatEvent(); // Function Hardwired.HWPlayerController.AnnounceToggleTeamChatEvent // (Final|Native|Private) // @ game+0x104f470
	void AdjustDebugCameraFov(float Val); // Function Hardwired.HWPlayerController.AdjustDebugCameraFov // (Final|Native|Public) // @ game+0x104f3f0
};

// Class Hardwired.HWPlayerEffectsComponent
// Size: 0xd0 (Inherited: 0xb0)
struct UHWPlayerEffectsComponent : UActorComponent {
	struct FMulticastInlineDelegate OnSpecterStateChanged; // 0xb0(0x10)
	bool SpecterState; // 0xc0(0x01)
	char pad_C1[0xf]; // 0xc1(0x0f)

	void SetSpecter(bool State); // Function Hardwired.HWPlayerEffectsComponent.SetSpecter // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x1060d40
	void OnRep_SpecterState(); // Function Hardwired.HWPlayerEffectsComponent.OnRep_SpecterState // (Final|Native|Private) // @ game+0x1060210
};

// Class Hardwired.HWPlayerListener
// Size: 0x28 (Inherited: 0x28)
struct UHWPlayerListener : UInterface {

	void SetHudPromptText(struct FText Text, float DisplayDuration); // Function Hardwired.HWPlayerListener.SetHudPromptText // (Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1060b70
	void OnTeamScoreUpdated(struct FHWTeamScoreData Score); // Function Hardwired.HWPlayerListener.OnTeamScoreUpdated // (Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1060500
	void OnTeamReadyStateChanged(struct TArray<struct FString> Ids); // Function Hardwired.HWPlayerListener.OnTeamReadyStateChanged // (Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1060430
	void OnTeammateProfileChanged(struct FString PlayerId, struct FHWPlayerPublicProfile Profile); // Function Hardwired.HWPlayerListener.OnTeammateProfileChanged // (Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1060a00
	void OnTeammateLoadoutDataChanged(int32_t CharIndex, struct FHWLoadoutData LoadoutData); // Function Hardwired.HWPlayerListener.OnTeammateLoadoutDataChanged // (Native|Event|Public|BlueprintEvent) // @ game+0x10608b0
	void OnTeammateLoadoutChanged(struct FString PlayerId, struct FString Primary, struct FString Secondary, int32_t PrimaryTier, int32_t SecondaryTier, int32_t ArmorTier, struct FName Consumable, struct FName Throwable, struct FName Placeable); // Function Hardwired.HWPlayerListener.OnTeammateLoadoutChanged // (Native|Event|Public|BlueprintEvent) // @ game+0x10605d0
	void OnShowProgressBar(float Duration, enum class EHWProgressBarType BarType); // Function Hardwired.HWPlayerListener.OnShowProgressBar // (Native|Event|Public|BlueprintEvent) // @ game+0x1060360
	void OnRoundStateSet(enum class EHWRoundState State); // Function Hardwired.HWPlayerListener.OnRoundStateSet // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnRoundIntroDataChanged(struct FHWRoundIntroData RoundIntroData); // Function Hardwired.HWPlayerListener.OnRoundIntroDataChanged // (Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1060250
	void OnRoundCleanup(); // Function Hardwired.HWPlayerListener.OnRoundCleanup // (Native|Event|Public|BlueprintEvent) // @ game+0x1060230
	void OnReconnectingPlayersUpdated(struct TArray<struct FString> ReconnectingPlayers); // Function Hardwired.HWPlayerListener.OnReconnectingPlayersUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnPossess(struct AHWCharacter* PosessedCharacter); // Function Hardwired.HWPlayerListener.OnPossess // (Native|Event|Public|BlueprintEvent) // @ game+0x1060180
	void OnPlayerStateSetForCharacter(struct AHWCharacter* Character); // Function Hardwired.HWPlayerListener.OnPlayerStateSetForCharacter // (Native|Event|Public|BlueprintEvent) // @ game+0x1017e70
	void OnPlayerKilled(struct FString KillerId, struct FString VictimId, bool WasKilledByDrone, struct FName KillerItemId, enum class EHWDamageType DamageType, bool WasHeadShot, enum class EHWWeaponType WeaponType, struct TArray<struct FString> Assists, struct AActor* DamageDealer, struct FName BleedCausedByDamageDealer, enum class EHWDamageType BleedCausedByDamageType); // Function Hardwired.HWPlayerListener.OnPlayerKilled // (Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x105fdb0
	void OnPlayerDowned(struct FString KillerId, struct FString VictimId, bool WasHeadShot); // Function Hardwired.HWPlayerListener.OnPlayerDowned // (Native|Event|Public|BlueprintEvent) // @ game+0x105fc70
	void OnPlayerDisconnected(struct FString SessionId); // Function Hardwired.HWPlayerListener.OnPlayerDisconnected // (Native|Event|Public|BlueprintEvent) // @ game+0x105fbd0
	void OnOpenMap(); // Function Hardwired.HWPlayerListener.OnOpenMap // (Native|Event|Public|BlueprintEvent) // @ game+0x105fbb0
	void OnObjectiveItemsUpdated(struct TArray<struct FNameAndCount> Items); // Function Hardwired.HWPlayerListener.OnObjectiveItemsUpdated // (Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x105fb00
	void OnObjectiveDataChanged(struct FHWRoundObjectivesData ObjectiveData); // Function Hardwired.HWPlayerListener.OnObjectiveDataChanged // (Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x105f9e0
	void OnObjectiveChanged(struct FText NewObjective, bool UseAnimation, bool PlaySound); // Function Hardwired.HWPlayerListener.OnObjectiveChanged // (Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x105f870
	void OnNotifyDeathDroneDestroyed(struct FString KillerId, struct FString VictimId, bool WasKilledByDrone, struct FName KillerItemId, enum class EHWDamageType DamageType, bool WasHeadShot, enum class EHWWeaponType WeaponType); // Function Hardwired.HWPlayerListener.OnNotifyDeathDroneDestroyed // (Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x105f610
	void OnNotificationTextUpdated(struct FText NewText, struct FLinearColor UpperTextColor, bool UseAnimationUpper, struct FText NewNotificationTextLower, struct FLinearColor LowerTextColor, bool UseAnimationLower, float Duration); // Function Hardwired.HWPlayerListener.OnNotificationTextUpdated // (Native|Event|Public|HasOutParms|HasDefaults|BlueprintEvent) // @ game+0x105f330
	void OnMetaMessageReceived(struct FHWMetaMessageData Message, float ShowDuration); // Function Hardwired.HWPlayerListener.OnMetaMessageReceived // (Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x105f200
	void OnInteractionItemExitView(struct UHWInteractionComponent* Item); // Function Hardwired.HWPlayerListener.OnInteractionItemExitView // (Native|Event|Public|BlueprintEvent) // @ game+0x105f170
	void OnInteractionItemEnterView(struct UHWInteractionComponent* Item); // Function Hardwired.HWPlayerListener.OnInteractionItemEnterView // (Native|Event|Public|BlueprintEvent) // @ game+0x105f0e0
	void OnHitScored(struct FHWPlayerHitScoredParams Params); // Function Hardwired.HWPlayerListener.OnHitScored // (Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x105f040
	void OnHitReceived(struct FHWPlayerHitReceivedParams Params); // Function Hardwired.HWPlayerListener.OnHitReceived // (Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x105ef90
	void OnHideProgressBar(); // Function Hardwired.HWPlayerListener.OnHideProgressBar // (Native|Event|Public|BlueprintEvent) // @ game+0x105ef70
	void OnExitSpectateMode(); // Function Hardwired.HWPlayerListener.OnExitSpectateMode // (Native|Event|Public|BlueprintEvent) // @ game+0x105ef50
	void OnEnterSpectateMode(bool DroneSelect, bool ShowDeathScreen); // Function Hardwired.HWPlayerListener.OnEnterSpectateMode // (Native|Event|Public|BlueprintEvent) // @ game+0x105ee80
	void OnDroneUnjammed(); // Function Hardwired.HWPlayerListener.OnDroneUnjammed // (Native|Event|Public|BlueprintEvent) // @ game+0x105ee60
	void OnDronePossessed(); // Function Hardwired.HWPlayerListener.OnDronePossessed // (Native|Event|Public|BlueprintEvent) // @ game+0x105ee40
	void OnDroneJammed(); // Function Hardwired.HWPlayerListener.OnDroneJammed // (Native|Event|Public|BlueprintEvent) // @ game+0x105ee20
	void OnCombatCompanionStatusChanged(bool Available); // Function Hardwired.HWPlayerListener.OnCombatCompanionStatusChanged // (Native|Event|Public|BlueprintEvent) // @ game+0x105ed90
	void OnCloseMap(); // Function Hardwired.HWPlayerListener.OnCloseMap // (Native|Event|Public|BlueprintEvent) // @ game+0x105ed70
	void OnCameraFeedsUpdated(struct TArray<struct UHWCameraFeedProviderComponent*> Cameras); // Function Hardwired.HWPlayerListener.OnCameraFeedsUpdated // (Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x105ecc0
	void OnCameraFeedControllerChanged(struct UHWCameraFeedProviderComponent* Camera); // Function Hardwired.HWPlayerListener.OnCameraFeedControllerChanged // (Native|Event|Public|BlueprintEvent) // @ game+0x105ec30
	void OnArmorFeaturesChanged(); // Function Hardwired.HWPlayerListener.OnArmorFeaturesChanged // (Native|Event|Public|BlueprintEvent) // @ game+0x105ec10
	void OnArmorFeatureActivated(enum class EHWArmorFeatureType Feature, bool Active, float Duration); // Function Hardwired.HWPlayerListener.OnArmorFeatureActivated // (Native|Event|Public|BlueprintEvent) // @ game+0x105eaf0
	void CancelHudPromptText(); // Function Hardwired.HWPlayerListener.CancelHudPromptText // (Native|Event|Public|BlueprintEvent) // @ game+0x105add0
};

// Class Hardwired.HWPlayerProfile
// Size: 0x538 (Inherited: 0x28)
struct UHWPlayerProfile : UObject {
	struct FHWPlayerProfileData Data; // 0x28(0x4c0)
	char pad_4E8[0x50]; // 0x4e8(0x50)

	void UpsertLoadout(struct FString LoadoutName, struct FHWLoadoutData Loadout, bool SelectedLoadout, struct FDelegate Response, struct FDelegate Error); // Function Hardwired.HWPlayerProfile.UpsertLoadout // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1061030
	void UpdateLoadout(struct FString LoadoutName, struct FHWLoadoutData Loadout, bool SelectedLoadout, struct FDelegate Response, struct FDelegate Error); // Function Hardwired.HWPlayerProfile.UpdateLoadout // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1060dd0
	void SetSelectedLoadout(struct FString SelectedLoadoutName); // Function Hardwired.HWPlayerProfile.SetSelectedLoadout // (Final|Native|Public|BlueprintCallable) // @ game+0x1060ca0
	bool LoadoutExists(struct FString LoadoutName); // Function Hardwired.HWPlayerProfile.LoadoutExists // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x105ea40
	bool IsWeaponVariationUsedInLoadouts(struct FString ItemId, struct TArray<struct FString> LoadoutNames); // Function Hardwired.HWPlayerProfile.IsWeaponVariationUsedInLoadouts // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x105e910
	bool IsWeaponReceiverUsedInLoadouts(struct FName ReceiverId, struct TArray<struct FString> LoadoutNames); // Function Hardwired.HWPlayerProfile.IsWeaponReceiverUsedInLoadouts // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x105e7e0
	bool IsItemUsedInLoadout(struct FString ItemId, enum class EHWInventoryItemType ItemType, struct TArray<struct FString> LoadoutNames); // Function Hardwired.HWPlayerProfile.IsItemUsedInLoadout // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x105e660
	bool HasPartsInstallableToReceiver(struct FString ReceiverItemId, enum class EHWWeaponPartType PartType); // Function Hardwired.HWPlayerProfile.HasPartsInstallableToReceiver // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x105e530
	bool HasInventoryItem(enum class EHWInventoryItemType Type, struct FName ConfigId); // Function Hardwired.HWPlayerProfile.HasInventoryItem // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x105e460
	bool HasFullMultitaskerSet(struct FHWWeaponItem Weapon); // Function Hardwired.HWPlayerProfile.HasFullMultitaskerSet // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x105e390
	bool HasCompletedTutorial(struct FString TutorialPart); // Function Hardwired.HWPlayerProfile.HasCompletedTutorial // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x105e2e0
	bool HasAssembledWeapon(struct FName AssembledWeaponId); // Function Hardwired.HWPlayerProfile.HasAssembledWeapon // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x105e240
	float GetWeaponWeight(struct FString ReceiverId); // Function Hardwired.HWPlayerProfile.GetWeaponWeight // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x105df00
	int32_t GetWeaponStatValue(struct FString WeaponID, enum class EHWPlayerStatType Type); // Function Hardwired.HWPlayerProfile.GetWeaponStatValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x105dd60
	bool GetWeaponsByPartId(struct FName PartId, struct TArray<struct FHWWeaponItem> Weapons); // Function Hardwired.HWPlayerProfile.GetWeaponsByPartId // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x105dfb0
	enum class EHWRarity GetWeaponRarity(struct FHWWeaponItem Weapon); // Function Hardwired.HWPlayerProfile.GetWeaponRarity // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x105dc90
	int32_t GetWeaponOrderNumber(struct FString ID); // Function Hardwired.HWPlayerProfile.GetWeaponOrderNumber // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x105dbe0
	bool GetWeaponInfo(struct FString ID, struct FHWWeaponInfo Info); // Function Hardwired.HWPlayerProfile.GetWeaponInfo // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x105d9f0
	void GetWeaponIds(struct TArray<struct FString> ItemIDs, bool IncludePrimary, bool IncludeSecondary); // Function Hardwired.HWPlayerProfile.GetWeaponIds // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x105d880
	struct FString GetWeaponDisplayName(struct FString ID); // Function Hardwired.HWPlayerProfile.GetWeaponDisplayName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x105d790
	void GetWeaponCodes(struct FName PartId, struct TArray<struct FHWWeaponCodeItem> Result); // Function Hardwired.HWPlayerProfile.GetWeaponCodes // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x105d610
	int32_t GetWeaponCodeCount(struct FName WeaponID); // Function Hardwired.HWPlayerProfile.GetWeaponCodeCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x105d570
	bool GetWeaponById(struct FString ID, struct FHWWeaponItem Weapon); // Function Hardwired.HWPlayerProfile.GetWeaponById // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x105d440
	struct TMap<struct FString, int32_t> GetShopItemsPurchased(); // Function Hardwired.HWPlayerProfile.GetShopItemsPurchased // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x105d320
	struct FString GetSelectedLoadoutName(); // Function Hardwired.HWPlayerProfile.GetSelectedLoadoutName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x105d2a0
	int32_t GetRemainingUpgradePoints(struct FString WeaponItemId, enum class EHWCraftingParameterGroup Group); // Function Hardwired.HWPlayerProfile.GetRemainingUpgradePoints // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x105d1b0
	void GetReceiversCompatibleWithPart(struct FHWWeaponPartData PartToInstall, struct TArray<struct FString> ReceiverItemIds); // Function Hardwired.HWPlayerProfile.GetReceiversCompatibleWithPart // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x105cfe0
	struct FHWPlayerPublicProfile GetPublicProfileWithLoadout(struct FHWLoadoutData Loadout); // Function Hardwired.HWPlayerProfile.GetPublicProfileWithLoadout // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x105ce70
	struct FHWPlayerPublicProfile GetPublicProfile(); // Function Hardwired.HWPlayerProfile.GetPublicProfile // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x105cdc0
	int32_t GetPlayerStatValue(enum class EHWPlayerStatType Type); // Function Hardwired.HWPlayerProfile.GetPlayerStatValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x105cc40
	struct FHWPlayerStats GetPlayerStats(); // Function Hardwired.HWPlayerProfile.GetPlayerStats // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x105cd40
	struct FHWPlayerProgression GetPlayerProgression(); // Function Hardwired.HWPlayerProfile.GetPlayerProgression // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x105cbd0
	struct FString GetPlayerName(); // Function Hardwired.HWPlayerProfile.GetPlayerName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x105cb50
	struct FString GetPlayerId(); // Function Hardwired.HWPlayerProfile.GetPlayerId // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x105cad0
	struct FHWPlayerDetails GetPlayerDetails(); // Function Hardwired.HWPlayerProfile.GetPlayerDetails // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x105caa0
	void GetPartsInstallableToReceiver(struct FString ReceiverItemId, enum class EHWWeaponPartType PartType, struct TArray<struct FHWWeaponPartRef> Parts, struct TArray<struct FHWWeaponPartRef> UnavailableParts); // Function Hardwired.HWPlayerProfile.GetPartsInstallableToReceiver // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x105c8b0
	bool GetPartsForWeapon(struct FName WeaponPartId, struct TArray<struct FHWWeaponPartItem> Parts, enum class EHWWeaponPartType TypeFilter); // Function Hardwired.HWPlayerProfile.GetPartsForWeapon // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x105c720
	struct FName GetPartIdForWeaponReceiver(struct FString ID); // Function Hardwired.HWPlayerProfile.GetPartIdForWeaponReceiver // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x105c660
	struct FName GetPartIdForWeaponPart(struct FString ID); // Function Hardwired.HWPlayerProfile.GetPartIdForWeaponPart // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x105c5a0
	struct FName GetPartIdForWeapon(struct FString ID, enum class EHWWeaponPartType PartType, bool Found); // Function Hardwired.HWPlayerProfile.GetPartIdForWeapon // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x105c460
	bool GetPartById(struct FString ID, struct FHWWeaponPartItem Part); // Function Hardwired.HWPlayerProfile.GetPartById // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x105c2a0
	int32_t GetMaterialItemAmount(enum class EHWFaction Faction); // Function Hardwired.HWPlayerProfile.GetMaterialItemAmount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x105c210
	struct FHWLoadoutData GetLoadout(struct FString LoadoutName); // Function Hardwired.HWPlayerProfile.GetLoadout // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x105bfc0
	struct TArray<struct FHWItemData> GetInventoryItemsByCategory(struct FString Category); // Function Hardwired.HWPlayerProfile.GetInventoryItemsByCategory // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x105bdc0
	struct TArray<struct FName> GetInventoryIdsByType(enum class EHWInventoryItemType SearchType); // Function Hardwired.HWPlayerProfile.GetInventoryIdsByType // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x105bce0
	struct FHWPlayerInventory GetInventory(); // Function Hardwired.HWPlayerProfile.GetInventory // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x105bcb0
	int32_t GetHardCurrency(); // Function Hardwired.HWPlayerProfile.GetHardCurrency // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x105bc20
	int32_t GetFullSetSizeForWeapon(struct FName WeaponPartId); // Function Hardwired.HWPlayerProfile.GetFullSetSizeForWeapon // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x105bb80
	struct FHWPlayerProfileData GetData(); // Function Hardwired.HWPlayerProfile.GetData // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x105bb20
	float GetCurrentXpMultiplier(); // Function Hardwired.HWPlayerProfile.GetCurrentXpMultiplier // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x105baf0
	int32_t GetCurrentXp(); // Function Hardwired.HWPlayerProfile.GetCurrentXp // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x105bad0
	int32_t GetCurrentLevel(); // Function Hardwired.HWPlayerProfile.GetCurrentLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x105bab0
	int32_t GetCredits(); // Function Hardwired.HWPlayerProfile.GetCredits // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x105ba30
	bool GetCodeById(struct FString ID, struct FHWWeaponCodeItem Code); // Function Hardwired.HWPlayerProfile.GetCodeById // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x105b750
	struct TArray<struct FName> GetArmorSetsWithBaseId(struct FName BaseId); // Function Hardwired.HWPlayerProfile.GetArmorSetsWithBaseId // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x105b670
	struct TArray<struct FName> GetArmorSetIds(); // Function Hardwired.HWPlayerProfile.GetArmorSetIds // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x105b5f0
	struct TArray<struct FName> GetArmorSetBaseIds(); // Function Hardwired.HWPlayerProfile.GetArmorSetBaseIds // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x105b570
	struct TMap<struct FString, struct FHWLoadoutData> GetAllLoadouts(); // Function Hardwired.HWPlayerProfile.GetAllLoadouts // (Final|Native|Public|BlueprintCallable) // @ game+0x105b480
	struct TArray<struct FHWArmorSetData> GetAllArmorSets(); // Function Hardwired.HWPlayerProfile.GetAllArmorSets // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x105b370
	void GetActiveSetsForWeapon(struct FString WeaponID, struct TArray<struct FName> Sets, bool IsFullSet); // Function Hardwired.HWPlayerProfile.GetActiveSetsForWeapon // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x105b210
	void GetActivePartsForWeaponBySetId(struct FString WeaponID, struct FName SetId, struct TArray<struct FString> ActiveParts); // Function Hardwired.HWPlayerProfile.GetActivePartsForWeaponBySetId // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x105b0a0
	bool FindWeaponWithPart(enum class EHWWeaponPartType Type, struct FString PartItemId, struct FString WeaponItemId); // Function Hardwired.HWPlayerProfile.FindWeaponWithPart // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x105adf0
};

// Class Hardwired.HWPlayerProfileListener
// Size: 0x28 (Inherited: 0x28)
struct UHWPlayerProfileListener : UInterface {

	void OnPlayerStatsChanged(struct FHWPlayerStats Data); // Function Hardwired.HWPlayerProfileListener.OnPlayerStatsChanged // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerProgressionChanged(struct FHWPlayerProgression Data); // Function Hardwired.HWPlayerProfileListener.OnPlayerProgressionChanged // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerMissionChanged(struct FHWPlayerMission Data); // Function Hardwired.HWPlayerProfileListener.OnPlayerMissionChanged // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerInventoryChanged(struct FHWPlayerInventory Data); // Function Hardwired.HWPlayerProfileListener.OnPlayerInventoryChanged // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerDetailsChanged(struct FHWPlayerDetails Data); // Function Hardwired.HWPlayerProfileListener.OnPlayerDetailsChanged // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
};

// Class Hardwired.HWPlayerState
// Size: 0x678 (Inherited: 0x320)
struct AHWPlayerState : APlayerState {
	char pad_320[0x20]; // 0x320(0x20)
	bool bIsDead; // 0x340(0x01)
	bool bIsDrone; // 0x341(0x01)
	char pad_342[0x6]; // 0x342(0x06)
	struct FHWLoadoutData Loadout; // 0x348(0x88)
	struct FHWPlayerPublicProfile PublicProfile; // 0x3d0(0x1c0)
	struct FString PrimaryWeaponReceiver; // 0x590(0x10)
	struct AHWCharacter* PrimaryPawn; // 0x5a0(0x08)
	int32_t Team; // 0x5a8(0x04)
	char pad_5AC[0x4]; // 0x5ac(0x04)
	int32_t PlayerNumber; // 0x5b0(0x04)
	int32_t ServerPktLag; // 0x5b4(0x04)
	struct FString BackendPlayerId; // 0x5b8(0x10)
	char pad_5C8[0x4]; // 0x5c8(0x04)
	struct FHWReconnectInfo ReconnectInfo; // 0x5cc(0x10)
	char pad_5DC[0x4]; // 0x5dc(0x04)
	struct FString SessionId; // 0x5e0(0x10)
	int32_t Kills; // 0x5f0(0x04)
	int32_t Assists; // 0x5f4(0x04)
	char pad_5F8[0x10]; // 0x5f8(0x10)
	struct FMulticastInlineDelegate OnGameplayEvent; // 0x608(0x10)
	struct TArray<struct FHWDamageToPlayer> DamageDealt; // 0x618(0x10)
	struct FHWTeamDamagePermission DamagePermission; // 0x628(0x10)
	char pad_638[0x10]; // 0x638(0x10)
	struct TArray<struct FHWAssistData> PendingAssists; // 0x648(0x10)
	struct TArray<struct FVector2D> DrawnMapPoints; // 0x658(0x10)
	char pad_668[0x8]; // 0x668(0x08)
	enum class EHWGamePlatform PlayersPlatform; // 0x670(0x01)
	char pad_671[0x7]; // 0x671(0x07)

	void SetTeam(int32_t NewTeam); // Function Hardwired.HWPlayerState.SetTeam // (Final|Native|Public|BlueprintCallable) // @ game+0x1067580
	void SetPlayerIdentity(struct FString PlayerName, int32_t TeamIdx); // Function Hardwired.HWPlayerState.SetPlayerIdentity // (Final|Native|Public|BlueprintCallable) // @ game+0x10674a0
	void ServerSendDrawPoints(struct TArray<struct FVector2D> Points); // Function Hardwired.HWPlayerState.ServerSendDrawPoints // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable) // @ game+0x1067400
	void ServerDeleteDrawPoints(struct TArray<struct FVector2D> PointsToRemove); // Function Hardwired.HWPlayerState.ServerDeleteDrawPoints // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable) // @ game+0x1067360
	void ServerClearDrawPoints(); // Function Hardwired.HWPlayerState.ServerClearDrawPoints // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable) // @ game+0x1067340
	void ServerAddDrawPoint(struct FVector2D PointToAdd); // Function Hardwired.HWPlayerState.ServerAddDrawPoint // (Net|NetReliableNative|Event|Public|NetServer|HasDefaults|BlueprintCallable) // @ game+0x10672c0
	void OnRep_TeamInformation(); // Function Hardwired.HWPlayerState.OnRep_TeamInformation // (Final|Native|Public) // @ game+0x1066ed0
	void OnRep_Team(); // Function Hardwired.HWPlayerState.OnRep_Team // (Final|Native|Private) // @ game+0x1066eb0
	void OnRep_PublicProfile(); // Function Hardwired.HWPlayerState.OnRep_PublicProfile // (Final|Native|Public) // @ game+0x1066e90
	void OnRep_Loadout(); // Function Hardwired.HWPlayerState.OnRep_Loadout // (Final|Native|Public) // @ game+0x1066e70
	void OnRep_Kills(); // Function Hardwired.HWPlayerState.OnRep_Kills // (Final|Native|Public) // @ game+0x1066e50
	void OnRep_IsDrone(); // Function Hardwired.HWPlayerState.OnRep_IsDrone // (Final|Native|Private) // @ game+0x1066e30
	void OnRep_Assists(); // Function Hardwired.HWPlayerState.OnRep_Assists // (Final|Native|Public) // @ game+0x1066e10
	bool IsTeamFriendly(int32_t InTeam); // Function Hardwired.HWPlayerState.IsTeamFriendly // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1066180
	bool IsMale(); // Function Hardwired.HWPlayerState.IsMale // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1066050
	bool IsDead(); // Function Hardwired.HWPlayerState.IsDead // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1066030
	void HandleReconnect(); // Function Hardwired.HWPlayerState.HandleReconnect // (Final|Native|Public) // @ game+0x1066010
	int32_t GetTeam(); // Function Hardwired.HWPlayerState.GetTeam // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1065ff0
	struct FString GetSessionId(); // Function Hardwired.HWPlayerState.GetSessionId // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1065f30
	bool GetRewardsForRound(int32_t Round, int32_t OutXp, int32_t OutCredits, float OutMultiplier); // Function Hardwired.HWPlayerState.GetRewardsForRound // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1065d90
	struct FHWDamageToPlayer GetDamageToPlayer(struct FString TargetId); // Function Hardwired.HWPlayerState.GetDamageToPlayer // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x10658d0
	void ClientUpdateGameplayEvents(struct FHWGameplayEventsForRound Events, int32_t Round); // Function Hardwired.HWPlayerState.ClientUpdateGameplayEvents // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x1065660
	void AddPendingAssist(struct FString SourceSessionId, enum class EHWGameplayEventType EventType, struct FString WeaponItemId, int32_t ExpirationTimestamp); // Function Hardwired.HWPlayerState.AddPendingAssist // (Final|Native|Public|BlueprintCallable) // @ game+0x10654e0
};

// Class Hardwired.HWPlayerTeleportTarget
// Size: 0x230 (Inherited: 0x220)
struct AHWPlayerTeleportTarget : AActor {
	struct UArrowComponent* ArrowComp; // 0x220(0x08)
	struct UCapsuleComponent* Capsule; // 0x228(0x08)
};

// Class Hardwired.HWPreloadHelper
// Size: 0x48 (Inherited: 0x28)
struct UHWPreloadHelper : UObject {
	char pad_28[0x20]; // 0x28(0x20)
};

// Class Hardwired.HWProfiler
// Size: 0x2b0 (Inherited: 0x220)
struct AHWProfiler : AActor {
	char pad_220[0x39]; // 0x220(0x39)
	char ProfilerMode; // 0x259(0x01)
	bool ProfilerLooped; // 0x25a(0x01)
	bool ProfileEachPeriod; // 0x25b(0x01)
	float ProfilerPeriod; // 0x25c(0x04)
	float MinFrameLength; // 0x260(0x04)
	float MaxFrameLength; // 0x264(0x04)
	int32_t FrameLengthHistogramBins; // 0x268(0x04)
	char pad_26C[0x4]; // 0x26c(0x04)
	struct FString StartCommand; // 0x270(0x10)
	struct FString HalfTimeCommand; // 0x280(0x10)
	char pad_290[0x20]; // 0x290(0x20)

	void OnRoundStateChanged(struct AHWGameMode* GameMode, enum class EHWRoundState RoundState); // Function Hardwired.HWProfiler.OnRoundStateChanged // (Final|Native|Private) // @ game+0x1066ef0
	void OnMatchEnded(); // Function Hardwired.HWProfiler.OnMatchEnded // (Final|Native|Private) // @ game+0x1066990
};

// Class Hardwired.HWPurchaseBPL
// Size: 0x28 (Inherited: 0x28)
struct UHWPurchaseBPL : UBlueprintFunctionLibrary {

	void TryRecoverPurchase(struct UObject* WorldContextObject, struct FDelegate ResultDelegate); // Function Hardwired.HWPurchaseBPL.TryRecoverPurchase // (Final|Native|Static|Private|HasOutParms|BlueprintCallable) // @ game+0x1067a30
	bool StartRealMoneyPurchase(struct UObject* WorldContextObject, enum class EHWPaymentPlatform Platform, struct FString ShopItemId, struct FDelegate ResultDelegate); // Function Hardwired.HWPurchaseBPL.StartRealMoneyPurchase // (Final|Native|Static|Private|HasOutParms|BlueprintCallable) // @ game+0x10678a0
	struct FHWRealMoneyPurchasePrice GetRMTLocalizedPrice(struct FString ShopItemId); // Function Hardwired.HWPurchaseBPL.GetRMTLocalizedPrice // (Final|Native|Static|Private|BlueprintCallable|BlueprintPure) // @ game+0x1065c90
	enum class EHWPaymentPlatform GetPreferredPaymentPlatform(struct UObject* WorldContextObject); // Function Hardwired.HWPurchaseBPL.GetPreferredPaymentPlatform // (Final|Native|Static|Private|BlueprintCallable|BlueprintPure) // @ game+0x1065bd0
	struct FText GetLocalizedPrice(struct FString ShopItemId); // Function Hardwired.HWPurchaseBPL.GetLocalizedPrice // (Final|Native|Static|Private|BlueprintCallable|BlueprintPure) // @ game+0x10659d0
};

// Class Hardwired.HWPurchaseProcessor
// Size: 0xe8 (Inherited: 0x28)
struct UHWPurchaseProcessor : UObject {
	char pad_28[0x70]; // 0x28(0x70)
	struct TMap<enum class EHWPaymentPlatform, struct UHWPaymentPlatformBase*> PaymentPlatforms; // 0x98(0x50)

	void TryRecoverPurchase(struct FDelegate ResultDelegate); // Function Hardwired.HWPurchaseProcessor.TryRecoverPurchase // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1067b10
	void StartPurchase(struct FString ShopItemId, enum class EHWPaymentPlatform Platform, struct FDelegate ResultDelegate); // Function Hardwired.HWPurchaseProcessor.StartPurchase // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1067750
	void OnPurchaseInitiatedResponse(struct FHWInitiateRealMoneyPurchaseResponse Response); // Function Hardwired.HWPurchaseProcessor.OnPurchaseInitiatedResponse // (Final|Native|Protected) // @ game+0x1066d20
	void OnPurchaseFinalizedResponse(struct FHWFinalizeRealMoneyPurchaseResponse Response); // Function Hardwired.HWPurchaseProcessor.OnPurchaseFinalizedResponse // (Final|Native|Protected) // @ game+0x1066aa0
	void OnPaymentCompleted(struct FHWOnPaymentCompletedParams Params); // Function Hardwired.HWPurchaseProcessor.OnPaymentCompleted // (Final|Native|Protected|HasOutParms) // @ game+0x10669f0
	void OnError(enum class EHWErrorMessage ErrorMessage); // Function Hardwired.HWPurchaseProcessor.OnError // (Final|Native|Protected) // @ game+0x1066260
	enum class EHWPaymentPlatform GetPreferredPaymentPlatform(); // Function Hardwired.HWPurchaseProcessor.GetPreferredPaymentPlatform // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1065c60
	struct TArray<enum class EHWPaymentPlatform> GetAvailablePaymentPlatforms(); // Function Hardwired.HWPurchaseProcessor.GetAvailablePaymentPlatforms // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1065850
};

// Class Hardwired.HWRadarChartWidget
// Size: 0x280 (Inherited: 0x108)
struct UHWRadarChartWidget : UWidget {
	struct TArray<float> Values; // 0x108(0x10)
	float MinRadius; // 0x118(0x04)
	float MaxRadius; // 0x11c(0x04)
	float Angle; // 0x120(0x04)
	char pad_124[0x4]; // 0x124(0x04)
	struct FSlateBrush FillBrush; // 0x128(0x88)
	struct FDelegate FillBrushDelegate; // 0x1b0(0x10)
	struct FSlateBrush PointBrush; // 0x1c0(0x88)
	struct FDelegate PointBrushDelegate; // 0x248(0x10)
	float LineThickness; // 0x258(0x04)
	float PointSize; // 0x25c(0x04)
	struct FLinearColor LineColor; // 0x260(0x10)
	char pad_270[0x10]; // 0x270(0x10)

	void SetValues(struct TArray<float> InValues); // Function Hardwired.HWRadarChartWidget.SetValues // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1067610
};

// Class Hardwired.HWReplaySpectatorController
// Size: 0x570 (Inherited: 0x570)
struct AHWReplaySpectatorController : APlayerController {
};

// Class Hardwired.HWRichTextStyleDecorator
// Size: 0xd8 (Inherited: 0x28)
struct UHWRichTextStyleDecorator : URichTextBlockDecorator {
	struct FString MoveForwardActionName; // 0x28(0x10)
	struct FString MoveRightActionName; // 0x38(0x10)
	struct FString TutorialMovementInputKeyName; // 0x48(0x10)
	struct FString TutorialTurningInputKeyName; // 0x58(0x10)
	struct FString GamepadMovementInputImageRowName; // 0x68(0x10)
	struct FString GamepadTurningInputImageRowName; // 0x78(0x10)
	struct TMap<enum class EHWGamepadType, struct UDataTable*> GamepadIconSets; // 0x88(0x50)

	struct FLinearColor ResolveColor(struct FString Name); // Function Hardwired.HWRichTextStyleDecorator.ResolveColor // (Event|Public|HasDefaults|BlueprintEvent) // @ game+0x13c4ca0
	void Initialize(); // Function Hardwired.HWRichTextStyleDecorator.Initialize // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
};

// Class Hardwired.HWSceneCaptureComponent2D
// Size: 0x8b0 (Inherited: 0x8b0)
struct UHWSceneCaptureComponent2D : USceneCaptureComponent2D {
	struct AActor* ViewOwner; // 0x8a8(0x08)

	void SetViewOwner(struct AActor* Owner); // Function Hardwired.HWSceneCaptureComponent2D.SetViewOwner // (Final|Native|Public|BlueprintCallable) // @ game+0x10676c0
};

// Class Hardwired.HWServerListener
// Size: 0x28 (Inherited: 0x28)
struct UHWServerListener : UInterface {

	void OnWholePartyReady(); // Function Hardwired.HWServerListener.OnWholePartyReady // (Native|Event|Public|BlueprintEvent) // @ game+0x1067210
	void OnUserStoreFailed(); // Function Hardwired.HWServerListener.OnUserStoreFailed // (Native|Event|Public|BlueprintEvent) // @ game+0x10671f0
	void OnUserStored(); // Function Hardwired.HWServerListener.OnUserStored // (Native|Event|Public|BlueprintEvent) // @ game+0x105ef70
	void OnUserLoadFailed(struct FString SessionIdLoadedUser); // Function Hardwired.HWServerListener.OnUserLoadFailed // (Native|Event|Public|BlueprintEvent) // @ game+0x10670b0
	void OnUserLoaded(struct FString SessionIdLoadedUser); // Function Hardwired.HWServerListener.OnUserLoaded // (Native|Event|Public|BlueprintEvent) // @ game+0x1067150
	void OnUpdateRequired(); // Function Hardwired.HWServerListener.OnUpdateRequired // (Native|Event|Public|BlueprintEvent) // @ game+0x105add0
	void OnTeamInviteAcceptProcessed(bool Success, enum class EHWErrorMessage ErrorMessage); // Function Hardwired.HWServerListener.OnTeamInviteAcceptProcessed // (Native|Event|Public|BlueprintEvent) // @ game+0x1066fe0
	void OnShopCampaignsLoaded(); // Function Hardwired.HWServerListener.OnShopCampaignsLoaded // (Native|Event|Public|BlueprintEvent) // @ game+0x1060230
	void OnServerPingsDone(); // Function Hardwired.HWServerListener.OnServerPingsDone // (Native|Event|Public|BlueprintEvent) // @ game+0x1066fc0
	void OnReconnectableMatchLost(); // Function Hardwired.HWServerListener.OnReconnectableMatchLost // (Native|Event|Public|BlueprintEvent) // @ game+0xfcd660
	void OnMatchStatusWaiting(); // Function Hardwired.HWServerListener.OnMatchStatusWaiting // (Native|Event|Public|BlueprintEvent) // @ game+0x105ef50
	void OnMatchStatusStarted(); // Function Hardwired.HWServerListener.OnMatchStatusStarted // (Native|Event|Public|BlueprintEvent) // @ game+0x1024260
	void OnMatchStatusOpen(); // Function Hardwired.HWServerListener.OnMatchStatusOpen // (Native|Event|Public|BlueprintEvent) // @ game+0x10669d0
	void OnMatchStatusMatched(); // Function Hardwired.HWServerListener.OnMatchStatusMatched // (Native|Event|Public|BlueprintEvent) // @ game+0x10669b0
	void OnMasterDataLoadFailed(enum class EHWErrorMessage Error, struct FString Message); // Function Hardwired.HWServerListener.OnMasterDataLoadFailed // (Native|Event|Public|BlueprintEvent) // @ game+0x1066880
	void OnMasterDataLoaded(); // Function Hardwired.HWServerListener.OnMasterDataLoaded // (Native|Event|Public|BlueprintEvent) // @ game+0x1066970
	void OnLogoutCompleted(); // Function Hardwired.HWServerListener.OnLogoutCompleted // (Native|Event|Public|BlueprintEvent) // @ game+0x1066860
	void OnGetWeekInfoFailed(); // Function Hardwired.HWServerListener.OnGetWeekInfoFailed // (Native|Event|Public|BlueprintEvent) // @ game+0x1011920
	void OnGetWeekInfo(struct FHWWeekInfoResponse Response); // Function Hardwired.HWServerListener.OnGetWeekInfo // (Native|Event|Public|BlueprintEvent) // @ game+0x10664e0
	void OnFriendsListUpdated(bool Success, struct FHWFetchFriendsResponse Response); // Function Hardwired.HWServerListener.OnFriendsListUpdated // (Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x10662e0
	void OnCanReconnectToQueue(); // Function Hardwired.HWServerListener.OnCanReconnectToQueue // (Native|Event|Public|BlueprintEvent) // @ game+0x1066240
	void OnCanReconnectToMatch(); // Function Hardwired.HWServerListener.OnCanReconnectToMatch // (Native|Event|Public|BlueprintEvent) // @ game+0x1066220
};

// Class Hardwired.HWSessionData
// Size: 0x250 (Inherited: 0x28)
struct UHWSessionData : UObject {
	struct UHWPlayerProfile* LocalPlayerProfile; // 0x28(0x08)
	bool bIsLoadIsInprogress; // 0x30(0x01)
	bool SplashScreenShown; // 0x31(0x01)
	char pad_32[0x6]; // 0x32(0x06)
	struct FString LastSelectedLoadout; // 0x38(0x10)
	struct UHWMatchResults* LastMatchResults; // 0x48(0x08)
	struct TArray<struct FHWTeamInvitation> PendingTeamInvitations; // 0x50(0x10)
	struct TArray<struct FHWTeamPlayer> MyTeamPlayers; // 0x60(0x10)
	enum class EHWTeamStatus LastTeamStatus; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
	struct FMulticastInlineDelegate NetworkErrorOccurred; // 0x78(0x10)
	bool HasNetworkError; // 0x88(0x01)
	enum class ENetworkFailure NetworkErrorType; // 0x89(0x01)
	enum class EHWJoinErrorType JoinErrorType; // 0x8a(0x01)
	char pad_8B[0x5]; // 0x8b(0x05)
	struct FString TeamId; // 0x90(0x10)
	bool bIsTeamLeader; // 0xa0(0x01)
	char pad_A1[0x17]; // 0xa1(0x17)
	bool bAmIReady; // 0xb8(0x01)
	bool bIsMyTeamReady; // 0xb9(0x01)
	char pad_BA[0x2]; // 0xba(0x02)
	int32_t NumPlayerInTeam; // 0xbc(0x04)
	int32_t PartyMembersReady; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)
	struct FString MatchIdForAnalytics; // 0xc8(0x10)
	char pad_D8[0x98]; // 0xd8(0x98)
	struct FDateTime CurrentBackendTime; // 0x170(0x08)
	struct TMap<enum class EHWMissionCategory, int64_t> MissionCurrentRefreshPeriods; // 0x178(0x50)
	struct TMap<enum class EHWMissionCategory, struct FDateTime> MissionNextRefreshTimes; // 0x1c8(0x50)
	struct FString CurrentMap; // 0x218(0x10)
	struct FString CurrentFlow; // 0x228(0x10)
	bool bMaintenanceDue; // 0x238(0x01)
	char pad_239[0x7]; // 0x239(0x07)
	struct FDateTime MaintenanceStart; // 0x240(0x08)
	struct FDateTime MaintenanceEnd; // 0x248(0x08)

	void UnregisterPlayerProfileListener(struct UObject* Listener); // Function Hardwired.HWSessionData.UnregisterPlayerProfileListener // (Final|Native|Public|BlueprintCallable) // @ game+0x1067bc0
	void RegisterPlayerProfileListener(struct UObject* Listener); // Function Hardwired.HWSessionData.RegisterPlayerProfileListener // (Final|Native|Public|BlueprintCallable) // @ game+0x1067230
	bool IsMyTeamLeader(struct FString ID); // Function Hardwired.HWSessionData.IsMyTeamLeader // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1066080
	int32_t GetPlayerIndex(struct FString ID); // Function Hardwired.HWSessionData.GetPlayerIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1065ad0
};

// Class Hardwired.HWSettingsBPL
// Size: 0x28 (Inherited: 0x28)
struct UHWSettingsBPL : UBlueprintFunctionLibrary {

	struct FString GetScalabilityLevelDescription(int32_t ScalabilityLevel); // Function Hardwired.HWSettingsBPL.GetScalabilityLevelDescription // (Final|Native|Static|Private|BlueprintCallable) // @ game+0x106dcf0
	int32_t GetScalabilityLevel(struct FString ScalabilityDescription); // Function Hardwired.HWSettingsBPL.GetScalabilityLevel // (Final|Native|Static|Private|BlueprintCallable) // @ game+0x106dc50
};

// Class Hardwired.HWShootingRangeGamemode
// Size: 0x308 (Inherited: 0x308)
struct AHWShootingRangeGamemode : AGameMode {
};

// Class Hardwired.HWShopData
// Size: 0x40 (Inherited: 0x28)
struct UHWShopData : UObject {
	struct TArray<struct FHWShopCampaign> ShopCampaignData; // 0x28(0x10)
	enum class EHWShopDataStatus Status; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)

	void OnCampaignsLoaded(struct FHWLoadShopCampaignsResponse Response); // Function Hardwired.HWShopData.OnCampaignsLoaded // (Final|Native|Public|HasOutParms) // @ game+0x1070810
	void OnCampaignLoadFailed(enum class EHWErrorMessage Error); // Function Hardwired.HWShopData.OnCampaignLoadFailed // (Final|Native|Public) // @ game+0x1070790
	void Load(); // Function Hardwired.HWShopData.Load // (Final|Native|Public|BlueprintCallable) // @ game+0x106ed50
	enum class EHWShopDataStatus GetStatus(); // Function Hardwired.HWShopData.GetStatus // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xc04450
	struct TArray<struct FString> GetShopCampaignIdsForSubsection(struct FString SubsectionId); // Function Hardwired.HWShopData.GetShopCampaignIdsForSubsection // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x106deb0
	struct FString GetShopCampaignIdForSubsection(struct FString SubsectionId); // Function Hardwired.HWShopData.GetShopCampaignIdForSubsection // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x106ddc0
	struct FHWShopCampaign GetCampaignDataById(struct FString CampaignId); // Function Hardwired.HWShopData.GetCampaignDataById // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x106ce00
};

// Class Hardwired.HWShopTestsBPL
// Size: 0x28 (Inherited: 0x28)
struct UHWShopTestsBPL : UBlueprintFunctionLibrary {

	void WriteTestResultsToFile(struct TArray<struct FHWShopItemPurchaseTestInfo> Results); // Function Hardwired.HWShopTestsBPL.WriteTestResultsToFile // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1074de0
	void WriteStringArrayToFile(struct TArray<struct FString> Strings, struct FString DirectoryName); // Function Hardwired.HWShopTestsBPL.WriteStringArrayToFile // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1074bf0
	struct FString CheckWeaponCosmeticPart(struct FHWWeaponCosmeticPartData Data); // Function Hardwired.HWShopTestsBPL.CheckWeaponCosmeticPart // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x106bdb0
	void CheckAllWeaponCosmeticParts(struct UObject* WorldContextObject, struct FString DirectoryName); // Function Hardwired.HWShopTestsBPL.CheckAllWeaponCosmeticParts // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x106bc90
};

// Class Hardwired.HWSpawnPointOverrideComponent
// Size: 0x470 (Inherited: 0x460)
struct UHWSpawnPointOverrideComponent : UBillboardComponent {
	int32_t Team; // 0x460(0x04)
	int32_t PlayerIndex; // 0x464(0x04)
	char pad_468[0x8]; // 0x468(0x08)
};

// Class Hardwired.HWSpawnPointOverride
// Size: 0x220 (Inherited: 0x220)
struct AHWSpawnPointOverride : AActor {

	struct TArray<struct FTransform> GetSpawnPointsForTeam(int32_t Team); // Function Hardwired.HWSpawnPointOverride.GetSpawnPointsForTeam // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x106dfa0
	struct AHWSpawnPointOverride* Get(enum class EHWObjectFound Result, struct UObject* Ctx); // Function Hardwired.HWSpawnPointOverride.Get // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x106c3a0
};

// Class Hardwired.HWSpectatorPawn
// Size: 0x2d8 (Inherited: 0x2a8)
struct AHWSpectatorPawn : ASpectatorPawn {
	struct AHWCharacter* SpectatedCharacter; // 0x2a8(0x08)
	struct FRotator SpectateRotation; // 0x2b0(0x0c)
	struct FRotator CurrentRotation; // 0x2bc(0x0c)
	float KillCamRotationSpeed; // 0x2c8(0x04)
	char pad_2CC[0xc]; // 0x2cc(0x0c)

	struct AHWCharacter* GetSpectatedCharacter(); // Function Hardwired.HWSpectatorPawn.GetSpectatedCharacter // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x106e080
};

// Class Hardwired.HWTeamSpawnPoint
// Size: 0x280 (Inherited: 0x220)
struct AHWTeamSpawnPoint : AActor {
	int32_t Team; // 0x220(0x04)
	bool bIsActive; // 0x224(0x01)
	char pad_225[0x3]; // 0x225(0x03)
	struct USceneComponent* CenterPoint; // 0x228(0x08)
	struct USceneComponent* SpawnPoint1; // 0x230(0x08)
	struct UCapsuleComponent* Capsule1; // 0x238(0x08)
	struct USceneComponent* SpawnPoint2; // 0x240(0x08)
	struct UCapsuleComponent* Capsule2; // 0x248(0x08)
	struct USceneComponent* SpawnPoint3; // 0x250(0x08)
	struct UCapsuleComponent* Capsule3; // 0x258(0x08)
	struct UArrowComponent* Arrow; // 0x260(0x08)
	struct TArray<struct USceneComponent*> SpawnPoints; // 0x268(0x10)
	char pad_278[0x8]; // 0x278(0x08)
};

// Class Hardwired.HWTestingBPL
// Size: 0x28 (Inherited: 0x28)
struct UHWTestingBPL : UBlueprintFunctionLibrary {

	struct FHWTestingValues SetGetDefaults(struct UObject* WorldContextObject, struct FHWTestingValues NewValues); // Function Hardwired.HWTestingBPL.SetGetDefaults // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1071c20
};

// Class Hardwired.HWThrowable
// Size: 0x220 (Inherited: 0x220)
struct AHWThrowable : AActor {
};

// Class Hardwired.HWTurret
// Size: 0x910 (Inherited: 0x7d0)
struct AHWTurret : AHWCharacter {
	struct UAIPerceptionComponent* AIPerceptionComponent; // 0x7c8(0x08)
	struct UHWDestructibleComponent* DestructibleComponent; // 0x7d0(0x08)
	enum class EHWTurretState TurretState; // 0x7d8(0x01)
	struct AHWWeapon* Weapon; // 0x7e0(0x08)
	struct FHWWeaponParts WeaponData; // 0x7e8(0xb0)
	struct FRotator OriginalRotator; // 0x898(0x0c)
	float TurnSpeedIdle; // 0x8a4(0x04)
	float TurnSpeedAggro; // 0x8a8(0x04)
	float TurnSpeedAttacking; // 0x8ac(0x04)
	struct TArray<bool> FriendlyTeams; // 0x8b0(0x10)
	struct TArray<struct AHWCharacter*> EnemiesInMemory; // 0x8c0(0x10)
	struct TArray<struct AHWCharacter*> EnemiesInSight; // 0x8d0(0x10)
	struct AHWCharacter* TargetEnemy; // 0x8e0(0x08)
	struct FVector LastAggroPos; // 0x8e8(0x0c)
	char pad_8F5[0x3]; // 0x8f5(0x03)
	struct FTimerHandle TimerHandle_StimulusAged; // 0x8f8(0x08)
	float TimeBetweenPerceptionUpdates; // 0x900(0x04)
	char pad_904[0xc]; // 0x904(0x0c)

	void UpdateTurretState(); // Function Hardwired.HWTurret.UpdateTurretState // (Native|Event|Public|BlueprintEvent) // @ game+0x101ede0
	void UpdateTargetEnemy(); // Function Hardwired.HWTurret.UpdateTargetEnemy // (Native|Event|Public|BlueprintEvent) // @ game+0x1074bd0
	void UpdatePerception(); // Function Hardwired.HWTurret.UpdatePerception // (Final|Native|Public) // @ game+0x1074bb0
	void SetTurretState(enum class EHWTurretState NewState); // Function Hardwired.HWTurret.SetTurretState // (Final|Native|Public|BlueprintCallable) // @ game+0x1071db0
	void SetLastAggroPos(struct FVector NewLocation); // Function Hardwired.HWTurret.SetLastAggroPos // (Native|Event|Public|HasDefaults|BlueprintEvent) // @ game+0x1071d20
	void SetFriendlyTeams(bool Team1, bool Team2, bool Team3); // Function Hardwired.HWTurret.SetFriendlyTeams // (Final|Native|Public|BlueprintCallable) // @ game+0x1071af0
	void OnTurretStateChanged(enum class EHWTurretState NewState, enum class EHWTurretState OldState); // Function Hardwired.HWTurret.OnTurretStateChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnRep_Weapon(); // Function Hardwired.HWTurret.OnRep_Weapon // (Final|Native|Public) // @ game+0x1070a30
	void OnPerceptionUpdated(struct TArray<struct AActor*> UpdatedActors); // Function Hardwired.HWTurret.OnPerceptionUpdated // (Final|Native|Public|HasOutParms) // @ game+0x1070980
	void OnHit(struct AHWCharacter* Shooter, struct FHitResult Hit, struct AHWWeapon* ShooterWeapon); // Function Hardwired.HWTurret.OnHit // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	bool IsTeamFriendly(int32_t Team); // Function Hardwired.HWTurret.IsTeamFriendly // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x106eb20
	void EndFire(); // Function Hardwired.HWTurret.EndFire // (Final|Native|Public|BlueprintCallable) // @ game+0x106c300
	void BeginFire(); // Function Hardwired.HWTurret.BeginFire // (Final|Native|Public|BlueprintCallable) // @ game+0x106bc70
};

// Class Hardwired.HWTutorialGameMode
// Size: 0x2e0 (Inherited: 0x2c0)
struct AHWTutorialGameMode : AGameModeBase {
	struct FString TutorialPlayerJson; // 0x2c0(0x10)
	char pad_2D0[0x10]; // 0x2d0(0x10)

	void InitTutorialPlayer(); // Function Hardwired.HWTutorialGameMode.InitTutorialPlayer // (Final|Native|Private) // @ game+0x106e8b0
};

// Class Hardwired.HWLootItem
// Size: 0x58 (Inherited: 0x28)
struct UHWLootItem : UObject {
	enum class EHWLootTypeForUI Type; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FText Text; // 0x30(0x18)
	struct TArray<struct FString> TypeDetails; // 0x48(0x10)
};

// Class Hardwired.HWUIBPL
// Size: 0x28 (Inherited: 0x28)
struct UHWUIBPL : UBlueprintFunctionLibrary {

	struct AHWWeapon* SpawnWeaponWithPart(struct UObject* WorldContextObject, struct FVector SpawnPos, struct FHWWeaponInfo WeaponInfo, enum class EHWWeaponPartType PreviewPart, struct FName PreviewPartId, struct FName PreviewCosmeticId, struct AHWCharacter* Owner, struct UObject* WeaponBaseClass, struct UWorld* CustomWorld); // Function Hardwired.HWUIBPL.SpawnWeaponWithPart // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x10747d0
	struct AHWWeapon* SpawnWeaponFromData(struct UObject* WorldContextObject, struct FVector SpawnPos, struct FHWWeaponParts Data, struct AHWCharacter* Owner, struct UObject* WeaponBaseClass); // Function Hardwired.HWUIBPL.SpawnWeaponFromData // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x10744a0
	struct AHWWeapon* SpawnWeapon(struct UObject* WorldContextObject, struct FVector SpawnPos, struct FHWWeaponInfo Weapon, struct AHWCharacter* Owner, struct UObject* WeaponBaseClass, struct UWorld* CustomWorld); // Function Hardwired.HWUIBPL.SpawnWeapon // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1074190
	void SortStringToStringMapByValue(struct TMap<struct FString, struct FString> InMap, struct TMap<struct FString, struct FString> OutMap); // Function Hardwired.HWUIBPL.SortStringToStringMapByValue // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1073fd0
	void SortArmoryWeaponModelsInDisplayOrder(struct UObject* WorldContextObject, struct TArray<struct UHWArmoryWeaponModel*> InItems, struct TArray<struct UHWArmoryWeaponModel*> OutItems); // Function Hardwired.HWUIBPL.SortArmoryWeaponModelsInDisplayOrder // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1073e80
	void SortArmoryItemsInDisplayOrder(struct UObject* WorldContextObject, struct TArray<struct UHWArmoryItem*> InItems, struct TArray<struct UHWArmoryItem*> OutItems); // Function Hardwired.HWUIBPL.SortArmoryItemsInDisplayOrder // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1073d30
	void ShowSimpleRewardsPopup(struct UObject* WorldContextObject, struct TArray<struct FHWReward> Rewards, struct FText Title, struct FText Message, struct FText CollectButtonTitle, struct FDelegate Callback, bool DisableCollect); // Function Hardwired.HWUIBPL.ShowSimpleRewardsPopup // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1073910
	void ShowPurchasePopup(struct UObject* WorldContextObject, struct FText Title, struct FText Message, struct FString OfferedPrice, struct FString ActualPrice, enum class EHWCurrencyType CurrencyType, struct FDelegate Callback, struct FText OkButtonTitle, struct FText CancelButtonTitle, enum class EHWGenericPopupStyle Style); // Function Hardwired.HWUIBPL.ShowPurchasePopup // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1073460
	void ShowNotificationPopup(struct UObject* WorldContextObject, struct FText Timestamp, struct FText Title, struct FText Message, struct FDelegate Callback, struct FText OkButtonTitle, struct FText CancelButtonTitle, bool isOneOptionPopup); // Function Hardwired.HWUIBPL.ShowNotificationPopup // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1073010
	void ShowMessagePopup(struct UObject* WorldContextObject, struct FText Title, struct FText Message, struct FDelegate Callback, struct FText OkButtonTitle, enum class EHWGenericPopupStyle Style, enum class ETextJustify Justification); // Function Hardwired.HWUIBPL.ShowMessagePopup // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1072cd0
	void ShowInputPopup(struct UObject* WorldContextObject, struct FText Title, struct FText Message, struct FString InputText, struct TArray<struct FText> InputOptions, struct FDelegate Callback, struct FText OkButtonTitle, struct FText CancelButtonTitle, enum class EHWGenericPopupStyle Style, enum class EHWGenericPopupInputType InputType); // Function Hardwired.HWUIBPL.ShowInputPopup // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1072780
	void ShowErrorPopup(struct UObject* WorldContextObject, enum class EHWErrorMessage Error, struct FDelegate Callback); // Function Hardwired.HWUIBPL.ShowErrorPopup // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1072660
	void ShowDismantlePopup(struct UObject* WorldContextObject, struct FText Title, struct FText Message, int32_t Credits, int32_t Materials, enum class EHWFaction Faction, struct FDelegate Callback, struct FText OkButtonTitle, struct FText CancelButtonTitle, enum class EHWGenericPopupStyle Style); // Function Hardwired.HWUIBPL.ShowDismantlePopup // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x10721e0
	void ShowConfirmationPopup(struct UObject* WorldContextObject, struct FText Title, struct FText Message, struct FDelegate Callback, struct FText OkButtonTitle, struct FText CancelButtonTitle, enum class EHWGenericPopupStyle Style); // Function Hardwired.HWUIBPL.ShowConfirmationPopup // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1071e30
	void ResolveSocketOverlaps(struct TMap<enum class EHWWeaponPartType, struct FVector2D> InMap, struct TMap<enum class EHWWeaponPartType, struct FVector2D> OutMap, struct FVector2D BoxSize, int32_t MaxIterations); // Function Hardwired.HWUIBPL.ResolveSocketOverlaps // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1071830
	void ResolveBoxOverlaps(struct TArray<struct FVector2D> InPositions, struct TArray<struct FVector2D> OutPositions, struct FVector2D BoxSize, int32_t MaxIterations); // Function Hardwired.HWUIBPL.ResolveBoxOverlaps // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1071690
	struct FString ReplaceWithRandomLetters(struct FString InputString, int32_t FromIndex, int32_t ToIndex, struct FString Letters, bool ReplaceSpace); // Function Hardwired.HWUIBPL.ReplaceWithRandomLetters // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x10714a0
	struct FHWWeaponInfo ReplacePartInWeaponInfo(struct UObject* WorldContextObject, struct FHWWeaponInfo InInfo, enum class EHWWeaponPartType ModifiedPartType, struct FName ModifiedPartId); // Function Hardwired.HWUIBPL.ReplacePartInWeaponInfo // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1071210
	struct FHWWeaponInfo RemovePartFromWeaponInfo(struct UObject* WorldContextObject, struct FHWWeaponInfo InInfo, enum class EHWWeaponPartType ModifiedPartType); // Function Hardwired.HWUIBPL.RemovePartFromWeaponInfo // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1070fc0
	void PushPopupStack(struct UObject* WorldContextObject, struct UHWWidgetBase* Popup); // Function Hardwired.HWUIBPL.PushPopupStack // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1070f00
	struct UHWWidgetBase* PopPopupStack(struct UObject* WorldContextObject); // Function Hardwired.HWUIBPL.PopPopupStack // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1070e70
	void PlayUISound(struct UObject* WorldContextObject, struct UAkAudioEvent* Event); // Function Hardwired.HWUIBPL.PlayUISound // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1070db0
	enum class EHWWeaponType ParseWeaponType(struct FName Input); // Function Hardwired.HWUIBPL.ParseWeaponType // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1070d20
	enum class EHWWeaponPartType ParseWeaponPartType(struct FName Input); // Function Hardwired.HWUIBPL.ParseWeaponPartType // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1070c90
	enum class EHWWeaponCategory ParseWeaponCategory(struct FName Input); // Function Hardwired.HWUIBPL.ParseWeaponCategory // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1070c00
	enum class EHWVendor ParseVendor(struct FName Input); // Function Hardwired.HWUIBPL.ParseVendor // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1070b70
	enum class EHWRarity ParseRarity(struct FName Input); // Function Hardwired.HWUIBPL.ParseRarity // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1070ae0
	enum class EHWArmorType ParseArmorType(struct FName Input); // Function Hardwired.HWUIBPL.ParseArmorType // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1070a50
	struct FVector2D MouseEventToWidgetCoordinates(struct FGeometry Geo, struct FPointerEvent MouseEvent, struct FString PressedKey, struct FEventReply EventReply); // Function Hardwired.HWUIBPL.MouseEventToWidgetCoordinates // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1070500
	struct UHWWeaponParameters* MakeWeaponParametersForWeaponWithModifications(struct UObject* WorldContextObject, struct UHWPlayerProfile* Player, struct FString ReceiverItemId, struct FHWWeaponModificationParameters Modifications); // Function Hardwired.HWUIBPL.MakeWeaponParametersForWeaponWithModifications // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1070390
	struct UHWWeaponParameters* MakeWeaponParametersForWeaponWithCode(struct UObject* WorldContextObject, struct UHWPlayerProfile* Player, struct FString ReceiverItemId, struct FString CodeItemId); // Function Hardwired.HWUIBPL.MakeWeaponParametersForWeaponWithCode // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1070210
	struct UHWWeaponParameters* MakeWeaponParametersForWeaponModelWithModifications(struct UObject* WorldContextObject, struct UHWPlayerProfile* Player, struct FName ReceiverId, struct FHWWeaponModificationParameters Modifications); // Function Hardwired.HWUIBPL.MakeWeaponParametersForWeaponModelWithModifications // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x10700a0
	struct UHWWeaponParameters* MakeWeaponParametersForWeaponModelWithCode(struct UObject* WorldContextObject, struct UHWPlayerProfile* Player, struct FName WeaponID, struct FString CodeItemId); // Function Hardwired.HWUIBPL.MakeWeaponParametersForWeaponModelWithCode // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x106ff40
	struct UHWWeaponParameters* MakeWeaponParametersForWeaponModel(struct UObject* WorldContextObject, struct UHWPlayerProfile* Player, struct FName PartId); // Function Hardwired.HWUIBPL.MakeWeaponParametersForWeaponModel // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x106fe40
	struct UHWWeaponParameters* MakeWeaponParametersForWeaponItem(struct UObject* WorldContextObject, struct UHWPlayerProfile* Player, struct FHWWeaponItem WeaponItem); // Function Hardwired.HWUIBPL.MakeWeaponParametersForWeaponItem // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x106fcf0
	struct UHWWeaponParameters* MakeWeaponParametersForWeapon(struct UObject* WorldContextObject, struct UHWPlayerProfile* Player, struct FString ReceiverItemId); // Function Hardwired.HWUIBPL.MakeWeaponParametersForWeapon // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x106fbc0
	struct UHWWeaponParameters* MakeWeaponParametersForPart(struct UObject* WorldContextObject, struct FName PartId); // Function Hardwired.HWUIBPL.MakeWeaponParametersForPart // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x106faf0
	struct UHWWeaponParameters* MakeWeaponParametersForAssembledWeapon(struct UObject* WorldContextObject, struct FName AssembledWeaponId); // Function Hardwired.HWUIBPL.MakeWeaponParametersForAssembledWeapon // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x106fa20
	struct UHWArmoryWeaponItem* MakeWeaponItemWithType(struct UObject* WorldContextObject, enum class EHWWeaponItemType Type, struct FName PartId, struct FName BlueprintId, enum class EHWRarity Rarity); // Function Hardwired.HWUIBPL.MakeWeaponItemWithType // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x106f890
	struct UHWArmoryWeaponItem* MakeWeaponItem(struct UObject* WorldContextObject, struct FHWWeaponItem WeaponItem); // Function Hardwired.HWUIBPL.MakeWeaponItem // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x106f780
	void MakeWeaponData(struct FName ReceiverPartId, struct FHWWeaponParts OutData); // Function Hardwired.HWUIBPL.MakeWeaponData // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x106f560
	struct UHWPartItem* MakePartItem(struct UObject* WorldContextObject, enum class EHWWeaponPartType PartType, struct FHWWeaponPartRef PartRef, bool IsSelected, bool IsDefaultPart); // Function Hardwired.HWUIBPL.MakePartItem // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x106f390
	struct UHWWeaponParameters* MakeNewWeaponParametersForWeaponWithCode(struct UObject* WorldContextObject, struct UHWPlayerProfile* Player, struct FString WeaponItemId, struct FName ReceiverId, struct FHWWeaponCodeItem WeaponCode); // Function Hardwired.HWUIBPL.MakeNewWeaponParametersForWeaponWithCode // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x106eff0
	struct UHWPartItem* MakeLockedPartItem(struct UObject* WorldContextObject, enum class EHWWeaponPartType PartType, struct FHWWeaponPartRef PartRef, struct FText LockedReason); // Function Hardwired.HWUIBPL.MakeLockedPartItem // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x106ee40
	struct UHWArmoryItem* MakeArmoryItemForWeaponModel(struct UObject* WorldContextObject, struct FName WeaponPartId); // Function Hardwired.HWUIBPL.MakeArmoryItemForWeaponModel // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x106ed70
	bool IsUsernameValid(struct FString Username, enum class EHWUsernameFormatError FormatError, struct FText ErrorMessage); // Function Hardwired.HWUIBPL.IsUsernameValid // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x106ebc0
	bool IsLoadoutEqual(struct FHWLoadoutData A, struct FHWLoadoutData B); // Function Hardwired.HWUIBPL.IsLoadoutEqual // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x106e8d0
	struct FText GetWeaponPartName(struct FName PartId); // Function Hardwired.HWUIBPL.GetWeaponPartName // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x106e7c0
	struct FText GetWeaponPartDescription(struct FName PartId); // Function Hardwired.HWUIBPL.GetWeaponPartDescription // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x106e6d0
	int32_t GetWeaponCostValue(struct UObject* WorldContextObject, enum class EHWWeaponCostType CostType, struct FName PartId, enum class EHWRarity Rarity); // Function Hardwired.HWUIBPL.GetWeaponCostValue // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x106e580
	void GetVisibleListItems(struct UListView* ListView, int32_t FirstVisibleIndex, int32_t LastVisibleIndex, int32_t VisibleCount); // Function Hardwired.HWUIBPL.GetVisibleListItems // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x106e410
	struct FText GetVendorName(enum class EHWVendor Vendor); // Function Hardwired.HWUIBPL.GetVendorName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x106e330
	enum class EHWVendor GetVendorForFaction(enum class EHWFaction Faction); // Function Hardwired.HWUIBPL.GetVendorForFaction // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x106e2b0
	bool GetUserNameParameter(struct UObject* Context, struct FString Username); // Function Hardwired.HWUIBPL.GetUserNameParameter // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x106e1c0
	struct UObject* GetUserListItemFromEntryWidget(struct UUserWidget* ItemWidget); // Function Hardwired.HWUIBPL.GetUserListItemFromEntryWidget // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x106e130
	enum class EHWTeamResponse GetTeamResponse(struct AHWCharacter* Character); // Function Hardwired.HWUIBPL.GetTeamResponse // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x106e0a0
	int32_t GetRarityValueFromIntArray(struct TArray<int32_t> Array, enum class EHWRarity Rarity); // Function Hardwired.HWUIBPL.GetRarityValueFromIntArray // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x106db20
	float GetRarityValueFromFloatArray(struct TArray<float> Array, enum class EHWRarity Rarity); // Function Hardwired.HWUIBPL.GetRarityValueFromFloatArray // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x106d9f0
	bool GetPasswordParameter(struct FString Password); // Function Hardwired.HWUIBPL.GetPasswordParameter // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x106d380
	enum class EHWRarity GetNextRarity(enum class EHWRarity Rarity); // Function Hardwired.HWUIBPL.GetNextRarity // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x106d970
	struct FText GetMissionDescription(struct FName ConfigId, bool bShortDescription, bool bFound); // Function Hardwired.HWUIBPL.GetMissionDescription // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x106d7f0
	struct TArray<struct UHWLootItem*> GetLootTable(struct UObject* WorldContextObject, struct TArray<struct FString> RewardIds); // Function Hardwired.HWUIBPL.GetLootTable // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x106d6a0
	void GetGroupedRewards(struct TArray<struct FHWReward> Rewards, struct TArray<struct FHWRewardGroup> Grouped); // Function Hardwired.HWUIBPL.GetGroupedRewards // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x106d4c0
	enum class EWindowMode GetGameWindowMode(struct UObject* WorldContextObject); // Function Hardwired.HWUIBPL.GetGameWindowMode // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x106d430
	bool GetGameServerParameter(struct FString GameServer); // Function Hardwired.HWUIBPL.GetGameServerParameter // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x106d380
	struct TArray<struct AHWPlayerState*> GetFriendlyPlayerStates(struct UObject* WorldContextObject); // Function Hardwired.HWUIBPL.GetFriendlyPlayerStates // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x106d2b0
	enum class EHWFaction GetFactionForVendor(enum class EHWVendor Vendor); // Function Hardwired.HWUIBPL.GetFactionForVendor // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x106d230
	struct TArray<struct AHWPlayerState*> GetEnemyPlayerStates(struct UObject* WorldContextObject); // Function Hardwired.HWUIBPL.GetEnemyPlayerStates // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x106d160
	void GetCraftingParametersGroupsForItem(struct UObject* WorldContextObject, struct FName PartId, struct TArray<enum class EHWCraftingParameterGroup> Groups); // Function Hardwired.HWUIBPL.GetCraftingParametersGroupsForItem // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x106d040
	enum class EHWWeaponType GetCraftedWeaponType(struct UObject* WorldContextObject, struct FString ReceiverId); // Function Hardwired.HWUIBPL.GetCraftedWeaponType // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x106cf10
	struct FText GetAssembledWeaponName(struct FName PartId); // Function Hardwired.HWUIBPL.GetAssembledWeaponName // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x106cd10
	struct FText GetAssembledWeaponDescription(struct FName PartId); // Function Hardwired.HWUIBPL.GetAssembledWeaponDescription // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x106cc20
	struct FText GetArmorSetName(struct FName ID); // Function Hardwired.HWUIBPL.GetArmorSetName // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x106cb30
	struct FText GetArmorSetBaseName(struct FName ID); // Function Hardwired.HWUIBPL.GetArmorSetBaseName // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x106ca40
	void GetArmorSetArmors(struct FName ArmorSetId, struct FName ArmorHead, struct FName ArmorChest, struct FName ArmorLegs); // Function Hardwired.HWUIBPL.GetArmorSetArmors // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x106c8d0
	struct FText GetArmorName(struct FName PartId); // Function Hardwired.HWUIBPL.GetArmorName // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x106c7e0
	struct FText GetArmorDescription(struct FName PartId); // Function Hardwired.HWUIBPL.GetArmorDescription // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x106c6f0
	struct FText GetAbilityName(struct AHWDroneAbility* AbilityClass); // Function Hardwired.HWUIBPL.GetAbilityName // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x106c600
	struct UTexture2D* GetAbilityImage(struct AHWDroneAbility* AbilityClass); // Function Hardwired.HWUIBPL.GetAbilityImage // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x106c570
	struct FText GetAbilityDescription(struct AHWDroneAbility* AbilityClass); // Function Hardwired.HWUIBPL.GetAbilityDescription // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x106c480
	void ForceMipsResident(struct AActor* Actor); // Function Hardwired.HWUIBPL.ForceMipsResident // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x106c320
	void DevSetCheatsVisible(struct UObject* WorldContextObject, bool Visible); // Function Hardwired.HWUIBPL.DevSetCheatsVisible // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x106c240
	struct FHWReward ConvertBoxToReward(struct FHWRewardBoxesData Data); // Function Hardwired.HWUIBPL.ConvertBoxToReward // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x106c100
	enum class EHWRarityComparisonType CompareRarities(enum class EHWRarity A, enum class EHWRarity B); // Function Hardwired.HWUIBPL.CompareRarities // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x106c040
	void CloseAllPopups(struct UObject* WorldContextObject); // Function Hardwired.HWUIBPL.CloseAllPopups // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x106bfc0
	bool AreCheatsVisible(struct UObject* WorldContextObject); // Function Hardwired.HWUIBPL.AreCheatsVisible // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x106bbe0
};

// Class Hardwired.HWUIListener
// Size: 0x28 (Inherited: 0x28)
struct UHWUIListener : UInterface {

	void OnVoiceChatToggled(bool Active); // Function Hardwired.HWUIListener.OnVoiceChatToggled // (Native|Event|Public|BlueprintEvent) // @ game+0x1011360
	void OnToastMessageAdded(struct FHWToastMessageData Data); // Function Hardwired.HWUIListener.OnToastMessageAdded // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnTextChatDeactivated(); // Function Hardwired.HWUIListener.OnTextChatDeactivated // (Native|Event|Public|BlueprintEvent) // @ game+0x1024260
	void OnTextChatActivated(); // Function Hardwired.HWUIListener.OnTextChatActivated // (Native|Event|Public|BlueprintEvent) // @ game+0x10669b0
	void OnTeamObjectiveStatusChanged(struct FText Text, int32_t Team); // Function Hardwired.HWUIListener.OnTeamObjectiveStatusChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeamMembersChanged(struct TArray<struct FHWTeamPlayer> MyTeamPlayers); // Function Hardwired.HWUIListener.OnTeamMembersChanged // (Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x107bb70
	void OnTeamInvitationsUpdated(struct TArray<struct FHWTeamInvitation> Invitations); // Function Hardwired.HWUIListener.OnTeamInvitationsUpdated // (Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x107ba70
	void OnRoundHeaderUpdated(); // Function Hardwired.HWUIListener.OnRoundHeaderUpdated // (Native|Event|Public|BlueprintEvent) // @ game+0x1066240
	void OnPlayerStateAdded(struct APlayerState* PlayerState); // Function Hardwired.HWUIListener.OnPlayerStateAdded // (Native|Event|Public|BlueprintEvent) // @ game+0x1017e70
	void OnPlayerReadyCountUpdated(int32_t NumReady, int32_t Total); // Function Hardwired.HWUIListener.OnPlayerReadyCountUpdated // (Native|Event|Public|BlueprintEvent) // @ game+0x107b830
	void OnPlayerObjectveImageChanged(struct AHWPlayerState* InPlayerState, struct UTexture2D* Texture); // Function Hardwired.HWUIListener.OnPlayerObjectveImageChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnObjectiveTextUpdated(); // Function Hardwired.HWUIListener.OnObjectiveTextUpdated // (Native|Event|Public|BlueprintEvent) // @ game+0x1066220
	void OnObjectiveCardUpdated(); // Function Hardwired.HWUIListener.OnObjectiveCardUpdated // (Native|Event|Public|BlueprintEvent) // @ game+0x10669d0
	void OnMyReadystateChanged(bool bNewValue); // Function Hardwired.HWUIListener.OnMyReadystateChanged // (Native|Event|Public|BlueprintEvent) // @ game+0x107b7a0
	void OnKillsUpdated(int32_t Kills); // Function Hardwired.HWUIListener.OnKillsUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnItemUnlocked(bool WasSuccessful, struct FString Message); // Function Hardwired.HWUIListener.OnItemUnlocked // (Native|Event|Public|BlueprintEvent) // @ game+0x107b6b0
	void OnInputMappingsUpdated(); // Function Hardwired.HWUIListener.OnInputMappingsUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnHostileTeamChanged(enum class EHWHostileTeam NewHostileTeam); // Function Hardwired.HWUIListener.OnHostileTeamChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnGameplayEvent(enum class EHWGameplayEventType Event); // Function Hardwired.HWUIListener.OnGameplayEvent // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnCurrentObjectiveIndexUpdated(); // Function Hardwired.HWUIListener.OnCurrentObjectiveIndexUpdated // (Native|Event|Public|BlueprintEvent) // @ game+0x1060230
	void OnAssistsUpdated(int32_t Assists); // Function Hardwired.HWUIListener.OnAssistsUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
};

// Class Hardwired.HWVerticalTextBlock
// Size: 0x2b0 (Inherited: 0x2a8)
struct UHWVerticalTextBlock : UTextBlock {
	enum class EHWVerticalTextBoxRotation Rotation; // 0x2a8(0x01)
	char pad_2A9[0x7]; // 0x2a9(0x07)

	void SetRotation(enum class EHWVerticalTextBoxRotation Rotation); // Function Hardwired.HWVerticalTextBlock.SetRotation // (Final|Native|Public|BlueprintCallable) // @ game+0x107ca90
};

// Class Hardwired.HWVisibility3PComponent
// Size: 0x118 (Inherited: 0xb0)
struct UHWVisibility3PComponent : UActorComponent {
	struct FMulticastInlineDelegate OnPrimitiveAdded; // 0xb0(0x10)
	char pad_C0[0x58]; // 0xc0(0x58)

	void SetSpecterVisible(bool Visible); // Function Hardwired.HWVisibility3PComponent.SetSpecterVisible // (Final|Native|Public|BlueprintCallable) // @ game+0x107cb10
	void SetPlayingMatch(bool Value); // Function Hardwired.HWVisibility3PComponent.SetPlayingMatch // (Final|Native|Public|BlueprintCallable) // @ game+0x107ca00
	void RegisterPrimitives(struct TSet<struct UPrimitiveComponent*> Primitives); // Function Hardwired.HWVisibility3PComponent.RegisterPrimitives // (Final|Native|Public|BlueprintCallable) // @ game+0x107c190
	bool IsSystemEnabled(); // Function Hardwired.HWVisibility3PComponent.IsSystemEnabled // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xfb2e70
	void GetPrimitives(struct TArray<struct UPrimitiveComponent*> OutArray); // Function Hardwired.HWVisibility3PComponent.GetPrimitives // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x107b100
	struct FHWClientDiagMessage GetDiagMessage(); // Function Hardwired.HWVisibility3PComponent.GetDiagMessage // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x107a920
	struct UHWVisibility3PComponent* FindVisibility3PComp(struct AActor* Actor, enum class EHWObjectFound Result); // Function Hardwired.HWVisibility3PComponent.FindVisibility3PComp // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x107a3b0
};

// Class Hardwired.HWVoiceChatPlayer
// Size: 0xc0 (Inherited: 0x28)
struct UHWVoiceChatPlayer : UObject {
	struct FHWVoiceChatPlayerState State; // 0x28(0x0c)
	char pad_34[0x4]; // 0x34(0x04)
	struct FString PlayerName; // 0x38(0x10)
	struct FMulticastInlineDelegate OnStateChanged; // 0x48(0x10)
	char pad_58[0x68]; // 0x58(0x68)

	void SetVolume(float Value); // Function Hardwired.HWVoiceChatPlayer.SetVolume // (Final|Native|Public|BlueprintCallable) // @ game+0x107cc30
	void SetMuted(bool Value); // Function Hardwired.HWVoiceChatPlayer.SetMuted // (Final|Native|Public|BlueprintCallable) // @ game+0x107c970
};

// Class Hardwired.HWVoiceChatVivox
// Size: 0x388 (Inherited: 0x28)
struct UHWVoiceChatVivox : UObject {
	struct FMulticastInlineDelegate MicrophoneHotplugChanged; // 0x28(0x10)
	struct FMulticastInlineDelegate OnTextMessageReceived; // 0x38(0x10)
	struct FMulticastInlineDelegate OnChatChannelTypeChanged; // 0x48(0x10)
	struct FMulticastInlineDelegate OnPlayerPresenceChanged; // 0x58(0x10)
	struct FMulticastInlineDelegate OnVoiceChatModeChanged; // 0x68(0x10)
	struct FMulticastInlineDelegate OnLocalPlayerSpeaking; // 0x78(0x10)
	char pad_88[0x208]; // 0x88(0x208)
	struct UInputComponent* InputComponent; // 0x290(0x08)
	struct TMap<struct FString, struct UHWVoiceChatPlayer*> ActivePlayerSlots; // 0x298(0x50)
	char pad_2E8[0xa0]; // 0x2e8(0xa0)

	void ToggleVoiceEnabled(); // Function Hardwired.HWVoiceChatVivox.ToggleVoiceEnabled // (Final|Native|Public) // @ game+0x107cd60
	void SetVoiceEnabled(bool Enabled); // Function Hardwired.HWVoiceChatVivox.SetVoiceEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x107cba0
	void SendTeamTextMessage(struct FString Msg); // Function Hardwired.HWVoiceChatVivox.SendTeamTextMessage // (Final|Native|Public|BlueprintCallable) // @ game+0x107c2f0
	void QuitPartyChannel(); // Function Hardwired.HWVoiceChatVivox.QuitPartyChannel // (Final|Native|Public|BlueprintCallable) // @ game+0x107c140
	void QuitFireTeamChannel(); // Function Hardwired.HWVoiceChatVivox.QuitFireTeamChannel // (Final|Native|Public|BlueprintCallable) // @ game+0x107c0f0
	void PlayTextToSpeech(struct FString Text); // Function Hardwired.HWVoiceChatVivox.PlayTextToSpeech // (Final|Native|Public|BlueprintCallable) // @ game+0x107c050
	bool IsVoiceEnabled(); // Function Hardwired.HWVoiceChatVivox.IsVoiceEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x107b550
	bool IsMicrophoneConnected(); // Function Hardwired.HWVoiceChatVivox.IsMicrophoneConnected // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1048670
	bool IsLocalPlayerSpeaking(); // Function Hardwired.HWVoiceChatVivox.IsLocalPlayerSpeaking // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x107b530
	bool HasVivoxError(int32_t Code); // Function Hardwired.HWVoiceChatVivox.HasVivoxError // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x107b4a0
	enum class EHWVoiceChatMode GetVoiceChatMode(); // Function Hardwired.HWVoiceChatVivox.GetVoiceChatMode // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x107b340
	void GetStatus(struct FHWVoiceChatStatus Status); // Function Hardwired.HWVoiceChatVivox.GetStatus // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x107b2a0
	struct TSet<struct FString> GetPresentPlayers(); // Function Hardwired.HWVoiceChatVivox.GetPresentPlayers // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x107b0d0
	struct UHWVoiceChatPlayer* GetPlayer(struct FString ID, struct UObject* Referencer); // Function Hardwired.HWVoiceChatVivox.GetPlayer // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x107afe0
	struct FString GetLocalPlayerID(); // Function Hardwired.HWVoiceChatVivox.GetLocalPlayerID // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x107acb0
	struct UHWVoiceChatVivox* GetHWVoiceChat(struct UObject* Context); // Function Hardwired.HWVoiceChatVivox.GetHWVoiceChat // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x107ab60
	void GetDebugInfo(struct FString Info); // Function Hardwired.HWVoiceChatVivox.GetDebugInfo // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x107a870
	enum class EHWChatChannelType GetActiveChannel(); // Function Hardwired.HWVoiceChatVivox.GetActiveChannel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x107a600
	struct UHWVoiceChatPlayer* FindPlayer(struct FString ID); // Function Hardwired.HWVoiceChatVivox.FindPlayer // (Final|Native|Public) // @ game+0x107a300
	void FetchMessageHistory(struct TArray<struct FHWTextChatMessage> Messages, int32_t Depth, enum class EHWChatChannelType Channel); // Function Hardwired.HWVoiceChatVivox.FetchMessageHistory // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x107a150
	void EnableTalk(); // Function Hardwired.HWVoiceChatVivox.EnableTalk // (Final|Native|Public|BlueprintCallable) // @ game+0x107a130
	void DisableTalk(); // Function Hardwired.HWVoiceChatVivox.DisableTalk // (Final|Native|Public|BlueprintCallable) // @ game+0x107a110
	void ClearHistory(enum class EHWChatChannelType Channel); // Function Hardwired.HWVoiceChatVivox.ClearHistory // (Final|Native|Public|BlueprintCallable) // @ game+0x1079d50
	void ChangeChannel(); // Function Hardwired.HWVoiceChatVivox.ChangeChannel // (Final|Native|Public|BlueprintCallable) // @ game+0x1079d30
};

// Class Hardwired.HWArmoryWeaponItem
// Size: 0x70 (Inherited: 0x28)
struct UHWArmoryWeaponItem : UObject {
	enum class EHWWeaponItemType Type; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	struct FName PartId; // 0x2c(0x08)
	struct FName BlueprintId; // 0x34(0x08)
	enum class EHWVendor Vendor; // 0x3c(0x01)
	enum class EHWRarity Rarity; // 0x3d(0x01)
	char pad_3E[0x2]; // 0x3e(0x02)
	struct FString ItemId; // 0x40(0x10)
	int32_t UpgradePointAmount; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct FMulticastInlineDelegate OnChanged; // 0x58(0x10)
	bool IsItemSelected; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)

	void SetItemSelected(bool InSelected); // Function Hardwired.HWArmoryWeaponItem.SetItemSelected // (Final|Native|Public|BlueprintCallable) // @ game+0x10817c0
	void Refresh(); // Function Hardwired.HWArmoryWeaponItem.Refresh // (Final|Native|Public|BlueprintCallable) // @ game+0x9ad4e0
};

// Class Hardwired.HWPartItem
// Size: 0x58 (Inherited: 0x28)
struct UHWPartItem : UObject {
	enum class EHWInventoryItemType ItemType; // 0x28(0x01)
	enum class EHWWeaponPartType PartType; // 0x29(0x01)
	char pad_2A[0x2]; // 0x2a(0x02)
	struct FName PartId; // 0x2c(0x08)
	struct FName CosmeticId; // 0x34(0x08)
	bool IsDefaultPart; // 0x3c(0x01)
	bool IsSelected; // 0x3d(0x01)
	bool IsLocked; // 0x3e(0x01)
	char pad_3F[0x1]; // 0x3f(0x01)
	struct FText LockedReason; // 0x40(0x18)
};

// Class Hardwired.HWWeaponParameters
// Size: 0x38 (Inherited: 0x28)
struct UHWWeaponParameters : UObject {
	struct TArray<struct UHWWeaponParameter*> Parameters; // 0x28(0x10)

	void SetComparison(struct UHWWeaponParameters* Other); // Function Hardwired.HWWeaponParameters.SetComparison // (Final|Native|Public|BlueprintCallable) // @ game+0x1081730
	float GetPercentageForGroup(enum class EHWCraftingParameterGroup Group); // Function Hardwired.HWWeaponParameters.GetPercentageForGroup // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x107fed0
	struct TArray<struct UHWWeaponParameter*> GetParametersForGroup(enum class EHWCraftingParameterGroup Group); // Function Hardwired.HWWeaponParameters.GetParametersForGroup // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x107fd50
	struct TArray<enum class EHWCraftingParameterGroup> GetParameterGroups(); // Function Hardwired.HWWeaponParameters.GetParameterGroups // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x107fcd0
	struct UHWWeaponParameter* GetParameter(enum class EHWCraftingParameter Parameter); // Function Hardwired.HWWeaponParameters.GetParameter // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x107fc40
	float GetGameplayValue(enum class EHWCraftingParameter Parameter, float DefaultValue); // Function Hardwired.HWWeaponParameters.GetGameplayValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x107faa0
	void GetDisplayValues(enum class EHWCraftingParameter Parameter, float Current, float Min, float Max); // Function Hardwired.HWWeaponParameters.GetDisplayValues // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x107f880
	struct TArray<struct UHWWeaponParameter*> GetChangedParameters(); // Function Hardwired.HWWeaponParameters.GetChangedParameters // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x107f770
	bool CompareDisplayValues(int32_t SignMin, int32_t SignMax); // Function Hardwired.HWWeaponParameters.CompareDisplayValues // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x107f460
	void ClearComparison(); // Function Hardwired.HWWeaponParameters.ClearComparison // (Final|Native|Public|BlueprintCallable) // @ game+0x107f440
	void Add(struct UHWWeaponParameters* Other); // Function Hardwired.HWWeaponParameters.Add // (Final|Native|Public|BlueprintCallable) // @ game+0x107e930
};

// Class Hardwired.HWWeaponParameter
// Size: 0x50 (Inherited: 0x28)
struct UHWWeaponParameter : UObject {
	enum class EHWCraftingParameter Parameter; // 0x28(0x01)
	enum class EHWCraftingParameterGroup ParameterGroup; // 0x29(0x01)
	char pad_2A[0x6]; // 0x2a(0x06)
	struct UHWWeaponParameter* Comparison; // 0x30(0x08)
	bool IsPercentage; // 0x38(0x01)
	char pad_39[0x17]; // 0x39(0x17)

	bool IsZero(); // Function Hardwired.HWWeaponParameter.IsZero // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1080f00
	bool IsFixed(); // Function Hardwired.HWWeaponParameter.IsFixed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1080bb0
	bool HasComparison(); // Function Hardwired.HWWeaponParameter.HasComparison // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1080b80
	float GetPercentage(float Multiplier); // Function Hardwired.HWWeaponParameter.GetPercentage // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x107fe30
	float GetGameplayValue(enum class EHWWeaponParameterValueType ValueType); // Function Hardwired.HWWeaponParameter.GetGameplayValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x107fa10
	float GetDisplayValue(enum class EHWWeaponParameterValueType ValueType); // Function Hardwired.HWWeaponParameter.GetDisplayValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x107f7f0
	void Add(struct UHWWeaponParameter* Other); // Function Hardwired.HWWeaponParameter.Add // (Final|Native|Public|BlueprintCallable) // @ game+0x107e8a0
};

// Class Hardwired.HWWeaponPartBPL
// Size: 0x28 (Inherited: 0x28)
struct UHWWeaponPartBPL : UBlueprintFunctionLibrary {

	void UpdateWeaponPart(struct FHWWeaponInfo Weapon, enum class EHWWeaponPartType Type, struct FHWWeaponPartRef Part); // Function Hardwired.HWWeaponPartBPL.UpdateWeaponPart // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1081980
	void ResolveWeaponPartIds(enum class EHWWeaponPartType Type, struct FHWWeaponPartRef Part, struct FName OutPartId, struct FName OutCosmeticId); // Function Hardwired.HWWeaponPartBPL.ResolveWeaponPartIds // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x10815b0
	bool IsVanityWeaponPartType(enum class EHWWeaponPartType PartType); // Function Hardwired.HWWeaponPartBPL.IsVanityWeaponPartType // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1080e80
	bool IsPartCompatible(struct FHWWeaponPartData ReceiverData, struct FHWWeaponPartData PartData); // Function Hardwired.HWWeaponPartBPL.IsPartCompatible // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1080d10
	bool IsHiddenCosmeticWeaponPart(struct FHWWeaponCosmeticPartData Data); // Function Hardwired.HWWeaponPartBPL.IsHiddenCosmeticWeaponPart // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1080be0
	struct FText GetWeaponTypeText(struct FHWWeaponParts WeaponData); // Function Hardwired.HWWeaponPartBPL.GetWeaponTypeText // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1080910
	struct FText GetWeaponScopeName(struct UHWPlayerProfile* Player, struct FString ReceiverId); // Function Hardwired.HWWeaponPartBPL.GetWeaponScopeName // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1080780
	struct FText GetWeaponPartNameForWeapon(struct UHWPlayerProfile* Player, struct FString ReceiverId, enum class EHWWeaponPartType Type); // Function Hardwired.HWWeaponPartBPL.GetWeaponPartNameForWeapon // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x10805c0
	struct FHWWeaponPartData GetWeaponPart(struct FName PartId); // Function Hardwired.HWWeaponPartBPL.GetWeaponPart // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x10802e0
	struct FName GetReceiverFromWeaponParts(struct FHWWeaponParts Parts); // Function Hardwired.HWWeaponPartBPL.GetReceiverFromWeaponParts // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x107ff60
	void CalculateBaseAttributes(struct FHWWeaponParts WeaponData, struct FHWWeaponAttributes OutAttributes); // Function Hardwired.HWWeaponPartBPL.CalculateBaseAttributes // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x107f140
	bool BuildWeaponFromInventory(struct UObject* WorldContextObject, struct UHWPlayerProfile* Player, struct FString ReceiverItemId, struct FHWWeaponParts OutData, struct FHWWeaponAttributes OutAttributes); // Function Hardwired.HWWeaponPartBPL.BuildWeaponFromInventory // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x107ed30
	void ApplyRecoilMultipliersFromPart(struct FHWWeaponAttributes Attributes, struct FHWWeaponPartData PartData); // Function Hardwired.HWWeaponPartBPL.ApplyRecoilMultipliersFromPart // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x107e9c0
};

// Class Hardwired.HWWeaponProfile
// Size: 0x68 (Inherited: 0x28)
struct UHWWeaponProfile : UObject {
	struct FAngleAndDistance BaseSway; // 0x28(0x08)
	struct FAngleAndDistance BaseSwayTurning; // 0x30(0x08)
	struct FAngleAndDistance SwayMultiplierWalking; // 0x38(0x08)
	struct FAngleAndDistance SwayMultiplierSprinting; // 0x40(0x08)
	struct FAngleAndDistance SwayMultiplierCrouching; // 0x48(0x08)
	struct UCurveFloat* ArmorDamageCurve; // 0x50(0x08)
	struct UCurveFloat* RecoilStabilityCurve; // 0x58(0x08)
	float AimedSensitivityMultiplier; // 0x60(0x04)
	float BurstSensitivityMultiplier; // 0x64(0x04)
};

// Class Hardwired.HWWindowModeValueMask
// Size: 0x28 (Inherited: 0x28)
struct UHWWindowModeValueMask : UWindowModeValueMask {
};

