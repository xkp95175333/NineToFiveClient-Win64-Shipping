// WidgetBlueprintGeneratedClass WBP_Armory3_WeaponSet_ActivePair.WBP_Armory3_WeaponSet_ActivePair_C
// Size: 0x2c0 (Inherited: 0x260)
struct UWBP_Armory3_WeaponSet_ActivePair_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* PartSetActive_Anim; // 0x268(0x08)
	struct UImage* Background_2; // 0x270(0x08)
	struct UVerticalBox* Benefits; // 0x278(0x08)
	struct UImage* Divider; // 0x280(0x08)
	struct UImage* Image_145; // 0x288(0x08)
	struct UImage* Set_Background; // 0x290(0x08)
	struct UImage* SetIcon; // 0x298(0x08)
	struct UWBP_RichTextLabel_C* SetName; // 0x2a0(0x08)
	struct UWBP_RichTextLabel_C* WBP_RichTextLabel; // 0x2a8(0x08)
	struct UWBP_RichTextLabel_C* WBP_RichTextLabel_2; // 0x2b0(0x08)
	struct UWBP_RichTextLabel_C* WBP_RichTextLabel_3; // 0x2b8(0x08)

	void SetContent(struct FHWWeaponPartSetBonusData SetData); // Function WBP_Armory3_WeaponSet_ActivePair.WBP_Armory3_WeaponSet_ActivePair_C.SetContent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_Armory3_WeaponSet_ActivePair.WBP_Armory3_WeaponSet_ActivePair_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void PlayActiveAnimation(); // Function WBP_Armory3_WeaponSet_ActivePair.WBP_Armory3_WeaponSet_ActivePair_C.PlayActiveAnimation // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Armory3_WeaponSet_ActivePair(int32_t EntryPoint); // Function WBP_Armory3_WeaponSet_ActivePair.WBP_Armory3_WeaponSet_ActivePair_C.ExecuteUbergraph_WBP_Armory3_WeaponSet_ActivePair // (Final|UbergraphFunction) // @ game+0x13c4ca0
};

