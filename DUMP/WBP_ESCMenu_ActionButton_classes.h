// WidgetBlueprintGeneratedClass WBP_ESCMenu_ActionButton.WBP_ESCMenu_ActionButton_C
// Size: 0x2c0 (Inherited: 0x260)
struct UWBP_ESCMenu_ActionButton_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UButton* ESCMENU_ActionButton; // 0x268(0x08)
	struct UWBP_RichTextLabel_C* WBP_RichTextLabel; // 0x270(0x08)
	struct UBorder* White_BG; // 0x278(0x08)
	struct FText ButtonName; // 0x280(0x18)
	struct FText NewVar_1; // 0x298(0x18)
	struct FMulticastInlineDelegate OnClicked; // 0x2b0(0x10)

	void SetText(struct FText Text); // Function WBP_ESCMenu_ActionButton.WBP_ESCMenu_ActionButton_C.SetText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PreConstruct(bool IsDesignTime); // Function WBP_ESCMenu_ActionButton.WBP_ESCMenu_ActionButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_ESCMenu_ActionButton.WBP_ESCMenu_ActionButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__ESCMENU_ActionButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function WBP_ESCMenu_ActionButton.WBP_ESCMenu_ActionButton_C.BndEvt__ESCMENU_ActionButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__ESCMENU_ActionButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function WBP_ESCMenu_ActionButton.WBP_ESCMenu_ActionButton_C.BndEvt__ESCMENU_ActionButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__ESCMENU_ActionButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature(); // Function WBP_ESCMenu_ActionButton.WBP_ESCMenu_ActionButton_C.BndEvt__ESCMENU_ActionButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void UnHovered(); // Function WBP_ESCMenu_ActionButton.WBP_ESCMenu_ActionButton_C.UnHovered // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_ESCMenu_ActionButton(int32_t EntryPoint); // Function WBP_ESCMenu_ActionButton.WBP_ESCMenu_ActionButton_C.ExecuteUbergraph_WBP_ESCMenu_ActionButton // (Final|UbergraphFunction) // @ game+0x13c4ca0
	void OnClicked__DelegateSignature(); // Function WBP_ESCMenu_ActionButton.WBP_ESCMenu_ActionButton_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

