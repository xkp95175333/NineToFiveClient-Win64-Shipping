// WidgetBlueprintGeneratedClass WBP_Armory3_WeaponSets.WBP_Armory3_WeaponSets_C
// Size: 0x284 (Inherited: 0x260)
struct UWBP_Armory3_WeaponSets_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UHorizontalBox* SetBox; // 0x268(0x08)
	struct UWBP_Armory3_PartSetIcon_C* WBP_Armory3_PartSetIcon; // 0x270(0x08)
	struct UWBP_Armory3_PartSetIcon_C* WBP_Armory3_PartSetIcon_2; // 0x278(0x08)
	float SetsScale; // 0x280(0x04)

	void SetContent(struct FString WeaponItemId); // Function WBP_Armory3_WeaponSets.WBP_Armory3_WeaponSets_C.SetContent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PreConstruct(bool IsDesignTime); // Function WBP_Armory3_WeaponSets.WBP_Armory3_WeaponSets_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Armory3_WeaponSets(int32_t EntryPoint); // Function WBP_Armory3_WeaponSets.WBP_Armory3_WeaponSets_C.ExecuteUbergraph_WBP_Armory3_WeaponSets // (Final|UbergraphFunction) // @ game+0x13c4ca0
};

