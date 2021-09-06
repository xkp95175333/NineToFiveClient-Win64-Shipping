// WidgetBlueprintGeneratedClass WBP_MapMarker_Camera.WBP_MapMarker_Camera_C
// Size: 0x2b8 (Inherited: 0x28d)
struct UWBP_MapMarker_Camera_C : UWBP_MapMarker_C {
	char pad_28D[0x3]; // 0x28d(0x03)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	struct UImage* ArrowDown; // 0x298(0x08)
	struct UImage* ArrowUp; // 0x2a0(0x08)
	struct UImage* HudCamera; // 0x2a8(0x08)
	struct UImage* HudcameraHover; // 0x2b0(0x08)

	void Construct(); // Function WBP_MapMarker_Camera.WBP_MapMarker_Camera_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_MapMarker_Camera.WBP_MapMarker_Camera_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void SetFollowActor(struct AActor* Actor); // Function WBP_MapMarker_Camera.WBP_MapMarker_Camera_C.SetFollowActor // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_MapMarker_Camera(int32_t EntryPoint); // Function WBP_MapMarker_Camera.WBP_MapMarker_Camera_C.ExecuteUbergraph_WBP_MapMarker_Camera // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

