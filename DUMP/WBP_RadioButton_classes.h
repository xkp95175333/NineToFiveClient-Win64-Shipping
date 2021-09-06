// WidgetBlueprintGeneratedClass WBP_RadioButton.WBP_RadioButton_C
// Size: 0x324 (Inherited: 0x260)
struct UWBP_RadioButton_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWBP_Checkbox_C* CheckBox; // 0x268(0x08)
	struct UImage* Icon_2; // 0x270(0x08)
	struct UBorder* IconBorder; // 0x278(0x08)
	struct UWBP_RichTextLabel_C* Label; // 0x280(0x08)
	struct UImage* Radio; // 0x288(0x08)
	struct UButton* RadioButton; // 0x290(0x08)
	struct UScaleBox* ScaleBox_1; // 0x298(0x08)
	struct UWidgetSwitcher* TypeSwitcher; // 0x2a0(0x08)
	bool IsSelected; // 0x2a8(0x01)
	char pad_2A9[0x7]; // 0x2a9(0x07)
	struct FText Content; // 0x2b0(0x18)
	enum class BPE_UIColors TextColor; // 0x2c8(0x01)
	char pad_2C9[0x7]; // 0x2c9(0x07)
	struct FDataTableRowHandle Style; // 0x2d0(0x10)
	struct FMulticastInlineDelegate OnClicked; // 0x2e0(0x10)
	enum class EHWSelectableButtonPressBehavior Behavior; // 0x2f0(0x01)
	char pad_2F1[0x3]; // 0x2f1(0x03)
	int32_t FontSize; // 0x2f4(0x04)
	struct FName ButtonId; // 0x2f8(0x08)
	struct UTexture* DefaultTexture; // 0x300(0x08)
	struct UTexture* SelectedTexture; // 0x308(0x08)
	bool IsRadio; // 0x310(0x01)
	bool HasIcon; // 0x311(0x01)
	char pad_312[0x6]; // 0x312(0x06)
	struct UTexture2D* IconImage; // 0x318(0x08)
	float IconScale; // 0x320(0x04)

	void UpdateIconBorderColor(); // Function WBP_RadioButton.WBP_RadioButton_C.UpdateIconBorderColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Deselect Other Buttons(); // Function WBP_RadioButton.WBP_RadioButton_C.Deselect Other Buttons // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_RadioButton.WBP_RadioButton_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetSelected(bool Selected); // Function WBP_RadioButton.WBP_RadioButton_C.SetSelected // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PreConstruct(bool IsDesignTime); // Function WBP_RadioButton.WBP_RadioButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void SetText(struct FText Content); // Function WBP_RadioButton.WBP_RadioButton_C.SetText // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetStyle(struct FDataTableRowHandle Style, int32_t FontSize); // Function WBP_RadioButton.WBP_RadioButton_C.SetStyle // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__RadioButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_RadioButton.WBP_RadioButton_C.BndEvt__RadioButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__RadioButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function WBP_RadioButton.WBP_RadioButton_C.BndEvt__RadioButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__RadioButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function WBP_RadioButton.WBP_RadioButton_C.BndEvt__RadioButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_RadioButton(int32_t EntryPoint); // Function WBP_RadioButton.WBP_RadioButton_C.ExecuteUbergraph_WBP_RadioButton // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
	void OnClicked__DelegateSignature(struct UWBP_RadioButton_C* Button); // Function WBP_RadioButton.WBP_RadioButton_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

