// WidgetBlueprintGeneratedClass WBP_Armory2_Code_Card.WBP_Armory2_Code_Card_C
// Size: 0x2a8 (Inherited: 0x260)
struct UWBP_Armory2_Code_Card_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWBP_RichTextLabel_C* Description; // 0x268(0x08)
	struct UImage* Image_BPCode; // 0x270(0x08)
	struct UImage* Image_Lock; // 0x278(0x08)
	struct USizeBox* LockStatus; // 0x280(0x08)
	struct UImage* SelectedBorder; // 0x288(0x08)
	struct UWBP_RichTextLabel_C* Title; // 0x290(0x08)
	struct UWBP_Box_C* WBP_Box; // 0x298(0x08)
	struct UObject* Item; // 0x2a0(0x08)

	void BP_OnEntryReleased(); // Function WBP_Armory2_Code_Card.WBP_Armory2_Code_Card_C.BP_OnEntryReleased // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function WBP_Armory2_Code_Card.WBP_Armory2_Code_Card_C.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function WBP_Armory2_Code_Card.WBP_Armory2_Code_Card_C.BP_OnItemSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void OnListItemObjectSet(struct UObject* ListItemObject); // Function WBP_Armory2_Code_Card.WBP_Armory2_Code_Card_C.OnListItemObjectSet // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_Armory2_Code_Card.WBP_Armory2_Code_Card_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function WBP_Armory2_Code_Card.WBP_Armory2_Code_Card_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Armory2_Code_Card(int32_t EntryPoint); // Function WBP_Armory2_Code_Card.WBP_Armory2_Code_Card_C.ExecuteUbergraph_WBP_Armory2_Code_Card // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

