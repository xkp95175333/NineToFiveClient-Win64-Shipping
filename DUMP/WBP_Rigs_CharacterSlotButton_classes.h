// WidgetBlueprintGeneratedClass WBP_Rigs_CharacterSlotButton.WBP_Rigs_CharacterSlotButton_C
// Size: 0x2c8 (Inherited: 0x260)
struct UWBP_Rigs_CharacterSlotButton_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* OnClick; // 0x268(0x08)
	struct UWidgetAnimation* OnHover; // 0x270(0x08)
	struct USizeBox* LabelSocket_2; // 0x278(0x08)
	struct UWBP_RichTextLabel_C* Labeltext; // 0x280(0x08)
	struct UHorizontalBox* Socket; // 0x288(0x08)
	struct UImage* SocketBG_2; // 0x290(0x08)
	struct UButton* TheButton; // 0x298(0x08)
	struct FMulticastInlineDelegate OnClicked; // 0x2a0(0x10)
	struct FText Title; // 0x2b0(0x18)

	void PreConstruct(bool IsDesignTime); // Function WBP_Rigs_CharacterSlotButton.WBP_Rigs_CharacterSlotButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__TheButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function WBP_Rigs_CharacterSlotButton.WBP_Rigs_CharacterSlotButton_C.BndEvt__TheButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__TheButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function WBP_Rigs_CharacterSlotButton.WBP_Rigs_CharacterSlotButton_C.BndEvt__TheButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__TheButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function WBP_Rigs_CharacterSlotButton.WBP_Rigs_CharacterSlotButton_C.BndEvt__TheButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__TheButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature(); // Function WBP_Rigs_CharacterSlotButton.WBP_Rigs_CharacterSlotButton_C.BndEvt__TheButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__TheButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature(); // Function WBP_Rigs_CharacterSlotButton.WBP_Rigs_CharacterSlotButton_C.BndEvt__TheButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_Rigs_CharacterSlotButton.WBP_Rigs_CharacterSlotButton_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function WBP_Rigs_CharacterSlotButton.WBP_Rigs_CharacterSlotButton_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Rigs_CharacterSlotButton(int32_t EntryPoint); // Function WBP_Rigs_CharacterSlotButton.WBP_Rigs_CharacterSlotButton_C.ExecuteUbergraph_WBP_Rigs_CharacterSlotButton // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
	void OnClicked__DelegateSignature(struct UWBP_Rigs_CharacterSlotButton_C* Button); // Function WBP_Rigs_CharacterSlotButton.WBP_Rigs_CharacterSlotButton_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

