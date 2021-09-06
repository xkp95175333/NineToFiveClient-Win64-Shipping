// WidgetBlueprintGeneratedClass WBP_Tutorial_Popup_AfterGameplayTutorial.WBP_Tutorial_Popup_AfterGameplayTutorial_C
// Size: 0x370 (Inherited: 0x260)
struct UWBP_Tutorial_Popup_AfterGameplayTutorial_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* Background_7; // 0x268(0x08)
	struct UImage* Bottom_2; // 0x270(0x08)
	struct UImage* BottomDetail; // 0x278(0x08)
	struct UWBP_Animated_Letters_Label_C* BottomDetailText; // 0x280(0x08)
	struct UImage* Bottomline; // 0x288(0x08)
	struct UWBP_RichTextLabel_C* CompensationLabel; // 0x290(0x08)
	struct UImage* LeftDetail; // 0x298(0x08)
	struct UWBP_RichTextLabel_C* MessageText; // 0x2a0(0x08)
	struct UImage* RightDetail; // 0x2a8(0x08)
	struct UWBP_MainButton_C* SkipButton; // 0x2b0(0x08)
	struct UWBP_MainButton_C* StartButton; // 0x2b8(0x08)
	struct UImage* TEMP_BACKGROUND; // 0x2c0(0x08)
	struct UWBP_RichTextLabel_C* Title; // 0x2c8(0x08)
	struct UImage* TopDetail; // 0x2d0(0x08)
	struct UImage* TopDetail_2; // 0x2d8(0x08)
	struct UWBP_Animated_Letters_Label_C* TopDetailText1; // 0x2e0(0x08)
	struct UWBP_Animated_Letters_Label_C* TopDetailText2; // 0x2e8(0x08)
	struct UImage* Topline; // 0x2f0(0x08)
	struct UWBP_Reward_C* WBP_Reward_2; // 0x2f8(0x08)
	struct UWBP_Reward_C* WBP_Reward_3; // 0x300(0x08)
	struct UWBP_Reward_C* WBP_Reward_4; // 0x308(0x08)
	struct UWBP_Reward_C* WBP_Reward_5; // 0x310(0x08)
	struct UWBP_Reward_C* WBP_Reward_6; // 0x318(0x08)
	struct UWBP_Reward_C* WBP_Reward_16; // 0x320(0x08)
	struct UWBP_Reward_C* WBP_Reward_17; // 0x328(0x08)
	struct UWBP_Reward_C* WBP_Reward_18; // 0x330(0x08)
	struct UWBP_Reward_C* WBP_Reward_19; // 0x338(0x08)
	struct UWBP_Reward_C* WBP_Reward_20; // 0x340(0x08)
	struct UWBP_Reward_Grouped_C* WBP_Reward_Armor; // 0x348(0x08)
	struct UWBP_Reward_Grouped_C* WBP_Reward_ASS; // 0x350(0x08)
	struct UWBP_Reward_Grouped_C* WBP_Reward_DroneAbility; // 0x358(0x08)
	struct UWBP_Reward_Grouped_C* WBP_Reward_Items; // 0x360(0x08)
	struct UWBP_Reward_Grouped_C* WBP_Reward_Weapons; // 0x368(0x08)

	void GetWeaponFromProfile(bool PrimaryWeapon, struct FString ID); // Function WBP_Tutorial_Popup_AfterGameplayTutorial.WBP_Tutorial_Popup_AfterGameplayTutorial_C.GetWeaponFromProfile // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void BndEvt__StartButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(struct UWBP_MainButton_C* Button); // Function WBP_Tutorial_Popup_AfterGameplayTutorial.WBP_Tutorial_Popup_AfterGameplayTutorial_C.BndEvt__StartButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__SkipButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(struct UWBP_MainButton_C* Button); // Function WBP_Tutorial_Popup_AfterGameplayTutorial.WBP_Tutorial_Popup_AfterGameplayTutorial_C.BndEvt__SkipButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void OnUpsertComplete(struct FHWResponseBase Response); // Function WBP_Tutorial_Popup_AfterGameplayTutorial.WBP_Tutorial_Popup_AfterGameplayTutorial_C.OnUpsertComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnUpsertFailed(enum class EHWErrorMessage ErrorMessage); // Function WBP_Tutorial_Popup_AfterGameplayTutorial.WBP_Tutorial_Popup_AfterGameplayTutorial_C.OnUpsertFailed // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_Tutorial_Popup_AfterGameplayTutorial.WBP_Tutorial_Popup_AfterGameplayTutorial_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Tutorial_Popup_AfterGameplayTutorial(int32_t EntryPoint); // Function WBP_Tutorial_Popup_AfterGameplayTutorial.WBP_Tutorial_Popup_AfterGameplayTutorial_C.ExecuteUbergraph_WBP_Tutorial_Popup_AfterGameplayTutorial // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

