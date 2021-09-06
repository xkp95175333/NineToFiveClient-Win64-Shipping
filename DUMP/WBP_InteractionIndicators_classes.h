// WidgetBlueprintGeneratedClass WBP_InteractionIndicators.WBP_InteractionIndicators_C
// Size: 0x2a0 (Inherited: 0x260)
struct UWBP_InteractionIndicators_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* BG; // 0x268(0x08)
	struct UWBP_CircularProgressBar_C* Loader; // 0x270(0x08)
	struct UWBP_RichTextLabel_C* TimeLeft; // 0x278(0x08)
	float Duration; // 0x280(0x04)
	float TimerText; // 0x284(0x04)
	struct FTimerHandle ProgressTimerHandle; // 0x288(0x08)
	float StartTime; // 0x290(0x04)
	char pad_294[0x4]; // 0x294(0x04)
	struct FTimerHandle TextTimerHandle; // 0x298(0x08)

	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_InteractionIndicators.WBP_InteractionIndicators_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void SetContent(float Duration, enum class EHWProgressBarType BarType); // Function WBP_InteractionIndicators.WBP_InteractionIndicators_C.SetContent // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetProgress(); // Function WBP_InteractionIndicators.WBP_InteractionIndicators_C.SetProgress // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetTimer(); // Function WBP_InteractionIndicators.WBP_InteractionIndicators_C.SetTimer // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_InteractionIndicators(int32_t EntryPoint); // Function WBP_InteractionIndicators.WBP_InteractionIndicators_C.ExecuteUbergraph_WBP_InteractionIndicators // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

