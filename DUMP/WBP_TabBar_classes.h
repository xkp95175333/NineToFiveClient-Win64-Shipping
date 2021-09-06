// WidgetBlueprintGeneratedClass WBP_TabBar.WBP_TabBar_C
// Size: 0x2fd (Inherited: 0x268)
struct UWBP_TabBar_C : UHWWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UHorizontalBox* HB_Buttons; // 0x270(0x08)
	struct TMap<struct FName, struct FText> Buttons; // 0x278(0x50)
	struct UBP_UIStyle_Button_C* ButtonStyle; // 0x2c8(0x08)
	struct FMargin ButtonMargin; // 0x2d0(0x10)
	struct FMulticastInlineDelegate OnClicked; // 0x2e0(0x10)
	struct UWBP_Button_C* PrevButton; // 0x2f0(0x08)
	float ButtonWidth; // 0x2f8(0x04)
	bool FixedWidthButtons; // 0x2fc(0x01)

	void SetButtonEnabled(struct FName ButtonId, bool Enabled); // Function WBP_TabBar.WBP_TabBar_C.SetButtonEnabled // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetSelectedIndex(int32_t Index); // Function WBP_TabBar.WBP_TabBar_C.GetSelectedIndex // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void PreConstruct(bool IsDesignTime); // Function WBP_TabBar.WBP_TabBar_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void HandleClick(struct UWBP_Button_C* Button); // Function WBP_TabBar.WBP_TabBar_C.HandleClick // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetSelectedIndex(int32_t Index); // Function WBP_TabBar.WBP_TabBar_C.SetSelectedIndex // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_TabBar(int32_t EntryPoint); // Function WBP_TabBar.WBP_TabBar_C.ExecuteUbergraph_WBP_TabBar // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
	void OnClicked__DelegateSignature(struct FName ID); // Function WBP_TabBar.WBP_TabBar_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

