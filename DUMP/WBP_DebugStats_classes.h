// WidgetBlueprintGeneratedClass WBP_DebugStats.WBP_DebugStats_C
// Size: 0x318 (Inherited: 0x268)
struct UWBP_DebugStats_C : UHWWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UTextBlock* ClientPing; // 0x270(0x08)
	struct UTextBlock* Fps; // 0x278(0x08)
	struct UTextBlock* Ping; // 0x280(0x08)
	int32_t FrameCounter; // 0x288(0x04)
	float FrameTimeCounter; // 0x28c(0x04)
	struct FSlateColor ColorBad; // 0x290(0x28)
	struct FSlateColor ColorOk; // 0x2b8(0x28)
	struct FSlateColor ColorGood; // 0x2e0(0x28)
	int32_t PingLimitOk; // 0x308(0x04)
	int32_t PingLimitBad; // 0x30c(0x04)
	int32_t FPSLimitOk; // 0x310(0x04)
	int32_t FPSLimitBad; // 0x314(0x04)

	void ShowSimulatedLag(); // Function WBP_DebugStats.WBP_DebugStats_C.ShowSimulatedLag // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateStats(); // Function WBP_DebugStats.WBP_DebugStats_C.UpdateStats // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateFPS(); // Function WBP_DebugStats.WBP_DebugStats_C.UpdateFPS // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UpdatePing(); // Function WBP_DebugStats.WBP_DebugStats_C.UpdatePing // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_DebugStats.WBP_DebugStats_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_DebugStats.WBP_DebugStats_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateTimer(); // Function WBP_DebugStats.WBP_DebugStats_C.UpdateTimer // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateSimulatedPing(); // Function WBP_DebugStats.WBP_DebugStats_C.UpdateSimulatedPing // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_DebugStats(int32_t EntryPoint); // Function WBP_DebugStats.WBP_DebugStats_C.ExecuteUbergraph_WBP_DebugStats // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

