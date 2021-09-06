// WidgetBlueprintGeneratedClass WBP_ButtonBar_Button.WBP_ButtonBar_Button_C
// Size: 0x2e8 (Inherited: 0x260)
struct UWBP_ButtonBar_Button_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UButton* Button_394; // 0x268(0x08)
	struct UWBP_RichTextLabel_C* ButtonText; // 0x270(0x08)
	struct FLinearColor ActiveColor; // 0x278(0x10)
	struct FLinearColor InactiveColor; // 0x288(0x10)
	struct FText Label; // 0x298(0x18)
	struct FBP_NavigationBar_Item ButtonData; // 0x2b0(0x28)
	struct FMulticastInlineDelegate OnClicked; // 0x2d8(0x10)

	void UpdateText(struct FText Text); // Function WBP_ButtonBar_Button.WBP_ButtonBar_Button_C.UpdateText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetViewId(enum class BPE_UIView View); // Function WBP_ButtonBar_Button.WBP_ButtonBar_Button_C.GetViewId // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void PreConstruct(bool IsDesignTime); // Function WBP_ButtonBar_Button.WBP_ButtonBar_Button_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_ButtonBar_Button.WBP_ButtonBar_Button_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateBackgroundColor(bool IsPressed); // Function WBP_ButtonBar_Button.WBP_ButtonBar_Button_C.UpdateBackgroundColor // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__Button_393_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function WBP_ButtonBar_Button.WBP_ButtonBar_Button_C.BndEvt__Button_393_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void ButtonClick(); // Function WBP_ButtonBar_Button.WBP_ButtonBar_Button_C.ButtonClick // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateLabel(struct FText Label); // Function WBP_ButtonBar_Button.WBP_ButtonBar_Button_C.UpdateLabel // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__Button_393_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function WBP_ButtonBar_Button.WBP_ButtonBar_Button_C.BndEvt__Button_393_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_ButtonBar_Button(int32_t EntryPoint); // Function WBP_ButtonBar_Button.WBP_ButtonBar_Button_C.ExecuteUbergraph_WBP_ButtonBar_Button // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
	void OnClicked__DelegateSignature(struct FBP_NavigationBar_Item Button); // Function WBP_ButtonBar_Button.WBP_ButtonBar_Button_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

