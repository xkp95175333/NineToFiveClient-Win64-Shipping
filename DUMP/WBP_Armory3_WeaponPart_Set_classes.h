// WidgetBlueprintGeneratedClass WBP_Armory3_WeaponPart_Set.WBP_Armory3_WeaponPart_Set_C
// Size: 0x2a0 (Inherited: 0x260)
struct UWBP_Armory3_WeaponPart_Set_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWBP_RichTextLabel_C* DeltaValue; // 0x268(0x08)
	struct UVerticalBox* DescriptionsBox; // 0x270(0x08)
	struct UWBP_Armory3_WeaponPart_Set_Stats_C* FullSetStatus; // 0x278(0x08)
	struct UWBP_Armory3_WeaponPart_Set_Stats_C* PartialStatus; // 0x280(0x08)
	struct UImage* SetImage; // 0x288(0x08)
	struct UWBP_RichTextLabel_C* SetName; // 0x290(0x08)
	struct UWBP_RichTextLabel_C* WeaponStats; // 0x298(0x08)

	void SetContent(struct FName SetId, struct FString WeaponID, enum class EHWWeaponPartType PartType, struct FName WeaponConfigId, bool IsComparison, bool IsPositiveDelta, struct FName AssembledWeaponId); // Function WBP_Armory3_WeaponPart_Set.WBP_Armory3_WeaponPart_Set_C.SetContent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_Armory3_WeaponPart_Set.WBP_Armory3_WeaponPart_Set_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Armory3_WeaponPart_Set(int32_t EntryPoint); // Function WBP_Armory3_WeaponPart_Set.WBP_Armory3_WeaponPart_Set_C.ExecuteUbergraph_WBP_Armory3_WeaponPart_Set // (Final|UbergraphFunction) // @ game+0x13c4ca0
};

