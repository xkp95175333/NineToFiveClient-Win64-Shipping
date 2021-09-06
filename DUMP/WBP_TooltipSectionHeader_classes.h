// WidgetBlueprintGeneratedClass WBP_TooltipSectionHeader.WBP_TooltipSectionHeader_C
// Size: 0x290 (Inherited: 0x268)
struct UWBP_TooltipSectionHeader_C : UHWWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWBP_RichTextLabel_C* Text; // 0x270(0x08)
	struct FText Title; // 0x278(0x18)

	void SetTitle(struct FText Title); // Function WBP_TooltipSectionHeader.WBP_TooltipSectionHeader_C.SetTitle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Update(); // Function WBP_TooltipSectionHeader.WBP_TooltipSectionHeader_C.Update // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PreConstruct(bool IsDesignTime); // Function WBP_TooltipSectionHeader.WBP_TooltipSectionHeader_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_TooltipSectionHeader(int32_t EntryPoint); // Function WBP_TooltipSectionHeader.WBP_TooltipSectionHeader_C.ExecuteUbergraph_WBP_TooltipSectionHeader // (Final|UbergraphFunction) // @ game+0x13c4ca0
};

