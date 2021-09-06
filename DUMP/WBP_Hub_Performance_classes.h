// WidgetBlueprintGeneratedClass WBP_Hub_Performance.WBP_Hub_Performance_C
// Size: 0x2f8 (Inherited: 0x260)
struct UWBP_Hub_Performance_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* ShowContent; // 0x268(0x08)
	struct UImage* BG_Image; // 0x270(0x08)
	struct UOverlay* ContentOverlay; // 0x278(0x08)
	struct UImage* Divider; // 0x280(0x08)
	struct UImage* Footer_Divider; // 0x288(0x08)
	struct UImage* FooterLogo; // 0x290(0x08)
	struct UImage* HeaderLogo_Icon; // 0x298(0x08)
	struct UImage* Horizontal_Divider; // 0x2a0(0x08)
	struct UWBP_Hub_PerformanceAttribute_C* MatchesPlayed; // 0x2a8(0x08)
	struct UWBP_Hub_PerformanceAttribute_C* MVP; // 0x2b0(0x08)
	struct UWBP_RichTextLabel_C* PlayerNickname; // 0x2b8(0x08)
	struct UWBP_Hub_PerformanceAttribute_C* ProductivityLevel; // 0x2c0(0x08)
	struct UWBP_RichTextLabel_C* Sub-header; // 0x2c8(0x08)
	struct UWBP_Hub_PerformanceAttribute_C* SuccessRate; // 0x2d0(0x08)
	struct UWBP_Box_C* WBP_Box; // 0x2d8(0x08)
	struct UWBP_RichTextLabel_C* WBP_RichTextLabel; // 0x2e0(0x08)
	struct UWBP_RichTextLabel_C* WBP_RichTextLabel_3; // 0x2e8(0x08)
	struct UObject* NewVar_1; // 0x2f0(0x08)

	void SetContent(); // Function WBP_Hub_Performance.WBP_Hub_Performance_C.SetContent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetPerformanceAttributes(); // Function WBP_Hub_Performance.WBP_Hub_Performance_C.SetPerformanceAttributes // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PreConstruct(bool IsDesignTime); // Function WBP_Hub_Performance.WBP_Hub_Performance_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_Hub_Performance.WBP_Hub_Performance_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Hub_Performance(int32_t EntryPoint); // Function WBP_Hub_Performance.WBP_Hub_Performance_C.ExecuteUbergraph_WBP_Hub_Performance // (Final|UbergraphFunction) // @ game+0x13c4ca0
};

