// WidgetBlueprintGeneratedClass WBP_RoundOutro.WBP_RoundOutro_C
// Size: 0x3e0 (Inherited: 0x268)
struct UWBP_RoundOutro_C : UHWWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWidgetAnimation* RoundEnd; // 0x270(0x08)
	struct UImage* Background; // 0x278(0x08)
	struct UImage* BackgroundColor; // 0x280(0x08)
	struct UImage* BackgroundImage; // 0x288(0x08)
	struct UBorder* BGColor; // 0x290(0x08)
	struct UImage* BottomDetail; // 0x298(0x08)
	struct UWBP_Animated_Letters_Label_C* BottomDetailText; // 0x2a0(0x08)
	struct UImage* Bottomline; // 0x2a8(0x08)
	struct UImage* Filter; // 0x2b0(0x08)
	struct UImage* GlowImage; // 0x2b8(0x08)
	struct UImage* Grid; // 0x2c0(0x08)
	struct UImage* LeftDetail; // 0x2c8(0x08)
	struct UWBP_Animated_Letters_Label_C* MainTitle; // 0x2d0(0x08)
	struct UImage* MessageBottom; // 0x2d8(0x08)
	struct UImage* RightDetail; // 0x2e0(0x08)
	struct UWBP_Animated_Letters_Label_C* RoundDescription; // 0x2e8(0x08)
	struct UWBP_Animated_Letters_Label_C* RoundEndReason; // 0x2f0(0x08)
	struct UImage* TextShadow; // 0x2f8(0x08)
	struct UImage* TopDetail; // 0x300(0x08)
	struct UImage* TopDetail_2; // 0x308(0x08)
	struct UWBP_Animated_Letters_Label_C* TopDetailText1; // 0x310(0x08)
	struct UWBP_Animated_Letters_Label_C* TopDetailText2; // 0x318(0x08)
	struct UImage* Topline; // 0x320(0x08)
	struct FSlateColor MainTextColor; // 0x328(0x28)
	struct FLinearColor MainTextBgColorWon; // 0x350(0x10)
	struct FLinearColor MainTextBgColorLost; // 0x360(0x10)
	struct TMap<struct FString, struct UTexture2D*> BackgroundImages; // 0x370(0x50)
	struct FLinearColor BgColorWon; // 0x3c0(0x10)
	struct FLinearColor BgColorLost; // 0x3d0(0x10)

	void Test(); // Function WBP_RoundOutro.WBP_RoundOutro_C.Test // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetTexts(int32_t Round, bool Victory, struct FText RoundEndDescription, struct FText FlowName); // Function WBP_RoundOutro.WBP_RoundOutro_C.SetTexts // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Init(); // Function WBP_RoundOutro.WBP_RoundOutro_C.Init // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_RoundOutro.WBP_RoundOutro_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_RoundOutro(int32_t EntryPoint); // Function WBP_RoundOutro.WBP_RoundOutro_C.ExecuteUbergraph_WBP_RoundOutro // (Final|UbergraphFunction) // @ game+0x13c4ca0
};

