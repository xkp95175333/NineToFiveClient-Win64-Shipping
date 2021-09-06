// WidgetBlueprintGeneratedClass WBP_Armory3_Main.WBP_Armory3_Main_C
// Size: 0x310 (Inherited: 0x268)
struct UWBP_Armory3_Main_C : UHWWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UImage* Background; // 0x270(0x08)
	struct UImage* Bracket_Left; // 0x278(0x08)
	struct UImage* Bracket_Right; // 0x280(0x08)
	struct UHorizontalBox* EmptySearch; // 0x288(0x08)
	struct UVerticalBox* EmptySearch_Text; // 0x290(0x08)
	struct UWidgetSwitcher* FilteredModelsSwitcher; // 0x298(0x08)
	struct UImage* Image_500; // 0x2a0(0x08)
	struct UWBP_Armory3_List_Filter_C* ListFilter; // 0x2a8(0x08)
	struct UWBP_RichTextLabel_C* WBP_RichTextLabel_2; // 0x2b0(0x08)
	struct UWBP_RichTextLabel_C* WBP_RichTextLabel_324; // 0x2b8(0x08)
	struct UTileView* WeaponModelsView; // 0x2c0(0x08)
	struct TArray<struct UHWArmoryWeaponModel*> WeaponModelsData; // 0x2c8(0x10)
	struct TArray<struct UHWArmoryWeaponModel*> FilteredWeaponModelsData; // 0x2d8(0x10)
	struct FMulticastInlineDelegate MoveToWeaponView; // 0x2e8(0x10)
	struct FText NoResults; // 0x2f8(0x18)

	void FindWeaponModel(struct FName PartId, struct UHWArmoryWeaponModel* WeaponModel); // Function WBP_Armory3_Main.WBP_Armory3_Main_C.FindWeaponModel // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void ShowWeaponModels(); // Function WBP_Armory3_Main.WBP_Armory3_Main_C.ShowWeaponModels // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void CreateWeaponModels(); // Function WBP_Armory3_Main.WBP_Armory3_Main_C.CreateWeaponModels // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerDetailsChanged(struct FHWPlayerDetails Data); // Function WBP_Armory3_Main.WBP_Armory3_Main_C.OnPlayerDetailsChanged // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerMissionChanged(struct FHWPlayerMission Data); // Function WBP_Armory3_Main.WBP_Armory3_Main_C.OnPlayerMissionChanged // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerProgressionChanged(struct FHWPlayerProgression Data); // Function WBP_Armory3_Main.WBP_Armory3_Main_C.OnPlayerProgressionChanged // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerStatsChanged(struct FHWPlayerStats Data); // Function WBP_Armory3_Main.WBP_Armory3_Main_C.OnPlayerStatsChanged // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_Armory3_Main.WBP_Armory3_Main_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void CreateWeaponModelFilter(); // Function WBP_Armory3_Main.WBP_Armory3_Main_C.CreateWeaponModelFilter // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__ListFilter_K2Node_ComponentBoundEvent_0_OnFilterChanged__DelegateSignature(); // Function WBP_Armory3_Main.WBP_Armory3_Main_C.BndEvt__ListFilter_K2Node_ComponentBoundEvent_0_OnFilterChanged__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WeaponModelsView_K2Node_ComponentBoundEvent_1_OnItemIsHoveredChangedDynamic__DelegateSignature(struct UObject* Item, bool bIsHovered); // Function WBP_Armory3_Main.WBP_Armory3_Main_C.BndEvt__WeaponModelsView_K2Node_ComponentBoundEvent_1_OnItemIsHoveredChangedDynamic__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WeaponModelsView_K2Node_ComponentBoundEvent_2_SimpleListItemEventDynamic__DelegateSignature(struct UObject* Item); // Function WBP_Armory3_Main.WBP_Armory3_Main_C.BndEvt__WeaponModelsView_K2Node_ComponentBoundEvent_2_SimpleListItemEventDynamic__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerInventoryChanged(struct FHWPlayerInventory Data); // Function WBP_Armory3_Main.WBP_Armory3_Main_C.OnPlayerInventoryChanged // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Armory3_Main(int32_t EntryPoint); // Function WBP_Armory3_Main.WBP_Armory3_Main_C.ExecuteUbergraph_WBP_Armory3_Main // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
	void MoveToWeaponView__DelegateSignature(struct UHWArmoryWeaponModel* WeaponModel); // Function WBP_Armory3_Main.WBP_Armory3_Main_C.MoveToWeaponView__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

