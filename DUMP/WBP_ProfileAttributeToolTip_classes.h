// WidgetBlueprintGeneratedClass WBP_ProfileAttributeToolTip.WBP_ProfileAttributeToolTip_C
// Size: 0x2b0 (Inherited: 0x260)
struct UWBP_ProfileAttributeToolTip_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWBP_RichTextLabel_C* Description; // 0x268(0x08)
	struct UWBP_RichTextLabel_C* Header; // 0x270(0x08)
	struct UWBP_Box_C* WBP_Box; // 0x278(0x08)
	struct FText HeaderText; // 0x280(0x18)
	struct FText Bodytext; // 0x298(0x18)

	void Construct(); // Function WBP_ProfileAttributeToolTip.WBP_ProfileAttributeToolTip_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_ProfileAttributeToolTip(int32_t EntryPoint); // Function WBP_ProfileAttributeToolTip.WBP_ProfileAttributeToolTip_C.ExecuteUbergraph_WBP_ProfileAttributeToolTip // (Final|UbergraphFunction) // @ game+0x13c4ca0
};

