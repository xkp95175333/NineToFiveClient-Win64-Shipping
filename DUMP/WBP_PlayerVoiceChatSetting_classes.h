// WidgetBlueprintGeneratedClass WBP_PlayerVoiceChatSetting.WBP_PlayerVoiceChatSetting_C
// Size: 0x2b8 (Inherited: 0x260)
struct UWBP_PlayerVoiceChatSetting_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UHorizontalBox* ActiveContent; // 0x268(0x08)
	struct UCheckBox* CheckBox; // 0x270(0x08)
	struct UWBP_RichTextLabel_C* CheckBoxText; // 0x278(0x08)
	struct UWBP_RichTextLabel_C* NameText; // 0x280(0x08)
	struct UBorder* RowBorder_Dark; // 0x288(0x08)
	struct UBorder* RowBorder_Light; // 0x290(0x08)
	struct UWBP_PlayerVoiceIndicator_C* VOIP; // 0x298(0x08)
	struct USlider* volumeSlider; // 0x2a0(0x08)
	struct FString PlayerId; // 0x2a8(0x10)

	void GetPlayerObject(struct UHWVoiceChatPlayer* Player); // Function WBP_PlayerVoiceChatSetting.WBP_PlayerVoiceChatSetting_C.GetPlayerObject // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void SetInfo(struct FString ID); // Function WBP_PlayerVoiceChatSetting.WBP_PlayerVoiceChatSetting_C.SetInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void DisableSetting(); // Function WBP_PlayerVoiceChatSetting.WBP_PlayerVoiceChatSetting_C.DisableSetting // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void DoMute(bool Mute); // Function WBP_PlayerVoiceChatSetting.WBP_PlayerVoiceChatSetting_C.DoMute // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetDefaultValues(int32_t Index); // Function WBP_PlayerVoiceChatSetting.WBP_PlayerVoiceChatSetting_C.SetDefaultValues // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PreConstruct(bool IsDesignTime); // Function WBP_PlayerVoiceChatSetting.WBP_PlayerVoiceChatSetting_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_PlayerVoiceChatSetting.WBP_PlayerVoiceChatSetting_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__CheckBox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked); // Function WBP_PlayerVoiceChatSetting.WBP_PlayerVoiceChatSetting_C.BndEvt__CheckBox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__Slider_269_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature(float Value); // Function WBP_PlayerVoiceChatSetting.WBP_PlayerVoiceChatSetting_C.BndEvt__Slider_269_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_PlayerVoiceChatSetting(int32_t EntryPoint); // Function WBP_PlayerVoiceChatSetting.WBP_PlayerVoiceChatSetting_C.ExecuteUbergraph_WBP_PlayerVoiceChatSetting // (Final|UbergraphFunction) // @ game+0x13c4ca0
};

