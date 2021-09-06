// WidgetBlueprintGeneratedClass WBP_InputSettingsPage.WBP_InputSettingsPage_C
// Size: 0x2f0 (Inherited: 0x268)
struct UWBP_InputSettingsPage_C : UHWWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UImage* DividerLine; // 0x270(0x08)
	struct UExpandableArea* ExpandableArea; // 0x278(0x08)
	struct UExpandableArea* ExpandableArea_278; // 0x280(0x08)
	struct UHorizontalRadioSelect_C* PresetSelector; // 0x288(0x08)
	struct UWBP_SettingRow_C* Sensitivity_Ironsights; // 0x290(0x08)
	struct UWBP_SettingRow_C* Sensitivity_Optical25x_2; // 0x298(0x08)
	struct UWBP_SettingRow_C* Sensitivity_Optical2x_2; // 0x2a0(0x08)
	struct UWBP_SettingRow_C* Sensitivity_Optical3x_2; // 0x2a8(0x08)
	struct UWBP_SettingRow_C* Sensitivity_Optical5x_2; // 0x2b0(0x08)
	struct UWBP_SettingRow_C* Sensitivity_OpticalSight; // 0x2b8(0x08)
	struct UWBP_SettingRow_C* Sensitivity_Reflex; // 0x2c0(0x08)
	struct UWBP_SettingRow_C* SettingRow; // 0x2c8(0x08)
	struct UWBP_SettingRow_C* SettingRow_2; // 0x2d0(0x08)
	struct UVerticalBox* VerticalBox_1; // 0x2d8(0x08)
	struct UWBP_SectionHeader_C* WBP_SectionHeader1; // 0x2e0(0x08)
	struct UWBP_SectionHeader_C* WBP_SectionHeader1_2; // 0x2e8(0x08)

	void HasUnSavedChanges(bool UnsavedChanges); // Function WBP_InputSettingsPage.WBP_InputSettingsPage_C.HasUnSavedChanges // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void Construct(); // Function WBP_InputSettingsPage.WBP_InputSettingsPage_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__PresetSelector_K2Node_ComponentBoundEvent_0_RadioSelectedSignature__DelegateSignature(struct FString Value); // Function WBP_InputSettingsPage.WBP_InputSettingsPage_C.BndEvt__PresetSelector_K2Node_ComponentBoundEvent_0_RadioSelectedSignature__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void SelectionChangedEvent(struct FString Selection); // Function WBP_InputSettingsPage.WBP_InputSettingsPage_C.SelectionChangedEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_InputSettingsPage(int32_t EntryPoint); // Function WBP_InputSettingsPage.WBP_InputSettingsPage_C.ExecuteUbergraph_WBP_InputSettingsPage // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

