// WidgetBlueprintGeneratedClass WBP_ESCMenu_HelpButton.WBP_ESCMenu_HelpButton_C
// Size: 0x2c1 (Inherited: 0x260)
struct UWBP_ESCMenu_HelpButton_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UBorder* Border_Button; // 0x268(0x08)
	struct UButton* Button_1; // 0x270(0x08)
	struct UImage* Image_Button; // 0x278(0x08)
	struct USpacer* Spacer_146; // 0x280(0x08)
	struct UWBP_RichTextLabel_C* Text_Button; // 0x288(0x08)
	struct UTexture2D* Image; // 0x290(0x08)
	struct FMulticastInlineDelegate OnClicked; // 0x298(0x10)
	struct FText Text; // 0x2a8(0x18)
	enum class BPE_ButtonVariation ViewType; // 0x2c0(0x01)

	void PreConstruct(bool IsDesignTime); // Function WBP_ESCMenu_HelpButton.WBP_ESCMenu_HelpButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function WBP_ESCMenu_HelpButton.WBP_ESCMenu_HelpButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function WBP_ESCMenu_HelpButton.WBP_ESCMenu_HelpButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function WBP_ESCMenu_HelpButton.WBP_ESCMenu_HelpButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_ESCMenu_HelpButton(int32_t EntryPoint); // Function WBP_ESCMenu_HelpButton.WBP_ESCMenu_HelpButton_C.ExecuteUbergraph_WBP_ESCMenu_HelpButton // (Final|UbergraphFunction) // @ game+0x13c4ca0
	void OnClicked__DelegateSignature(); // Function WBP_ESCMenu_HelpButton.WBP_ESCMenu_HelpButton_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

