// WidgetBlueprintGeneratedClass WBP_StaffCredits_Screen.WBP_StaffCredits_Screen_C
// Size: 0x500 (Inherited: 0x260)
struct UWBP_StaffCredits_Screen_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWBP_RichTextLabel_C* Back-Text_2; // 0x268(0x08)
	struct UButton* BackButton_2; // 0x270(0x08)
	struct UImage* Background; // 0x278(0x08)
	struct UImage* Image_Back_2; // 0x280(0x08)
	struct UGridPanel* InternalTeamGridPanel; // 0x288(0x08)
	struct UVerticalBox* Partners; // 0x290(0x08)
	struct UGridPanel* PartnersTeamGridPanel_DevelopedWith; // 0x298(0x08)
	struct UGridPanel* PartnersTeamGridPanel_ThanksTo; // 0x2a0(0x08)
	struct UImage* RedHill_Logo; // 0x2a8(0x08)
	struct UWBP_StaffCredits_BlockwithNames_C* StaffCredits_BlockwithNames; // 0x2b0(0x08)
	struct UWBP_StaffCredits_BlockwithNames_C* StaffCredits_BlockwithNames_2; // 0x2b8(0x08)
	struct UWBP_StaffCredits_BlockwithNames_C* StaffCredits_BlockwithNames_3; // 0x2c0(0x08)
	struct UWBP_StaffCredits_BlockwithNames_C* StaffCredits_BlockwithNames_4; // 0x2c8(0x08)
	struct UWBP_StaffCredits_BlockwithNames_C* StaffCredits_BlockwithNames_5; // 0x2d0(0x08)
	struct UWBP_StaffCredits_BlockwithNames_C* StaffCredits_BlockwithNames_6; // 0x2d8(0x08)
	struct UWBP_StaffCredits_BlockwithNames_C* StaffCredits_BlockwithNames_7; // 0x2e0(0x08)
	struct UWBP_StaffCredits_BlockwithNames_C* StaffCredits_BlockwithNames_8; // 0x2e8(0x08)
	struct UWBP_StaffCredits_BlockwithNames_C* StaffCredits_BlockwithNames_9; // 0x2f0(0x08)
	struct UWBP_StaffCredits_BlockwithNames_C* StaffCredits_BlockwithNames_10; // 0x2f8(0x08)
	struct UWBP_StaffCredits_BlockwithNames_C* StaffCredits_BlockwithNames_11; // 0x300(0x08)
	struct UWBP_StaffCredits_BlockwithNames_C* StaffCredits_BlockwithNames_12; // 0x308(0x08)
	struct UWBP_StaffCredits_BlockwithNames_C* StaffCredits_BlockwithNames_13; // 0x310(0x08)
	struct UWBP_StaffCredits_BlockwithNames_C* StaffCredits_BlockwithNames_14; // 0x318(0x08)
	struct UWBP_StaffCredits_BlockwithNames_C* StaffCredits_BlockwithNames_15; // 0x320(0x08)
	struct UWBP_StaffCredits_BlockwithNames_C* StaffCredits_BlockwithNames_17; // 0x328(0x08)
	struct UWBP_StaffCredits_BlockwithNames_C* StaffCredits_BlockwithNames_18; // 0x330(0x08)
	struct UWBP_StaffCredits_BlockwithNames_C* StaffCredits_BlockwithNames_19; // 0x338(0x08)
	struct UWBP_StaffCredits_BlockwithNames_C* StaffCredits_BlockwithNames_20; // 0x340(0x08)
	struct UWBP_StaffCredits_BlockwithNames_C* StaffCredits_BlockwithNames_21; // 0x348(0x08)
	struct UWBP_StaffCredits_BlockwithNames_C* StaffCredits_BlockwithNames_22; // 0x350(0x08)
	struct UWBP_StaffCredits_BlockwithNames_C* StaffCredits_BlockwithNames_23; // 0x358(0x08)
	struct UWBP_StaffCredits_BlockwithNames_C* StaffCredits_BlockwithNames_24; // 0x360(0x08)
	struct UWBP_StaffCredits_Header_C* StaffCredits_Header; // 0x368(0x08)
	struct UWBP_StaffCredits_Header_C* StaffCredits_Header_2; // 0x370(0x08)
	struct UWBP_StaffCredits_Header_C* StaffCredits_Header_3; // 0x378(0x08)
	struct UWBP_StaffCredits_Header_C* StaffCredits_Header_4; // 0x380(0x08)
	struct UImage* T_Logo_AudioKinetic; // 0x388(0x08)
	struct UImage* T_Logo_KowloonNights; // 0x390(0x08)
	struct UImage* T_Logo_UnrealEngine; // 0x398(0x08)
	struct UImage* T_Logo_Vivox; // 0x3a0(0x08)
	struct UWBP_RichTextLabel_C* WBP_RichTextLabel; // 0x3a8(0x08)
	struct TMap<struct FString, struct UBP_StaffCredits_DepartmentalTeam_C*> InternalTeam; // 0x3b0(0x50)
	struct TMap<struct FString, struct UBP_StaffCredits_DepartmentalTeam_C*> PartnersTeam; // 0x400(0x50)
	struct FMulticastInlineDelegate OnCloseClicked; // 0x450(0x10)
	struct TMap<struct FString, struct UBP_StaffCredits_Companies_C*> CategoriesToCompanies; // 0x460(0x50)
	struct TMap<struct FString, struct UBP_StaffCredits_Companies_C*> InternalTeamInfo; // 0x4b0(0x50)

	void PopulateTeam(bool IsInternal); // Function WBP_StaffCredits_Screen.WBP_StaffCredits_Screen_C.PopulateTeam // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_StaffCredits_Screen.WBP_StaffCredits_Screen_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__StaffCredits_Screen_BackButton_1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function WBP_StaffCredits_Screen.WBP_StaffCredits_Screen_C.BndEvt__StaffCredits_Screen_BackButton_1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__StaffCredits_Screen_BackButton_1_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function WBP_StaffCredits_Screen.WBP_StaffCredits_Screen_C.BndEvt__StaffCredits_Screen_BackButton_1_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__StaffCredits_Screen_BackButton_1_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature(); // Function WBP_StaffCredits_Screen.WBP_StaffCredits_Screen_C.BndEvt__StaffCredits_Screen_BackButton_1_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void ReadDataFromTable(); // Function WBP_StaffCredits_Screen.WBP_StaffCredits_Screen_C.ReadDataFromTable // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void AddMemberToList(bool IsInternalTeam, struct FDS_StaffCredits_TeamMember Member); // Function WBP_StaffCredits_Screen.WBP_StaffCredits_Screen_C.AddMemberToList // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PopulateExternalTeam(); // Function WBP_StaffCredits_Screen.WBP_StaffCredits_Screen_C.PopulateExternalTeam // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnInitialized(); // Function WBP_StaffCredits_Screen.WBP_StaffCredits_Screen_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_StaffCredits_Screen(int32_t EntryPoint); // Function WBP_StaffCredits_Screen.WBP_StaffCredits_Screen_C.ExecuteUbergraph_WBP_StaffCredits_Screen // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
	void OnCloseClicked__DelegateSignature(); // Function WBP_StaffCredits_Screen.WBP_StaffCredits_Screen_C.OnCloseClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

