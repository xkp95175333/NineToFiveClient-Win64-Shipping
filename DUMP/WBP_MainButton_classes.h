// WidgetBlueprintGeneratedClass WBP_MainButton.WBP_MainButton_C
// Size: 0x370 (Inherited: 0x268)
struct UWBP_MainButton_C : UHWWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UButton* But; // 0x270(0x08)
	struct UImage* ButtonImage; // 0x278(0x08)
	struct UScaleBox* ButtonScaler; // 0x280(0x08)
	struct UWidgetSwitcher* ContentSwitcher; // 0x288(0x08)
	struct UHWBorderWidget* HWBorderWidget_1; // 0x290(0x08)
	struct UImage* LineHighlight; // 0x298(0x08)
	struct UWBP_RichTextLabel_C* RichTextTitle; // 0x2a0(0x08)
	struct USizeBox* SizeBox_1; // 0x2a8(0x08)
	struct FMulticastInlineDelegate OnClicked; // 0x2b0(0x10)
	bool IsButtonSelected; // 0x2c0(0x01)
	char pad_2C1[0x7]; // 0x2c1(0x07)
	struct FText Text; // 0x2c8(0x18)
	enum class BPE_Main_Button_Style Style; // 0x2e0(0x01)
	enum class BPE_Main_Button_Size Size; // 0x2e1(0x01)
	char pad_2E2[0x2]; // 0x2e2(0x02)
	struct FName ButtonId; // 0x2e4(0x08)
	char pad_2EC[0x4]; // 0x2ec(0x04)
	struct UBP_UIStyle_Button_C* StyleObject; // 0x2f0(0x08)
	float TextPadding; // 0x2f8(0x04)
	char pad_2FC[0x4]; // 0x2fc(0x04)
	struct FText CurrentText; // 0x300(0x18)
	bool IsCurrentlyHovered; // 0x318(0x01)
	char pad_319[0x7]; // 0x319(0x07)
	struct UAkAudioEvent* ClickSound; // 0x320(0x08)
	bool UseImage; // 0x328(0x01)
	char pad_329[0x7]; // 0x329(0x07)
	struct UTexture2D* NormalImage; // 0x330(0x08)
	struct UTexture2D* HoverImage; // 0x338(0x08)
	bool BackgroundHighlightOn?; // 0x340(0x01)
	char pad_341[0x7]; // 0x341(0x07)
	struct FSlateColor BackgroundHighlightColor; // 0x348(0x28)

	void UpdateBackgroundHighlight(); // Function WBP_MainButton.WBP_MainButton_C.UpdateBackgroundHighlight // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetButtonStyle(struct UBP_UIStyle_Button_C* Style); // Function WBP_MainButton.WBP_MainButton_C.GetButtonStyle // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void ApplyButtonSize(); // Function WBP_MainButton.WBP_MainButton_C.ApplyButtonSize // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetCurrentImageColor(struct FSlateColor Color); // Function WBP_MainButton.WBP_MainButton_C.GetCurrentImageColor // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetText(struct FText Text); // Function WBP_MainButton.WBP_MainButton_C.GetText // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetText(struct FText Text); // Function WBP_MainButton.WBP_MainButton_C.SetText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetTextStyleName(struct FName Style); // Function WBP_MainButton.WBP_MainButton_C.GetTextStyleName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetTextStyle(struct FDataTableRowHandle Result); // Function WBP_MainButton.WBP_MainButton_C.GetTextStyle // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void UpdateButton(); // Function WBP_MainButton.WBP_MainButton_C.UpdateButton // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PreConstruct(bool IsDesignTime); // Function WBP_MainButton.WBP_MainButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void HandleClick(); // Function WBP_MainButton.WBP_MainButton_C.HandleClick // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__But_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_MainButton.WBP_MainButton_C.BndEvt__But_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__But_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature(); // Function WBP_MainButton.WBP_MainButton_C.BndEvt__But_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__But_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature(); // Function WBP_MainButton.WBP_MainButton_C.BndEvt__But_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__But_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function WBP_MainButton.WBP_MainButton_C.BndEvt__But_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__But_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(); // Function WBP_MainButton.WBP_MainButton_C.BndEvt__But_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void Focus(); // Function WBP_MainButton.WBP_MainButton_C.Focus // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetStyle(enum class BPE_Main_Button_Style Style); // Function WBP_MainButton.WBP_MainButton_C.SetStyle // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_MainButton(int32_t EntryPoint); // Function WBP_MainButton.WBP_MainButton_C.ExecuteUbergraph_WBP_MainButton // (Final|UbergraphFunction) // @ game+0x13c4ca0
	void OnClicked__DelegateSignature(struct UWBP_MainButton_C* Button); // Function WBP_MainButton.WBP_MainButton_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

