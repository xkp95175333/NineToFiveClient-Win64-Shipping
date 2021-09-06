// WidgetBlueprintGeneratedClass WBP_CorporationWelcomeButton.WBP_CorporationWelcomeButton_C
// Size: 0x300 (Inherited: 0x260)
struct UWBP_CorporationWelcomeButton_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* CorporationBackground; // 0x268(0x08)
	struct UWBP_RichTextLabel_C* CorporationSlogan; // 0x270(0x08)
	struct UImage* DarkenLayer; // 0x278(0x08)
	struct UImage* Logo; // 0x280(0x08)
	struct UButton* TopButton; // 0x288(0x08)
	enum class EHWFaction Corporation; // 0x290(0x01)
	char pad_291[0x7]; // 0x291(0x07)
	struct FMulticastInlineDelegate OnClicked; // 0x298(0x10)
	struct TMap<enum class EHWFaction, struct UMediaPlayer*> Players; // 0x2a8(0x50)
	struct UMediaPlayer* MyPlayer; // 0x2f8(0x08)

	void PreConstruct(bool IsDesignTime); // Function WBP_CorporationWelcomeButton.WBP_CorporationWelcomeButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__TopButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function WBP_CorporationWelcomeButton.WBP_CorporationWelcomeButton_C.BndEvt__TopButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__TopButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function WBP_CorporationWelcomeButton.WBP_CorporationWelcomeButton_C.BndEvt__TopButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__TopButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function WBP_CorporationWelcomeButton.WBP_CorporationWelcomeButton_C.BndEvt__TopButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_CorporationWelcomeButton.WBP_CorporationWelcomeButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void Destruct(); // Function WBP_CorporationWelcomeButton.WBP_CorporationWelcomeButton_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void CustomEvent_1(struct FString OpenedUrl); // Function WBP_CorporationWelcomeButton.WBP_CorporationWelcomeButton_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlaybackResumed_Event_1(); // Function WBP_CorporationWelcomeButton.WBP_CorporationWelcomeButton_C.OnPlaybackResumed_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_CorporationWelcomeButton(int32_t EntryPoint); // Function WBP_CorporationWelcomeButton.WBP_CorporationWelcomeButton_C.ExecuteUbergraph_WBP_CorporationWelcomeButton // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
	void OnClicked__DelegateSignature(enum class EHWFaction Corporation); // Function WBP_CorporationWelcomeButton.WBP_CorporationWelcomeButton_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

