// WidgetBlueprintGeneratedClass WBP_Corporations_Intro.WBP_Corporations_Intro_C
// Size: 0x2d0 (Inherited: 0x268)
struct UWBP_Corporations_Intro_C : UHWWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UImage* Logo_Farmira; // 0x270(0x08)
	struct UImage* Logo_MashMedia; // 0x278(0x08)
	struct UImage* Logo_NWF; // 0x280(0x08)
	struct UWBP_MainButton_C* ProceedButton; // 0x288(0x08)
	struct UWBP_RichTextLabel_C* Text; // 0x290(0x08)
	struct UWBP_ScreenHeader_C* Title; // 0x298(0x08)
	struct UWBP_CorporationWelcomeButton_C* WBP_CorporationWelcomeButtonA; // 0x2a0(0x08)
	struct UWBP_CorporationWelcomeButton_C* WBP_CorporationWelcomeButtonB; // 0x2a8(0x08)
	struct UWBP_CorporationWelcomeButton_C* WBP_CorporationWelcomeButtonC; // 0x2b0(0x08)
	struct UWBP_ScreenHeader_C* WBP_ScreenHeader; // 0x2b8(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_1; // 0x2c0(0x08)
	struct UWBP_MainButton_C* ProceedButton_1; // 0x2c8(0x08)

	void PreConstruct(bool IsDesignTime); // Function WBP_Corporations_Intro.WBP_Corporations_Intro_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void Select(enum class EHWFaction Corp); // Function WBP_Corporations_Intro.WBP_Corporations_Intro_C.Select // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_CorporationWelcomeButtonA_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(enum class EHWFaction Corporation); // Function WBP_Corporations_Intro.WBP_Corporations_Intro_C.BndEvt__WBP_CorporationWelcomeButtonA_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_CorporationWelcomeButtonB_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(enum class EHWFaction Corporation); // Function WBP_Corporations_Intro.WBP_Corporations_Intro_C.BndEvt__WBP_CorporationWelcomeButtonB_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_CorporationWelcomeButtonC_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature(enum class EHWFaction Corporation); // Function WBP_Corporations_Intro.WBP_Corporations_Intro_C.BndEvt__WBP_CorporationWelcomeButtonC_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__ProceedButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(struct UWBP_MainButton_C* Button); // Function WBP_Corporations_Intro.WBP_Corporations_Intro_C.BndEvt__ProceedButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Corporations_Intro(int32_t EntryPoint); // Function WBP_Corporations_Intro.WBP_Corporations_Intro_C.ExecuteUbergraph_WBP_Corporations_Intro // (Final|UbergraphFunction) // @ game+0x13c4ca0
};

