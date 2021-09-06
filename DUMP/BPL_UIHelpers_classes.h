// BlueprintGeneratedClass BPL_UIHelpers.BPL_UIHelpers_C
// Size: 0x28 (Inherited: 0x28)
struct UBPL_UIHelpers_C : UBlueprintFunctionLibrary {

	void GetIconForKey(struct FKey Key, struct UObject* __WorldContext, bool Found, struct UTexture2D* Image); // Function BPL_UIHelpers.BPL_UIHelpers_C.GetIconForKey // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetArmorSetBaseAndSkinName(struct FName ArmorSetId, struct UObject* __WorldContext, struct FText Name); // Function BPL_UIHelpers.BPL_UIHelpers_C.GetArmorSetBaseAndSkinName // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetIntegerFromEndOfString(struct FString String, struct UObject* __WorldContext, bool Found, int32_t IntegerPart, struct FString StringPart); // Function BPL_UIHelpers.BPL_UIHelpers_C.GetIntegerFromEndOfString // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void Get Weapon Part Type(struct FName PartId, struct UObject* __WorldContext, enum class EHWWeaponPartType Type); // Function BPL_UIHelpers.BPL_UIHelpers_C.Get Weapon Part Type // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetNameWithoutHash(struct FString Name, struct UObject* __WorldContext, struct FString SubName); // Function BPL_UIHelpers.BPL_UIHelpers_C.GetNameWithoutHash // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetVoiceNameById(struct FName VoiceId, struct UObject* __WorldContext, struct FText VoiceName); // Function BPL_UIHelpers.BPL_UIHelpers_C.GetVoiceNameById // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetCharacterVoiceDataById(struct FName VoiceId, struct UObject* __WorldContext, struct FBP_CharacterVoice VoiceData); // Function BPL_UIHelpers.BPL_UIHelpers_C.GetCharacterVoiceDataById // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetWeaponStatsUIData(enum class EHW_WeaponVariaitonStats Stats, struct FString WeaponItemId, struct UObject* __WorldContext, struct FText Header, struct UTexture2D* Texture, struct FText StatValue, struct FText Description); // Function BPL_UIHelpers.BPL_UIHelpers_C.GetWeaponStatsUIData // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetMissionRewardDescription(enum class EHWRewardType RewardType, enum class EHWInventoryItemType InventoryItemType, struct FName RewardId, struct UObject* __WorldContext, struct FText Description); // Function BPL_UIHelpers.BPL_UIHelpers_C.GetMissionRewardDescription // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetWeaponPartSubTypeIcon(enum class EHWWeaponPartSubType SubType, struct UObject* __WorldContext, struct UTexture2D* Icon); // Function BPL_UIHelpers.BPL_UIHelpers_C.GetWeaponPartSubTypeIcon // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void StringArrayToText(struct TArray<struct FString> String, struct UObject* __WorldContext, struct TArray<struct FText> Text); // Function BPL_UIHelpers.BPL_UIHelpers_C.StringArrayToText // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetPerformanceAttributeUIData(enum class EHW_PerformanceAttribute Attribute, struct UObject* __WorldContext, struct FText Label, struct UTexture2D* Texture, struct FText StatValue); // Function BPL_UIHelpers.BPL_UIHelpers_C.GetPerformanceAttributeUIData // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetHealthColor(struct UObject* __WorldContext, struct FLinearColor HealthColor); // Function BPL_UIHelpers.BPL_UIHelpers_C.GetHealthColor // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetArmorColor(struct UObject* __WorldContext, struct FLinearColor ArmorColor); // Function BPL_UIHelpers.BPL_UIHelpers_C.GetArmorColor // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetRoundIntroText(struct FString FlowName, int32_t Round, bool WonLastRound, struct UObject* __WorldContext, struct FText Text); // Function BPL_UIHelpers.BPL_UIHelpers_C.GetRoundIntroText // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetCurrentCharacter(struct UObject* WorldContextObject, struct UObject* __WorldContext, struct AHWPlayerCharacter* Character); // Function BPL_UIHelpers.BPL_UIHelpers_C.GetCurrentCharacter // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetRelevantParamGroupsForParts(struct TArray<struct FName> PartIds, struct UObject* __WorldContext, struct TArray<enum class EHWCraftingParameterGroup> Groups); // Function BPL_UIHelpers.BPL_UIHelpers_C.GetRelevantParamGroupsForParts // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetShopItemPrice(struct FHWShopItem ItemData, struct UObject* __WorldContext, struct FText OfferedPrice, struct FText OriginalPrice); // Function BPL_UIHelpers.BPL_UIHelpers_C.GetShopItemPrice // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetActualPrice(int32_t OfferedPrice, int32_t DiscountedPercentage, struct UObject* __WorldContext, int32_t ActualPrice); // Function BPL_UIHelpers.BPL_UIHelpers_C.GetActualPrice // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void SortSubsectionsByPriority(struct TArray<struct FHWShopSubsection> Subsections, struct UObject* __WorldContext, struct TArray<struct FHWShopSubsection> Sorted); // Function BPL_UIHelpers.BPL_UIHelpers_C.SortSubsectionsByPriority // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetShopItemSize(struct FString Item, struct UObject* __WorldContext, enum class EHW_ShopItem_Size ItemSize); // Function BPL_UIHelpers.BPL_UIHelpers_C.GetShopItemSize // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void Open Survey(enum class EHW_QuestionnaireSelection Questionnaire, struct UObject* __WorldContext); // Function BPL_UIHelpers.BPL_UIHelpers_C.Open Survey // (Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetBuildVersionInfo(struct UObject* __WorldContext, struct FText Info); // Function BPL_UIHelpers.BPL_UIHelpers_C.GetBuildVersionInfo // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void ShortenWeaponName(struct FText Name, int32_t MaxLength, struct UObject* __WorldContext, struct FText ShortName); // Function BPL_UIHelpers.BPL_UIHelpers_C.ShortenWeaponName // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetFactionLogoWithoutText(enum class EHWFaction Faction, struct UObject* __WorldContext, struct UTexture2D* Logo); // Function BPL_UIHelpers.BPL_UIHelpers_C.GetFactionLogoWithoutText // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	struct FText GetMissionDifficultyName(enum class EHWRarity InRarity, struct UObject* __WorldContext); // Function BPL_UIHelpers.BPL_UIHelpers_C.GetMissionDifficultyName // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetWeaponPartIconByType(enum class EHWWeaponPartType PartType, struct UObject* __WorldContext, struct UTexture2D* Icon); // Function BPL_UIHelpers.BPL_UIHelpers_C.GetWeaponPartIconByType // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetMaterialIconByFaction(enum class EHWFaction Faction, struct UObject* __WorldContext, struct UTexture2D* Icon); // Function BPL_UIHelpers.BPL_UIHelpers_C.GetMaterialIconByFaction // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetItemCategory(struct FName ItemId, struct UObject* __WorldContext, struct FText Name); // Function BPL_UIHelpers.BPL_UIHelpers_C.GetItemCategory // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	struct FText Get Round as Text(int32_t RoundZeroIndexed, struct UObject* __WorldContext); // Function BPL_UIHelpers.BPL_UIHelpers_C.Get Round as Text // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetDroneAbilityName(struct FName ItemId, struct UObject* __WorldContext, struct FText Name); // Function BPL_UIHelpers.BPL_UIHelpers_C.GetDroneAbilityName // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void RoundFloatToDecimalPlaces(float Value, int32_t DecimalPlaces, struct UObject* __WorldContext, float Result); // Function BPL_UIHelpers.BPL_UIHelpers_C.RoundFloatToDecimalPlaces // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void LoadWeaponImage(struct FName PartId, struct UObject* __WorldContext, struct UTexture2D* Texture); // Function BPL_UIHelpers.BPL_UIHelpers_C.LoadWeaponImage // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Get Loc Name And Desc(struct FName StringTable, struct FName ID, struct UObject* __WorldContext, struct FText Name, struct FText Description); // Function BPL_UIHelpers.BPL_UIHelpers_C.Get Loc Name And Desc // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void Get Loc Name And Description(struct FName StringTable, struct FName ID, struct UObject* __WorldContext, struct FText Name, struct FText Description); // Function BPL_UIHelpers.BPL_UIHelpers_C.Get Loc Name And Description // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetCorporationHistory(enum class EHWFaction Corporation, struct UObject* __WorldContext, struct FText Name); // Function BPL_UIHelpers.BPL_UIHelpers_C.GetCorporationHistory // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetBlueprintCodeIcon(enum class EHWRarity Rarity, enum class EHWCraftingParameterGroup Param, struct UObject* __WorldContext, struct UTexture2D* Result); // Function BPL_UIHelpers.BPL_UIHelpers_C.GetBlueprintCodeIcon // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetCorporationSlogan(enum class EHWFaction Corporation, struct UObject* __WorldContext, struct FText Name); // Function BPL_UIHelpers.BPL_UIHelpers_C.GetCorporationSlogan // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void Get Faction Logo(enum class EHWFaction Vendor, bool IsLarge, struct UObject* __WorldContext, struct UTexture2D* Logo); // Function BPL_UIHelpers.BPL_UIHelpers_C.Get Faction Logo // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetWeaponBlueprintImage(enum class EHWWeaponType Type, struct UObject* __WorldContext, struct UTexture2D* Texture); // Function BPL_UIHelpers.BPL_UIHelpers_C.GetWeaponBlueprintImage // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetFormattedWeaponParameter(float Value, enum class EHWCraftingParameter ParameterType, bool AlwaysShowSign, struct UObject* __WorldContext, struct FText AsText); // Function BPL_UIHelpers.BPL_UIHelpers_C.GetFormattedWeaponParameter // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetFactionName(enum class EHWFaction Faction, struct UObject* __WorldContext, struct FText Name); // Function BPL_UIHelpers.BPL_UIHelpers_C.GetFactionName // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetMissionKindIcon(enum class EHWMissionKind Kind, struct UObject* __WorldContext, struct UTexture2D* Icon); // Function BPL_UIHelpers.BPL_UIHelpers_C.GetMissionKindIcon // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetMissionKindDescription(enum class EHWMissionKind Kind, struct UObject* __WorldContext, struct FText Description); // Function BPL_UIHelpers.BPL_UIHelpers_C.GetMissionKindDescription // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetMissionStatName(enum class EHWMissionTrackedStat Stat, struct UObject* __WorldContext, struct FText Result); // Function BPL_UIHelpers.BPL_UIHelpers_C.GetMissionStatName // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetMissionObjectiveShortDescription(struct FName ConfigId, int32_t TargetValue, struct FString ObjectiveExtra, struct UObject* __WorldContext, struct FText Result); // Function BPL_UIHelpers.BPL_UIHelpers_C.GetMissionObjectiveShortDescription // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void Get Mission Objective Description(struct FName ConfigId, int32_t TargetValue, struct FString ObjectiveExtra, struct UObject* __WorldContext, struct FText Result); // Function BPL_UIHelpers.BPL_UIHelpers_C.Get Mission Objective Description // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetArmorFeatureDescription(enum class EHWArmorFeatureType AssType, struct UObject* __WorldContext, struct FText Name); // Function BPL_UIHelpers.BPL_UIHelpers_C.GetArmorFeatureDescription // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetArmorFeatureName(enum class EHWArmorFeatureType AssType, struct UObject* __WorldContext, struct FText Name); // Function BPL_UIHelpers.BPL_UIHelpers_C.GetArmorFeatureName // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetRarityUIColor(enum class EHWRarity Rarity, struct UObject* __WorldContext, enum class BPE_UIColors Color); // Function BPL_UIHelpers.BPL_UIHelpers_C.GetRarityUIColor // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetItemDescription(struct FName ItemId, struct UObject* __WorldContext, struct FText Name); // Function BPL_UIHelpers.BPL_UIHelpers_C.GetItemDescription // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetItemName(struct FName ItemId, struct UObject* __WorldContext, struct FText Name); // Function BPL_UIHelpers.BPL_UIHelpers_C.GetItemName // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetItemSlotName(struct FString SlotId, struct UObject* __WorldContext, struct FText Name); // Function BPL_UIHelpers.BPL_UIHelpers_C.GetItemSlotName // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetWeaponTypeName(enum class EHWWeaponType PartType, struct UObject* __WorldContext, struct FText Name); // Function BPL_UIHelpers.BPL_UIHelpers_C.GetWeaponTypeName // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetDistanceText2(float Distance, struct UObject* __WorldContext, struct FText Text); // Function BPL_UIHelpers.BPL_UIHelpers_C.GetDistanceText2 // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetDistanceText(struct FVector WorldLocation, struct UObject* __WorldContext, struct FText Text); // Function BPL_UIHelpers.BPL_UIHelpers_C.GetDistanceText // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetVendorName(enum class EHWVendor Vendor, struct UObject* __WorldContext, struct FText Name); // Function BPL_UIHelpers.BPL_UIHelpers_C.GetVendorName // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetVendorLogo(enum class EHWVendor Vendor, struct UObject* __WorldContext, struct UTexture2D* Logo); // Function BPL_UIHelpers.BPL_UIHelpers_C.GetVendorLogo // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetPingIcon(enum class EHWPingReason Reason, struct UObject* __WorldContext, struct UTexture2D* Icon, bool friendly); // Function BPL_UIHelpers.BPL_UIHelpers_C.GetPingIcon // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetItemIcon(struct FName AbilityId, struct UObject* __WorldContext, struct UTexture2D* Icon); // Function BPL_UIHelpers.BPL_UIHelpers_C.GetItemIcon // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetDroneAbilityIcon(struct FName AbilityId, struct UObject* __WorldContext, struct UTexture2D* Icon); // Function BPL_UIHelpers.BPL_UIHelpers_C.GetDroneAbilityIcon // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetCorporationName(enum class EHWFaction Corporation, struct UObject* __WorldContext, struct FText Name); // Function BPL_UIHelpers.BPL_UIHelpers_C.GetCorporationName // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetItemSlotSize(enum class EHWItemSlotSize Slot, struct UObject* __WorldContext, struct FText Text); // Function BPL_UIHelpers.BPL_UIHelpers_C.GetItemSlotSize // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void LoadVendorItemImage(struct UObject* Item, struct UImage* ImageWidget, struct UObject* __WorldContext); // Function BPL_UIHelpers.BPL_UIHelpers_C.LoadVendorItemImage // (Static|Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PlaySoundHover(struct UObject* __WorldContext); // Function BPL_UIHelpers.BPL_UIHelpers_C.PlaySoundHover // (Static|Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PlaySoundClick(struct UObject* __WorldContext); // Function BPL_UIHelpers.BPL_UIHelpers_C.PlaySoundClick // (Static|Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	struct FText GetLocalizedMapName(struct FString MapId, struct UObject* __WorldContext); // Function BPL_UIHelpers.BPL_UIHelpers_C.GetLocalizedMapName // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	struct FText GetLocalizedFlowId(struct FString FlowId, struct UObject* __WorldContext); // Function BPL_UIHelpers.BPL_UIHelpers_C.GetLocalizedFlowId // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void SetLockedByLevel(struct UUserWidget* Widget, bool IsLocked, int32_t Level, struct UObject* __WorldContext); // Function BPL_UIHelpers.BPL_UIHelpers_C.SetLockedByLevel // (Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetFormattedAttribute(float Value, bool IsPercentage, bool AlwaysShowSign, int32_t NumberOfDecimals, bool AlwaysShowDecimals, struct UObject* __WorldContext, struct FText AsText); // Function BPL_UIHelpers.BPL_UIHelpers_C.GetFormattedAttribute // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetWeaponPartTypeName(enum class EHWWeaponPartType PartType, struct UObject* __WorldContext, struct FText Name); // Function BPL_UIHelpers.BPL_UIHelpers_C.GetWeaponPartTypeName // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	struct FVector2D GetLocationWhileAiming(struct FVector WorldPos, struct AHWPlayerCharacter* Character, struct UObject* __WorldContext); // Function BPL_UIHelpers.BPL_UIHelpers_C.GetLocationWhileAiming // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetClampedLocationWhileAiming(struct UWidget* Widget, struct FVector WorldPos, struct AHWPlayerCharacter* Character, struct UObject* __WorldContext, struct FVector2D Position, bool Clamped, enum class EHWDirection ClampedDirection); // Function BPL_UIHelpers.BPL_UIHelpers_C.GetClampedLocationWhileAiming // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	struct FVector2D GetAlignmentOffset(struct UWidget* Widget, struct UObject* __WorldContext); // Function BPL_UIHelpers.BPL_UIHelpers_C.GetAlignmentOffset // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	struct FVector2D GetPositionForWidget(struct UUserWidget* Widget, struct FVector WorldLocation, struct UObject* __WorldContext, bool Clamped, enum class EHWDirection ClampedDireciton); // Function BPL_UIHelpers.BPL_UIHelpers_C.GetPositionForWidget // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetCraftingParameterName(enum class EHWCraftingParameter Parameter, struct UObject* __WorldContext, struct FText Name); // Function BPL_UIHelpers.BPL_UIHelpers_C.GetCraftingParameterName // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetParameterGroupName(enum class EHWCraftingParameterGroup Group, struct UObject* __WorldContext, struct FText Name); // Function BPL_UIHelpers.BPL_UIHelpers_C.GetParameterGroupName // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetParameterGroupIcon(enum class EHWCraftingParameterGroup Group, struct UObject* __WorldContext, struct UTexture2D* Texture); // Function BPL_UIHelpers.BPL_UIHelpers_C.GetParameterGroupIcon // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetHostileColor(bool Hostile, struct UObject* __WorldContext, struct FLinearColor Result); // Function BPL_UIHelpers.BPL_UIHelpers_C.GetHostileColor // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void ShowTutorial(enum class BPE_TutorialType Type, struct UObject* __WorldContext); // Function BPL_UIHelpers.BPL_UIHelpers_C.ShowTutorial // (Static|Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	struct FText Get RarityName(enum class EHWRarity InRarity, struct UObject* __WorldContext); // Function BPL_UIHelpers.BPL_UIHelpers_C.Get RarityName // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetRarityPointIcon(enum class EHWRarity Rarity, struct UObject* __WorldContext, struct UTexture2D* Texture); // Function BPL_UIHelpers.BPL_UIHelpers_C.GetRarityPointIcon // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	struct FLinearColor GetRarityColor(enum class EHWRarity InRarity, struct UObject* __WorldContext); // Function BPL_UIHelpers.BPL_UIHelpers_C.GetRarityColor // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetCraftingMaterialIcon(enum class EHWVendor InVendor, enum class EHWRarity InRarity, struct UObject* __WorldContext, struct UTexture2D* Texture); // Function BPL_UIHelpers.BPL_UIHelpers_C.GetCraftingMaterialIcon // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	struct FString ShortenPlayerName(struct FString SourceString, struct UObject* __WorldContext); // Function BPL_UIHelpers.BPL_UIHelpers_C.ShortenPlayerName // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	struct FString GetPlayerName(struct FString ID, struct UObject* __WorldContext); // Function BPL_UIHelpers.BPL_UIHelpers_C.GetPlayerName // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	struct UTexture2D* GetDamageTypeIcon(enum class EHWDamageType NewParam, struct UObject* __WorldContext); // Function BPL_UIHelpers.BPL_UIHelpers_C.GetDamageTypeIcon // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetDamageDealerIcon(struct FName ItemId, enum class EHWWeaponType WeaponType, bool IsDrone, enum class EHWDamageType DamageType, bool WasDowned, struct UObject* __WorldContext, struct UTexture2D* Texture); // Function BPL_UIHelpers.BPL_UIHelpers_C.GetDamageDealerIcon // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void SetNumericalData(struct UWBP_Label_C* ValueLabel, int32_t Value, int32_t BaseValue, struct UWBP_Label_C* DeltaLabel, struct UObject* __WorldContext); // Function BPL_UIHelpers.BPL_UIHelpers_C.SetNumericalData // (Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void LoadAndSetItemIcon(struct UObject* Context, struct FName ID, struct UImage* Image, struct UObject* __WorldContext); // Function BPL_UIHelpers.BPL_UIHelpers_C.LoadAndSetItemIcon // (Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetPlayerColor(int32_t Player, struct UObject* __WorldContext, struct FLinearColor Color); // Function BPL_UIHelpers.BPL_UIHelpers_C.GetPlayerColor // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void SetComparisonLabelsFloat(struct UWBP_Label_C* Label, float Value, struct FText ValueSuffix, float DeltaValue, struct UWBP_Label_C* DeltaLabel, bool Flip, struct UObject* __WorldContext); // Function BPL_UIHelpers.BPL_UIHelpers_C.SetComparisonLabelsFloat // (Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetComparisonLabels(struct UWBP_Label_C* Label, int32_t Value, int32_t DeltaValue, struct UWBP_Label_C* DeltaLabel, bool Flip, struct UObject* __WorldContext); // Function BPL_UIHelpers.BPL_UIHelpers_C.SetComparisonLabels // (Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ProjectWorldPosToCanvas(struct FVector WorldPos, struct FTransform CameraTransform, float CameraFOV, struct UCanvasPanelSlot* Target, struct UObject* __WorldContext, struct FVector2D WidgetPosition, bool FitsIntoWidget); // Function BPL_UIHelpers.BPL_UIHelpers_C.ProjectWorldPosToCanvas // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetArmorFeatureIcon(enum class EHWArmorFeatureType ArmorFeature, struct UObject* __WorldContext, struct UTexture2D* Icon); // Function BPL_UIHelpers.BPL_UIHelpers_C.GetArmorFeatureIcon // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetWeaponTypeIcon(enum class EHWWeaponType WeaponType, struct UObject* __WorldContext, struct UTexture2D* Icon); // Function BPL_UIHelpers.BPL_UIHelpers_C.GetWeaponTypeIcon // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetTeamIcon(int32_t Team, struct UObject* __WorldContext, struct UTexture2D* Icon); // Function BPL_UIHelpers.BPL_UIHelpers_C.GetTeamIcon // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	bool IsInBetween(float Value, float Min, float Max, struct UObject* __WorldContext); // Function BPL_UIHelpers.BPL_UIHelpers_C.IsInBetween // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetCoordinateInsideProjection(float ProjectedX, float MaxX, float LerpedX, float ProjectedY, float MaxY, float LerpedY, struct UObject* __WorldContext, float X, float Y); // Function BPL_UIHelpers.BPL_UIHelpers_C.GetCoordinateInsideProjection // (Static|Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	struct FVector2D GetScreenPositionForOutOfViewTarget(struct FVector Target, struct FVector2D InWidgetSize, struct UObject* __WorldContext, bool Clamped, enum class EHWDirection ClampedDirection); // Function BPL_UIHelpers.BPL_UIHelpers_C.GetScreenPositionForOutOfViewTarget // (Static|Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	struct FVector2D GetScreenSize(struct UObject* __WorldContext); // Function BPL_UIHelpers.BPL_UIHelpers_C.GetScreenSize // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	float GetX(float YawDelta, float MaxX, struct UObject* __WorldContext); // Function BPL_UIHelpers.BPL_UIHelpers_C.GetX // (Static|Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	float GetY(float PitchDelta, float MaxY, struct UObject* __WorldContext); // Function BPL_UIHelpers.BPL_UIHelpers_C.GetY // (Static|Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	float GetLerpedX(float YawDelta, float MaxX, struct UObject* __WorldContext); // Function BPL_UIHelpers.BPL_UIHelpers_C.GetLerpedX // (Static|Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	float GetLerpedY(float PitchDelta, float MaxY, struct UObject* __WorldContext); // Function BPL_UIHelpers.BPL_UIHelpers_C.GetLerpedY // (Static|Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	struct FVector2D ClampToScreen(struct FVector2D InVec, struct FVector2D InWidgetSize, struct UObject* __WorldContext, bool Clamped, enum class EHWDirection ClampedDirection); // Function BPL_UIHelpers.BPL_UIHelpers_C.ClampToScreen // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetWorldLocationToScreenCoordinates(struct FVector WorldLocation, struct FVector2D InWidgetSize, struct UObject* __WorldContext, struct FVector2D ScreenPosition, bool Clamped, enum class EHWDirection ClampedDireciton); // Function BPL_UIHelpers.BPL_UIHelpers_C.GetWorldLocationToScreenCoordinates // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
};

