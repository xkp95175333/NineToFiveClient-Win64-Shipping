// WidgetBlueprintGeneratedClass WBP_HUD_RoundTimer.WBP_HUD_RoundTimer_C
// Size: 0x310 (Inherited: 0x260)
struct UWBP_HUD_RoundTimer_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* Overtime_Anim; // 0x268(0x08)
	struct UWidgetAnimation* 1minLeft_Anim; // 0x270(0x08)
	struct UWidgetAnimation* 10sLeft_Anim; // 0x278(0x08)
	struct UImage* BG; // 0x280(0x08)
	struct UTextBlock* OverTime; // 0x288(0x08)
	struct UTextBlock* timeTxt; // 0x290(0x08)
	int32_t SecondsLeft; // 0x298(0x04)
	char pad_29C[0x4]; // 0x29c(0x04)
	struct FSlateColor Color60s; // 0x2a0(0x28)
	struct FSlateColor ColorDefault; // 0x2c8(0x28)
	struct FLinearColor ColorBackgroundDefault; // 0x2f0(0x10)
	struct FLinearColor ColorBackground10s; // 0x300(0x10)

	void SetTime(int32_t Seconds); // Function WBP_HUD_RoundTimer.WBP_HUD_RoundTimer_C.SetTime // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_HUD_RoundTimer.WBP_HUD_RoundTimer_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_HUD_RoundTimer(int32_t EntryPoint); // Function WBP_HUD_RoundTimer.WBP_HUD_RoundTimer_C.ExecuteUbergraph_WBP_HUD_RoundTimer // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

