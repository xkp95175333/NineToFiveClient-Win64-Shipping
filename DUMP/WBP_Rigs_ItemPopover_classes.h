// WidgetBlueprintGeneratedClass WBP_Rigs_ItemPopover.WBP_Rigs_ItemPopover_C
// Size: 0x288 (Inherited: 0x260)
struct UWBP_Rigs_ItemPopover_C : UUserWidget {
	struct UImage* Image_Item; // 0x260(0x08)
	struct UWBP_TooltipSectionHeader_C* ItemType; // 0x268(0x08)
	struct UWBP_RichTextLabel_C* Label_Description; // 0x270(0x08)
	struct UWBP_RichTextLabel_C* Label_Name; // 0x278(0x08)
	struct UWBP_RichTextLabel_C* Label_Quantity; // 0x280(0x08)

	void SetData(struct FName ItemId); // Function WBP_Rigs_ItemPopover.WBP_Rigs_ItemPopover_C.SetData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

