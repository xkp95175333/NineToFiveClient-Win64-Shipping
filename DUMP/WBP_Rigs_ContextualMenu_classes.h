// WidgetBlueprintGeneratedClass WBP_Rigs_ContextualMenu.WBP_Rigs_ContextualMenu_C
// Size: 0x321 (Inherited: 0x260)
struct UWBP_Rigs_ContextualMenu_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* Background; // 0x268(0x08)
	struct UImage* DeclineIcon; // 0x270(0x08)
	struct UButton* DeclineRequestButton; // 0x278(0x08)
	struct USizeBox* DeleteLoadout; // 0x280(0x08)
	struct UImage* Divider; // 0x288(0x08)
	struct UImage* Divider_5; // 0x290(0x08)
	struct UImage* Divider_6; // 0x298(0x08)
	struct UImage* DuplicateIcon; // 0x2a0(0x08)
	struct USizeBox* DuplicateLoadout; // 0x2a8(0x08)
	struct UButton* DuplicateLoadoutButton; // 0x2b0(0x08)
	struct UWBP_RichTextLabel_C* DuplicateText; // 0x2b8(0x08)
	struct UImage* EditIcon; // 0x2c0(0x08)
	struct USizeBox* EditNameLoadout; // 0x2c8(0x08)
	struct UButton* Rename; // 0x2d0(0x08)
	struct UWBP_RichTextLabel_C* WBP_RichTextLabel; // 0x2d8(0x08)
	struct UWBP_RichTextLabel_C* WBP_RichTextLabel_2; // 0x2e0(0x08)
	struct FMulticastInlineDelegate OnRenameRigClicked; // 0x2e8(0x10)
	struct FMulticastInlineDelegate OnDuplicateRigClicked; // 0x2f8(0x10)
	bool AllowDuplicate; // 0x308(0x01)
	char pad_309[0x7]; // 0x309(0x07)
	struct FMulticastInlineDelegate OnDeleteRigClicked; // 0x310(0x10)
	bool AllowDelete; // 0x320(0x01)

	void Construct(); // Function WBP_Rigs_ContextualMenu.WBP_Rigs_ContextualMenu_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__Rename_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_Rigs_ContextualMenu.WBP_Rigs_ContextualMenu_C.BndEvt__Rename_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__DuplicateLoadoutButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function WBP_Rigs_ContextualMenu.WBP_Rigs_ContextualMenu_C.BndEvt__DuplicateLoadoutButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__DeclineRequestButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function WBP_Rigs_ContextualMenu.WBP_Rigs_ContextualMenu_C.BndEvt__DeclineRequestButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Rigs_ContextualMenu(int32_t EntryPoint); // Function WBP_Rigs_ContextualMenu.WBP_Rigs_ContextualMenu_C.ExecuteUbergraph_WBP_Rigs_ContextualMenu // (Final|UbergraphFunction) // @ game+0x13c4ca0
	void OnDeleteRigClicked__DelegateSignature(); // Function WBP_Rigs_ContextualMenu.WBP_Rigs_ContextualMenu_C.OnDeleteRigClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnDuplicateRigClicked__DelegateSignature(); // Function WBP_Rigs_ContextualMenu.WBP_Rigs_ContextualMenu_C.OnDuplicateRigClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnRenameRigClicked__DelegateSignature(); // Function WBP_Rigs_ContextualMenu.WBP_Rigs_ContextualMenu_C.OnRenameRigClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

