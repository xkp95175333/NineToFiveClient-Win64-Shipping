// WidgetBlueprintGeneratedClass WBP_HUDPingMarker.WBP_HUDPingMarker_C
// Size: 0x31b (Inherited: 0x268)
struct UWBP_HUDPingMarker_C : UHWWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWidgetAnimation* Highlighted; // 0x270(0x08)
	struct UWidgetAnimation* MarkerCreatedAnim; // 0x278(0x08)
	struct UOverlay* Arrow; // 0x280(0x08)
	struct UCanvasPanel* contentCanvas; // 0x288(0x08)
	struct UWBP_RichTextLabel_C* DistanceLabel_2; // 0x290(0x08)
	struct UImage* Image_2; // 0x298(0x08)
	struct UImage* Image_25; // 0x2a0(0x08)
	struct UImage* Image_46; // 0x2a8(0x08)
	struct UImage* MarkerInsideImage; // 0x2b0(0x08)
	struct UWBP_RichTextLabel_C* MarkerText; // 0x2b8(0x08)
	struct UImage* Pin; // 0x2c0(0x08)
	struct UOverlay* pinHolder; // 0x2c8(0x08)
	struct UImage* response1; // 0x2d0(0x08)
	struct UImage* response2; // 0x2d8(0x08)
	struct UImage* response3; // 0x2e0(0x08)
	struct UWidgetSwitcher* responsePrompt; // 0x2e8(0x08)
	struct UWBP_HUD_ObjectiveMarker_C* WBP_HUD_ObjectiveMarker; // 0x2f0(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_1; // 0x2f8(0x08)
	struct AHWMapMarker* worldMarker; // 0x300(0x08)
	bool IsPingMarker; // 0x308(0x01)
	char pad_309[0x7]; // 0x309(0x07)
	struct UCanvasPanelSlot* pinCanvasSlot; // 0x310(0x08)
	bool CanBeColored; // 0x318(0x01)
	bool IsFriendly; // 0x319(0x01)
	bool CurrentHighlighted; // 0x31a(0x01)

	void UpdateMarkerText(); // Function WBP_HUDPingMarker.WBP_HUDPingMarker_C.UpdateMarkerText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateScale(float X, float Y); // Function WBP_HUDPingMarker.WBP_HUDPingMarker_C.UpdateScale // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Update Focus(struct AHWMapMarker* FocusedMarker); // Function WBP_HUDPingMarker.WBP_HUDPingMarker_C.Update Focus // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateHighlighted(); // Function WBP_HUDPingMarker.WBP_HUDPingMarker_C.UpdateHighlighted // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UpdatePin(bool Clamped, float ClampAngle, float Offset); // Function WBP_HUDPingMarker.WBP_HUDPingMarker_C.UpdatePin // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetPingAudioEvent(enum class EHWPingReason PingReason, struct UAkAudioEvent* Event); // Function WBP_HUDPingMarker.WBP_HUDPingMarker_C.GetPingAudioEvent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void PlayPingAudio(enum class EHWPingReason Reason); // Function WBP_HUDPingMarker.WBP_HUDPingMarker_C.PlayPingAudio // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetMarkerColor(struct FLinearColor Color); // Function WBP_HUDPingMarker.WBP_HUDPingMarker_C.SetMarkerColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UpdatePositionInfo(bool Clamped, float ClampAngle, float Proximity, float proximityOffset, float Distance); // Function WBP_HUDPingMarker.WBP_HUDPingMarker_C.UpdatePositionInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetPingReason(enum class EHWPingReason Reason); // Function WBP_HUDPingMarker.WBP_HUDPingMarker_C.SetPingReason // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PlayMarkerCreatedAnim(); // Function WBP_HUDPingMarker.WBP_HUDPingMarker_C.PlayMarkerCreatedAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetInsideImage(struct UTexture2D* In Brush Image, bool Rotated); // Function WBP_HUDPingMarker.WBP_HUDPingMarker_C.SetInsideImage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateMarkerColor(); // Function WBP_HUDPingMarker.WBP_HUDPingMarker_C.UpdateMarkerColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_HUDPingMarker.WBP_HUDPingMarker_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateWorldMarker(struct AHWMapMarker* InWorldMarker); // Function WBP_HUDPingMarker.WBP_HUDPingMarker_C.UpdateWorldMarker // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PreConstruct(bool IsDesignTime); // Function WBP_HUDPingMarker.WBP_HUDPingMarker_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_HUDPingMarker(int32_t EntryPoint); // Function WBP_HUDPingMarker.WBP_HUDPingMarker_C.ExecuteUbergraph_WBP_HUDPingMarker // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

