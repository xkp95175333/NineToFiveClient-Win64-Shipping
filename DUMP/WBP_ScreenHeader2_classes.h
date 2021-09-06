// WidgetBlueprintGeneratedClass WBP_ScreenHeader2.WBP_ScreenHeader2_C
// Size: 0x288 (Inherited: 0x260)
struct UWBP_ScreenHeader2_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWBP_RichTextLabel_C* Text; // 0x268(0x08)
	struct FText Contents; // 0x270(0x18)

	void PreConstruct(bool IsDesignTime); // Function WBP_ScreenHeader2.WBP_ScreenHeader2_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void Update(); // Function WBP_ScreenHeader2.WBP_ScreenHeader2_C.Update // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetText(struct FText Text); // Function WBP_ScreenHeader2.WBP_ScreenHeader2_C.SetText // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_ScreenHeader2(int32_t EntryPoint); // Function WBP_ScreenHeader2.WBP_ScreenHeader2_C.ExecuteUbergraph_WBP_ScreenHeader2 // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

