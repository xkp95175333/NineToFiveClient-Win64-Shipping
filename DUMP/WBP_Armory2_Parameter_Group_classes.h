// WidgetBlueprintGeneratedClass WBP_Armory2_Parameter_Group.WBP_Armory2_Parameter_Group_C
// Size: 0x2bb (Inherited: 0x260)
struct UWBP_Armory2_Parameter_Group_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UVerticalBox* DynamicBars; // 0x268(0x08)
	struct UImage* RarityIndicator; // 0x270(0x08)
	struct UWBP_Armory2_Title_Bar_C* TitleBar; // 0x278(0x08)
	struct UWBP_Armory2_Parameter_Bar_C* WBP_Armory2_Parameter_Bar; // 0x280(0x08)
	struct UWBP_Armory2_Parameter_Bar_C* WBP_Armory2_Parameter_Bar_2; // 0x288(0x08)
	struct UWBP_Armory2_Parameter_Bar_C* WBP_Armory2_Parameter_Bar_3; // 0x290(0x08)
	struct UWBP_Box_C* WBP_Box; // 0x298(0x08)
	enum class EHWCraftingParameterGroup ParameterGroup; // 0x2a0(0x01)
	char pad_2A1[0x7]; // 0x2a1(0x07)
	struct TArray<struct UHWWeaponParameter*> Parameters; // 0x2a8(0x10)
	bool HasUpgradeButtons; // 0x2b8(0x01)
	bool HasBackground; // 0x2b9(0x01)
	bool HasRarityIndicator; // 0x2ba(0x01)

	void GetParameterBarWidgets(struct TArray<struct UWBP_Armory2_Parameter_Bar_C*> Widgets); // Function WBP_Armory2_Parameter_Group.WBP_Armory2_Parameter_Group_C.GetParameterBarWidgets // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void PreConstruct(bool IsDesignTime); // Function WBP_Armory2_Parameter_Group.WBP_Armory2_Parameter_Group_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void Initialize(enum class EHWCraftingParameterGroup ParamGroup, enum class EHWRarity ParamRarity, float Progress, struct TArray<struct UHWWeaponParameter*> Params, bool Comparison, bool Epic); // Function WBP_Armory2_Parameter_Group.WBP_Armory2_Parameter_Group_C.Initialize // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetHighlighted(bool IsHighlighted); // Function WBP_Armory2_Parameter_Group.WBP_Armory2_Parameter_Group_C.SetHighlighted // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Armory2_Parameter_Group(int32_t EntryPoint); // Function WBP_Armory2_Parameter_Group.WBP_Armory2_Parameter_Group_C.ExecuteUbergraph_WBP_Armory2_Parameter_Group // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

