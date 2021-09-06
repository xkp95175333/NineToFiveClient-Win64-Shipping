// BlueprintGeneratedClass BP_Armory3_WeaponPart_ListEntry.BP_Armory3_WeaponPart_ListEntry_C
// Size: 0x58 (Inherited: 0x28)
struct UBP_Armory3_WeaponPart_ListEntry_C : UObject {
	struct UHWArmoryWeaponPartItem* Data; // 0x28(0x08)
	struct FMulticastInlineDelegate PartDismantled; // 0x30(0x10)
	bool ShowUninstall; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct FString WeaponItemId; // 0x48(0x10)

	void PartDismantled__DelegateSignature(struct FString ItemId); // Function BP_Armory3_WeaponPart_ListEntry.BP_Armory3_WeaponPart_ListEntry_C.PartDismantled__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

