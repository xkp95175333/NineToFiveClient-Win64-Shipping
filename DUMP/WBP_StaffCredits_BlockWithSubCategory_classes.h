// WidgetBlueprintGeneratedClass WBP_StaffCredits_BlockWithSubCategory.WBP_StaffCredits_BlockWithSubCategory_C
// Size: 0x290 (Inherited: 0x260)
struct UWBP_StaffCredits_BlockWithSubCategory_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWBP_RichTextLabel_C* Block_Header; // 0x268(0x08)
	struct UVerticalBox* SubCategories; // 0x270(0x08)
	struct UWBP_StaffCredits_BlockwithNames_C* WBP_StaffCredits_BlockwithNames; // 0x278(0x08)
	struct UWBP_StaffCredits_BlockwithNames_C* WBP_StaffCredits_BlockwithNames_2; // 0x280(0x08)
	struct UWBP_StaffCredits_BlockwithNames_C* WBP_StaffCredits_BlockwithNames_3; // 0x288(0x08)

	void SetContent(struct FString Company, struct UBP_StaffCredits_DepartmentalTeam_C* Team); // Function WBP_StaffCredits_BlockWithSubCategory.WBP_StaffCredits_BlockWithSubCategory_C.SetContent // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_StaffCredits_BlockWithSubCategory(int32_t EntryPoint); // Function WBP_StaffCredits_BlockWithSubCategory.WBP_StaffCredits_BlockWithSubCategory_C.ExecuteUbergraph_WBP_StaffCredits_BlockWithSubCategory // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

