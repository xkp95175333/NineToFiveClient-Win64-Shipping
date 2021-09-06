// WidgetBlueprintGeneratedClass WBP_InfoButton.WBP_InfoButton_C
// Size: 0x2a8 (Inherited: 0x260)
struct UWBP_InfoButton_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UButton* Button_1; // 0x268(0x08)
	struct UBorder* Close_Background; // 0x270(0x08)
	struct UWBP_RichTextLabel_C* WBP_RichTextLabel; // 0x278(0x08)
	struct FMulticastInlineDelegate OnClicked; // 0x280(0x10)
	struct FText Label_Variable; // 0x290(0x18)

	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_InfoButton.WBP_InfoButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function WBP_InfoButton.WBP_InfoButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function WBP_InfoButton.WBP_InfoButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_InfoButton(int32_t EntryPoint); // Function WBP_InfoButton.WBP_InfoButton_C.ExecuteUbergraph_WBP_InfoButton // (Final|UbergraphFunction) // @ game+0x13c4ca0
	void OnClicked__DelegateSignature(); // Function WBP_InfoButton.WBP_InfoButton_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

