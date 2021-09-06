// WidgetBlueprintGeneratedClass WBP_Animated_Progress_Bar.WBP_Animated_Progress_Bar_C
// Size: 0x28c (Inherited: 0x260)
struct UWBP_Animated_Progress_Bar_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UProgressBar* ProgressBar; // 0x268(0x08)
	struct FLinearColor BarColor; // 0x270(0x10)
	float StartPercent; // 0x280(0x04)
	float EndPercent; // 0x284(0x04)
	float Progress; // 0x288(0x04)

	void PreConstruct(bool IsDesignTime); // Function WBP_Animated_Progress_Bar.WBP_Animated_Progress_Bar_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_Animated_Progress_Bar.WBP_Animated_Progress_Bar_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_Animated_Progress_Bar.WBP_Animated_Progress_Bar_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateWidget(); // Function WBP_Animated_Progress_Bar.WBP_Animated_Progress_Bar_C.UpdateWidget // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Animated_Progress_Bar(int32_t EntryPoint); // Function WBP_Animated_Progress_Bar.WBP_Animated_Progress_Bar_C.ExecuteUbergraph_WBP_Animated_Progress_Bar // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

