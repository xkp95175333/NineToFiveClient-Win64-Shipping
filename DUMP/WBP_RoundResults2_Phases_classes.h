// WidgetBlueprintGeneratedClass WBP_RoundResults2_Phases.WBP_RoundResults2_Phases_C
// Size: 0x3b9 (Inherited: 0x260)
struct UWBP_RoundResults2_Phases_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UBorder* BoxBackground; // 0x268(0x08)
	struct UWBP_Animated_Letters_Label_C* CreditsAmount; // 0x270(0x08)
	struct UImage* CreditsImage; // 0x278(0x08)
	struct UWBP_RichTextLabel_C* CurentRoundObjectiveTwo; // 0x280(0x08)
	struct UWBP_RichTextLabel_C* CurrenPhaseNumber; // 0x288(0x08)
	struct UWBP_RichTextLabel_C* CurrenRoundObjectiveOne; // 0x290(0x08)
	struct UWBP_RichTextLabel_C* CurrentPhaseTitle; // 0x298(0x08)
	struct UVerticalBox* Default; // 0x2a0(0x08)
	struct UWBP_RichTextLabel_C* FuturePhaseNumber; // 0x2a8(0x08)
	struct UWBP_RichTextLabel_C* FuturePhaseTitle; // 0x2b0(0x08)
	struct UVerticalBox* GetReady; // 0x2b8(0x08)
	struct UHorizontalBox* GetReadySubtitle_2; // 0x2c0(0x08)
	struct UImage* Image; // 0x2c8(0x08)
	struct UImage* Image_2; // 0x2d0(0x08)
	struct UImage* Image_3; // 0x2d8(0x08)
	struct UImage* Image_5; // 0x2e0(0x08)
	struct UWBP_RichTextLabel_C* MultiplierAmount; // 0x2e8(0x08)
	struct UVerticalBox* Past; // 0x2f0(0x08)
	struct UWBP_RichTextLabel_C* PastPhaseNumber; // 0x2f8(0x08)
	struct UWBP_RichTextLabel_C* PastPhaseTitle; // 0x300(0x08)
	struct UBorder* ProgressLine; // 0x308(0x08)
	struct UWBP_RichTextLabel_C* RoundResultSuccess; // 0x310(0x08)
	struct UWidgetSwitcher* SubtitleSwitcher; // 0x318(0x08)
	struct UBorder* TitleBorder; // 0x320(0x08)
	struct UWBP_RichTextLabel_C* WBP_RichTextLabel_6; // 0x328(0x08)
	struct UWBP_Animated_Letters_Label_C* XpAmount; // 0x330(0x08)
	struct UImage* XPImage; // 0x338(0x08)
	struct USizeBox* XpRewards; // 0x340(0x08)
	struct TMap<enum class EHW_RoundResultPhase, struct UWidget*> PhaseMapping; // 0x348(0x50)
	struct FLinearColor ColorWin; // 0x398(0x10)
	struct FLinearColor ColorLose; // 0x3a8(0x10)
	bool ShowMatchResults; // 0x3b8(0x01)

	struct FString GetLocalPlayerID(); // Function WBP_RoundResults2_Phases.WBP_RoundResults2_Phases_C.GetLocalPlayerID // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetPlayerRewards(struct FHWRoundResultInfo RoundResults, struct FString PlayerId, int32_t Team, int32_t Credits, int32_t Xp, float Multiplier, enum class EHWFaction Corp); // Function WBP_RoundResults2_Phases.WBP_RoundResults2_Phases_C.GetPlayerRewards // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void SetRewards(int32_t Xp, int32_t Credits, float Multiplier, enum class EHWFaction Corp); // Function WBP_RoundResults2_Phases.WBP_RoundResults2_Phases_C.SetRewards // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	struct FText GetRoundNumberAsText(int32_t Index); // Function WBP_RoundResults2_Phases.WBP_RoundResults2_Phases_C.GetRoundNumberAsText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void SetupFuturePhase(int32_t RoundNumber); // Function WBP_RoundResults2_Phases.WBP_RoundResults2_Phases_C.SetupFuturePhase // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetupCurrentPhase(int32_t RoundNumber); // Function WBP_RoundResults2_Phases.WBP_RoundResults2_Phases_C.SetupCurrentPhase // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetupPastPhase(int32_t RoundNumber, int32_t MyTeam, struct TArray<struct FHWRoundResultInfo> RoundResults); // Function WBP_RoundResults2_Phases.WBP_RoundResults2_Phases_C.SetupPastPhase // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetupPhase(int32_t RoundNumber, int32_t CurrentRound, int32_t MyTeam, struct TArray<struct FHWRoundResultInfo> RoundResults); // Function WBP_RoundResults2_Phases.WBP_RoundResults2_Phases_C.SetupPhase // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PreConstruct(bool IsDesignTime); // Function WBP_RoundResults2_Phases.WBP_RoundResults2_Phases_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_RoundResults2_Phases(int32_t EntryPoint); // Function WBP_RoundResults2_Phases.WBP_RoundResults2_Phases_C.ExecuteUbergraph_WBP_RoundResults2_Phases // (Final|UbergraphFunction) // @ game+0x13c4ca0
};

