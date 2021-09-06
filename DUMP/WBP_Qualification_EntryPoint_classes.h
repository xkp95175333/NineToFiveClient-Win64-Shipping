// WidgetBlueprintGeneratedClass WBP_Qualification_EntryPoint.WBP_Qualification_EntryPoint_C
// Size: 0x2f0 (Inherited: 0x268)
struct UWBP_Qualification_EntryPoint_C : UHWWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UButton* Button_1; // 0x270(0x08)
	struct UWBP_RichTextLabel_C* CurrentLevelNumber; // 0x278(0x08)
	struct UWBP_RichTextLabel_C* CurrentTitle_Value; // 0x280(0x08)
	struct UBorder* Hover; // 0x288(0x08)
	struct UImage* Image_179; // 0x290(0x08)
	struct UWBP_RichTextLabel_C* LevelDeltaLabel; // 0x298(0x08)
	struct UHorizontalBox* MaxLevel_EA; // 0x2a0(0x08)
	struct UWBP_RichTextLabel_C* NextLevelNumber; // 0x2a8(0x08)
	struct UWidgetSwitcher* PBWidgetSwitcher; // 0x2b0(0x08)
	struct UVerticalBox* ProgressBar; // 0x2b8(0x08)
	struct UProgressBar* ProgressBar_187; // 0x2c0(0x08)
	struct UWBP_RichTextLabel_C* RemainingXpLabel; // 0x2c8(0x08)
	struct UImage* Temp_StaticImage_EA; // 0x2d0(0x08)
	struct UWBP_Box_C* WBP_Box; // 0x2d8(0x08)
	struct UWBP_RichTextLabel_C* WBP_RichTextLabel; // 0x2e0(0x08)
	struct UWBP_RichTextLabel_C* WBP_RichTextLabel_177; // 0x2e8(0x08)

	void InitLevelNumbers(int32_t Points); // Function WBP_Qualification_EntryPoint.WBP_Qualification_EntryPoint_C.InitLevelNumbers // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void InitLevelProgressBar(int32_t Points); // Function WBP_Qualification_EntryPoint.WBP_Qualification_EntryPoint_C.InitLevelProgressBar // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void InitQualification(int32_t Points); // Function WBP_Qualification_EntryPoint.WBP_Qualification_EntryPoint_C.InitQualification // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void InitXPText(int32_t Points); // Function WBP_Qualification_EntryPoint.WBP_Qualification_EntryPoint_C.InitXPText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerDetailsChanged(struct FHWPlayerDetails Data); // Function WBP_Qualification_EntryPoint.WBP_Qualification_EntryPoint_C.OnPlayerDetailsChanged // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerInventoryChanged(struct FHWPlayerInventory Data); // Function WBP_Qualification_EntryPoint.WBP_Qualification_EntryPoint_C.OnPlayerInventoryChanged // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerMissionChanged(struct FHWPlayerMission Data); // Function WBP_Qualification_EntryPoint.WBP_Qualification_EntryPoint_C.OnPlayerMissionChanged // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerStatsChanged(struct FHWPlayerStats Data); // Function WBP_Qualification_EntryPoint.WBP_Qualification_EntryPoint_C.OnPlayerStatsChanged // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_Qualification_EntryPoint.WBP_Qualification_EntryPoint_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_Qualification_EntryPoint_Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function WBP_Qualification_EntryPoint.WBP_Qualification_EntryPoint_C.BndEvt__WBP_Qualification_EntryPoint_Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_Qualification_EntryPoint_Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function WBP_Qualification_EntryPoint.WBP_Qualification_EntryPoint_C.BndEvt__WBP_Qualification_EntryPoint_Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_Qualification_EntryPoint_Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function WBP_Qualification_EntryPoint.WBP_Qualification_EntryPoint_C.BndEvt__WBP_Qualification_EntryPoint_Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerProgressionChanged(struct FHWPlayerProgression Data); // Function WBP_Qualification_EntryPoint.WBP_Qualification_EntryPoint_C.OnPlayerProgressionChanged // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Qualification_EntryPoint(int32_t EntryPoint); // Function WBP_Qualification_EntryPoint.WBP_Qualification_EntryPoint_C.ExecuteUbergraph_WBP_Qualification_EntryPoint // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

