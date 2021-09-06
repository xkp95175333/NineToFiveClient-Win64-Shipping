// WidgetBlueprintGeneratedClass WBP_CloseButton.WBP_CloseButton_C
// Size: 0x2b0 (Inherited: 0x260)
struct UWBP_CloseButton_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UButton* Button_1; // 0x268(0x08)
	struct UBorder* Close_Background; // 0x270(0x08)
	struct UImage* Close_Icon; // 0x278(0x08)
	struct UWBP_RichTextLabel_C* Label; // 0x280(0x08)
	struct FMulticastInlineDelegate OnClicked; // 0x288(0x10)
	struct FText Label_Variable; // 0x298(0x18)

	void PreConstruct(bool IsDesignTime); // Function WBP_CloseButton.WBP_CloseButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_CloseButton.WBP_CloseButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function WBP_CloseButton.WBP_CloseButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function WBP_CloseButton.WBP_CloseButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_CloseButton(int32_t EntryPoint); // Function WBP_CloseButton.WBP_CloseButton_C.ExecuteUbergraph_WBP_CloseButton // (Final|UbergraphFunction) // @ game+0x13c4ca0
	void OnClicked__DelegateSignature(); // Function WBP_CloseButton.WBP_CloseButton_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

