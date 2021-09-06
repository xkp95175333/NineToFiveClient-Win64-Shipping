// WidgetBlueprintGeneratedClass WBP_Questionnaire.WBP_Questionnaire_C
// Size: 0x2b0 (Inherited: 0x268)
struct UWBP_Questionnaire_C : UHWWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UImage* Background; // 0x270(0x08)
	struct UWebBrowser* Browser; // 0x278(0x08)
	struct UHWBorderWidget* HWBorderWidget_181; // 0x280(0x08)
	struct UWBP_RichTextLabel_C* Text; // 0x288(0x08)
	struct UWBP_Label_C* Title; // 0x290(0x08)
	struct UWBP_ImageButton_C* WBP_ImageButton; // 0x298(0x08)
	struct FString URL; // 0x2a0(0x10)

	void BndEvt__WBP_ImageButton_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature(struct UWBP_ImageButton_C* Button); // Function WBP_Questionnaire.WBP_Questionnaire_C.BndEvt__WBP_ImageButton_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_Questionnaire.WBP_Questionnaire_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Questionnaire(int32_t EntryPoint); // Function WBP_Questionnaire.WBP_Questionnaire_C.ExecuteUbergraph_WBP_Questionnaire // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

