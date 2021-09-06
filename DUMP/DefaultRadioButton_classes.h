// WidgetBlueprintGeneratedClass DefaultRadioButton.DefaultRadioButton_C
// Size: 0x2c8 (Inherited: 0x2a0)
struct UDefaultRadioButton_C : URadioButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2a0(0x08)
	struct UButton* MainButton; // 0x2a8(0x08)
	struct UTextBlock* TextBlock_1; // 0x2b0(0x08)
	struct FMulticastInlineDelegate Clicked; // 0x2b8(0x10)

	struct FSlateColor GetTextColor(); // Function DefaultRadioButton.DefaultRadioButton_C.GetTextColor // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function DefaultRadioButton.DefaultRadioButton_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_DefaultRadioButton(int32_t EntryPoint); // Function DefaultRadioButton.DefaultRadioButton_C.ExecuteUbergraph_DefaultRadioButton // (Final|UbergraphFunction) // @ game+0x13c4ca0
	void Clicked__DelegateSignature(int32_t Value); // Function DefaultRadioButton.DefaultRadioButton_C.Clicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

