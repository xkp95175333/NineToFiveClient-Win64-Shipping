// WidgetBlueprintGeneratedClass WBP_Tutorial_Popup_Generic.WBP_Tutorial_Popup_Generic_C
// Size: 0x2b0 (Inherited: 0x260)
struct UWBP_Tutorial_Popup_Generic_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWBP_RichTextLabel_C* MessageLabel; // 0x268(0x08)
	struct UWBP_MainButton_C* ProceedButton; // 0x270(0x08)
	struct UWBP_RichTextLabel_C* TitleLabel; // 0x278(0x08)
	struct FText TitleText; // 0x280(0x18)
	struct FText MessageText; // 0x298(0x18)

	void PreConstruct(bool IsDesignTime); // Function WBP_Tutorial_Popup_Generic.WBP_Tutorial_Popup_Generic_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__StartButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(struct UWBP_MainButton_C* Button); // Function WBP_Tutorial_Popup_Generic.WBP_Tutorial_Popup_Generic_C.BndEvt__StartButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Tutorial_Popup_Generic(int32_t EntryPoint); // Function WBP_Tutorial_Popup_Generic.WBP_Tutorial_Popup_Generic_C.ExecuteUbergraph_WBP_Tutorial_Popup_Generic // (Final|UbergraphFunction) // @ game+0x13c4ca0
};

