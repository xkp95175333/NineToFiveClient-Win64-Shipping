// WidgetBlueprintGeneratedClass WBP_Missions_Item.WBP_Missions_Item_C
// Size: 0x2f9 (Inherited: 0x260)
struct UWBP_Missions_Item_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* Complete_Icon; // 0x268(0x08)
	struct UHorizontalBox* Completed; // 0x270(0x08)
	struct UImage* CorporationIcon; // 0x278(0x08)
	struct UImage* Icon; // 0x280(0x08)
	struct UImage* Image; // 0x288(0x08)
	struct UImage* Image_146; // 0x290(0x08)
	struct UHorizontalBox* InProgress; // 0x298(0x08)
	struct USizeBox* Locked; // 0x2a0(0x08)
	struct UImage* Locked_Icon; // 0x2a8(0x08)
	struct UBorder* MissionContainer; // 0x2b0(0x08)
	struct UWBP_RichTextLabel_C* MissionLabel; // 0x2b8(0x08)
	struct UImage* Recurring_Icon; // 0x2c0(0x08)
	struct USizeBox* RecurringTask_Indication_HoverArea; // 0x2c8(0x08)
	struct UWBP_RichTextLabel_C* RewardLabel; // 0x2d0(0x08)
	struct UWidgetSwitcher* Status; // 0x2d8(0x08)
	struct UWBP_Box_C* WBP_Box; // 0x2e0(0x08)
	struct UWBP_RichTextLabel_C* WBP_RichTextLabel; // 0x2e8(0x08)
	struct UWBP_RichTextLabel_C* WBP_RichTextLabel_2; // 0x2f0(0x08)
	bool ActiveOrRewardCollect; // 0x2f8(0x01)

	void SetOrDisableTooltip(bool Condition); // Function WBP_Missions_Item.WBP_Missions_Item_C.SetOrDisableTooltip // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BP_OnEntryReleased(); // Function WBP_Missions_Item.WBP_Missions_Item_C.BP_OnEntryReleased // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function WBP_Missions_Item.WBP_Missions_Item_C.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function WBP_Missions_Item.WBP_Missions_Item_C.BP_OnItemSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void OnListItemObjectSet(struct UObject* ListItemObject); // Function WBP_Missions_Item.WBP_Missions_Item_C.OnListItemObjectSet // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_Missions_Item.WBP_Missions_Item_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function WBP_Missions_Item.WBP_Missions_Item_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Missions_Item(int32_t EntryPoint); // Function WBP_Missions_Item.WBP_Missions_Item_C.ExecuteUbergraph_WBP_Missions_Item // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

