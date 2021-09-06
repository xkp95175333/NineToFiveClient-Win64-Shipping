// WidgetBlueprintGeneratedClass WBP_StyledRadioButton.WBP_StyledRadioButton_C
// Size: 0x2c8 (Inherited: 0x2a0)
struct UWBP_StyledRadioButton_C : URadioButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2a0(0x08)
	struct UTextBlock* Labeltext; // 0x2a8(0x08)
	struct UButton* MainButton; // 0x2b0(0x08)
	struct FMulticastInlineDelegate OnButtonClicked; // 0x2b8(0x10)

	void BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_StyledRadioButton.WBP_StyledRadioButton_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void UpdateSelected(bool InSelected); // Function WBP_StyledRadioButton.WBP_StyledRadioButton_C.UpdateSelected // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__MainButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function WBP_StyledRadioButton.WBP_StyledRadioButton_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__MainButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(); // Function WBP_StyledRadioButton.WBP_StyledRadioButton_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_StyledRadioButton(int32_t EntryPoint); // Function WBP_StyledRadioButton.WBP_StyledRadioButton_C.ExecuteUbergraph_WBP_StyledRadioButton // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
	void OnButtonClicked__DelegateSignature(); // Function WBP_StyledRadioButton.WBP_StyledRadioButton_C.OnButtonClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

