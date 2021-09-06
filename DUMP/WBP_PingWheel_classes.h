// WidgetBlueprintGeneratedClass WBP_PingWheel.WBP_PingWheel_C
// Size: 0x2a8 (Inherited: 0x260)
struct UWBP_PingWheel_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* Init; // 0x268(0x08)
	struct UCanvasPanel* Content; // 0x270(0x08)
	struct UOverlay* Items; // 0x278(0x08)
	struct FVector2D CursorPos; // 0x280(0x08)
	bool IsActive; // 0x288(0x01)
	char pad_289[0x3]; // 0x289(0x03)
	int32_t CurrentSegment; // 0x28c(0x04)
	struct TArray<struct UWBP_PingWheelSegment_C*> Segments; // 0x290(0x10)
	float MinSquareOffsetFromCenter; // 0x2a0(0x04)
	float CursorSensitivity; // 0x2a4(0x04)

	void TrySendPing(); // Function WBP_PingWheel.WBP_PingWheel_C.TrySendPing // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnPaint(struct FPaintContext Context); // Function WBP_PingWheel.WBP_PingWheel_C.OnPaint // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x13c4ca0
	void Set Segment(int32_t Segment); // Function WBP_PingWheel.WBP_PingWheel_C.Set Segment // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetActive(bool Value); // Function WBP_PingWheel.WBP_PingWheel_C.SetActive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetItems(struct TArray<enum class EHWPingReason> reasons); // Function WBP_PingWheel.WBP_PingWheel_C.SetItems // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_PingWheel.WBP_PingWheel_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_PingWheel.WBP_PingWheel_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnState(bool Active, struct FVector2D Cursor); // Function WBP_PingWheel.WBP_PingWheel_C.OnState // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PreConstruct(bool IsDesignTime); // Function WBP_PingWheel.WBP_PingWheel_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_PingWheel(int32_t EntryPoint); // Function WBP_PingWheel.WBP_PingWheel_C.ExecuteUbergraph_WBP_PingWheel // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

