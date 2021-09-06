// WidgetBlueprintGeneratedClass WBP_SectionHeaderBlack.WBP_SectionHeaderBlack_C
// Size: 0x296 (Inherited: 0x268)
struct UWBP_SectionHeaderBlack_C : UHWWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWBP_RichTextLabel_C* Text; // 0x270(0x08)
	struct FText Title; // 0x278(0x18)
	int32_t Index; // 0x290(0x04)
	bool ShowIndex; // 0x294(0x01)
	bool HighlightedTitle; // 0x295(0x01)

	void PreConstruct(bool IsDesignTime); // Function WBP_SectionHeaderBlack.WBP_SectionHeaderBlack_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_SectionHeaderBlack(int32_t EntryPoint); // Function WBP_SectionHeaderBlack.WBP_SectionHeaderBlack_C.ExecuteUbergraph_WBP_SectionHeaderBlack // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

