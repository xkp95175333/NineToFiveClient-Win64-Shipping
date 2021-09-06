// WidgetBlueprintGeneratedClass WBP_PostMatch2_Compensation.WBP_PostMatch2_Compensation_C
// Size: 0x3a1 (Inherited: 0x260)
struct UWBP_PostMatch2_Compensation_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* MVP_Outro; // 0x268(0x08)
	struct UWidgetAnimation* MVP_Intro; // 0x270(0x08)
	struct UWidgetAnimation* Compensation_Anim; // 0x278(0x08)
	struct UWidgetAnimation* MatchResult_Anim; // 0x280(0x08)
	struct UWBP_RichTextLabel_C* AssistAmount; // 0x288(0x08)
	struct UWBP_RichTextLabel_C* AssistsLabel; // 0x290(0x08)
	struct UImage* Background; // 0x298(0x08)
	struct UImage* Background_3; // 0x2a0(0x08)
	struct UImage* Background_7; // 0x2a8(0x08)
	struct UImage* Bottomline; // 0x2b0(0x08)
	struct UWBP_RichTextLabel_C* CompensationLabel; // 0x2b8(0x08)
	struct UWBP_Animated_Letters_Label_C* CreditsAmount; // 0x2c0(0x08)
	struct UHorizontalBox* CreditsContainer; // 0x2c8(0x08)
	struct USizeBox* CreditsIconFoo; // 0x2d0(0x08)
	struct UWidgetSwitcher* DetailsSwitcher; // 0x2d8(0x08)
	struct UImage* Glow; // 0x2e0(0x08)
	struct UImage* Image; // 0x2e8(0x08)
	struct UImage* Image_2; // 0x2f0(0x08)
	struct UImage* Image_45; // 0x2f8(0x08)
	struct UImage* Image_260; // 0x300(0x08)
	struct UWBP_RichTextLabel_C* KillAmount; // 0x308(0x08)
	struct UWBP_RichTextLabel_C* KillsLabel; // 0x310(0x08)
	struct UWBP_Animated_Letters_Label_C* MaterialsAmount; // 0x318(0x08)
	struct UHorizontalBox* MaterialsContainer; // 0x320(0x08)
	struct UImage* MaterialsImage; // 0x328(0x08)
	struct UImage* MessageBottom; // 0x330(0x08)
	struct UWidgetSwitcher* MessageSwitcher; // 0x338(0x08)
	struct UVerticalBox* MVP; // 0x340(0x08)
	struct UWBP_RichTextLabel_C* MVPLabel; // 0x348(0x08)
	struct UImage* TextShadow; // 0x350(0x08)
	struct UWBP_Animated_Letters_Label_C* TitleLabel; // 0x358(0x08)
	struct UImage* TopDetail_2; // 0x360(0x08)
	struct UImage* Topline; // 0x368(0x08)
	struct UWBP_Animated_Letters_Label_C* XpAmount; // 0x370(0x08)
	struct UHorizontalBox* XPContainer; // 0x378(0x08)
	struct FMulticastInlineDelegate OnProceed; // 0x380(0x10)
	int32_t CreditsIcon; // 0x390(0x04)
	bool IsMVP; // 0x394(0x01)
	char pad_395[0x3]; // 0x395(0x03)
	int32_t CreditsGained; // 0x398(0x04)
	int32_t XpGained; // 0x39c(0x04)
	bool Skipped; // 0x3a0(0x01)

	void Initialize(bool Success, int32_t Xp, int32_t Credits, int32_t Materials, enum class EHWFaction Faction, int32_t Kills, int32_t Assists, bool MVP); // Function WBP_PostMatch2_Compensation.WBP_PostMatch2_Compensation_C.Initialize // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnGainCredits_In(); // Function WBP_PostMatch2_Compensation.WBP_PostMatch2_Compensation_C.OnGainCredits_In // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnGainCredits_Out(); // Function WBP_PostMatch2_Compensation.WBP_PostMatch2_Compensation_C.OnGainCredits_Out // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_PostMatch2_Compensation.WBP_PostMatch2_Compensation_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void EnterScreen(); // Function WBP_PostMatch2_Compensation.WBP_PostMatch2_Compensation_C.EnterScreen // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PlayMVPAnimation(bool Intro); // Function WBP_PostMatch2_Compensation.WBP_PostMatch2_Compensation_C.PlayMVPAnimation // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PostMatchSkipped(); // Function WBP_PostMatch2_Compensation.WBP_PostMatch2_Compensation_C.PostMatchSkipped // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_PostMatch2_Compensation(int32_t EntryPoint); // Function WBP_PostMatch2_Compensation.WBP_PostMatch2_Compensation_C.ExecuteUbergraph_WBP_PostMatch2_Compensation // (Final|UbergraphFunction) // @ game+0x13c4ca0
	void OnProceed__DelegateSignature(); // Function WBP_PostMatch2_Compensation.WBP_PostMatch2_Compensation_C.OnProceed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

