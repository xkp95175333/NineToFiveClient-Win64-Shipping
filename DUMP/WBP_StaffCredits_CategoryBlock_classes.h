// WidgetBlueprintGeneratedClass WBP_StaffCredits_CategoryBlock.WBP_StaffCredits_CategoryBlock_C
// Size: 0x2c4 (Inherited: 0x260)
struct UWBP_StaffCredits_CategoryBlock_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UGridPanel* PartnersTeamGridPanel_DevelopedWith; // 0x268(0x08)
	struct UWBP_StaffCredits_BlockwithNames_C* StaffCredits_BlockwithNames_17; // 0x270(0x08)
	struct UWBP_StaffCredits_BlockwithNames_C* StaffCredits_BlockwithNames_18; // 0x278(0x08)
	struct UWBP_StaffCredits_BlockwithNames_C* StaffCredits_BlockwithNames_19; // 0x280(0x08)
	struct UWBP_StaffCredits_BlockwithNames_C* StaffCredits_BlockwithNames_20; // 0x288(0x08)
	struct UWBP_StaffCredits_BlockwithNames_C* StaffCredits_BlockwithNames_21; // 0x290(0x08)
	struct UWBP_StaffCredits_BlockwithNames_C* StaffCredits_BlockwithNames_22; // 0x298(0x08)
	struct UWBP_StaffCredits_BlockwithNames_C* StaffCredits_BlockwithNames_23; // 0x2a0(0x08)
	struct UWBP_StaffCredits_BlockwithNames_C* StaffCredits_BlockwithNames_24; // 0x2a8(0x08)
	struct UWBP_StaffCredits_Header_C* StaffCredits_Category_Header; // 0x2b0(0x08)
	int32_t MaxColCount; // 0x2b8(0x04)
	int32_t CurrentColCount; // 0x2bc(0x04)
	int32_t CurrentRowCount; // 0x2c0(0x04)

	void SetContent(struct FString CategoryName, struct UBP_StaffCredits_Companies_C* Companies); // Function WBP_StaffCredits_CategoryBlock.WBP_StaffCredits_CategoryBlock_C.SetContent // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_StaffCredits_CategoryBlock(int32_t EntryPoint); // Function WBP_StaffCredits_CategoryBlock.WBP_StaffCredits_CategoryBlock_C.ExecuteUbergraph_WBP_StaffCredits_CategoryBlock // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

