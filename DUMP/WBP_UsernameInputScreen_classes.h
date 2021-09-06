// WidgetBlueprintGeneratedClass WBP_UsernameInputScreen.WBP_UsernameInputScreen_C
// Size: 0x2b0 (Inherited: 0x260)
struct UWBP_UsernameInputScreen_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWBP_MainButton_C* BTN_Confirm; // 0x268(0x08)
	struct UEditableText* IF_Username; // 0x270(0x08)
	struct UWBP_RichTextLabel_C* LBL_ErrorMessage; // 0x278(0x08)
	struct UOverlay* OVL_Wait; // 0x280(0x08)
	struct FText ErrorMessage; // 0x288(0x18)
	struct FMulticastInlineDelegate NameEntered; // 0x2a0(0x10)

	void ValidateUsername(struct FText Username, bool IsValid); // Function WBP_UsernameInputScreen.WBP_UsernameInputScreen_C.ValidateUsername // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_UsernameInputScreen.WBP_UsernameInputScreen_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__BTN_Confirm_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(struct UWBP_MainButton_C* Button); // Function WBP_UsernameInputScreen.WBP_UsernameInputScreen_C.BndEvt__BTN_Confirm_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__IF_Username_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature(struct FText Text); // Function WBP_UsernameInputScreen.WBP_UsernameInputScreen_C.BndEvt__IF_Username_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__IF_Username_K2Node_ComponentBoundEvent_2_OnEditableTextCommittedEvent__DelegateSignature(struct FText Text, enum class ETextCommit CommitMethod); // Function WBP_UsernameInputScreen.WBP_UsernameInputScreen_C.BndEvt__IF_Username_K2Node_ComponentBoundEvent_2_OnEditableTextCommittedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void SubmitUsername(struct FText Username); // Function WBP_UsernameInputScreen.WBP_UsernameInputScreen_C.SubmitUsername // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_UsernameInputScreen(int32_t EntryPoint); // Function WBP_UsernameInputScreen.WBP_UsernameInputScreen_C.ExecuteUbergraph_WBP_UsernameInputScreen // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
	void NameEntered__DelegateSignature(); // Function WBP_UsernameInputScreen.WBP_UsernameInputScreen_C.NameEntered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

