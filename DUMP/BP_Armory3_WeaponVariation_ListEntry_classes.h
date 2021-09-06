// BlueprintGeneratedClass BP_Armory3_WeaponVariation_ListEntry.BP_Armory3_WeaponVariation_ListEntry_C
// Size: 0xd0 (Inherited: 0x28)
struct UBP_Armory3_WeaponVariation_ListEntry_C : UObject {
	struct UHWArmoryWeaponVariation* VariationData; // 0x28(0x08)
	struct FMulticastInlineDelegate WeaponDismantled; // 0x30(0x10)
	bool IsShopLink; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct FHWShopItem ItemShopData; // 0x48(0x78)
	struct FMulticastInlineDelegate SelectionChanged; // 0xc0(0x10)

	void SelectionChanged__DelegateSignature(bool Selected); // Function BP_Armory3_WeaponVariation_ListEntry.BP_Armory3_WeaponVariation_ListEntry_C.SelectionChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void WeaponDismantled__DelegateSignature(struct FName PartId); // Function BP_Armory3_WeaponVariation_ListEntry.BP_Armory3_WeaponVariation_ListEntry_C.WeaponDismantled__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

