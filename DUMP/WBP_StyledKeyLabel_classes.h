// WidgetBlueprintGeneratedClass WBP_StyledKeyLabel.WBP_StyledKeyLabel_C
// Size: 0x2e8 (Inherited: 0x2d0)
struct UWBP_StyledKeyLabel_C : UKeyLabel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d0(0x08)
	struct UImage* IconImage; // 0x2d8(0x08)
	struct UTextBlock* Labeltext; // 0x2e0(0x08)

	struct FSlateBrush GetIconBrush(); // Function WBP_StyledKeyLabel.WBP_StyledKeyLabel_C.GetIconBrush // (Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x13c4ca0
	struct FText GetDisplayNameUpper(); // Function WBP_StyledKeyLabel.WBP_StyledKeyLabel_C.GetDisplayNameUpper // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void UpdateKeyLabel(); // Function WBP_StyledKeyLabel.WBP_StyledKeyLabel_C.UpdateKeyLabel // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_StyledKeyLabel(int32_t EntryPoint); // Function WBP_StyledKeyLabel.WBP_StyledKeyLabel_C.ExecuteUbergraph_WBP_StyledKeyLabel // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

