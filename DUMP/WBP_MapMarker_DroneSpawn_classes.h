// WidgetBlueprintGeneratedClass WBP_MapMarker_DroneSpawn.WBP_MapMarker_DroneSpawn_C
// Size: 0x2c0 (Inherited: 0x28d)
struct UWBP_MapMarker_DroneSpawn_C : UWBP_MapMarker_C {
	char pad_28D[0x3]; // 0x28d(0x03)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	struct UButton* DroneSpawnButton; // 0x298(0x08)
	struct UImage* Icon; // 0x2a0(0x08)
	struct UImage* IconHovered; // 0x2a8(0x08)
	struct UImage* IconSelected; // 0x2b0(0x08)
	struct UWBP_Label_C* Index; // 0x2b8(0x08)

	void SetFollowActor(struct AActor* Actor); // Function WBP_MapMarker_DroneSpawn.WBP_MapMarker_DroneSpawn_C.SetFollowActor // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__Button_584_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_MapMarker_DroneSpawn.WBP_MapMarker_DroneSpawn_C.BndEvt__Button_584_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__DroneSpawnButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function WBP_MapMarker_DroneSpawn.WBP_MapMarker_DroneSpawn_C.BndEvt__DroneSpawnButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__DroneSpawnButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function WBP_MapMarker_DroneSpawn.WBP_MapMarker_DroneSpawn_C.BndEvt__DroneSpawnButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_MapMarker_DroneSpawn(int32_t EntryPoint); // Function WBP_MapMarker_DroneSpawn.WBP_MapMarker_DroneSpawn_C.ExecuteUbergraph_WBP_MapMarker_DroneSpawn // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

