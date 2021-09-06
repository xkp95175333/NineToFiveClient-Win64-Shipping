// WidgetBlueprintGeneratedClass WBP_SettingsUI.WBP_SettingsUI_C
// Size: 0x320 (Inherited: 0x268)
struct UWBP_SettingsUI_C : UHWWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWidgetAnimation* Init; // 0x270(0x08)
	struct UWBP_AccessibilitySettingsPage_C* AccessibilitySettingsPage; // 0x278(0x08)
	struct UButton* ApplyButton; // 0x280(0x08)
	struct UWBP_AudioSettingsPage_C* AudioSettingsPage; // 0x288(0x08)
	struct USizeBox* AutoDetect-SizeBox; // 0x290(0x08)
	struct UButton* AutoDetectButton; // 0x298(0x08)
	struct UImage* Background; // 0x2a0(0x08)
	struct UButton* CancelButton; // 0x2a8(0x08)
	struct UWidgetSwitcher* CategorySwitcher; // 0x2b0(0x08)
	struct UWBP_LanguageSettingsPage_C* GeneralSettingsPage; // 0x2b8(0x08)
	struct UWBP_InputSettingsPlatformSwitcher_C* InputSettingsPlatformSwitcher; // 0x2c0(0x08)
	struct USizeBox* ResetBinds-SizeBox; // 0x2c8(0x08)
	struct UWBP_VideoSettingsPage_C* VideoSettingsPage; // 0x2d0(0x08)
	struct UWBP_MainButton_C* WBP_MainButton_Apply; // 0x2d8(0x08)
	struct UWBP_MainButton_C* WBP_MainButton_AutoDetect; // 0x2e0(0x08)
	struct UWBP_MainButton_C* WBP_MainButton_Cancel; // 0x2e8(0x08)
	struct UWBP_MainButton_C* WBP_MainButton_ResetBinding; // 0x2f0(0x08)
	struct UWBP_NavigationBar_C* WBP_NavigationBar; // 0x2f8(0x08)
	struct UWBP_ScreenHeader_C* WBP_ScreenHeader; // 0x300(0x08)
	struct FMulticastInlineDelegate CloseRequested; // 0x308(0x10)
	struct UUserWidget* CurrentOpenedWidget; // 0x318(0x08)

	void ResetSettingsState(); // Function WBP_SettingsUI.WBP_SettingsUI_C.ResetSettingsState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void CheckIfAnyUnAppliedChanges(bool UnAppliedChange); // Function WBP_SettingsUI.WBP_SettingsUI_C.CheckIfAnyUnAppliedChanges // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void CancelSettingsIfAny(); // Function WBP_SettingsUI.WBP_SettingsUI_C.CancelSettingsIfAny // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SaveSettingsIfAny(); // Function WBP_SettingsUI.WBP_SettingsUI_C.SaveSettingsIfAny // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetActiveTabWidget(int32_t Index); // Function WBP_SettingsUI.WBP_SettingsUI_C.SetActiveTabWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetOwningTabWidget(struct FName ButtonId, struct UUserWidget* ParentTabWidget); // Function WBP_SettingsUI.WBP_SettingsUI_C.GetOwningTabWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_SettingsUI.WBP_SettingsUI_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_NavigationBar_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(struct FName ID); // Function WBP_SettingsUI.WBP_SettingsUI_C.BndEvt__WBP_NavigationBar_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_MainButton_Apply_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(struct UWBP_MainButton_C* Button); // Function WBP_SettingsUI.WBP_SettingsUI_C.BndEvt__WBP_MainButton_Apply_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_MainButton_Cancel_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(struct UWBP_MainButton_C* Button); // Function WBP_SettingsUI.WBP_SettingsUI_C.BndEvt__WBP_MainButton_Cancel_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_MainButton_AutoDetect_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(struct UWBP_MainButton_C* Button); // Function WBP_SettingsUI.WBP_SettingsUI_C.BndEvt__WBP_MainButton_AutoDetect_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_MainButton_AutoDetect_1_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature(struct UWBP_MainButton_C* Button); // Function WBP_SettingsUI.WBP_SettingsUI_C.BndEvt__WBP_MainButton_AutoDetect_1_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void CheckAppliedSettings(); // Function WBP_SettingsUI.WBP_SettingsUI_C.CheckAppliedSettings // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_SettingsUI.WBP_SettingsUI_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void Destruct(); // Function WBP_SettingsUI.WBP_SettingsUI_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ResetBindsCallback(bool Result); // Function WBP_SettingsUI.WBP_SettingsUI_C.ResetBindsCallback // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_SettingsUI(int32_t EntryPoint); // Function WBP_SettingsUI.WBP_SettingsUI_C.ExecuteUbergraph_WBP_SettingsUI // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
	void CloseRequested__DelegateSignature(); // Function WBP_SettingsUI.WBP_SettingsUI_C.CloseRequested__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

