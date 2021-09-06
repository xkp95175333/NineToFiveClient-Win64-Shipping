// WidgetBlueprintGeneratedClass WBP_Armory3_WeaponPart_NameTag.WBP_Armory3_WeaponPart_NameTag_C
// Size: 0x278 (Inherited: 0x260)
struct UWBP_Armory3_WeaponPart_NameTag_C : UUserWidget {
	struct UWBP_RichTextLabel_C* PartName; // 0x260(0x08)
	struct UWBP_RichTextLabel_C* SetName; // 0x268(0x08)
	struct UWBP_RichTextLabel_C* WeaponName; // 0x270(0x08)

	void Set Content(struct FName PartId, struct FName SetId, struct FString WeaponID, struct FString CosmeticId, bool IsInstalled, bool IsWeaponAcquired); // Function WBP_Armory3_WeaponPart_NameTag.WBP_Armory3_WeaponPart_NameTag_C.Set Content // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

