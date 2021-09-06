// WidgetBlueprintGeneratedClass WBP_MapMarker.WBP_MapMarker_C
// Size: 0x28d (Inherited: 0x268)
struct UWBP_MapMarker_C : UHWWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UCanvasPanel* CanvasPanel_1; // 0x270(0x08)
	struct AActor* FollowActor; // 0x278(0x08)
	struct UWBP_Map_C* Map; // 0x280(0x08)
	int32_t ZOrder; // 0x288(0x04)
	bool ShowAnnotation; // 0x28c(0x01)

	void InitFollow(struct AHWMapMarker* MapMarker); // Function WBP_MapMarker.WBP_MapMarker_C.InitFollow // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetColor(struct FLinearColor NewColor); // Function WBP_MapMarker.WBP_MapMarker_C.SetColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetAngleRotation(float Location); // Function WBP_MapMarker.WBP_MapMarker_C.GetAngleRotation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetWorldLocation(struct FVector Location); // Function WBP_MapMarker.WBP_MapMarker_C.GetWorldLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void UpdateUpDownArrows(struct UWidget* UpArrow, struct UWidget* DownArrow); // Function WBP_MapMarker.WBP_MapMarker_C.UpdateUpDownArrows // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetFollowActor(struct AActor* Actor); // Function WBP_MapMarker.WBP_MapMarker_C.GetFollowActor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_MapMarker.WBP_MapMarker_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void SetFollowActor(struct AActor* Actor); // Function WBP_MapMarker.WBP_MapMarker_C.SetFollowActor // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_MapMarker(int32_t EntryPoint); // Function WBP_MapMarker.WBP_MapMarker_C.ExecuteUbergraph_WBP_MapMarker // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

