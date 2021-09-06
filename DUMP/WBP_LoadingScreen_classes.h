// WidgetBlueprintGeneratedClass WBP_LoadingScreen.WBP_LoadingScreen_C
// Size: 0x280 (Inherited: 0x260)
struct UWBP_LoadingScreen_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* Loading_Outro; // 0x268(0x08)
	struct UWidgetAnimation* Loading_Intro; // 0x270(0x08)
	struct UImage* LoadingAnim; // 0x278(0x08)

	void PreConstruct(bool IsDesignTime); // Function WBP_LoadingScreen.WBP_LoadingScreen_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_LoadingScreen(int32_t EntryPoint); // Function WBP_LoadingScreen.WBP_LoadingScreen_C.ExecuteUbergraph_WBP_LoadingScreen // (Final|UbergraphFunction) // @ game+0x13c4ca0
};

