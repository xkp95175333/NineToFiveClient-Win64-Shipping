// WidgetBlueprintGeneratedClass WBP_Rigs_ArmorSetPopover.WBP_Rigs_ArmorSetPopover_C
// Size: 0x3a8 (Inherited: 0x260)
struct UWBP_Rigs_ArmorSetPopover_C : UUserWidget {
	struct UWBP_Rigs_ArmorSetPopover_AssCount_C* AssCount; // 0x260(0x08)
	struct UImage* Divider; // 0x268(0x08)
	struct UWBP_RichTextLabel_C* Label_ArmorSetName; // 0x270(0x08)
	struct UWBP_RichTextLabel_C* Label_Durability_Armor; // 0x278(0x08)
	struct UWBP_RichTextLabel_C* Label_Vendor; // 0x280(0x08)
	struct UWBP_Rigs_ComparisonBar_C* ValueHitpoints; // 0x288(0x08)
	struct UVerticalBox* VB_ItemSlots_Current; // 0x290(0x08)
	struct UVerticalBox* VB_ItemSlots_This; // 0x298(0x08)
	struct UVerticalBox* VB_ItemSlots_This_Parent; // 0x2a0(0x08)
	struct UWBP_Box_C* WBP_Box_52; // 0x2a8(0x08)
	struct UWBP_RichTextLabel_C* WBP_RichTextLabel_2; // 0x2b0(0x08)
	struct FHWArmorSetData NewVar_1; // 0x2b8(0x78)
	struct FHWArmorSetData NewVar_2; // 0x330(0x78)

	void PopulateItemSlots(struct FHWArmorSetBaseData Data, struct UPanelWidget* Container ); // Function WBP_Rigs_ArmorSetPopover.WBP_Rigs_ArmorSetPopover_C.PopulateItemSlots // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetArmorDurability(struct UWBP_RichTextLabel_C* Label, struct UWBP_Rigs_ComparisonBar_C* ProgressBar, int32_t CurrentHP, int32_t ComparisonHP); // Function WBP_Rigs_ArmorSetPopover.WBP_Rigs_ArmorSetPopover_C.SetArmorDurability // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetData(struct FName ArmorSetId, struct FName OriginalArmorSetId); // Function WBP_Rigs_ArmorSetPopover.WBP_Rigs_ArmorSetPopover_C.SetData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

