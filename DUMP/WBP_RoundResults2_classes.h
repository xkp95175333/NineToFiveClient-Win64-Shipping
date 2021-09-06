// WidgetBlueprintGeneratedClass WBP_RoundResults2.WBP_RoundResults2_C
// Size: 0x460 (Inherited: 0x260)
struct UWBP_RoundResults2_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* Bottomline; // 0x268(0x08)
	struct UWBP_RichTextLabel_C* CompCredits; // 0x270(0x08)
	struct UHorizontalBox* Compensation; // 0x278(0x08)
	struct UVerticalBox* CompensationBox; // 0x280(0x08)
	struct UWBP_RichTextLabel_C* CompMultiplier; // 0x288(0x08)
	struct UWBP_RichTextLabel_C* CompXp; // 0x290(0x08)
	struct UWidgetSwitcher* ContentSwitcher; // 0x298(0x08)
	struct UWBP_RichTextLabel_C* EndOfShift; // 0x2a0(0x08)
	struct UImage* Image; // 0x2a8(0x08)
	struct UImage* Image_2; // 0x2b0(0x08)
	struct UImage* Image_260; // 0x2b8(0x08)
	struct UImage* LeftFader; // 0x2c0(0x08)
	struct UImage* Lines; // 0x2c8(0x08)
	struct UWBP_Button_C* MatchResultsButton; // 0x2d0(0x08)
	struct UHorizontalBox* Old_Missions; // 0x2d8(0x08)
	struct UVerticalBox* Old_Phases; // 0x2e0(0x08)
	struct UVerticalBox* Old_Weapons; // 0x2e8(0x08)
	struct UVerticalBox* PostRoundOverview; // 0x2f0(0x08)
	struct UWBP_SkipTimer_C* SkipTimerRoundResults; // 0x2f8(0x08)
	struct UVerticalBox* StatContainer; // 0x300(0x08)
	struct UWidgetSwitcher* TabSwitcher; // 0x308(0x08)
	struct UImage* TeamLogo; // 0x310(0x08)
	struct UWBP_RichTextLabel_C* Text_2; // 0x318(0x08)
	struct UImage* TextureOverlay; // 0x320(0x08)
	struct UImage* TopFader; // 0x328(0x08)
	struct UImage* Topline; // 0x330(0x08)
	struct UWBP_NavigationBar_C* WBP_NavigationBar; // 0x338(0x08)
	struct UWBP_RoundResults2_Missions_C* WBP_RoundResults2_Missions; // 0x340(0x08)
	struct UWBP_RoundResults2_Missions_Rewards_Reward_C* WBP_RoundResults2_Missions_Rewards_Reward; // 0x348(0x08)
	struct UWBP_RoundResults2_Missions_Rewards_Reward_C* WBP_RoundResults2_Missions_Rewards_Reward_2; // 0x350(0x08)
	struct UWBP_RoundResults2_Missions_Rewards_Reward_C* WBP_RoundResults2_Missions_Rewards_Reward_3; // 0x358(0x08)
	struct UWBP_RoundResults2_Missions_Rewards_Title_C* WBP_RoundResults2_Missions_Rewards_Title; // 0x360(0x08)
	struct UWBP_RoundResults2_Missions_Title_C* WBP_RoundResults2_Missions_Title; // 0x368(0x08)
	struct UWBP_RoundResults2_Phases_C* WBP_RoundResults2_Phases; // 0x370(0x08)
	struct UWBP_RoundResults2_PhasesEnd_C* WBP_RoundResults2_PhasesEnd; // 0x378(0x08)
	struct UWBP_RoundResults2_Stats_C* WBP_RoundResults2_Stats; // 0x380(0x08)
	struct UWBP_RoundResults2_Stats_C* WBP_RoundResults2_Stats_140; // 0x388(0x08)
	struct UWBP_RoundResults2_Stats_C* WBP_RoundResults2_Stats_281; // 0x390(0x08)
	struct UWBP_RoundResults2_Weapons_C* WBP_RoundResults2_Weapons; // 0x398(0x08)
	struct UWBP_RoundResults2_Weapons_C* WBP_RoundResults2_Weapons_2; // 0x3a0(0x08)
	struct UWBP_RoundResults2_Weapons_C* WBP_RoundResults2_Weapons_3; // 0x3a8(0x08)
	struct UWBP_RoundResults2_Weapons_Title_C* WBP_RoundResults2_Weapons_Title; // 0x3b0(0x08)
	struct UWBP_RoundResults_Details_C* WBP_RoundResults_Details; // 0x3b8(0x08)
	struct TMap<struct FName, struct UWidget*> TabMapping; // 0x3c0(0x50)
	struct UWBP_RoundResults2_Phases_C* PhaseWidgets; // 0x410(0x08)
	bool ShowMatchResults; // 0x418(0x01)
	char pad_419[0x7]; // 0x419(0x07)
	struct FMulticastInlineDelegate OnClosed; // 0x420(0x10)
	struct FMulticastInlineDelegate OnProceed; // 0x430(0x10)
	struct UHWMatchResults* MatchResults; // 0x440(0x08)
	struct TArray<struct FHWReward> CurrentRewards; // 0x448(0x10)
	struct FVector2D CharacterTagOffset; // 0x458(0x08)

	void NewFunction_2(); // Function WBP_RoundResults2.WBP_RoundResults2_C.NewFunction_2 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void InitializeTag(struct UWBP_RoundResults2_PlayerTag_C* Tag, bool IsMe, struct AHWPlayerState* State); // Function WBP_RoundResults2.WBP_RoundResults2_C.InitializeTag // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetPlayerStatesForMyTeam(struct AHWPlayerState* Me, struct AHWPlayerState* Teammate1, struct AHWPlayerState* Teammate2); // Function WBP_RoundResults2.WBP_RoundResults2_C.GetPlayerStatesForMyTeam // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void Get Player Info(struct FString PlayerId, int32_t PlayerNumber, bool IsMyTeam, bool IsMe); // Function WBP_RoundResults2.WBP_RoundResults2_C.Get Player Info // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetMainMenuCharactersView(struct TScriptInterface<None> Renderer); // Function WBP_RoundResults2.WBP_RoundResults2_C.GetMainMenuCharactersView // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void SetSelectedTeam(int32_t TeamIndex); // Function WBP_RoundResults2.WBP_RoundResults2_C.SetSelectedTeam // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetRoundResultsRoundIndex(int32_t Round); // Function WBP_RoundResults2.WBP_RoundResults2_C.GetRoundResultsRoundIndex // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetRoundResultsRound(int32_t Round); // Function WBP_RoundResults2.WBP_RoundResults2_C.GetRoundResultsRound // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetRewardsOnRound(struct FHWTeamRoundRewards Rewards, int32_t Credits, int32_t XXP, float Multiplier); // Function WBP_RoundResults2.WBP_RoundResults2_C.GetRewardsOnRound // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void NewFunction_1(); // Function WBP_RoundResults2.WBP_RoundResults2_C.NewFunction_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Get Rewards for Match(struct TArray<struct FHWReward> Rewards, int32_t ResultXp, int32_t ResultCredits, enum class EHWRewardType ResultBonusType, int32_t ResultBonusAmount); // Function WBP_RoundResults2.WBP_RoundResults2_C.Get Rewards for Match // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void SetupTeamStats(bool Winner, int32_t Team, struct TArray<struct FFPlayerStats> Players, struct FHWTeamRoundRewards TeamRewards); // Function WBP_RoundResults2.WBP_RoundResults2_C.SetupTeamStats // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetupTabs(int32_t NumberOfRounds, int32_t CurrentRound, int32_t MyTeam, struct TArray<struct FHWRoundResultInfo> Rounds, struct TArray<struct FFPlayerStats> Players); // Function WBP_RoundResults2.WBP_RoundResults2_C.SetupTabs // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetupForMatchResults(); // Function WBP_RoundResults2.WBP_RoundResults2_C.SetupForMatchResults // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetupForRoundResults(); // Function WBP_RoundResults2.WBP_RoundResults2_C.SetupForRoundResults // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetupStats(int32_t Round, struct TArray<struct FHWRoundResultInfo> RoundResults, int32_t MyTeam, struct TArray<struct FFPlayerStats> Players); // Function WBP_RoundResults2.WBP_RoundResults2_C.SetupStats // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetPhase(int32_t CurrentIndex, int32_t CurrentRound, enum class EHW_RoundResultPhase NewParam); // Function WBP_RoundResults2.WBP_RoundResults2_C.GetPhase // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void SetupPhasesTab(int32_t NumberOfRounds, int32_t CurrentRound, int32_t MyTeam, struct TArray<struct FHWRoundResultInfo> Rounds); // Function WBP_RoundResults2.WBP_RoundResults2_C.SetupPhasesTab // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void TabClicked(struct FName ID); // Function WBP_RoundResults2.WBP_RoundResults2_C.TabClicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PreConstruct(bool IsDesignTime); // Function WBP_RoundResults2.WBP_RoundResults2_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_RoundResults2.WBP_RoundResults2_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__MatchResultsButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_RoundResults2.WBP_RoundResults2_C.BndEvt__MatchResultsButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__SkipRoundResults_K2Node_ComponentBoundEvent_1_OnSkipped__DelegateSignature(); // Function WBP_RoundResults2.WBP_RoundResults2_C.BndEvt__SkipRoundResults_K2Node_ComponentBoundEvent_1_OnSkipped__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void EnterScreen(); // Function WBP_RoundResults2.WBP_RoundResults2_C.EnterScreen // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__SkipTimerRoundResults_K2Node_ComponentBoundEvent_2_OnExpired__DelegateSignature(); // Function WBP_RoundResults2.WBP_RoundResults2_C.BndEvt__SkipTimerRoundResults_K2Node_ComponentBoundEvent_2_OnExpired__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_NavigationBar_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(struct FName ID); // Function WBP_RoundResults2.WBP_RoundResults2_C.BndEvt__WBP_NavigationBar_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_RoundResults2(int32_t EntryPoint); // Function WBP_RoundResults2.WBP_RoundResults2_C.ExecuteUbergraph_WBP_RoundResults2 // (Final|UbergraphFunction) // @ game+0x13c4ca0
	void OnProceed__DelegateSignature(bool Skipped); // Function WBP_RoundResults2.WBP_RoundResults2_C.OnProceed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnClosed__DelegateSignature(); // Function WBP_RoundResults2.WBP_RoundResults2_C.OnClosed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

