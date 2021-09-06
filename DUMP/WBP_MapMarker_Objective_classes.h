// WidgetBlueprintGeneratedClass WBP_MapMarker_Objective.WBP_MapMarker_Objective_C
// Size: 0x2c0 (Inherited: 0x28d)
struct UWBP_MapMarker_Objective_C : UWBP_MapMarker_C {
	char pad_28D[0x3]; // 0x28d(0x03)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	struct UImage* DownArrow; // 0x298(0x08)
	struct UImage* Icon; // 0x2a0(0x08)
	struct UImage* UpArrow; // 0x2a8(0x08)
	struct UWBP_BriefingMap_Annotation_C* WBP_BriefingMap_Annotation; // 0x2b0(0x08)
	struct UWBP_HUD_ObjectiveMarker_C* WBP_HUD_ObjectiveMarker; // 0x2b8(0x08)

	void UpdateVisibility(); // Function WBP_MapMarker_Objective.WBP_MapMarker_Objective_C.UpdateVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetColor(struct FLinearColor NewColor); // Function WBP_MapMarker_Objective.WBP_MapMarker_Objective_C.SetColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetFollowActor(struct AActor* Actor); // Function WBP_MapMarker_Objective.WBP_MapMarker_Objective_C.SetFollowActor // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_MapMarker_Objective.WBP_MapMarker_Objective_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_MapMarker_Objective(int32_t EntryPoint); // Function WBP_MapMarker_Objective.WBP_MapMarker_Objective_C.ExecuteUbergraph_WBP_MapMarker_Objective // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

