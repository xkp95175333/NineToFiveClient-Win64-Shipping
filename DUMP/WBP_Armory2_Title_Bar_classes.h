// WidgetBlueprintGeneratedClass WBP_Armory2_Title_Bar.WBP_Armory2_Title_Bar_C
// Size: 0x290 (Inherited: 0x260)
struct UWBP_Armory2_Title_Bar_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* Image; // 0x268(0x08)
	struct UWBP_RichTextLabel_C* Label; // 0x270(0x08)
	struct UWBP_RichTextLabel_C* PercentageLabel; // 0x278(0x08)
	struct UProgressBar* ProgressBar; // 0x280(0x08)
	enum class EHWCraftingParameterGroup ParameterGroup; // 0x288(0x01)
	char pad_289[0x3]; // 0x289(0x03)
	float Progress; // 0x28c(0x04)

	void PreConstruct(bool IsDesignTime); // Function WBP_Armory2_Title_Bar.WBP_Armory2_Title_Bar_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateWidget(); // Function WBP_Armory2_Title_Bar.WBP_Armory2_Title_Bar_C.UpdateWidget // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetProgress(float Progress); // Function WBP_Armory2_Title_Bar.WBP_Armory2_Title_Bar_C.SetProgress // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetParameterGroup(enum class EHWCraftingParameterGroup ParamGroup); // Function WBP_Armory2_Title_Bar.WBP_Armory2_Title_Bar_C.SetParameterGroup // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Initialize(enum class EHWCraftingParameterGroup ParamGroup, float Progress); // Function WBP_Armory2_Title_Bar.WBP_Armory2_Title_Bar_C.Initialize // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Armory2_Title_Bar(int32_t EntryPoint); // Function WBP_Armory2_Title_Bar.WBP_Armory2_Title_Bar_C.ExecuteUbergraph_WBP_Armory2_Title_Bar // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

