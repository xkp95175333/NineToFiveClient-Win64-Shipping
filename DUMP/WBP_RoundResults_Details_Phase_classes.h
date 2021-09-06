// WidgetBlueprintGeneratedClass WBP_RoundResults_Details_Phase.WBP_RoundResults_Details_Phase_C
// Size: 0x2e4 (Inherited: 0x260)
struct UWBP_RoundResults_Details_Phase_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWBP_RichTextLabel_C* Assists; // 0x268(0x08)
	struct UBorder* BlockColor; // 0x270(0x08)
	struct UWBP_RichTextLabel_C* CompCredits; // 0x278(0x08)
	struct UWBP_RichTextLabel_C* CompXp; // 0x280(0x08)
	struct UImage* Image; // 0x288(0x08)
	struct UImage* Image_260; // 0x290(0x08)
	struct UWBP_RichTextLabel_C* Kills; // 0x298(0x08)
	struct UImage* Lines; // 0x2a0(0x08)
	struct UWBP_RichTextLabel_C* MultiplierAmount; // 0x2a8(0x08)
	struct UWBP_RichTextLabel_C* PhaseName; // 0x2b0(0x08)
	struct UWBP_RichTextLabel_C* PhaseNumber; // 0x2b8(0x08)
	struct UWBP_RichTextLabel_C* PhaseOutcome; // 0x2c0(0x08)
	struct UWBP_RichTextLabel_C* PrimaryWeapon; // 0x2c8(0x08)
	struct UWBP_RichTextLabel_C* SecondaryWeapon; // 0x2d0(0x08)
	struct UWBP_RichTextLabel_C* Slash; // 0x2d8(0x08)
	int32_t Phase; // 0x2e0(0x04)

	void A(int32_t RoundKills, int32_t TotalKills, int32_t RoundAssists, int32_t TotalAssists); // Function WBP_RoundResults_Details_Phase.WBP_RoundResults_Details_Phase_C.A // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetCredits(int32_t Credits); // Function WBP_RoundResults_Details_Phase.WBP_RoundResults_Details_Phase_C.SetCredits // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetMultiplier(float Value); // Function WBP_RoundResults_Details_Phase.WBP_RoundResults_Details_Phase_C.SetMultiplier // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetXP(int32_t Value); // Function WBP_RoundResults_Details_Phase.WBP_RoundResults_Details_Phase_C.SetXP // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PreConstruct(bool IsDesignTime); // Function WBP_RoundResults_Details_Phase.WBP_RoundResults_Details_Phase_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void SetWeapons(struct FText Primary, struct FText Secondary); // Function WBP_RoundResults_Details_Phase.WBP_RoundResults_Details_Phase_C.SetWeapons // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetPhase(bool Won); // Function WBP_RoundResults_Details_Phase.WBP_RoundResults_Details_Phase_C.SetPhase // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_RoundResults_Details_Phase(int32_t EntryPoint); // Function WBP_RoundResults_Details_Phase.WBP_RoundResults_Details_Phase_C.ExecuteUbergraph_WBP_RoundResults_Details_Phase // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

