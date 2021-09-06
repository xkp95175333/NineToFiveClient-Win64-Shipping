// WidgetBlueprintGeneratedClass WBP_Armory3_WeaponStat_Min.WBP_Armory3_WeaponStat_Min_C
// Size: 0x2ec (Inherited: 0x260)
struct UWBP_Armory3_WeaponStat_Min_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UHorizontalBox* ImageAtLeft; // 0x268(0x08)
	struct UHorizontalBox* ImageAtRight; // 0x270(0x08)
	struct UCanvasPanel* ImageLeft; // 0x278(0x08)
	struct UCanvasPanel* ImageRight; // 0x280(0x08)
	struct UWBP_RichTextLabel_C* NumberText; // 0x288(0x08)
	struct UWBP_RichTextLabel_C* NumberText_2; // 0x290(0x08)
	struct UImage* Separator; // 0x298(0x08)
	struct UImage* Separator_2; // 0x2a0(0x08)
	struct UImage* StatImage; // 0x2a8(0x08)
	struct UImage* StatImage_2; // 0x2b0(0x08)
	struct UWBP_RichTextLabel_C* StatName; // 0x2b8(0x08)
	struct UWBP_RichTextLabel_C* StatName_2; // 0x2c0(0x08)
	struct UVerticalBox* VerticalBox; // 0x2c8(0x08)
	struct UVerticalBox* VerticalBox_20; // 0x2d0(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_1; // 0x2d8(0x08)
	bool IsImageAtLeft; // 0x2e0(0x01)
	enum class EHWCraftingParameterGroup CraftingParameter; // 0x2e1(0x01)
	char pad_2E2[0x2]; // 0x2e2(0x02)
	int32_t CurrentValue; // 0x2e4(0x04)
	int32_t PreviousValue; // 0x2e8(0x04)

	void GetTextWidget(struct UWBP_RichTextLabel_C* TextWidget); // Function WBP_Armory3_WeaponStat_Min.WBP_Armory3_WeaponStat_Min_C.GetTextWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void SetTextColor(bool IsComparison); // Function WBP_Armory3_WeaponStat_Min.WBP_Armory3_WeaponStat_Min_C.SetTextColor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetValue(float Value, enum class BPE_UIColors TextColor); // Function WBP_Armory3_WeaponStat_Min.WBP_Armory3_WeaponStat_Min_C.SetValue // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetContent(); // Function WBP_Armory3_WeaponStat_Min.WBP_Armory3_WeaponStat_Min_C.SetContent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PreConstruct(bool IsDesignTime); // Function WBP_Armory3_WeaponStat_Min.WBP_Armory3_WeaponStat_Min_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_Armory3_WeaponStat_Min.WBP_Armory3_WeaponStat_Min_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Armory3_WeaponStat_Min(int32_t EntryPoint); // Function WBP_Armory3_WeaponStat_Min.WBP_Armory3_WeaponStat_Min_C.ExecuteUbergraph_WBP_Armory3_WeaponStat_Min // (Final|UbergraphFunction) // @ game+0x13c4ca0
};

