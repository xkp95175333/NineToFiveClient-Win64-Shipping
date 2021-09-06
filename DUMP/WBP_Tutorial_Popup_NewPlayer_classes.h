// WidgetBlueprintGeneratedClass WBP_Tutorial_Popup_NewPlayer.WBP_Tutorial_Popup_NewPlayer_C
// Size: 0x2a0 (Inherited: 0x260)
struct UWBP_Tutorial_Popup_NewPlayer_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* Background; // 0x268(0x08)
	struct UWBP_MainButton_C* SkipButton; // 0x270(0x08)
	struct UWBP_MainButton_C* StartButton; // 0x278(0x08)
	struct UWBP_RichTextLabel_C* WelcomeText; // 0x280(0x08)
	struct UWBP_RichTextLabel_C* WelcomeTitle; // 0x288(0x08)
	struct FMulticastInlineDelegate OnSkip; // 0x290(0x10)

	void PreConstruct(bool IsDesignTime); // Function WBP_Tutorial_Popup_NewPlayer.WBP_Tutorial_Popup_NewPlayer_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__SkipButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(struct UWBP_MainButton_C* Button); // Function WBP_Tutorial_Popup_NewPlayer.WBP_Tutorial_Popup_NewPlayer_C.BndEvt__SkipButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__StartButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(struct UWBP_MainButton_C* Button); // Function WBP_Tutorial_Popup_NewPlayer.WBP_Tutorial_Popup_NewPlayer_C.BndEvt__StartButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Tutorial_Popup_NewPlayer(int32_t EntryPoint); // Function WBP_Tutorial_Popup_NewPlayer.WBP_Tutorial_Popup_NewPlayer_C.ExecuteUbergraph_WBP_Tutorial_Popup_NewPlayer // (Final|UbergraphFunction) // @ game+0x13c4ca0
	void OnSkip__DelegateSignature(); // Function WBP_Tutorial_Popup_NewPlayer.WBP_Tutorial_Popup_NewPlayer_C.OnSkip__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

