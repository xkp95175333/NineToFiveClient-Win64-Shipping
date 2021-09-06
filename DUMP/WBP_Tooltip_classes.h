// WidgetBlueprintGeneratedClass WBP_Tooltip.WBP_Tooltip_C
// Size: 0x298 (Inherited: 0x268)
struct UWBP_Tooltip_C : UHWWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWBP_Label_C* ItemDescription; // 0x270(0x08)
	struct UWBP_Box_C* WBP_Box; // 0x278(0x08)
	struct FText Text; // 0x280(0x18)

	void PreConstruct(bool IsDesignTime); // Function WBP_Tooltip.WBP_Tooltip_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void SetText(struct FText Text); // Function WBP_Tooltip.WBP_Tooltip_C.SetText // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Tooltip(int32_t EntryPoint); // Function WBP_Tooltip.WBP_Tooltip_C.ExecuteUbergraph_WBP_Tooltip // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

