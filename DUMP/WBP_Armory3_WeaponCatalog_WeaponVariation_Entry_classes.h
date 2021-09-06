// WidgetBlueprintGeneratedClass WBP_Armory3_WeaponCatalog_WeaponVariation_Entry.WBP_Armory3_WeaponCatalog_WeaponVariation_Entry_C
// Size: 0x2e0 (Inherited: 0x260)
struct UWBP_Armory3_WeaponCatalog_WeaponVariation_Entry_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* BG; // 0x268(0x08)
	struct UImage* Bottomline; // 0x270(0x08)
	struct UImage* BuyIcon; // 0x278(0x08)
	struct UOverlay* BuyState; // 0x280(0x08)
	struct UWBP_RichTextLabel_C* BuyText; // 0x288(0x08)
	struct UWBP_RichTextLabel_C* LoadoutName; // 0x290(0x08)
	struct UWBP_Shop_Item_PriceTag_C* PriceTag; // 0x298(0x08)
	struct UImage* Selected; // 0x2a0(0x08)
	struct UWidgetSwitcher* StateSwitcher; // 0x2a8(0x08)
	struct UImage* VariationImage; // 0x2b0(0x08)
	struct UWBP_RichTextLabel_C* VariationName; // 0x2b8(0x08)
	struct UOverlay* VariationState; // 0x2c0(0x08)
	struct UWBP_Armory3_SellButton_C* WBP_Armory3_SellButton; // 0x2c8(0x08)
	struct UWBP_Armory3_WeaponSets_C* WBP_Armory3_WeaponSets; // 0x2d0(0x08)
	struct UBP_Armory3_WeaponVariation_ListEntry_C* Variation; // 0x2d8(0x08)

	void SetBuyContent(); // Function WBP_Armory3_WeaponCatalog_WeaponVariation_Entry.WBP_Armory3_WeaponCatalog_WeaponVariation_Entry_C.SetBuyContent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetVariationContent(); // Function WBP_Armory3_WeaponCatalog_WeaponVariation_Entry.WBP_Armory3_WeaponCatalog_WeaponVariation_Entry_C.SetVariationContent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BP_OnEntryReleased(); // Function WBP_Armory3_WeaponCatalog_WeaponVariation_Entry.WBP_Armory3_WeaponCatalog_WeaponVariation_Entry_C.BP_OnEntryReleased // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function WBP_Armory3_WeaponCatalog_WeaponVariation_Entry.WBP_Armory3_WeaponCatalog_WeaponVariation_Entry_C.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void OnListItemObjectSet(struct UObject* ListItemObject); // Function WBP_Armory3_WeaponCatalog_WeaponVariation_Entry.WBP_Armory3_WeaponCatalog_WeaponVariation_Entry_C.OnListItemObjectSet // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_Armory3_WeaponCatalog_WeaponVariation_Entry.WBP_Armory3_WeaponCatalog_WeaponVariation_Entry_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function WBP_Armory3_WeaponCatalog_WeaponVariation_Entry.WBP_Armory3_WeaponCatalog_WeaponVariation_Entry_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function WBP_Armory3_WeaponCatalog_WeaponVariation_Entry.WBP_Armory3_WeaponCatalog_WeaponVariation_Entry_C.BP_OnItemSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void VariationDataChanged(struct UHWArmoryWeaponVariation* Item); // Function WBP_Armory3_WeaponCatalog_WeaponVariation_Entry.WBP_Armory3_WeaponCatalog_WeaponVariation_Entry_C.VariationDataChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetSelectionVisuals(bool Selected); // Function WBP_Armory3_WeaponCatalog_WeaponVariation_Entry.WBP_Armory3_WeaponCatalog_WeaponVariation_Entry_C.SetSelectionVisuals // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_Armory3_SellButton_K2Node_ComponentBoundEvent_0_WeaponDismantled__DelegateSignature(); // Function WBP_Armory3_WeaponCatalog_WeaponVariation_Entry.WBP_Armory3_WeaponCatalog_WeaponVariation_Entry_C.BndEvt__WBP_Armory3_SellButton_K2Node_ComponentBoundEvent_0_WeaponDismantled__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void SetActivePartsData(); // Function WBP_Armory3_WeaponCatalog_WeaponVariation_Entry.WBP_Armory3_WeaponCatalog_WeaponVariation_Entry_C.SetActivePartsData // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Armory3_WeaponCatalog_WeaponVariation_Entry(int32_t EntryPoint); // Function WBP_Armory3_WeaponCatalog_WeaponVariation_Entry.WBP_Armory3_WeaponCatalog_WeaponVariation_Entry_C.ExecuteUbergraph_WBP_Armory3_WeaponCatalog_WeaponVariation_Entry // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

