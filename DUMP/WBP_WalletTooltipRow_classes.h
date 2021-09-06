// WidgetBlueprintGeneratedClass WBP_WalletTooltipRow.WBP_WalletTooltipRow_C
// Size: 0x278 (Inherited: 0x260)
struct UWBP_WalletTooltipRow_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* Image_84; // 0x268(0x08)
	struct UWBP_RichTextLabel_C* Name; // 0x270(0x08)

	void SetContent(struct FText Text); // Function WBP_WalletTooltipRow.WBP_WalletTooltipRow_C.SetContent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BP_OnEntryReleased(); // Function WBP_WalletTooltipRow.WBP_WalletTooltipRow_C.BP_OnEntryReleased // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function WBP_WalletTooltipRow.WBP_WalletTooltipRow_C.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function WBP_WalletTooltipRow.WBP_WalletTooltipRow_C.BP_OnItemSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void OnListItemObjectSet(struct UObject* ListItemObject); // Function WBP_WalletTooltipRow.WBP_WalletTooltipRow_C.OnListItemObjectSet // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_WalletTooltipRow.WBP_WalletTooltipRow_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_WalletTooltipRow(int32_t EntryPoint); // Function WBP_WalletTooltipRow.WBP_WalletTooltipRow_C.ExecuteUbergraph_WBP_WalletTooltipRow // (Final|UbergraphFunction) // @ game+0x13c4ca0
};

