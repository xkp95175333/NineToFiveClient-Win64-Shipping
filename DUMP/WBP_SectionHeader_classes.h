// WidgetBlueprintGeneratedClass WBP_SectionHeader.WBP_SectionHeader_C
// Size: 0x294 (Inherited: 0x268)
struct UWBP_SectionHeader_C : UHWWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWBP_RichTextLabel_C* Text; // 0x270(0x08)
	struct FText Title; // 0x278(0x18)
	int32_t Index; // 0x290(0x04)

	void PreConstruct(bool IsDesignTime); // Function WBP_SectionHeader.WBP_SectionHeader_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_SectionHeader(int32_t EntryPoint); // Function WBP_SectionHeader.WBP_SectionHeader_C.ExecuteUbergraph_WBP_SectionHeader // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

