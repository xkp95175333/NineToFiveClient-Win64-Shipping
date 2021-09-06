// WidgetBlueprintGeneratedClass WBP_Shop_BonusCode.WBP_Shop_BonusCode_C
// Size: 0x330 (Inherited: 0x260)
struct UWBP_Shop_BonusCode_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UButton* AboutButton; // 0x268(0x08)
	struct UWBP_MainButton_C* ActivateButton; // 0x270(0x08)
	struct UWBP_ImageTextButton_C* BackButton; // 0x278(0x08)
	struct UImage* Background_2; // 0x280(0x08)
	struct UBorder* Border_123; // 0x288(0x08)
	struct UBorder* Border_AboutButton; // 0x290(0x08)
	struct UBorder* Border_ContactSupportButton; // 0x298(0x08)
	struct UWBP_MainButton_C* CancelButton; // 0x2a0(0x08)
	struct UButton* ContactSupport; // 0x2a8(0x08)
	struct UWBP_RichTextLabel_C* ContactSupportText; // 0x2b0(0x08)
	struct UWBP_RichTextLabel_C* Description; // 0x2b8(0x08)
	struct UBorder* ErrorBorder; // 0x2c0(0x08)
	struct UWBP_RichTextLabel_C* FaqText; // 0x2c8(0x08)
	struct UWBP_RichTextLabel_C* Header; // 0x2d0(0x08)
	struct UImage* Image_148; // 0x2d8(0x08)
	struct UImage* Image_280; // 0x2e0(0x08)
	struct UEditableText* InputField; // 0x2e8(0x08)
	struct UWBP_RichTextLabel_C* InvalidCodeErrorText; // 0x2f0(0x08)
	struct UImage* SupportIcon; // 0x2f8(0x08)
	struct FMulticastInlineDelegate OnClose; // 0x300(0x10)
	struct FString LastClaimedBonusCode; // 0x310(0x10)
	struct TArray<struct FHWReward> Rewards; // 0x320(0x10)

	struct FEventReply OnMouseButtonDown_1(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_Shop_BonusCode.WBP_Shop_BonusCode_C.OnMouseButtonDown_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_ImageTextButton_K2Node_ComponentBoundEvent_1_OnButtonHover__DelegateSignature(bool Hovered); // Function WBP_Shop_BonusCode.WBP_Shop_BonusCode_C.BndEvt__WBP_ImageTextButton_K2Node_ComponentBoundEvent_1_OnButtonHover__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void ClearData(); // Function WBP_Shop_BonusCode.WBP_Shop_BonusCode_C.ClearData // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_MainButton_1_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(struct UWBP_MainButton_C* Button); // Function WBP_Shop_BonusCode.WBP_Shop_BonusCode_C.BndEvt__WBP_MainButton_1_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void SetWidgetFocus(); // Function WBP_Shop_BonusCode.WBP_Shop_BonusCode_C.SetWidgetFocus // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__ActivateButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(struct UWBP_MainButton_C* Button); // Function WBP_Shop_BonusCode.WBP_Shop_BonusCode_C.BndEvt__ActivateButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_Shop_BonusCode_FaqButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(); // Function WBP_Shop_BonusCode.WBP_Shop_BonusCode_C.BndEvt__WBP_Shop_BonusCode_FaqButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_Shop_BonusCode_FaqButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature(); // Function WBP_Shop_BonusCode.WBP_Shop_BonusCode_C.BndEvt__WBP_Shop_BonusCode_FaqButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_Shop_BonusCode_ContactSupport_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature(); // Function WBP_Shop_BonusCode.WBP_Shop_BonusCode_C.BndEvt__WBP_Shop_BonusCode_ContactSupport_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_Shop_BonusCode_ContactSupport_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature(); // Function WBP_Shop_BonusCode.WBP_Shop_BonusCode_C.BndEvt__WBP_Shop_BonusCode_ContactSupport_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_ImageTextButton_K2Node_ComponentBoundEvent_0_OnButtonClick__DelegateSignature(); // Function WBP_Shop_BonusCode.WBP_Shop_BonusCode_C.BndEvt__WBP_ImageTextButton_K2Node_ComponentBoundEvent_0_OnButtonClick__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_Shop_BonusCode_ContactSupport_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature(); // Function WBP_Shop_BonusCode.WBP_Shop_BonusCode_C.BndEvt__WBP_Shop_BonusCode_ContactSupport_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_Shop_BonusCode_AboutButton_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature(); // Function WBP_Shop_BonusCode.WBP_Shop_BonusCode_C.BndEvt__WBP_Shop_BonusCode_AboutButton_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void Error(enum class EHWErrorMessage ErrorMessage); // Function WBP_Shop_BonusCode.WBP_Shop_BonusCode_C.Error // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BonusCodeClaimed(struct FHWResponseBase Response); // Function WBP_Shop_BonusCode.WBP_Shop_BonusCode_C.BonusCodeClaimed // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__InputField_K2Node_ComponentBoundEvent_10_OnEditableTextChangedEvent__DelegateSignature(struct FText Text); // Function WBP_Shop_BonusCode.WBP_Shop_BonusCode_C.BndEvt__InputField_K2Node_ComponentBoundEvent_10_OnEditableTextChangedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void RewardsCollected(struct FHWProfileWithCollectedRewardsResponse Response); // Function WBP_Shop_BonusCode.WBP_Shop_BonusCode_C.RewardsCollected // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_Shop_BonusCode.WBP_Shop_BonusCode_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ShowNotificationPopup(); // Function WBP_Shop_BonusCode.WBP_Shop_BonusCode_C.ShowNotificationPopup // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void NotificationPopupCallback(bool Result); // Function WBP_Shop_BonusCode.WBP_Shop_BonusCode_C.NotificationPopupCallback // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Shop_BonusCode(int32_t EntryPoint); // Function WBP_Shop_BonusCode.WBP_Shop_BonusCode_C.ExecuteUbergraph_WBP_Shop_BonusCode // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
	void OnClose__DelegateSignature(); // Function WBP_Shop_BonusCode.WBP_Shop_BonusCode_C.OnClose__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

