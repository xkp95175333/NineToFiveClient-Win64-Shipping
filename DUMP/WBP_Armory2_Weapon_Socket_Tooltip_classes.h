// WidgetBlueprintGeneratedClass WBP_Armory2_Weapon_Socket_Tooltip.WBP_Armory2_Weapon_Socket_Tooltip_C
// Size: 0x2f8 (Inherited: 0x260)
struct UWBP_Armory2_Weapon_Socket_Tooltip_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWBP_RichTextLabel_C* AffectedParametersLabel; // 0x268(0x08)
	struct UVerticalBox* Content; // 0x270(0x08)
	struct UHorizontalBox* Current_Part; // 0x278(0x08)
	struct UWBP_RichTextLabel_C* CurrentPartName; // 0x280(0x08)
	struct UWBP_RichTextLabel_C* Description_Disabled; // 0x288(0x08)
	struct UWBP_RichTextLabel_C* Description_Enabled; // 0x290(0x08)
	struct UImage* SocketPart_Icon; // 0x298(0x08)
	struct UWidgetSwitcher* Switcher; // 0x2a0(0x08)
	struct UWBP_RichTextLabel_C* TitleName; // 0x2a8(0x08)
	struct UWBP_Box_C* WBP_Box; // 0x2b0(0x08)
	struct UWBP_RichTextLabel_C* WBP_RichTextLabel_118; // 0x2b8(0x08)
	bool SocketEnabled; // 0x2c0(0x01)
	enum class EHWWeaponPartType PartType; // 0x2c1(0x01)
	char pad_2C2[0x6]; // 0x2c2(0x06)
	struct FText InstalledPart; // 0x2c8(0x18)
	enum class EHWRarity RequiredRarity; // 0x2e0(0x01)
	char pad_2E1[0x7]; // 0x2e1(0x07)
	struct TArray<enum class EHWCraftingParameterGroup> AffectedParameters; // 0x2e8(0x10)

	void GetAffectedParametersDescription(struct FString Desc); // Function WBP_Armory2_Weapon_Socket_Tooltip.WBP_Armory2_Weapon_Socket_Tooltip_C.GetAffectedParametersDescription // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void Construct(); // Function WBP_Armory2_Weapon_Socket_Tooltip.WBP_Armory2_Weapon_Socket_Tooltip_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Armory2_Weapon_Socket_Tooltip(int32_t EntryPoint); // Function WBP_Armory2_Weapon_Socket_Tooltip.WBP_Armory2_Weapon_Socket_Tooltip_C.ExecuteUbergraph_WBP_Armory2_Weapon_Socket_Tooltip // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

