// WidgetBlueprintGeneratedClass WBP_GrenadeIndicator.WBP_GrenadeIndicator_C
// Size: 0x2b8 (Inherited: 0x260)
struct UWBP_GrenadeIndicator_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* Loop; // 0x268(0x08)
	struct UWidgetAnimation* Reveal; // 0x270(0x08)
	struct UImage* ArrowIcon; // 0x278(0x08)
	struct UBorder* ArrowRotation; // 0x280(0x08)
	struct UBorder* Circle; // 0x288(0x08)
	struct UBorder* Circle_2; // 0x290(0x08)
	struct UImage* GrenadeImage; // 0x298(0x08)
	struct USizeBox* Sizer; // 0x2a0(0x08)
	struct FVector Location; // 0x2a8(0x0c)
	float IndicatorRadius; // 0x2b4(0x04)

	void Construct(); // Function WBP_GrenadeIndicator.WBP_GrenadeIndicator_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ShowIndicator(); // Function WBP_GrenadeIndicator.WBP_GrenadeIndicator_C.ShowIndicator // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void LoopAnimation(); // Function WBP_GrenadeIndicator.WBP_GrenadeIndicator_C.LoopAnimation // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetColor(struct FLinearColor Color); // Function WBP_GrenadeIndicator.WBP_GrenadeIndicator_C.SetColor // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetContent(struct FLinearColor LinearColorStructure, struct FVector GrenadeLocation); // Function WBP_GrenadeIndicator.WBP_GrenadeIndicator_C.SetContent // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetIndicatorPositionAndArrowRotation(); // Function WBP_GrenadeIndicator.WBP_GrenadeIndicator_C.SetIndicatorPositionAndArrowRotation // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_GrenadeIndicator(int32_t EntryPoint); // Function WBP_GrenadeIndicator.WBP_GrenadeIndicator_C.ExecuteUbergraph_WBP_GrenadeIndicator // (Final|UbergraphFunction) // @ game+0x13c4ca0
};

