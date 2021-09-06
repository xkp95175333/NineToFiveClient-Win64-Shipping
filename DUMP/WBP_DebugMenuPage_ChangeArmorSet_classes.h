// WidgetBlueprintGeneratedClass WBP_DebugMenuPage_ChangeArmorSet.WBP_DebugMenuPage_ChangeArmorSet_C
// Size: 0x330 (Inherited: 0x260)
struct UWBP_DebugMenuPage_ChangeArmorSet_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWBP_Label_C* ArmorSetInfo; // 0x268(0x08)
	struct UVerticalBox* FeatureSettingsContainer; // 0x270(0x08)
	struct UVerticalBox* ItemSettingsContainer; // 0x278(0x08)
	struct UComboBoxString* ListArmorSet; // 0x280(0x08)
	struct UComboBoxString* ListCharacters; // 0x288(0x08)
	struct UWBP_Button_C* UpdateButton; // 0x290(0x08)
	bool HideUpdateButton; // 0x298(0x01)
	char pad_299[0x7]; // 0x299(0x07)
	struct FString CurrentItemType; // 0x2a0(0x10)
	struct UWBP_DebugMenuPage_ChangeArmorSet_DropdownWithName_C* NewItemSettings; // 0x2b0(0x08)
	struct TArray<struct FString> ArmorSetItemSlots; // 0x2b8(0x10)
	struct FString NewArmorSetId; // 0x2c8(0x10)
	struct FName NewItem1; // 0x2d8(0x08)
	struct FName NewItem2; // 0x2e0(0x08)
	struct FName NewItem3; // 0x2e8(0x08)
	struct UWBP_DebugMenuPage_ChangeArmorSet_DropdownWithName_C* ArmorFeatureDropdown; // 0x2f0(0x08)
	struct TArray<struct UWBP_DebugMenuPage_ChangeArmorSet_DropdownWithName_C*> ArmorFeatureDropdownArray; // 0x2f8(0x10)
	struct TArray<struct FName> ASSes; // 0x308(0x10)
	struct TArray<struct UWBP_DebugMenuPage_ChangeArmorSet_DropdownWithName_C*> UnassignedFeatureDropdowns; // 0x318(0x10)
	struct UHWGameData* GameData; // 0x328(0x08)

	void SelectCurrentItems(); // Function WBP_DebugMenuPage_ChangeArmorSet.WBP_DebugMenuPage_ChangeArmorSet_C.SelectCurrentItems // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SelectCurrentASS(); // Function WBP_DebugMenuPage_ChangeArmorSet.WBP_DebugMenuPage_ChangeArmorSet_C.SelectCurrentASS // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetFeatureIDByType(enum class EHWArmorFeatureType NewParam, struct FName ID); // Function WBP_DebugMenuPage_ChangeArmorSet.WBP_DebugMenuPage_ChangeArmorSet_C.GetFeatureIDByType // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetSelectedSetLoadout(bool Found, struct FString SetId, struct FName Head, struct FName upperBody, struct FName lowerBody); // Function WBP_DebugMenuPage_ChangeArmorSet.WBP_DebugMenuPage_ChangeArmorSet_C.GetSelectedSetLoadout // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void BndEvt__UpdateWeapon_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_DebugMenuPage_ChangeArmorSet.WBP_DebugMenuPage_ChangeArmorSet_C.BndEvt__UpdateWeapon_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_DebugMenuPage_ChangeArmorSet.WBP_DebugMenuPage_ChangeArmorSet_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__ListArmorSet_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, enum class ESelectInfo SelectionType); // Function WBP_DebugMenuPage_ChangeArmorSet.WBP_DebugMenuPage_ChangeArmorSet_C.BndEvt__ListArmorSet_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void PopulateItemDropdowns(struct TArray<struct FString> Array); // Function WBP_DebugMenuPage_ChangeArmorSet.WBP_DebugMenuPage_ChangeArmorSet_C.PopulateItemDropdowns // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PopulateFeatureDropdowns(int32_t Slots); // Function WBP_DebugMenuPage_ChangeArmorSet.WBP_DebugMenuPage_ChangeArmorSet_C.PopulateFeatureDropdowns // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Set Items(struct AHWItemBase* Item); // Function WBP_DebugMenuPage_ChangeArmorSet.WBP_DebugMenuPage_ChangeArmorSet_C.Set Items // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_DebugMenuPage_ChangeArmorSet(int32_t EntryPoint); // Function WBP_DebugMenuPage_ChangeArmorSet.WBP_DebugMenuPage_ChangeArmorSet_C.ExecuteUbergraph_WBP_DebugMenuPage_ChangeArmorSet // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

