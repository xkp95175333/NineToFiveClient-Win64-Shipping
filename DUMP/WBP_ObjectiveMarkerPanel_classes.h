// WidgetBlueprintGeneratedClass WBP_ObjectiveMarkerPanel.WBP_ObjectiveMarkerPanel_C
// Size: 0x2c8 (Inherited: 0x268)
struct UWBP_ObjectiveMarkerPanel_C : UHWWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UHorizontalBox* HorizontalBox_33; // 0x270(0x08)
	struct TMap<struct AHWMapMarker*, struct UWBP_HUD_ObjectiveMarker_C*> CurrentObjectives; // 0x278(0x50)

	void MarkerUpdated(struct AHWPlayerController* Controller, struct AHWMapMarker* UpdatedMarker); // Function WBP_ObjectiveMarkerPanel.WBP_ObjectiveMarkerPanel_C.MarkerUpdated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void RemoveMarkers(); // Function WBP_ObjectiveMarkerPanel.WBP_ObjectiveMarkerPanel_C.RemoveMarkers // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void AddMarker(struct AHWMapMarker* Marker); // Function WBP_ObjectiveMarkerPanel.WBP_ObjectiveMarkerPanel_C.AddMarker // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_ObjectiveMarkerPanel.WBP_ObjectiveMarkerPanel_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_ObjectiveMarkerPanel(int32_t EntryPoint); // Function WBP_ObjectiveMarkerPanel.WBP_ObjectiveMarkerPanel_C.ExecuteUbergraph_WBP_ObjectiveMarkerPanel // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

