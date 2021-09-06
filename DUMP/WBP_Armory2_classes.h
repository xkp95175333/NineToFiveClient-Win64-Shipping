// WidgetBlueprintGeneratedClass WBP_Armory2.WBP_Armory2_C
// Size: 0x398 (Inherited: 0x268)
struct UWBP_Armory2_C : UHWWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UVerticalBox* AllModelsList; // 0x270(0x08)
	struct UWBP_MainButton_C* ClearFilterButton; // 0x278(0x08)
	struct UWBP_Armory2_CorporationLevel_C* CorpLevel_Farmira; // 0x280(0x08)
	struct UWBP_Armory2_CorporationLevel_C* CorpLevel_MashMedia; // 0x288(0x08)
	struct UWBP_Armory2_CorporationLevel_C* CorpLevel_NewWorldFinance; // 0x290(0x08)
	struct UWBP_RichTextLabel_C* DisplayedItemsLabel; // 0x298(0x08)
	struct UVerticalBox* EmptySearch; // 0x2a0(0x08)
	struct UWBP_Armory2_List_Filter_C* FilterPage; // 0x2a8(0x08)
	struct UImage* Image; // 0x2b0(0x08)
	struct UImage* Image_2; // 0x2b8(0x08)
	struct UImage* Image_3; // 0x2c0(0x08)
	struct UImage* Image_144; // 0x2c8(0x08)
	struct UImage* Image_290; // 0x2d0(0x08)
	struct UImage* Image_500; // 0x2d8(0x08)
	struct UWidgetSwitcher* ListSwitcher; // 0x2e0(0x08)
	struct UWidgetSwitcher* PageSwitcher; // 0x2e8(0x08)
	struct UWBP_RichTextLabel_C* ResearchItemsLabel; // 0x2f0(0x08)
	struct UVerticalBox* ResearchList; // 0x2f8(0x08)
	struct UOverlay* ResearchLocked; // 0x300(0x08)
	struct UWBP_RichTextLabel_C* ResearchLockedLabel; // 0x308(0x08)
	struct UTileView* ResearchModelsView; // 0x310(0x08)
	struct UVerticalBox* ResearchPage; // 0x318(0x08)
	struct UWBP_Armory2_Research_Slot_C* ResearchSlot1; // 0x320(0x08)
	struct UWBP_Armory2_Research_Slot_C* ResearchSlot2; // 0x328(0x08)
	struct UWBP_Armory2_Research_Slot_C* ResearchSlot3; // 0x330(0x08)
	struct UOverlay* ResearchSlots; // 0x338(0x08)
	struct UWBP_TabBar_C* TabNavigationBar; // 0x340(0x08)
	struct UWBP_Box_C* WBP_Box; // 0x348(0x08)
	struct UWBP_RichTextLabel_C* WBP_RichTextLabel_2; // 0x350(0x08)
	struct UWBP_RichTextLabel_C* WBP_RichTextLabel_324; // 0x358(0x08)
	struct UTileView* WeaponModelsView; // 0x360(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_List; // 0x368(0x08)
	struct TArray<struct UHWArmoryItem*> WeaponModelsData; // 0x370(0x10)
	struct TArray<struct UHWArmoryItem*> FilteredWeaponModels; // 0x380(0x10)
	struct UBP_Armory2_DragDropContext_C* DragDropContext_BPUpgrade; // 0x390(0x08)

	void FindWeaponModel(struct FName PartId, struct UHWArmoryItem* Item); // Function WBP_Armory2.WBP_Armory2_C.FindWeaponModel // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void CanAccessRarityUpgrade(bool Result); // Function WBP_Armory2.WBP_Armory2_C.CanAccessRarityUpgrade // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void Update Weapon Model Views(); // Function WBP_Armory2.WBP_Armory2_C.Update Weapon Model Views // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateWeaponModels(); // Function WBP_Armory2.WBP_Armory2_C.UpdateWeaponModels // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerDetailsChanged(struct FHWPlayerDetails Data); // Function WBP_Armory2.WBP_Armory2_C.OnPlayerDetailsChanged // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerMissionChanged(struct FHWPlayerMission Data); // Function WBP_Armory2.WBP_Armory2_C.OnPlayerMissionChanged // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerProgressionChanged(struct FHWPlayerProgression Data); // Function WBP_Armory2.WBP_Armory2_C.OnPlayerProgressionChanged // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerStatsChanged(struct FHWPlayerStats Data); // Function WBP_Armory2.WBP_Armory2_C.OnPlayerStatsChanged // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_Armory2.WBP_Armory2_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_Armory2.WBP_Armory2_C.BndEvt__WBP_Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__FilterWidget_K2Node_ComponentBoundEvent_1_OnFilterChanged__DelegateSignature(); // Function WBP_Armory2.WBP_Armory2_C.BndEvt__FilterWidget_K2Node_ComponentBoundEvent_1_OnFilterChanged__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WeaponModelsView_K2Node_ComponentBoundEvent_2_OnItemIsHoveredChangedDynamic__DelegateSignature(struct UObject* Item, bool bIsHovered); // Function WBP_Armory2.WBP_Armory2_C.BndEvt__WeaponModelsView_K2Node_ComponentBoundEvent_2_OnItemIsHoveredChangedDynamic__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WeaponModelsView_K2Node_ComponentBoundEvent_3_SimpleListItemEventDynamic__DelegateSignature(struct UObject* Item); // Function WBP_Armory2.WBP_Armory2_C.BndEvt__WeaponModelsView_K2Node_ComponentBoundEvent_3_SimpleListItemEventDynamic__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__TabNavigationBar_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(struct FName ID); // Function WBP_Armory2.WBP_Armory2_C.BndEvt__TabNavigationBar_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerInventoryChanged(struct FHWPlayerInventory Data); // Function WBP_Armory2.WBP_Armory2_C.OnPlayerInventoryChanged // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void InitDragDropContext(); // Function WBP_Armory2.WBP_Armory2_C.InitDragDropContext // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SimulateOnItemClicked(struct UObject* Object); // Function WBP_Armory2.WBP_Armory2_C.SimulateOnItemClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Armory2(int32_t EntryPoint); // Function WBP_Armory2.WBP_Armory2_C.ExecuteUbergraph_WBP_Armory2 // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

