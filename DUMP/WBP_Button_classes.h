// WidgetBlueprintGeneratedClass WBP_Button.WBP_Button_C
// Size: 0x350 (Inherited: 0x268)
struct UWBP_Button_C : UHWWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UButton* But; // 0x270(0x08)
	struct UImage* ButtonImage; // 0x278(0x08)
	struct UScaleBox* ButtonScaler; // 0x280(0x08)
	struct UWidgetSwitcher* ContentSwitcher; // 0x288(0x08)
	struct UHWBorderWidget* HWBorderWidget_1; // 0x290(0x08)
	struct UWBP_RichTextLabel_C* RichTextTitle; // 0x298(0x08)
	struct USizeBox* SizeBox_1; // 0x2a0(0x08)
	struct UHorizontalBox* TextHBox; // 0x2a8(0x08)
	struct URichTextBlock* Title; // 0x2b0(0x08)
	struct UWBP_Notification_C* WBP_Notification; // 0x2b8(0x08)
	struct FMulticastInlineDelegate OnClicked; // 0x2c0(0x10)
	bool IsButtonSelected; // 0x2d0(0x01)
	enum class EHWSelectableButtonPressBehavior Behavior; // 0x2d1(0x01)
	char pad_2D2[0x6]; // 0x2d2(0x06)
	struct FText Text; // 0x2d8(0x18)
	struct FName ButtonId; // 0x2f0(0x08)
	struct UBP_UIStyle_Button_C* Style; // 0x2f8(0x08)
	struct UBP_UIStyle_Button_C* StyleObject; // 0x300(0x08)
	float TextPadding; // 0x308(0x04)
	char pad_30C[0x4]; // 0x30c(0x04)
	struct FText CurrentText; // 0x310(0x18)
	bool IsCurrentlyHovered; // 0x328(0x01)
	char pad_329[0x7]; // 0x329(0x07)
	struct UAkAudioEvent* ClickSound; // 0x330(0x08)
	bool UseImage; // 0x338(0x01)
	char pad_339[0x7]; // 0x339(0x07)
	struct UTexture2D* NormalImage; // 0x340(0x08)
	struct UTexture2D* HoverImage; // 0x348(0x08)

	void SetButtonEnabled(bool Enabled); // Function WBP_Button.WBP_Button_C.SetButtonEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateNotificationIcon(bool DoShow, struct FText Text); // Function WBP_Button.WBP_Button_C.UpdateNotificationIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetCurrentImageColor(struct FSlateColor Color); // Function WBP_Button.WBP_Button_C.GetCurrentImageColor // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void DeselectRadioButtons(); // Function WBP_Button.WBP_Button_C.DeselectRadioButtons // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetText(struct FText Text); // Function WBP_Button.WBP_Button_C.GetText // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetText(struct FText Text); // Function WBP_Button.WBP_Button_C.SetText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetCurrentTextStyle(struct FDataTableRowHandle Result); // Function WBP_Button.WBP_Button_C.GetCurrentTextStyle // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void UpdateButton(); // Function WBP_Button.WBP_Button_C.UpdateButton // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetSelected(bool Selected); // Function WBP_Button.WBP_Button_C.SetSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void IsSelected(bool Selected); // Function WBP_Button.WBP_Button_C.IsSelected // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void HandleClick(); // Function WBP_Button.WBP_Button_C.HandleClick // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__But_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_Button.WBP_Button_C.BndEvt__But_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__But_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature(); // Function WBP_Button.WBP_Button_C.BndEvt__But_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__But_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature(); // Function WBP_Button.WBP_Button_C.BndEvt__But_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__But_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function WBP_Button.WBP_Button_C.BndEvt__But_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__But_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(); // Function WBP_Button.WBP_Button_C.BndEvt__But_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void PreConstruct(bool IsDesignTime); // Function WBP_Button.WBP_Button_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void Focus(); // Function WBP_Button.WBP_Button_C.Focus // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetButtonSelected(); // Function WBP_Button.WBP_Button_C.SetButtonSelected // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnEnableStateChanged(bool Enabled); // Function WBP_Button.WBP_Button_C.OnEnableStateChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Button(int32_t EntryPoint); // Function WBP_Button.WBP_Button_C.ExecuteUbergraph_WBP_Button // (Final|UbergraphFunction) // @ game+0x13c4ca0
	void OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_Button.WBP_Button_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

