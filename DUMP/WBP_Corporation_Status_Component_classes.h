// WidgetBlueprintGeneratedClass WBP_Corporation_Status_Component.WBP_Corporation_Status_Component_C
// Size: 0x2a0 (Inherited: 0x260)
struct UWBP_Corporation_Status_Component_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* Image_Glow; // 0x268(0x08)
	struct UImage* Status_Icon; // 0x270(0x08)
	struct UWBP_RichTextLabel_C* Status_Text; // 0x278(0x08)
	struct FText Name; // 0x280(0x18)
	struct UTexture2D* Image; // 0x298(0x08)

	void SetInfo(struct FText Labeltext, struct UTexture2D* Image); // Function WBP_Corporation_Status_Component.WBP_Corporation_Status_Component_C.SetInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PreConstruct(bool IsDesignTime); // Function WBP_Corporation_Status_Component.WBP_Corporation_Status_Component_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Corporation_Status_Component(int32_t EntryPoint); // Function WBP_Corporation_Status_Component.WBP_Corporation_Status_Component_C.ExecuteUbergraph_WBP_Corporation_Status_Component // (Final|UbergraphFunction) // @ game+0x13c4ca0
};

