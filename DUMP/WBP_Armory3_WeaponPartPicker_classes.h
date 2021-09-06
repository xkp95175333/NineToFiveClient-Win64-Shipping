// WidgetBlueprintGeneratedClass WBP_Armory3_WeaponPartPicker.WBP_Armory3_WeaponPartPicker_C
// Size: 0x360 (Inherited: 0x260)
struct UWBP_Armory3_WeaponPartPicker_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* Bottom; // 0x268(0x08)
	struct UWBP_MainButton_C* CancelButton; // 0x270(0x08)
	struct UMenuAnchor* MenuAnchor_97; // 0x278(0x08)
	struct UWBP_RichTextLabel_C* PartPickerHeadingText; // 0x280(0x08)
	struct UOverlay* PartPickerView; // 0x288(0x08)
	struct UListView* PartsListView; // 0x290(0x08)
	struct UImage* Separator; // 0x298(0x08)
	struct UImage* Top; // 0x2a0(0x08)
	struct FMulticastInlineDelegate OnPartSelected; // 0x2a8(0x10)
	struct FMulticastInlineDelegate OnPartHovered; // 0x2b8(0x10)
	struct FMulticastInlineDelegate OnClose; // 0x2c8(0x10)
	struct TMap<struct FString, struct UBP_Armory3_WeaponPart_ListEntry_C*> WeaponPartsMap; // 0x2d8(0x50)
	struct UHWArmoryWeaponModel* WeaponModel; // 0x328(0x08)
	struct UHWArmoryWeaponPartItem* HoveredPart; // 0x330(0x08)
	enum class EHWWeaponPartType PartType; // 0x338(0x01)
	char pad_339[0x3]; // 0x339(0x03)
	int32_t VariationIndex; // 0x33c(0x04)
	struct FMulticastInlineDelegate OnPartUninstalled; // 0x340(0x10)
	struct UHWArmoryWeaponPartItem* SelectedPart; // 0x350(0x08)
	struct UHWArmoryWeaponPartItem* ClickedPart; // 0x358(0x08)

	void GetInventoryPartsSorted(struct TArray<struct UHWArmoryWeaponPartItem*> InventoryItems, struct TArray<struct UHWArmoryWeaponPartItem*> SortedInventoryItems); // Function WBP_Armory3_WeaponPartPicker.WBP_Armory3_WeaponPartPicker_C.GetInventoryPartsSorted // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void IsPartInstalled(struct UHWArmoryWeaponPartItem* PartItem, bool IsInstalled); // Function WBP_Armory3_WeaponPartPicker.WBP_Armory3_WeaponPartPicker_C.IsPartInstalled // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void HasAnyPartInstalledOfType(bool HasPartInstalled); // Function WBP_Armory3_WeaponPartPicker.WBP_Armory3_WeaponPartPicker_C.HasAnyPartInstalledOfType // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void HasDefaultWeaponPartType(bool HasDefaultPart); // Function WBP_Armory3_WeaponPartPicker.WBP_Armory3_WeaponPartPicker_C.HasDefaultWeaponPartType // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	struct UUserWidget* OnGetUserMenuContent_1(); // Function WBP_Armory3_WeaponPartPicker.WBP_Armory3_WeaponPartPicker_C.OnGetUserMenuContent_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PopulatePartPickerList(); // Function WBP_Armory3_WeaponPartPicker.WBP_Armory3_WeaponPartPicker_C.PopulatePartPickerList // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetContent(struct UHWArmoryWeaponModel* WeaponModel, enum class EHWWeaponPartType PartType); // Function WBP_Armory3_WeaponPartPicker.WBP_Armory3_WeaponPartPicker_C.SetContent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__PartsListView_K2Node_ComponentBoundEvent_0_SimpleListItemEventDynamic__DelegateSignature(struct UObject* Item); // Function WBP_Armory3_WeaponPartPicker.WBP_Armory3_WeaponPartPicker_C.BndEvt__PartsListView_K2Node_ComponentBoundEvent_0_SimpleListItemEventDynamic__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__CancelButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(struct UWBP_MainButton_C* Button); // Function WBP_Armory3_WeaponPartPicker.WBP_Armory3_WeaponPartPicker_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void WeaponPartDismantled(struct FString ItemId); // Function WBP_Armory3_WeaponPartPicker.WBP_Armory3_WeaponPartPicker_C.WeaponPartDismantled // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__PartsListView_K2Node_ComponentBoundEvent_2_OnItemIsHoveredChangedDynamic__DelegateSignature(struct UObject* Item, bool bIsHovered); // Function WBP_Armory3_WeaponPartPicker.WBP_Armory3_WeaponPartPicker_C.BndEvt__PartsListView_K2Node_ComponentBoundEvent_2_OnItemIsHoveredChangedDynamic__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void PartUninstalled(); // Function WBP_Armory3_WeaponPartPicker.WBP_Armory3_WeaponPartPicker_C.PartUninstalled // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Callback(bool Result); // Function WBP_Armory3_WeaponPartPicker.WBP_Armory3_WeaponPartPicker_C.Callback // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Armory3_WeaponPartPicker(int32_t EntryPoint); // Function WBP_Armory3_WeaponPartPicker.WBP_Armory3_WeaponPartPicker_C.ExecuteUbergraph_WBP_Armory3_WeaponPartPicker // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
	void OnPartHovered__DelegateSignature(struct UHWArmoryWeaponPartItem* Item, bool IsHovered); // Function WBP_Armory3_WeaponPartPicker.WBP_Armory3_WeaponPartPicker_C.OnPartHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnPartUninstalled__DelegateSignature(enum class EHWWeaponPartType PartType); // Function WBP_Armory3_WeaponPartPicker.WBP_Armory3_WeaponPartPicker_C.OnPartUninstalled__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnClose__DelegateSignature(); // Function WBP_Armory3_WeaponPartPicker.WBP_Armory3_WeaponPartPicker_C.OnClose__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnPartSelected__DelegateSignature(struct UHWArmoryWeaponPartItem* Item); // Function WBP_Armory3_WeaponPartPicker.WBP_Armory3_WeaponPartPicker_C.OnPartSelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

