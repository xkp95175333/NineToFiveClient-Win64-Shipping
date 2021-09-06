// WidgetBlueprintGeneratedClass WBP_Rigs_ComparisonBar.WBP_Rigs_ComparisonBar_C
// Size: 0x288 (Inherited: 0x260)
struct UWBP_Rigs_ComparisonBar_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UProgressBar* ProgressBarAbove; // 0x268(0x08)
	struct UProgressBar* ProgressBarBelow; // 0x270(0x08)
	float CurrentValue; // 0x278(0x04)
	float ComparisonValue; // 0x27c(0x04)
	float MinValue; // 0x280(0x04)
	float MaxValue; // 0x284(0x04)

	void SetProgressBarPercent(struct UProgressBar* ProgressBar, float Current, float Min, float Max); // Function WBP_Rigs_ComparisonBar.WBP_Rigs_ComparisonBar_C.SetProgressBarPercent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetData(float Value, float Other, float Min, float Max); // Function WBP_Rigs_ComparisonBar.WBP_Rigs_ComparisonBar_C.SetData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Update(); // Function WBP_Rigs_ComparisonBar.WBP_Rigs_ComparisonBar_C.Update // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PreConstruct(bool IsDesignTime); // Function WBP_Rigs_ComparisonBar.WBP_Rigs_ComparisonBar_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Rigs_ComparisonBar(int32_t EntryPoint); // Function WBP_Rigs_ComparisonBar.WBP_Rigs_ComparisonBar_C.ExecuteUbergraph_WBP_Rigs_ComparisonBar // (Final|UbergraphFunction) // @ game+0x13c4ca0
};

