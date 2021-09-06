// WidgetBlueprintGeneratedClass WBP_RewardRowTooltip.WBP_RewardRowTooltip_C
// Size: 0x278 (Inherited: 0x260)
struct UWBP_RewardRowTooltip_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWBP_RichTextLabel_C* Name; // 0x268(0x08)
	struct UImage* RewardIcon; // 0x270(0x08)

	void BP_OnEntryReleased(); // Function WBP_RewardRowTooltip.WBP_RewardRowTooltip_C.BP_OnEntryReleased // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function WBP_RewardRowTooltip.WBP_RewardRowTooltip_C.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function WBP_RewardRowTooltip.WBP_RewardRowTooltip_C.BP_OnItemSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void OnListItemObjectSet(struct UObject* ListItemObject); // Function WBP_RewardRowTooltip.WBP_RewardRowTooltip_C.OnListItemObjectSet // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_RewardRowTooltip(int32_t EntryPoint); // Function WBP_RewardRowTooltip.WBP_RewardRowTooltip_C.ExecuteUbergraph_WBP_RewardRowTooltip // (Final|UbergraphFunction) // @ game+0x13c4ca0
};

