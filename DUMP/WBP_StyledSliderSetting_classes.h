// WidgetBlueprintGeneratedClass WBP_StyledSliderSetting.WBP_StyledSliderSetting_C
// Size: 0x308 (Inherited: 0x2c8)
struct UWBP_StyledSliderSetting_C : UNativeSliderSetting {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct UEditableText* EditableText_96; // 0x2d0(0x08)
	struct UProgressBar* ProgressBarWidget; // 0x2d8(0x08)
	float LabelMultiplier; // 0x2e0(0x04)
	int32_t LabelFractionalDigits; // 0x2e4(0x04)
	bool ShowAsText; // 0x2e8(0x01)
	char pad_2E9[0x7]; // 0x2e9(0x07)
	struct FText LastEnteredNumber; // 0x2f0(0x18)

	void OnSliderValueUpdated(float NormalizedValue, float RawValue); // Function WBP_StyledSliderSetting.WBP_StyledSliderSetting_C.OnSliderValueUpdated // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_StyledSliderSetting.WBP_StyledSliderSetting_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void PreConstruct(bool IsDesignTime); // Function WBP_StyledSliderSetting.WBP_StyledSliderSetting_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__EditableText_95_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature(struct FText Text, enum class ETextCommit CommitMethod); // Function WBP_StyledSliderSetting.WBP_StyledSliderSetting_C.BndEvt__EditableText_95_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__EditableText_95_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature(struct FText Text); // Function WBP_StyledSliderSetting.WBP_StyledSliderSetting_C.BndEvt__EditableText_95_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_StyledSliderSetting(int32_t EntryPoint); // Function WBP_StyledSliderSetting.WBP_StyledSliderSetting_C.ExecuteUbergraph_WBP_StyledSliderSetting // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

