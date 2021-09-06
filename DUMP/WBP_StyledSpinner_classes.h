// WidgetBlueprintGeneratedClass WBP_StyledSpinner.WBP_StyledSpinner_C
// Size: 0x2c0 (Inherited: 0x290)
struct UWBP_StyledSpinner_C : USpinner {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	struct UImage* LeftArrow; // 0x298(0x08)
	struct UButton* LeftButton; // 0x2a0(0x08)
	struct UImage* RightArrow; // 0x2a8(0x08)
	struct UButton* RightButton; // 0x2b0(0x08)
	struct UTextBlock* TextBlock_1; // 0x2b8(0x08)

	struct FLinearColor GetRightArrowColorAndOpacity(); // Function WBP_StyledSpinner.WBP_StyledSpinner_C.GetRightArrowColorAndOpacity // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	struct FLinearColor GetLeftArrowColorAndOpacity(); // Function WBP_StyledSpinner.WBP_StyledSpinner_C.GetLeftArrowColorAndOpacity // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	struct FText GetLabelText(); // Function WBP_StyledSpinner.WBP_StyledSpinner_C.GetLabelText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void BndEvt__LeftButton_K2Node_ComponentBoundEvent_178_OnButtonClickedEvent__DelegateSignature(); // Function WBP_StyledSpinner.WBP_StyledSpinner_C.BndEvt__LeftButton_K2Node_ComponentBoundEvent_178_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__RightButton_K2Node_ComponentBoundEvent_196_OnButtonClickedEvent__DelegateSignature(); // Function WBP_StyledSpinner.WBP_StyledSpinner_C.BndEvt__RightButton_K2Node_ComponentBoundEvent_196_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_StyledSpinner(int32_t EntryPoint); // Function WBP_StyledSpinner.WBP_StyledSpinner_C.ExecuteUbergraph_WBP_StyledSpinner // (Final|UbergraphFunction) // @ game+0x13c4ca0
};

