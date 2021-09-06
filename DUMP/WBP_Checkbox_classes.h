// WidgetBlueprintGeneratedClass WBP_Checkbox.WBP_Checkbox_C
// Size: 0x2a8 (Inherited: 0x268)
struct UWBP_Checkbox_C : UHWWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UHWBorderWidget* Border; // 0x270(0x08)
	struct UImage* Checkmark; // 0x278(0x08)
	bool Selected; // 0x280(0x01)
	char pad_281[0x7]; // 0x281(0x07)
	struct FMulticastInlineDelegate OnToggled; // 0x288(0x10)
	struct FLinearColor BorderColor; // 0x298(0x10)

	void UpdateCheckmark(); // Function WBP_Checkbox.WBP_Checkbox_C.UpdateCheckmark // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetChecked(bool Checked); // Function WBP_Checkbox.WBP_Checkbox_C.SetChecked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_Checkbox.WBP_Checkbox_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateBackground(bool Hover); // Function WBP_Checkbox.WBP_Checkbox_C.UpdateBackground // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_Checkbox.WBP_Checkbox_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_Checkbox.WBP_Checkbox_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function WBP_Checkbox.WBP_Checkbox_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void PreConstruct(bool IsDesignTime); // Function WBP_Checkbox.WBP_Checkbox_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateBorderColor(); // Function WBP_Checkbox.WBP_Checkbox_C.UpdateBorderColor // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Checkbox(int32_t EntryPoint); // Function WBP_Checkbox.WBP_Checkbox_C.ExecuteUbergraph_WBP_Checkbox // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
	void OnToggled__DelegateSignature(bool IsChecked); // Function WBP_Checkbox.WBP_Checkbox_C.OnToggled__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

