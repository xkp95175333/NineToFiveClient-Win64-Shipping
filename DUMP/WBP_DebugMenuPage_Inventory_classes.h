// WidgetBlueprintGeneratedClass WBP_DebugMenuPage_Inventory.WBP_DebugMenuPage_Inventory_C
// Size: 0x4ac (Inherited: 0x268)
struct UWBP_DebugMenuPage_Inventory_C : UHWWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWBP_Button_C* Add100kPlatinumButton; // 0x270(0x08)
	struct UWBP_Button_C* Add100MaterialsButton; // 0x278(0x08)
	struct UWBP_Button_C* Add10kCreditsButton; // 0x280(0x08)
	struct UWBP_Button_C* Add10kMaterialsButton; // 0x288(0x08)
	struct UWBP_Button_C* Add10kXpButton; // 0x290(0x08)
	struct UWBP_Button_C* Add1kkCreditsButton; // 0x298(0x08)
	struct UWBP_Button_C* Add1kPlatinumButton; // 0x2a0(0x08)
	struct UWBP_Button_C* Add1kXpButton; // 0x2a8(0x08)
	struct UWBP_Button_C* AddAllArmorCosmetics; // 0x2b0(0x08)
	struct UWBP_Button_C* AddAllArmorSets; // 0x2b8(0x08)
	struct UWBP_Button_C* AddAllButton; // 0x2c0(0x08)
	struct UWBP_Button_C* AddAllCosmetics; // 0x2c8(0x08)
	struct UWBP_Button_C* AddAllCurrenciesButton; // 0x2d0(0x08)
	struct UWBP_Button_C* AddAllParts; // 0x2d8(0x08)
	struct UWBP_Button_C* AddAllPartsWithSets; // 0x2e0(0x08)
	struct UWBP_Button_C* AddAllWeaponParts; // 0x2e8(0x08)
	struct UWBP_Button_C* AddAllWeaponPartsForSet; // 0x2f0(0x08)
	struct UWBP_Button_C* AddArmorCosmetic; // 0x2f8(0x08)
	struct UWBP_Label_C* AddArmorCosmeticLabel; // 0x300(0x08)
	struct UWBP_Button_C* AddArmorSet; // 0x308(0x08)
	struct UWBP_Label_C* AddArmorSetLabel; // 0x310(0x08)
	struct UWBP_Label_C* AddBpLabel; // 0x318(0x08)
	struct UWBP_Button_C* AddCode_2; // 0x320(0x08)
	struct UWBP_Button_C* AddCodes; // 0x328(0x08)
	struct UWBP_Button_C* AddCosmetic; // 0x330(0x08)
	struct UWBP_Label_C* AddCosmeticLabel; // 0x338(0x08)
	struct UWBP_Button_C* AddCustomCreditsButton; // 0x340(0x08)
	struct UWBP_Button_C* AddCustomMaterialsButton; // 0x348(0x08)
	struct UWBP_Button_C* AddCustomPlatinumButton; // 0x350(0x08)
	struct UWBP_Button_C* AddCustomXPButton; // 0x358(0x08)
	struct UWBP_Button_C* AddEverythingButton; // 0x360(0x08)
	struct UWBP_Button_C* AddPart; // 0x368(0x08)
	struct UWBP_Label_C* AddPartLabel; // 0x370(0x08)
	struct UWBP_Label_C* AddPartLabel_2; // 0x378(0x08)
	struct UWBP_Button_C* AddWeapon; // 0x380(0x08)
	struct UComboBoxString* ArmorCosmeticCombo; // 0x388(0x08)
	struct UComboBoxString* ArmorSetCombo; // 0x390(0x08)
	struct UComboBoxString* CodeRarity; // 0x398(0x08)
	struct UComboBoxString* CodeType; // 0x3a0(0x08)
	struct UEditableTextBox* CustomCreditsText; // 0x3a8(0x08)
	struct UEditableTextBox* CustomMaterialsText; // 0x3b0(0x08)
	struct UEditableTextBox* CustomPlatinumText; // 0x3b8(0x08)
	struct UEditableTextBox* CustomXpText; // 0x3c0(0x08)
	struct UVerticalBox* Inventory; // 0x3c8(0x08)
	struct UWBP_RichTextLabel_C* SelectedWeaponStatus; // 0x3d0(0x08)
	struct UComboBoxString* WeaponCombo; // 0x3d8(0x08)
	struct UComboBoxString* WeaponCosmeticsCombo; // 0x3e0(0x08)
	struct UComboBoxString* WeaponPartsCombo; // 0x3e8(0x08)
	struct UComboBoxString* WeaponPartSetCombo_2; // 0x3f0(0x08)
	struct FMulticastInlineDelegate OnCloseMenu; // 0x3f8(0x10)
	struct UObject* CurrentVendorItem; // 0x408(0x08)
	struct TMap<struct FString, struct FName> WeaponNameToIdMap; // 0x410(0x50)
	struct TArray<enum class EHWCraftingParameterGroup> CodeTypesArray; // 0x460(0x10)
	struct TArray<enum class EHWRarity> CodeRaritiesArray; // 0x470(0x10)
	int32_t FamiliarityToAdd; // 0x480(0x04)
	char pad_484[0x4]; // 0x484(0x04)
	struct FText LastOpenedGun; // 0x488(0x18)
	int32_t CreditsToAdd; // 0x4a0(0x04)
	int32_t PlatinumToAdd; // 0x4a4(0x04)
	int32_t MaterialsToAdd; // 0x4a8(0x04)

	void CanPartHaveSet(struct FName PartId, bool Result); // Function WBP_DebugMenuPage_Inventory.WBP_DebugMenuPage_Inventory_C.CanPartHaveSet // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void CallAddCurrency(enum class EHWCurrencyType Type, int32_t Amount); // Function WBP_DebugMenuPage_Inventory.WBP_DebugMenuPage_Inventory_C.CallAddCurrency // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Check and Add Currency(int32_t Amount, struct FString Currency); // Function WBP_DebugMenuPage_Inventory.WBP_DebugMenuPage_Inventory_C.Check and Add Currency // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PopulateArmorSets(); // Function WBP_DebugMenuPage_Inventory.WBP_DebugMenuPage_Inventory_C.PopulateArmorSets // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PopulateWeaponParts(); // Function WBP_DebugMenuPage_Inventory.WBP_DebugMenuPage_Inventory_C.PopulateWeaponParts // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetRarityVersions(struct FString BlueprintId, struct TArray<struct FString> AllVersions); // Function WBP_DebugMenuPage_Inventory.WBP_DebugMenuPage_Inventory_C.GetRarityVersions // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void IsBlueprintAlreadyOwned(struct FString BlueprintId, bool Result); // Function WBP_DebugMenuPage_Inventory.WBP_DebugMenuPage_Inventory_C.IsBlueprintAlreadyOwned // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetRandomParameterGroup(enum class EHWInventoryItemType ItemType, enum class EHWCraftingParameterGroup Group); // Function WBP_DebugMenuPage_Inventory.WBP_DebugMenuPage_Inventory_C.GetRandomParameterGroup // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetTypeForWeaponPart(struct FName PartBlueprintId, enum class EHWWeaponPartType PartType); // Function WBP_DebugMenuPage_Inventory.WBP_DebugMenuPage_Inventory_C.GetTypeForWeaponPart // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void HandleDebugInstallOk(struct FHWInstallWeaponPartResponse Response); // Function WBP_DebugMenuPage_Inventory.WBP_DebugMenuPage_Inventory_C.HandleDebugInstallOk // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void DoNothing(); // Function WBP_DebugMenuPage_Inventory.WBP_DebugMenuPage_Inventory_C.DoNothing // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetHWPlayerController(struct AHWPlayerController* Controller); // Function WBP_DebugMenuPage_Inventory.WBP_DebugMenuPage_Inventory_C.GetHWPlayerController // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void OnPlayerDetailsChanged(struct FHWPlayerDetails Data); // Function WBP_DebugMenuPage_Inventory.WBP_DebugMenuPage_Inventory_C.OnPlayerDetailsChanged // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerMissionChanged(struct FHWPlayerMission Data); // Function WBP_DebugMenuPage_Inventory.WBP_DebugMenuPage_Inventory_C.OnPlayerMissionChanged // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerProgressionChanged(struct FHWPlayerProgression Data); // Function WBP_DebugMenuPage_Inventory.WBP_DebugMenuPage_Inventory_C.OnPlayerProgressionChanged // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerStatsChanged(struct FHWPlayerStats Data); // Function WBP_DebugMenuPage_Inventory.WBP_DebugMenuPage_Inventory_C.OnPlayerStatsChanged // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnError(enum class EHWErrorMessage Error); // Function WBP_DebugMenuPage_Inventory.WBP_DebugMenuPage_Inventory_C.OnError // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnComplete(struct FHWResponseBase Response); // Function WBP_DebugMenuPage_Inventory.WBP_DebugMenuPage_Inventory_C.OnComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnDialogClosed(bool Result); // Function WBP_DebugMenuPage_Inventory.WBP_DebugMenuPage_Inventory_C.OnDialogClosed // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ReloadOnComplete(struct FHWResponseBase Response); // Function WBP_DebugMenuPage_Inventory.WBP_DebugMenuPage_Inventory_C.ReloadOnComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_DebugMenuPage_Inventory.WBP_DebugMenuPage_Inventory_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnAdded(struct FHWResponseBase Response); // Function WBP_DebugMenuPage_Inventory.WBP_DebugMenuPage_Inventory_C.OnAdded // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnAddFailed(enum class EHWErrorMessage ErrorMessage); // Function WBP_DebugMenuPage_Inventory.WBP_DebugMenuPage_Inventory_C.OnAddFailed // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__AddPart_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_DebugMenuPage_Inventory.WBP_DebugMenuPage_Inventory_C.BndEvt__AddPart_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__AddCosmetic_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_DebugMenuPage_Inventory.WBP_DebugMenuPage_Inventory_C.BndEvt__AddCosmetic_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void Add Weapon Part(struct FString ID, struct FString SetId); // Function WBP_DebugMenuPage_Inventory.WBP_DebugMenuPage_Inventory_C.Add Weapon Part // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void AddBlueprintCode(struct FName ConfigId); // Function WBP_DebugMenuPage_Inventory.WBP_DebugMenuPage_Inventory_C.AddBlueprintCode // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__AddArmorSet_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_DebugMenuPage_Inventory.WBP_DebugMenuPage_Inventory_C.BndEvt__AddArmorSet_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__AddAllParts_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_DebugMenuPage_Inventory.WBP_DebugMenuPage_Inventory_C.BndEvt__AddAllParts_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void ReloadWithoutClosing(struct FHWResponseBase Response); // Function WBP_DebugMenuPage_Inventory.WBP_DebugMenuPage_Inventory_C.ReloadWithoutClosing // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerInventoryChanged(struct FHWPlayerInventory Data); // Function WBP_DebugMenuPage_Inventory.WBP_DebugMenuPage_Inventory_C.OnPlayerInventoryChanged // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__AddArmorCosmetic_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_DebugMenuPage_Inventory.WBP_DebugMenuPage_Inventory_C.BndEvt__AddArmorCosmetic_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void PreConstruct(bool IsDesignTime); // Function WBP_DebugMenuPage_Inventory.WBP_DebugMenuPage_Inventory_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__AddAllArmorSets_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_DebugMenuPage_Inventory.WBP_DebugMenuPage_Inventory_C.BndEvt__AddAllArmorSets_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__AddAllArmorCosmetics_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_DebugMenuPage_Inventory.WBP_DebugMenuPage_Inventory_C.BndEvt__AddAllArmorCosmetics_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__AddAllCosmetics_K2Node_ComponentBoundEvent_17_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_DebugMenuPage_Inventory.WBP_DebugMenuPage_Inventory_C.BndEvt__AddAllCosmetics_K2Node_ComponentBoundEvent_17_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__AddAllWeaponParts_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_DebugMenuPage_Inventory.WBP_DebugMenuPage_Inventory_C.BndEvt__AddAllWeaponParts_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__AddAllArmorCosmetics_1_K2Node_ComponentBoundEvent_21_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_DebugMenuPage_Inventory.WBP_DebugMenuPage_Inventory_C.BndEvt__AddAllArmorCosmetics_1_K2Node_ComponentBoundEvent_21_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__AddBp_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_DebugMenuPage_Inventory.WBP_DebugMenuPage_Inventory_C.BndEvt__AddBp_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WeaponCombo_K2Node_ComponentBoundEvent_6_OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, enum class ESelectInfo SelectionType); // Function WBP_DebugMenuPage_Inventory.WBP_DebugMenuPage_Inventory_C.BndEvt__WeaponCombo_K2Node_ComponentBoundEvent_6_OnSelectionChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__AddCode_1_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_DebugMenuPage_Inventory.WBP_DebugMenuPage_Inventory_C.BndEvt__AddCode_1_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_Button_5_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_DebugMenuPage_Inventory.WBP_DebugMenuPage_Inventory_C.BndEvt__WBP_Button_5_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__AddCurrency100Button_1_K2Node_ComponentBoundEvent_27_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_DebugMenuPage_Inventory.WBP_DebugMenuPage_Inventory_C.BndEvt__AddCurrency100Button_1_K2Node_ComponentBoundEvent_27_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__AddCurrency100Button_2_K2Node_ComponentBoundEvent_28_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_DebugMenuPage_Inventory.WBP_DebugMenuPage_Inventory_C.BndEvt__AddCurrency100Button_2_K2Node_ComponentBoundEvent_28_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__EditableTextBox_120_K2Node_ComponentBoundEvent_29_OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText Text, enum class ETextCommit CommitMethod); // Function WBP_DebugMenuPage_Inventory.WBP_DebugMenuPage_Inventory_C.BndEvt__EditableTextBox_120_K2Node_ComponentBoundEvent_29_OnEditableTextBoxCommittedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__AddCurrency100Button_3_K2Node_ComponentBoundEvent_30_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_DebugMenuPage_Inventory.WBP_DebugMenuPage_Inventory_C.BndEvt__AddCurrency100Button_3_K2Node_ComponentBoundEvent_30_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__AddCurrency100Button_4_K2Node_ComponentBoundEvent_31_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_DebugMenuPage_Inventory.WBP_DebugMenuPage_Inventory_C.BndEvt__AddCurrency100Button_4_K2Node_ComponentBoundEvent_31_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__AddCurrency100Button_5_K2Node_ComponentBoundEvent_32_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_DebugMenuPage_Inventory.WBP_DebugMenuPage_Inventory_C.BndEvt__AddCurrency100Button_5_K2Node_ComponentBoundEvent_32_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__EditableTextBox_K2Node_ComponentBoundEvent_33_OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText Text, enum class ETextCommit CommitMethod); // Function WBP_DebugMenuPage_Inventory.WBP_DebugMenuPage_Inventory_C.BndEvt__EditableTextBox_K2Node_ComponentBoundEvent_33_OnEditableTextBoxCommittedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__AddCurrency100Button_6_K2Node_ComponentBoundEvent_34_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_DebugMenuPage_Inventory.WBP_DebugMenuPage_Inventory_C.BndEvt__AddCurrency100Button_6_K2Node_ComponentBoundEvent_34_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__AddCurrency100Button_7_K2Node_ComponentBoundEvent_35_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_DebugMenuPage_Inventory.WBP_DebugMenuPage_Inventory_C.BndEvt__AddCurrency100Button_7_K2Node_ComponentBoundEvent_35_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__AddCurrency100Button_8_K2Node_ComponentBoundEvent_36_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_DebugMenuPage_Inventory.WBP_DebugMenuPage_Inventory_C.BndEvt__AddCurrency100Button_8_K2Node_ComponentBoundEvent_36_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__EditableTextBox_1_K2Node_ComponentBoundEvent_37_OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText Text, enum class ETextCommit CommitMethod); // Function WBP_DebugMenuPage_Inventory.WBP_DebugMenuPage_Inventory_C.BndEvt__EditableTextBox_1_K2Node_ComponentBoundEvent_37_OnEditableTextBoxCommittedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__AddCurrency100Button_9_K2Node_ComponentBoundEvent_38_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_DebugMenuPage_Inventory.WBP_DebugMenuPage_Inventory_C.BndEvt__AddCurrency100Button_9_K2Node_ComponentBoundEvent_38_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__Add1kXpButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_DebugMenuPage_Inventory.WBP_DebugMenuPage_Inventory_C.BndEvt__Add1kXpButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__Add10kXpButton_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_DebugMenuPage_Inventory.WBP_DebugMenuPage_Inventory_C.BndEvt__Add10kXpButton_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__AddCustomXpButton_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_DebugMenuPage_Inventory.WBP_DebugMenuPage_Inventory_C.BndEvt__AddCustomXpButton_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__AddAllPartsWithSets_K2Node_ComponentBoundEvent_16_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_DebugMenuPage_Inventory.WBP_DebugMenuPage_Inventory_C.BndEvt__AddAllPartsWithSets_K2Node_ComponentBoundEvent_16_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__AddAllWeaponPartsForSet_K2Node_ComponentBoundEvent_22_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_DebugMenuPage_Inventory.WBP_DebugMenuPage_Inventory_C.BndEvt__AddAllWeaponPartsForSet_K2Node_ComponentBoundEvent_22_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void AddCosmeticWeaponPart(struct FString ID, struct FString SetId); // Function WBP_DebugMenuPage_Inventory.WBP_DebugMenuPage_Inventory_C.AddCosmeticWeaponPart // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_DebugMenuPage_Inventory(int32_t EntryPoint); // Function WBP_DebugMenuPage_Inventory.WBP_DebugMenuPage_Inventory_C.ExecuteUbergraph_WBP_DebugMenuPage_Inventory // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
	void OnCloseMenu__DelegateSignature(); // Function WBP_DebugMenuPage_Inventory.WBP_DebugMenuPage_Inventory_C.OnCloseMenu__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

