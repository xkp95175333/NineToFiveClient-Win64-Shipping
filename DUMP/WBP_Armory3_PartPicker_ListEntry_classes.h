// WidgetBlueprintGeneratedClass WBP_Armory3_PartPicker_ListEntry.WBP_Armory3_PartPicker_ListEntry_C
// Size: 0x2da (Inherited: 0x260)
struct UWBP_Armory3_PartPicker_ListEntry_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWBP_RichTextLabel_C* Description; // 0x268(0x08)
	struct UImage* Locked; // 0x270(0x08)
	struct UHorizontalBox* MainContent; // 0x278(0x08)
	struct UWBP_RichTextLabel_C* PartName; // 0x280(0x08)
	struct UImage* Selected; // 0x288(0x08)
	struct UImage* Separator; // 0x290(0x08)
	struct UWBP_Armory3_PartSetIcon_C* SetIcon; // 0x298(0x08)
	struct USizeBox* SizeBox_55; // 0x2a0(0x08)
	struct UWidgetSwitcher* StateSwitcher; // 0x2a8(0x08)
	struct UWBP_Box_C* WBP_Box; // 0x2b0(0x08)
	struct UWBP_Armory3_SellButton_C* WeaponPart_Sell; // 0x2b8(0x08)
	struct UBP_Armory3_WeaponPart_ListEntry_C* Part; // 0x2c0(0x08)
	struct FMulticastInlineDelegate PartDismantled; // 0x2c8(0x10)
	bool IsDefaultState; // 0x2d8(0x01)
	bool IsDescriptionHidden; // 0x2d9(0x01)

	void SetPartIcon(); // Function WBP_Armory3_PartPicker_ListEntry.WBP_Armory3_PartPicker_ListEntry_C.SetPartIcon // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_Armory3_PartPicker_ListEntry.WBP_Armory3_PartPicker_ListEntry_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function WBP_Armory3_PartPicker_ListEntry.WBP_Armory3_PartPicker_ListEntry_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_Armory3_SellButton_K2Node_ComponentBoundEvent_1_WeaponPartDismantled__DelegateSignature(); // Function WBP_Armory3_PartPicker_ListEntry.WBP_Armory3_PartPicker_ListEntry_C.BndEvt__WBP_Armory3_SellButton_K2Node_ComponentBoundEvent_1_WeaponPartDismantled__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function WBP_Armory3_PartPicker_ListEntry.WBP_Armory3_PartPicker_ListEntry_C.BP_OnItemSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void OnListItemObjectSet(struct UObject* ListItemObject); // Function WBP_Armory3_PartPicker_ListEntry.WBP_Armory3_PartPicker_ListEntry_C.OnListItemObjectSet // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function WBP_Armory3_PartPicker_ListEntry.WBP_Armory3_PartPicker_ListEntry_C.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void SetDescription(); // Function WBP_Armory3_PartPicker_ListEntry.WBP_Armory3_PartPicker_ListEntry_C.SetDescription // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BP_OnEntryReleased(); // Function WBP_Armory3_PartPicker_ListEntry.WBP_Armory3_PartPicker_ListEntry_C.BP_OnEntryReleased // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void ChangeDescriptionTextOnHover(bool OnHover); // Function WBP_Armory3_PartPicker_ListEntry.WBP_Armory3_PartPicker_ListEntry_C.ChangeDescriptionTextOnHover // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Armory3_PartPicker_ListEntry(int32_t EntryPoint); // Function WBP_Armory3_PartPicker_ListEntry.WBP_Armory3_PartPicker_ListEntry_C.ExecuteUbergraph_WBP_Armory3_PartPicker_ListEntry // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
	void PartDismantled__DelegateSignature(); // Function WBP_Armory3_PartPicker_ListEntry.WBP_Armory3_PartPicker_ListEntry_C.PartDismantled__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

