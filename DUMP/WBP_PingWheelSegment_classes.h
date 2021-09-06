// WidgetBlueprintGeneratedClass WBP_PingWheelSegment.WBP_PingWheelSegment_C
// Size: 0x2b1 (Inherited: 0x260)
struct UWBP_PingWheelSegment_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* FadeIn; // 0x268(0x08)
	struct UWidgetAnimation* OnHighlight; // 0x270(0x08)
	struct UImage* Background; // 0x278(0x08)
	struct UCanvasPanel* Content; // 0x280(0x08)
	struct UImage* Highlight; // 0x288(0x08)
	struct UImage* Icon; // 0x290(0x08)
	struct UOverlay* Info; // 0x298(0x08)
	struct UTextBlock* Text; // 0x2a0(0x08)
	float Angle; // 0x2a8(0x04)
	enum class EHWPingReason Reason; // 0x2ac(0x01)
	bool IsHighlighted; // 0x2ad(0x01)
	enum class EHWPingReason DroneAlternate; // 0x2ae(0x01)
	bool HasDroneAlternate; // 0x2af(0x01)
	bool IsDrone; // 0x2b0(0x01)

	void UpdateLabel(enum class EHWPingReason Reason); // Function WBP_PingWheelSegment.WBP_PingWheelSegment_C.UpdateLabel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	struct FText GetLabel(enum class EHWPingReason Enumerator); // Function WBP_PingWheelSegment.WBP_PingWheelSegment_C.GetLabel // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void OnShown(bool IsDrone); // Function WBP_PingWheelSegment.WBP_PingWheelSegment_C.OnShown // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetHighlighted(bool Value); // Function WBP_PingWheelSegment.WBP_PingWheelSegment_C.SetHighlighted // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecutePing(); // Function WBP_PingWheelSegment.WBP_PingWheelSegment_C.ExecutePing // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetParams(float Angle, enum class EHWPingReason Reason); // Function WBP_PingWheelSegment.WBP_PingWheelSegment_C.SetParams // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PreConstruct(bool IsDesignTime); // Function WBP_PingWheelSegment.WBP_PingWheelSegment_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_PingWheelSegment(int32_t EntryPoint); // Function WBP_PingWheelSegment.WBP_PingWheelSegment_C.ExecuteUbergraph_WBP_PingWheelSegment // (Final|UbergraphFunction) // @ game+0x13c4ca0
};

