// WidgetBlueprintGeneratedClass WBP_Rigs_WeaponSettingsButton.WBP_Rigs_WeaponSettingsButton_C
// Size: 0x290 (Inherited: 0x260)
struct UWBP_Rigs_WeaponSettingsButton_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UButton* Button_Settings; // 0x268(0x08)
	struct UImage* Close_Icon; // 0x270(0x08)
	struct UWBP_Box_C* WBP_Box; // 0x278(0x08)
	struct FMulticastInlineDelegate OnClicked; // 0x280(0x10)

	void BndEvt__Button_Settings_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function WBP_Rigs_WeaponSettingsButton.WBP_Rigs_WeaponSettingsButton_C.BndEvt__Button_Settings_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__Button_Settings_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function WBP_Rigs_WeaponSettingsButton.WBP_Rigs_WeaponSettingsButton_C.BndEvt__Button_Settings_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__Button_Settings_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function WBP_Rigs_WeaponSettingsButton.WBP_Rigs_WeaponSettingsButton_C.BndEvt__Button_Settings_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Rigs_WeaponSettingsButton(int32_t EntryPoint); // Function WBP_Rigs_WeaponSettingsButton.WBP_Rigs_WeaponSettingsButton_C.ExecuteUbergraph_WBP_Rigs_WeaponSettingsButton // (Final|UbergraphFunction) // @ game+0x13c4ca0
	void OnClicked__DelegateSignature(); // Function WBP_Rigs_WeaponSettingsButton.WBP_Rigs_WeaponSettingsButton_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

