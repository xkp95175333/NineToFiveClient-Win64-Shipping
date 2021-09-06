// WidgetBlueprintGeneratedClass WBP_DebugMenu_SpawnTargetDummy.WBP_DebugMenu_SpawnTargetDummy_C
// Size: 0x2f0 (Inherited: 0x260)
struct UWBP_DebugMenu_SpawnTargetDummy_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWBP_DebugMenuPage_ChangeArmorSet_C* Armorset; // 0x268(0x08)
	struct UWBP_Button_C* NearestCtrlPanelBtn; // 0x270(0x08)
	struct UWBP_Button_C* SpawnButton; // 0x278(0x08)
	struct UComboBoxString* SpawnersList; // 0x280(0x08)
	struct UWBP_Label_C* YawLabel; // 0x288(0x08)
	struct USlider* YawSlider; // 0x290(0x08)
	struct ABP_TargetDummySpawner_C* FocusedSpawner; // 0x298(0x08)
	struct TMap<struct FString, struct ABP_TargetDummySpawner_C*> AllSpawners; // 0x2a0(0x50)

	void SelectSpawner(struct FString Name); // Function WBP_DebugMenu_SpawnTargetDummy.WBP_DebugMenu_SpawnTargetDummy_C.SelectSpawner // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetSpawnerControl(struct UBP_TargetDummy_ControlComponent_C* Control); // Function WBP_DebugMenu_SpawnTargetDummy.WBP_DebugMenu_SpawnTargetDummy_C.GetSpawnerControl // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void RegisterSpawner(struct ABP_TargetDummySpawner_C* Object); // Function WBP_DebugMenu_SpawnTargetDummy.WBP_DebugMenu_SpawnTargetDummy_C.RegisterSpawner // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void RefreshAllSpawners(); // Function WBP_DebugMenu_SpawnTargetDummy.WBP_DebugMenu_SpawnTargetDummy_C.RefreshAllSpawners // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateClosestControlPanel(); // Function WBP_DebugMenu_SpawnTargetDummy.WBP_DebugMenu_SpawnTargetDummy_C.UpdateClosestControlPanel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_DebugMenu_SpawnTargetDummy.WBP_DebugMenu_SpawnTargetDummy_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__SpawnButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_DebugMenu_SpawnTargetDummy.WBP_DebugMenu_SpawnTargetDummy_C.BndEvt__SpawnButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__YawSlider_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature(float Value); // Function WBP_DebugMenu_SpawnTargetDummy.WBP_DebugMenu_SpawnTargetDummy_C.BndEvt__YawSlider_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__SpawnersList_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, enum class ESelectInfo SelectionType); // Function WBP_DebugMenu_SpawnTargetDummy.WBP_DebugMenu_SpawnTargetDummy_C.BndEvt__SpawnersList_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__NearestCtrlPanelBtn_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_DebugMenu_SpawnTargetDummy.WBP_DebugMenu_SpawnTargetDummy_C.BndEvt__NearestCtrlPanelBtn_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_DebugMenu_SpawnTargetDummy(int32_t EntryPoint); // Function WBP_DebugMenu_SpawnTargetDummy.WBP_DebugMenu_SpawnTargetDummy_C.ExecuteUbergraph_WBP_DebugMenu_SpawnTargetDummy // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

