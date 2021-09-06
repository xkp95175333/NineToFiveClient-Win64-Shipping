// WidgetBlueprintGeneratedClass WBP_Armory3_WeaponCard.WBP_Armory3_WeaponCard_C
// Size: 0x320 (Inherited: 0x260)
struct UWBP_Armory3_WeaponCard_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWBP_RichTextLabel_C* Amount; // 0x268(0x08)
	struct UImage* BG; // 0x270(0x08)
	struct UImage* Bottomline; // 0x278(0x08)
	struct UHorizontalBox* Corporation; // 0x280(0x08)
	struct UImage* CorporationImage; // 0x288(0x08)
	struct UWBP_RichTextLabel_C* CorporationName; // 0x290(0x08)
	struct UBorder* DarkenLayer; // 0x298(0x08)
	struct UBorder* HoverIndicator; // 0x2a0(0x08)
	struct UImage* Image_2; // 0x2a8(0x08)
	struct UImage* Image_3; // 0x2b0(0x08)
	struct UImage* Image_LineBottom; // 0x2b8(0x08)
	struct UImage* Image_LineTop; // 0x2c0(0x08)
	struct UWBP_RichTextLabel_C* ItemName; // 0x2c8(0x08)
	struct UImage* Line; // 0x2d0(0x08)
	struct UImage* Line_2; // 0x2d8(0x08)
	struct UWBP_RichTextLabel_C* Not_Acquired; // 0x2e0(0x08)
	struct UOverlay* NotAcquiredState; // 0x2e8(0x08)
	struct UImage* Separator; // 0x2f0(0x08)
	struct UVerticalBox* Status; // 0x2f8(0x08)
	struct UImage* Topline; // 0x300(0x08)
	struct UImage* WeaponImage; // 0x308(0x08)
	struct UImage* WeaponType; // 0x310(0x08)
	struct UHWArmoryWeaponModel* WeaponModel; // 0x318(0x08)

	void BP_OnEntryReleased(); // Function WBP_Armory3_WeaponCard.WBP_Armory3_WeaponCard_C.BP_OnEntryReleased // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function WBP_Armory3_WeaponCard.WBP_Armory3_WeaponCard_C.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function WBP_Armory3_WeaponCard.WBP_Armory3_WeaponCard_C.BP_OnItemSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void OnListItemObjectSet(struct UObject* ListItemObject); // Function WBP_Armory3_WeaponCard.WBP_Armory3_WeaponCard_C.OnListItemObjectSet // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void SetInfo(); // Function WBP_Armory3_WeaponCard.WBP_Armory3_WeaponCard_C.SetInfo // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_Armory3_WeaponCard.WBP_Armory3_WeaponCard_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function WBP_Armory3_WeaponCard.WBP_Armory3_WeaponCard_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Armory3_WeaponCard(int32_t EntryPoint); // Function WBP_Armory3_WeaponCard.WBP_Armory3_WeaponCard_C.ExecuteUbergraph_WBP_Armory3_WeaponCard // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

