// WidgetBlueprintGeneratedClass WBP_Armory3_WeaponCatalog_WeaponPart_Entry.WBP_Armory3_WeaponCatalog_WeaponPart_Entry_C
// Size: 0x2b1 (Inherited: 0x260)
struct UWBP_Armory3_WeaponCatalog_WeaponPart_Entry_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* BG; // 0x268(0x08)
	struct UImage* Bottomline; // 0x270(0x08)
	struct UImage* PartImage; // 0x278(0x08)
	struct UImage* SetImage; // 0x280(0x08)
	struct USizeBox* SizeBox_47; // 0x288(0x08)
	struct UWBP_Armory3_SellButton_C* WBP_Armory3_SellButton; // 0x290(0x08)
	struct UWBP_Armory3_WeaponPart_NameTag_C* WBP_Armory3_WeaponPart_NameTag; // 0x298(0x08)
	struct UWBP_Armory3_WeaponPartDismantle_C* WBP_Armory3_WeaponPartDismantle; // 0x2a0(0x08)
	struct UBP_Armory3_WeaponPart_ListEntry_C* PartItem; // 0x2a8(0x08)
	bool IsWeaponAcquired; // 0x2b0(0x01)

	void GetWeaponPartSellInfo(struct FText HintText, bool CanSell); // Function WBP_Armory3_WeaponCatalog_WeaponPart_Entry.WBP_Armory3_WeaponCatalog_WeaponPart_Entry_C.GetWeaponPartSellInfo // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function WBP_Armory3_WeaponCatalog_WeaponPart_Entry.WBP_Armory3_WeaponCatalog_WeaponPart_Entry_C.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function WBP_Armory3_WeaponCatalog_WeaponPart_Entry.WBP_Armory3_WeaponCatalog_WeaponPart_Entry_C.BP_OnItemSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void OnListItemObjectSet(struct UObject* ListItemObject); // Function WBP_Armory3_WeaponCatalog_WeaponPart_Entry.WBP_Armory3_WeaponCatalog_WeaponPart_Entry_C.OnListItemObjectSet // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_Armory3_WeaponCatalog_WeaponPart_Entry.WBP_Armory3_WeaponCatalog_WeaponPart_Entry_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function WBP_Armory3_WeaponCatalog_WeaponPart_Entry.WBP_Armory3_WeaponCatalog_WeaponPart_Entry_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_Armory3_SellButton_K2Node_ComponentBoundEvent_1_WeaponPartDismantled__DelegateSignature(); // Function WBP_Armory3_WeaponCatalog_WeaponPart_Entry.WBP_Armory3_WeaponCatalog_WeaponPart_Entry_C.BndEvt__WBP_Armory3_SellButton_K2Node_ComponentBoundEvent_1_WeaponPartDismantled__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BP_OnEntryReleased(); // Function WBP_Armory3_WeaponCatalog_WeaponPart_Entry.WBP_Armory3_WeaponCatalog_WeaponPart_Entry_C.BP_OnEntryReleased // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Armory3_WeaponCatalog_WeaponPart_Entry(int32_t EntryPoint); // Function WBP_Armory3_WeaponCatalog_WeaponPart_Entry.WBP_Armory3_WeaponCatalog_WeaponPart_Entry_C.ExecuteUbergraph_WBP_Armory3_WeaponCatalog_WeaponPart_Entry // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

