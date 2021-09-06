// WidgetBlueprintGeneratedClass WBP_DebugMenuPage_Misc.WBP_DebugMenuPage_Misc_C
// Size: 0x2c8 (Inherited: 0x260)
struct UWBP_DebugMenuPage_Misc_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UComboBoxString* DebugProfilesList; // 0x268(0x08)
	struct UWBP_Button_C* DumpPlayer; // 0x270(0x08)
	struct UWBP_Button_C* LoadProfile; // 0x278(0x08)
	struct UVerticalBox* Misc; // 0x280(0x08)
	struct UWBP_Button_C* PlayLocSound; // 0x288(0x08)
	struct UWBP_Button_C* ReloadPlayer; // 0x290(0x08)
	struct UWBP_Button_C* RemoveUI; // 0x298(0x08)
	struct UWBP_Button_C* ResetPlayer; // 0x2a0(0x08)
	struct UWBP_Button_C* SaveProfile; // 0x2a8(0x08)
	struct UWBP_Label_C* WBP_Label_161; // 0x2b0(0x08)
	struct FMulticastInlineDelegate OnClosed; // 0x2b8(0x10)

	void Construct(); // Function WBP_DebugMenuPage_Misc.WBP_DebugMenuPage_Misc_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__ResetPlayer_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_DebugMenuPage_Misc.WBP_DebugMenuPage_Misc_C.BndEvt__ResetPlayer_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void OnResetConfirmation(bool Result); // Function WBP_DebugMenuPage_Misc.WBP_DebugMenuPage_Misc_C.OnResetConfirmation // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnUpdateSucceeded(struct FHWResponseBase Response); // Function WBP_DebugMenuPage_Misc.WBP_DebugMenuPage_Misc_C.OnUpdateSucceeded // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnUpdateFailed(enum class EHWErrorMessage ErrorMessage); // Function WBP_DebugMenuPage_Misc.WBP_DebugMenuPage_Misc_C.OnUpdateFailed // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__ReloadPlayer_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_DebugMenuPage_Misc.WBP_DebugMenuPage_Misc_C.BndEvt__ReloadPlayer_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__DumpPlayer_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_DebugMenuPage_Misc.WBP_DebugMenuPage_Misc_C.BndEvt__DumpPlayer_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__RemoveUI_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_DebugMenuPage_Misc.WBP_DebugMenuPage_Misc_C.BndEvt__RemoveUI_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__SaveProfile_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_DebugMenuPage_Misc.WBP_DebugMenuPage_Misc_C.BndEvt__SaveProfile_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void OnConfirm(struct FString Result); // Function WBP_DebugMenuPage_Misc.WBP_DebugMenuPage_Misc_C.OnConfirm // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__ResetPlayer_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_DebugMenuPage_Misc.WBP_DebugMenuPage_Misc_C.BndEvt__ResetPlayer_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void CustomEvent_1(bool Result); // Function WBP_DebugMenuPage_Misc.WBP_DebugMenuPage_Misc_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__AddProgression_1_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_DebugMenuPage_Misc.WBP_DebugMenuPage_Misc_C.BndEvt__AddProgression_1_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void OnRewardsFailed(enum class EHWErrorMessage ErrorMessage); // Function WBP_DebugMenuPage_Misc.WBP_DebugMenuPage_Misc_C.OnRewardsFailed // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void CustomEvent_2(enum class EHWErrorMessage ErrorMessage); // Function WBP_DebugMenuPage_Misc.WBP_DebugMenuPage_Misc_C.CustomEvent_2 // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ReloadLevelWithStreamingLevelUnload(); // Function WBP_DebugMenuPage_Misc.WBP_DebugMenuPage_Misc_C.ReloadLevelWithStreamingLevelUnload // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_DebugMenuPage_Misc(int32_t EntryPoint); // Function WBP_DebugMenuPage_Misc.WBP_DebugMenuPage_Misc_C.ExecuteUbergraph_WBP_DebugMenuPage_Misc // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
	void OnClosed__DelegateSignature(); // Function WBP_DebugMenuPage_Misc.WBP_DebugMenuPage_Misc_C.OnClosed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

