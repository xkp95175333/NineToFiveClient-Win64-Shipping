// WidgetBlueprintGeneratedClass WBP_SignalDetectorMarker.WBP_SignalDetectorMarker_C
// Size: 0x2ac (Inherited: 0x260)
struct UWBP_SignalDetectorMarker_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* Pulse; // 0x268(0x08)
	struct UImage* AnimFlasher; // 0x270(0x08)
	struct UWBP_RichTextLabel_C* DistanceTxt; // 0x278(0x08)
	struct UImage* DroneIcon; // 0x280(0x08)
	struct USizeBox* DroneSelect; // 0x288(0x08)
	struct UWidgetSwitcher* PlayerOrDrone; // 0x290(0x08)
	struct USizeBox* PlayerSelect; // 0x298(0x08)
	struct FVector MyWorldLocation; // 0x2a0(0x0c)

	void SetDistance(float Distance); // Function WBP_SignalDetectorMarker.WBP_SignalDetectorMarker_C.SetDistance // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_SignalDetectorMarker.WBP_SignalDetectorMarker_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_SignalDetectorMarker.WBP_SignalDetectorMarker_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_SignalDetectorMarker(int32_t EntryPoint); // Function WBP_SignalDetectorMarker.WBP_SignalDetectorMarker_C.ExecuteUbergraph_WBP_SignalDetectorMarker // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

