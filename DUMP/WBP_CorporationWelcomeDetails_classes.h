// WidgetBlueprintGeneratedClass WBP_CorporationWelcomeDetails.WBP_CorporationWelcomeDetails_C
// Size: 0x299 (Inherited: 0x260)
struct UWBP_CorporationWelcomeDetails_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWBP_Corporations_Slideshow_C* CorporationBackground; // 0x268(0x08)
	struct UWBP_RichTextLabel_C* CorporationHistory; // 0x270(0x08)
	struct UWBP_RichTextLabel_C* CorporationSlogan; // 0x278(0x08)
	struct UImage* Logo; // 0x280(0x08)
	struct UWBP_MainButton_C* WBP_Back; // 0x288(0x08)
	struct UWBP_MainButton_C* WBP_SignContract; // 0x290(0x08)
	enum class EHWFaction Corporation; // 0x298(0x01)

	void PreConstruct(bool IsDesignTime); // Function WBP_CorporationWelcomeDetails.WBP_CorporationWelcomeDetails_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_SignContract_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(struct UWBP_MainButton_C* Button); // Function WBP_CorporationWelcomeDetails.WBP_CorporationWelcomeDetails_C.BndEvt__WBP_SignContract_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_Back_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(struct UWBP_MainButton_C* Button); // Function WBP_CorporationWelcomeDetails.WBP_CorporationWelcomeDetails_C.BndEvt__WBP_Back_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_CorporationWelcomeDetails.WBP_CorporationWelcomeDetails_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_CorporationWelcomeDetails(int32_t EntryPoint); // Function WBP_CorporationWelcomeDetails.WBP_CorporationWelcomeDetails_C.ExecuteUbergraph_WBP_CorporationWelcomeDetails // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

