// WidgetBlueprintGeneratedClass WBP_Rigs_VoiceListItem.WBP_Rigs_VoiceListItem_C
// Size: 0x2cc (Inherited: 0x260)
struct UWBP_Rigs_VoiceListItem_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWBP_Rigs_ButtonBackground_C* Background; // 0x268(0x08)
	struct UWBP_RichTextLabel_C* Label_CategoryName; // 0x270(0x08)
	struct UImage* PlayImage; // 0x278(0x08)
	struct UButton* PlaySampleButton; // 0x280(0x08)
	struct UButton* SelectVoiceButton; // 0x288(0x08)
	struct UWBP_Box_C* WBP_Box; // 0x290(0x08)
	struct FBP_CharacterVoice VoiceData; // 0x298(0x18)
	struct FMulticastInlineDelegate VoiceSelected; // 0x2b0(0x10)
	bool IsSelected; // 0x2c0(0x01)
	char pad_2C1[0x3]; // 0x2c1(0x03)
	struct FName VoiceId; // 0x2c4(0x08)

	void Set Content(); // Function WBP_Rigs_VoiceListItem.WBP_Rigs_VoiceListItem_C.Set Content // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_Rigs_VoiceListItem.WBP_Rigs_VoiceListItem_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__PlaySampleButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_Rigs_VoiceListItem.WBP_Rigs_VoiceListItem_C.BndEvt__PlaySampleButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void SamplePlayed(enum class EAkCallbackType CallbackType, struct UAkCallbackInfo* CallbackInfo); // Function WBP_Rigs_VoiceListItem.WBP_Rigs_VoiceListItem_C.SamplePlayed // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__SelectVoiceButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function WBP_Rigs_VoiceListItem.WBP_Rigs_VoiceListItem_C.BndEvt__SelectVoiceButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__PlaySampleButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function WBP_Rigs_VoiceListItem.WBP_Rigs_VoiceListItem_C.BndEvt__PlaySampleButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__PlaySampleButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function WBP_Rigs_VoiceListItem.WBP_Rigs_VoiceListItem_C.BndEvt__PlaySampleButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__SelectVoiceButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(); // Function WBP_Rigs_VoiceListItem.WBP_Rigs_VoiceListItem_C.BndEvt__SelectVoiceButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__SelectVoiceButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature(); // Function WBP_Rigs_VoiceListItem.WBP_Rigs_VoiceListItem_C.BndEvt__SelectVoiceButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Rigs_VoiceListItem(int32_t EntryPoint); // Function WBP_Rigs_VoiceListItem.WBP_Rigs_VoiceListItem_C.ExecuteUbergraph_WBP_Rigs_VoiceListItem // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
	void VoiceSelected__DelegateSignature(struct FName VoiceId); // Function WBP_Rigs_VoiceListItem.WBP_Rigs_VoiceListItem_C.VoiceSelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

