// WidgetBlueprintGeneratedClass WBP_DebugMenuPage_Tutorial.WBP_DebugMenuPage_Tutorial_C
// Size: 0x2d0 (Inherited: 0x260)
struct UWBP_DebugMenuPage_Tutorial_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWBP_Button_C* ArmoryTutorial; // 0x268(0x08)
	struct UWBP_Button_C* CraftTutorial; // 0x270(0x08)
	struct UWBP_Button_C* FinishGameplayTutorial; // 0x278(0x08)
	struct UWBP_Button_C* GameplayTutorial; // 0x280(0x08)
	struct UVerticalBox* Misc; // 0x288(0x08)
	struct UWBP_Button_C* MissionsTutorial; // 0x290(0x08)
	struct UWBP_Button_C* PlayTrailer; // 0x298(0x08)
	struct UWBP_Button_C* RigsTutorial; // 0x2a0(0x08)
	struct UWBP_Button_C* TutoStatus; // 0x2a8(0x08)
	struct UWBP_Button_C* UpgTutorial; // 0x2b0(0x08)
	struct UWBP_RichTextLabel_C* WBP_RichTextLabel; // 0x2b8(0x08)
	struct FMulticastInlineDelegate OnClosed; // 0x2c0(0x10)

	void Construct(); // Function WBP_DebugMenuPage_Tutorial.WBP_DebugMenuPage_Tutorial_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__TutoStatus_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_DebugMenuPage_Tutorial.WBP_DebugMenuPage_Tutorial_C.BndEvt__TutoStatus_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void OnDialogClosed(bool Result); // Function WBP_DebugMenuPage_Tutorial.WBP_DebugMenuPage_Tutorial_C.OnDialogClosed // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__RigsTutorial_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_DebugMenuPage_Tutorial.WBP_DebugMenuPage_Tutorial_C.BndEvt__RigsTutorial_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__RigsTutorial_1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_DebugMenuPage_Tutorial.WBP_DebugMenuPage_Tutorial_C.BndEvt__RigsTutorial_1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__FinishGameplayTutorial_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_DebugMenuPage_Tutorial.WBP_DebugMenuPage_Tutorial_C.BndEvt__FinishGameplayTutorial_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_DebugMenuPage_Tutorial(int32_t EntryPoint); // Function WBP_DebugMenuPage_Tutorial.WBP_DebugMenuPage_Tutorial_C.ExecuteUbergraph_WBP_DebugMenuPage_Tutorial // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
	void OnClosed__DelegateSignature(); // Function WBP_DebugMenuPage_Tutorial.WBP_DebugMenuPage_Tutorial_C.OnClosed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

