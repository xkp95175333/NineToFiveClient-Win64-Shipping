// WidgetBlueprintGeneratedClass WBP_TooltipSettings.WBP_TooltipSettings_C
// Size: 0x298 (Inherited: 0x268)
struct UWBP_TooltipSettings_C : UHWWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWBP_Label_C* ItemDescription; // 0x270(0x08)
	struct UWBP_Box_C* WBP_Box; // 0x278(0x08)
	struct FText Text; // 0x280(0x18)

	void PreConstruct(bool IsDesignTime); // Function WBP_TooltipSettings.WBP_TooltipSettings_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void SetText(struct FText Text); // Function WBP_TooltipSettings.WBP_TooltipSettings_C.SetText // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_TooltipSettings(int32_t EntryPoint); // Function WBP_TooltipSettings.WBP_TooltipSettings_C.ExecuteUbergraph_WBP_TooltipSettings // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

