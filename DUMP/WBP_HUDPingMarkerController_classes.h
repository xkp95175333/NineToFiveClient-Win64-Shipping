// WidgetBlueprintGeneratedClass WBP_HUDPingMarkerController.WBP_HUDPingMarkerController_C
// Size: 0x338 (Inherited: 0x268)
struct UWBP_HUDPingMarkerController_C : UHWWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UCanvasPanel* Canvas; // 0x270(0x08)
	struct TArray<struct UWBP_HUDPingMarker_C*> HUDMarkers; // 0x278(0x10)
	struct TArray<struct UWBP_DynamicPingMarker_C*> DynamicPingWidgets; // 0x288(0x10)
	float NearDistance; // 0x298(0x04)
	float FarDistance; // 0x29c(0x04)
	struct FVector CachedCameraPosition; // 0x2a0(0x0c)
	struct FVector2D CachedCanvasSize; // 0x2ac(0x08)
	bool MarkerTo; // 0x2b4(0x01)
	char pad_2B5[0x3]; // 0x2b5(0x03)
	struct TArray<struct AHWMapMarker*> CurrentMarkers; // 0x2b8(0x10)
	float VerticalNearOffset; // 0x2c8(0x04)
	struct FVector2D InvCachedCanvasSize; // 0x2cc(0x08)
	char pad_2D4[0x4]; // 0x2d4(0x04)
	struct AHWPlayerController* HWPlayerController; // 0x2d8(0x08)
	struct UCurveFloat* MarkerScaleCurve; // 0x2e0(0x08)
	struct TMap<struct UWBP_SignalDetectorMarker_C*, float> SignalDetectorWidgetsLifetimeMap; // 0x2e8(0x50)

	void OnSignalDetectorMarker(struct FVector Location); // Function WBP_HUDPingMarkerController.WBP_HUDPingMarkerController_C.OnSignalDetectorMarker // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateSignalDetectorWidgets(float DeltaT); // Function WBP_HUDPingMarkerController.WBP_HUDPingMarkerController_C.UpdateSignalDetectorWidgets // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ClampToUsefulZone(struct FVector2D Pos, struct FVector2D newPos, bool Clamped, float Angle); // Function WBP_HUDPingMarkerController.WBP_HUDPingMarkerController_C.ClampToUsefulZone // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UpdatePingWidget(struct UWBP_HUDPingMarker_C* Widget); // Function WBP_HUDPingMarkerController.WBP_HUDPingMarkerController_C.UpdatePingWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void FindWidgetForMarker(struct AHWMapMarker* Marker, struct UWBP_HUDPingMarker_C* Widget); // Function WBP_HUDPingMarkerController.WBP_HUDPingMarkerController_C.FindWidgetForMarker // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void AddMissingMarkerWidget(struct AHWMapMarker* worldMarker); // Function WBP_HUDPingMarkerController.WBP_HUDPingMarkerController_C.AddMissingMarkerWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateMarkerWidgets(); // Function WBP_HUDPingMarkerController.WBP_HUDPingMarkerController_C.UpdateMarkerWidgets // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void CheckArrayChange(struct TArray<struct AHWMapMarker*> Array, bool changed); // Function WBP_HUDPingMarkerController.WBP_HUDPingMarkerController_C.CheckArrayChange // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void CacheData(); // Function WBP_HUDPingMarkerController.WBP_HUDPingMarkerController_C.CacheData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetLocationInfo(struct FVector orig, float Proximity, float Distance); // Function WBP_HUDPingMarkerController.WBP_HUDPingMarkerController_C.GetLocationInfo // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void UpdateDynamicPing(); // Function WBP_HUDPingMarkerController.WBP_HUDPingMarkerController_C.UpdateDynamicPing // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnDynamicPing(struct UHWDetectableComponent* Detectable, bool State); // Function WBP_HUDPingMarkerController.WBP_HUDPingMarkerController_C.OnDynamicPing // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Add Detectable(struct UHWDetectableComponent* Detectable); // Function WBP_HUDPingMarkerController.WBP_HUDPingMarkerController_C.Add Detectable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetHUDMarkerPosition(struct UWBP_HUDPingMarker_C* MarkerImage, struct AHWMapMarker* worldMarker); // Function WBP_HUDPingMarkerController.WBP_HUDPingMarkerController_C.SetHUDMarkerPosition // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetOpacityBasedOnAiming(struct UWidget* Widget); // Function WBP_HUDPingMarkerController.WBP_HUDPingMarkerController_C.SetOpacityBasedOnAiming // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UpdatePingMarkers(); // Function WBP_HUDPingMarkerController.WBP_HUDPingMarkerController_C.UpdatePingMarkers // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetActivePingMarkers(struct TArray<struct AHWMapMarker*> ActiveMarkers); // Function WBP_HUDPingMarkerController.WBP_HUDPingMarkerController_C.GetActivePingMarkers // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void PreConstruct(bool IsDesignTime); // Function WBP_HUDPingMarkerController.WBP_HUDPingMarkerController_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_HUDPingMarkerController.WBP_HUDPingMarkerController_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_HUDPingMarkerController.WBP_HUDPingMarkerController_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnDetectableRemoved(struct UHWDetectableComponent* Detectable); // Function WBP_HUDPingMarkerController.WBP_HUDPingMarkerController_C.OnDetectableRemoved // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_HUDPingMarkerController(int32_t EntryPoint); // Function WBP_HUDPingMarkerController.WBP_HUDPingMarkerController_C.ExecuteUbergraph_WBP_HUDPingMarkerController // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

