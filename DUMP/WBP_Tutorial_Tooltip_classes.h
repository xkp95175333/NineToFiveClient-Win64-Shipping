// WidgetBlueprintGeneratedClass WBP_Tutorial_Tooltip.WBP_Tutorial_Tooltip_C
// Size: 0x2f0 (Inherited: 0x260)
struct UWBP_Tutorial_Tooltip_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWBP_MainButton_C* CloseButtonLeft; // 0x268(0x08)
	struct UWBP_MainButton_C* CloseButtonRight; // 0x270(0x08)
	struct UImage* Image; // 0x278(0x08)
	struct UImage* Image_127; // 0x280(0x08)
	struct UWBP_RichTextLabel_C* TextLabelLeft; // 0x288(0x08)
	struct UWBP_RichTextLabel_C* TextLabelRight; // 0x290(0x08)
	struct UWBP_RichTextLabel_C* TitleLabelLeft; // 0x298(0x08)
	struct UWBP_RichTextLabel_C* TitleLabelRight; // 0x2a0(0x08)
	struct UHorizontalBox* TooltipLeft; // 0x2a8(0x08)
	struct UHorizontalBox* TooltipRight; // 0x2b0(0x08)
	struct UWBP_Box_C* WBP_Box; // 0x2b8(0x08)
	struct UWBP_Box_C* WBP_Box_2; // 0x2c0(0x08)
	struct UWBP_Tutorial_ClickIndicator_Animation_C* WBP_Tutorial_ClickIndicator_Animation; // 0x2c8(0x08)
	struct UWBP_Tutorial_ClickIndicator_Animation_C* WBP_Tutorial_ClickIndicator_Animation_2; // 0x2d0(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_54; // 0x2d8(0x08)
	struct FMulticastInlineDelegate OnClose; // 0x2e0(0x10)

	void SetContent(struct FText Title, struct FText Text, bool PointRight); // Function WBP_Tutorial_Tooltip.WBP_Tutorial_Tooltip_C.SetContent // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(struct UWBP_MainButton_C* Button); // Function WBP_Tutorial_Tooltip.WBP_Tutorial_Tooltip_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__CloseButtonRight_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(struct UWBP_MainButton_C* Button); // Function WBP_Tutorial_Tooltip.WBP_Tutorial_Tooltip_C.BndEvt__CloseButtonRight_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Tutorial_Tooltip(int32_t EntryPoint); // Function WBP_Tutorial_Tooltip.WBP_Tutorial_Tooltip_C.ExecuteUbergraph_WBP_Tutorial_Tooltip // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
	void OnClose__DelegateSignature(); // Function WBP_Tutorial_Tooltip.WBP_Tutorial_Tooltip_C.OnClose__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

