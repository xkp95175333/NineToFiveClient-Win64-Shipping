// WidgetBlueprintGeneratedClass WBP_CircularProgressBar.WBP_CircularProgressBar_C
// Size: 0x2e0 (Inherited: 0x268)
struct UWBP_CircularProgressBar_C : UHWWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UImage* RadialImage; // 0x270(0x08)
	struct UMaterialInstanceDynamic* MaterialInstance; // 0x278(0x08)
	float Progress; // 0x280(0x04)
	char pad_284[0x4]; // 0x284(0x04)
	struct UMaterial* BaseMaterial; // 0x288(0x08)
	struct FLinearColor ProgressForegroundColor; // 0x290(0x10)
	struct FLinearColor ProgressBackgroundColor; // 0x2a0(0x10)
	struct FText Labeltext; // 0x2b0(0x18)
	struct UBP_UIStyle_Label_C* LabelStyle; // 0x2c8(0x08)
	struct UTexture* RadialTexture; // 0x2d0(0x08)
	float Min; // 0x2d8(0x04)
	float Max; // 0x2dc(0x04)

	void PreConstruct(bool IsDesignTime); // Function WBP_CircularProgressBar.WBP_CircularProgressBar_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_CircularProgressBar.WBP_CircularProgressBar_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void SetProgress(float Progress); // Function WBP_CircularProgressBar.WBP_CircularProgressBar_C.SetProgress // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_CircularProgressBar(int32_t EntryPoint); // Function WBP_CircularProgressBar.WBP_CircularProgressBar_C.ExecuteUbergraph_WBP_CircularProgressBar // (Final|UbergraphFunction) // @ game+0x13c4ca0
};

