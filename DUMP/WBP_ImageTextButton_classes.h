// WidgetBlueprintGeneratedClass WBP_ImageTextButton.WBP_ImageTextButton_C
// Size: 0x2f0 (Inherited: 0x260)
struct UWBP_ImageTextButton_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* Image; // 0x268(0x08)
	struct UButton* MainButton; // 0x270(0x08)
	struct UWBP_RichTextLabel_C* Text; // 0x278(0x08)
	bool ShowImage; // 0x280(0x01)
	bool ShowText; // 0x281(0x01)
	char pad_282[0x2]; // 0x282(0x02)
	struct FLinearColor BackgroundColor; // 0x284(0x10)
	char pad_294[0x4]; // 0x294(0x04)
	struct FMulticastInlineDelegate OnButtonClick; // 0x298(0x10)
	struct FMulticastInlineDelegate OnButtonHover; // 0x2a8(0x10)
	struct UTexture2D* ImageTexture; // 0x2b8(0x08)
	struct FText ButtonText; // 0x2c0(0x18)
	enum class BPE_UIColors TextColor; // 0x2d8(0x01)
	char pad_2D9[0x7]; // 0x2d9(0x07)
	struct FDataTableRowHandle TextStyle; // 0x2e0(0x10)

	void PreConstruct(bool IsDesignTime); // Function WBP_ImageTextButton.WBP_ImageTextButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_ImageTextButton.WBP_ImageTextButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_ImageTextButton.WBP_ImageTextButton_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__MainButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function WBP_ImageTextButton.WBP_ImageTextButton_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__MainButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function WBP_ImageTextButton.WBP_ImageTextButton_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void SetImage(); // Function WBP_ImageTextButton.WBP_ImageTextButton_C.SetImage // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetText(); // Function WBP_ImageTextButton.WBP_ImageTextButton_C.SetText // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetHoverForImage(bool Hovered); // Function WBP_ImageTextButton.WBP_ImageTextButton_C.SetHoverForImage // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetHoverForText(bool Hovered); // Function WBP_ImageTextButton.WBP_ImageTextButton_C.SetHoverForText // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_ImageTextButton(int32_t EntryPoint); // Function WBP_ImageTextButton.WBP_ImageTextButton_C.ExecuteUbergraph_WBP_ImageTextButton // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
	void OnButtonHover__DelegateSignature(bool Hovered); // Function WBP_ImageTextButton.WBP_ImageTextButton_C.OnButtonHover__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnButtonClick__DelegateSignature(); // Function WBP_ImageTextButton.WBP_ImageTextButton_C.OnButtonClick__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

