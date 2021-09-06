// WidgetBlueprintGeneratedClass WBP_Currencies_MaterialBlock.WBP_Currencies_MaterialBlock_C
// Size: 0x288 (Inherited: 0x260)
struct UWBP_Currencies_MaterialBlock_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWBP_RichTextLabel_C* AmountLabel; // 0x268(0x08)
	struct UImage* MaterialImage; // 0x270(0x08)
	struct UImage* RarityImageColor; // 0x278(0x08)
	struct UImage* ToolTipHoverImage; // 0x280(0x08)

	struct UWidget* Get_ToolTipWidget(); // Function WBP_Currencies_MaterialBlock.WBP_Currencies_MaterialBlock_C.Get_ToolTipWidget // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void CreateTooltip(struct FText InputPin, struct UWidget* Widget); // Function WBP_Currencies_MaterialBlock.WBP_Currencies_MaterialBlock_C.CreateTooltip // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function WBP_Currencies_MaterialBlock.WBP_Currencies_MaterialBlock_C.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void OnListItemObjectSet(struct UObject* ListItemObject); // Function WBP_Currencies_MaterialBlock.WBP_Currencies_MaterialBlock_C.OnListItemObjectSet // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function WBP_Currencies_MaterialBlock.WBP_Currencies_MaterialBlock_C.BP_OnItemSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void BP_OnEntryReleased(); // Function WBP_Currencies_MaterialBlock.WBP_Currencies_MaterialBlock_C.BP_OnEntryReleased // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Currencies_MaterialBlock(int32_t EntryPoint); // Function WBP_Currencies_MaterialBlock.WBP_Currencies_MaterialBlock_C.ExecuteUbergraph_WBP_Currencies_MaterialBlock // (Final|UbergraphFunction) // @ game+0x13c4ca0
};

