// WidgetBlueprintGeneratedClass WBP_RoundResults_Details.WBP_RoundResults_Details_C
// Size: 0x378 (Inherited: 0x260)
struct UWBP_RoundResults_Details_C : UUserWidget {
	struct UWBP_RichTextLabel_C* BoosterActive; // 0x260(0x08)
	struct UWBP_RichTextLabel_C* BoosterLabel; // 0x268(0x08)
	struct UWidgetSwitcher* BoosterState; // 0x270(0x08)
	struct UWBP_RichTextLabel_C* CompCredits; // 0x278(0x08)
	struct UWBP_RichTextLabel_C* CompCredits_2; // 0x280(0x08)
	struct UWBP_RichTextLabel_C* CompCredits_3; // 0x288(0x08)
	struct UWBP_RichTextLabel_C* CompCredits_4; // 0x290(0x08)
	struct UWBP_RichTextLabel_C* CompXp; // 0x298(0x08)
	struct UWBP_RichTextLabel_C* CompXp_2; // 0x2a0(0x08)
	struct UWBP_RichTextLabel_C* CompXp_3; // 0x2a8(0x08)
	struct UWBP_RichTextLabel_C* CreditsTitleLabel; // 0x2b0(0x08)
	struct UWBP_RichTextLabel_C* CreditsTitleLabel_2; // 0x2b8(0x08)
	struct UImage* Image; // 0x2c0(0x08)
	struct UImage* Image_2; // 0x2c8(0x08)
	struct UImage* Image_3; // 0x2d0(0x08)
	struct UImage* Image_4; // 0x2d8(0x08)
	struct UImage* Image_5; // 0x2e0(0x08)
	struct UImage* Image_6; // 0x2e8(0x08)
	struct UImage* Image_7; // 0x2f0(0x08)
	struct UImage* Image_170; // 0x2f8(0x08)
	struct UImage* Image_260; // 0x300(0x08)
	struct UWBP_RichTextLabel_C* KATitleLabel; // 0x308(0x08)
	struct UWBP_RichTextLabel_C* MultiplierTitleLabel; // 0x310(0x08)
	struct UWBP_RichTextLabel_C* MultiplierTitleLabel_2; // 0x318(0x08)
	struct UWBP_RoundResults_Details_Phase_C* Phase1; // 0x320(0x08)
	struct UWBP_RoundResults_Details_Phase_C* Phase2; // 0x328(0x08)
	struct UWBP_RoundResults_Details_Phase_C* Phase3; // 0x330(0x08)
	struct UWBP_RichTextLabel_C* PhaseTitleLabel; // 0x338(0x08)
	struct UWBP_RichTextLabel_C* PhaseTitleLabel_2; // 0x340(0x08)
	struct UWBP_RichTextLabel_C* TotalLabel; // 0x348(0x08)
	struct UWBP_Button_C* WBP_Button; // 0x350(0x08)
	struct UWBP_Wallet_TimerShield_C* WBP_Wallet_TimerShield; // 0x358(0x08)
	struct UWBP_RichTextLabel_C* WeaponTitleLabel; // 0x360(0x08)
	struct UWBP_RichTextLabel_C* XpTitleLabel; // 0x368(0x08)
	struct UWBP_RichTextLabel_C* XpTitleLabel_2; // 0x370(0x08)

	void FindPublicProfile(struct FString PlayerId, struct FHWRoundPublicProfiles RoundProfiles, bool Found, struct FHWPlayerPublicProfile PublicProfile); // Function WBP_RoundResults_Details.WBP_RoundResults_Details_C.FindPublicProfile // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetPhaseWidgetsArray(struct TArray<struct UWBP_RoundResults_Details_Phase_C*> Array); // Function WBP_RoundResults_Details.WBP_RoundResults_Details_C.GetPhaseWidgetsArray // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetPhaseProfiles(struct TArray<struct FHWPlayerPublicProfile> Array, struct FString PlayerId, struct TArray<struct FHWPlayerPublicProfile> PhaseProfiles); // Function WBP_RoundResults_Details.WBP_RoundResults_Details_C.GetPhaseProfiles // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Update(struct UHWMatchResults* MatchResult, struct TArray<struct FHWReward> Rewards); // Function WBP_RoundResults_Details.WBP_RoundResults_Details_C.Update // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

