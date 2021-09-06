// WidgetBlueprintGeneratedClass WBP_DebugMenuPage_ViewModes.WBP_DebugMenuPage_ViewModes_C
// Size: 0x270 (Inherited: 0x260)
struct UWBP_DebugMenuPage_ViewModes_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UVerticalBox* List; // 0x268(0x08)

	void OnViewModeButtonClicked(struct UWBP_Button_C* Button); // Function WBP_DebugMenuPage_ViewModes.WBP_DebugMenuPage_ViewModes_C.OnViewModeButtonClicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void FillViewModes(); // Function WBP_DebugMenuPage_ViewModes.WBP_DebugMenuPage_ViewModes_C.FillViewModes // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_DebugMenuPage_ViewModes.WBP_DebugMenuPage_ViewModes_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void PreConstruct(bool IsDesignTime); // Function WBP_DebugMenuPage_ViewModes.WBP_DebugMenuPage_ViewModes_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_DebugMenuPage_ViewModes(int32_t EntryPoint); // Function WBP_DebugMenuPage_ViewModes.WBP_DebugMenuPage_ViewModes_C.ExecuteUbergraph_WBP_DebugMenuPage_ViewModes // (Final|UbergraphFunction) // @ game+0x13c4ca0
};

