// WidgetBlueprintGeneratedClass WBP_PreMatch3.WBP_PreMatch3_C
// Size: 0x288 (Inherited: 0x260)
struct UWBP_PreMatch3_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWBP_RoundBriefing_C* Briefing; // 0x268(0x08)
	struct UWBP_RoundResults2_C* RoundResults; // 0x270(0x08)
	struct UWBP_PreMatch_SelectLoadout_C* SelectLoadout; // 0x278(0x08)
	struct UWidgetSwitcher* Switcher; // 0x280(0x08)

	void Construct(); // Function WBP_PreMatch3.WBP_PreMatch3_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void GoToBriefing(); // Function WBP_PreMatch3.WBP_PreMatch3_C.GoToBriefing // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GoToLoadout(); // Function WBP_PreMatch3.WBP_PreMatch3_C.GoToLoadout // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GoToLastRoundResults(); // Function WBP_PreMatch3.WBP_PreMatch3_C.GoToLastRoundResults // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__RoundResults_K2Node_ComponentBoundEvent_2_OnProceed__DelegateSignature(bool Skipped); // Function WBP_PreMatch3.WBP_PreMatch3_C.BndEvt__RoundResults_K2Node_ComponentBoundEvent_2_OnProceed__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__Briefing_K2Node_ComponentBoundEvent_4_OnProceed__DelegateSignature(bool Skipped); // Function WBP_PreMatch3.WBP_PreMatch3_C.BndEvt__Briefing_K2Node_ComponentBoundEvent_4_OnProceed__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_PreMatch3(int32_t EntryPoint); // Function WBP_PreMatch3.WBP_PreMatch3_C.ExecuteUbergraph_WBP_PreMatch3 // (Final|UbergraphFunction) // @ game+0x13c4ca0
};

