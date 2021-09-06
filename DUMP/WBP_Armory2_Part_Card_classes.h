// WidgetBlueprintGeneratedClass WBP_Armory2_Part_Card.WBP_Armory2_Part_Card_C
// Size: 0x2f4 (Inherited: 0x260)
struct UWBP_Armory2_Part_Card_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWBP_RichTextLabel_C* Description; // 0x268(0x08)
	struct UBorder* FillBorder; // 0x270(0x08)
	struct UImage* Image_Arrow; // 0x278(0x08)
	struct UImage* Image_Brush; // 0x280(0x08)
	struct UHorizontalBox* Part_Default; // 0x288(0x08)
	struct UImage* Part_Installed; // 0x290(0x08)
	struct UImage* Part_Locked; // 0x298(0x08)
	struct UImage* SelectedBorder; // 0x2a0(0x08)
	struct UWidgetSwitcher* statusSwitcher; // 0x2a8(0x08)
	struct UWBP_RichTextLabel_C* Title; // 0x2b0(0x08)
	struct UWBP_RichTextLabel_C* WBP_RichTextLabel; // 0x2b8(0x08)
	bool IsUninstall; // 0x2c0(0x01)
	char pad_2C1[0x7]; // 0x2c1(0x07)
	struct UHWPartItem* PartItem; // 0x2c8(0x08)
	bool Hovered; // 0x2d0(0x01)
	char pad_2D1[0x3]; // 0x2d1(0x03)
	struct FLinearColor BackgroundColor; // 0x2d4(0x10)
	struct FLinearColor HoveredColor; // 0x2e4(0x10)

	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function WBP_Armory2_Part_Card.WBP_Armory2_Part_Card_C.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function WBP_Armory2_Part_Card.WBP_Armory2_Part_Card_C.BP_OnItemSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void OnListItemObjectSet(struct UObject* ListItemObject); // Function WBP_Armory2_Part_Card.WBP_Armory2_Part_Card_C.OnListItemObjectSet // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_Armory2_Part_Card.WBP_Armory2_Part_Card_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function WBP_Armory2_Part_Card.WBP_Armory2_Part_Card_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void SetPartHovered(bool Hovered); // Function WBP_Armory2_Part_Card.WBP_Armory2_Part_Card_C.SetPartHovered // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateUninstallCard(); // Function WBP_Armory2_Part_Card.WBP_Armory2_Part_Card_C.UpdateUninstallCard // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateLockedState(); // Function WBP_Armory2_Part_Card.WBP_Armory2_Part_Card_C.UpdateLockedState // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BP_OnEntryReleased(); // Function WBP_Armory2_Part_Card.WBP_Armory2_Part_Card_C.BP_OnEntryReleased // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateWidget(); // Function WBP_Armory2_Part_Card.WBP_Armory2_Part_Card_C.UpdateWidget // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UpdatePartCard(); // Function WBP_Armory2_Part_Card.WBP_Armory2_Part_Card_C.UpdatePartCard // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Armory2_Part_Card(int32_t EntryPoint); // Function WBP_Armory2_Part_Card.WBP_Armory2_Part_Card_C.ExecuteUbergraph_WBP_Armory2_Part_Card // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

