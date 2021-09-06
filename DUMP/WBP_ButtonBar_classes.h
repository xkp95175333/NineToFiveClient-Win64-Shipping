// WidgetBlueprintGeneratedClass WBP_ButtonBar.WBP_ButtonBar_C
// Size: 0x2a0 (Inherited: 0x260)
struct UWBP_ButtonBar_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UHorizontalBox* ButtonContainer; // 0x268(0x08)
	struct TArray<struct UWBP_ButtonBar_Button_C*> Buttons; // 0x270(0x10)
	struct TArray<struct FBP_NavigationBar_Item> Items; // 0x280(0x10)
	struct FMulticastInlineDelegate ButtonClicked; // 0x290(0x10)

	void GetButtonByView(enum class BPE_UIView View, struct UWBP_ButtonBar_Button_C* Button); // Function WBP_ButtonBar.WBP_ButtonBar_C.GetButtonByView // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PreConstruct(bool IsDesignTime); // Function WBP_ButtonBar.WBP_ButtonBar_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ButtonClickedd(struct FBP_NavigationBar_Item Button); // Function WBP_ButtonBar.WBP_ButtonBar_C.ButtonClickedd // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_ButtonBar(int32_t EntryPoint); // Function WBP_ButtonBar.WBP_ButtonBar_C.ExecuteUbergraph_WBP_ButtonBar // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
	void ButtonClicked__DelegateSignature(struct FBP_NavigationBar_Item Button); // Function WBP_ButtonBar.WBP_ButtonBar_C.ButtonClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

