// WidgetBlueprintGeneratedClass WBP_Armory2_Weapon_Card.WBP_Armory2_Weapon_Card_C
// Size: 0x368 (Inherited: 0x260)
struct UWBP_Armory2_Weapon_Card_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UCanvasPanel* AvailableSlot; // 0x268(0x08)
	struct UCanvasPanel* Blueprint; // 0x270(0x08)
	struct UCanvasPanel* BlueprintNotReceived; // 0x278(0x08)
	struct USizeBox* CraftAvailable; // 0x280(0x08)
	struct UImage* DarkenLayer; // 0x288(0x08)
	struct UBorder* Hover; // 0x290(0x08)
	struct UImage* Image_2; // 0x298(0x08)
	struct UImage* Image_515; // 0x2a0(0x08)
	struct UImage* Image_767; // 0x2a8(0x08)
	struct UImage* Image_Blueprint; // 0x2b0(0x08)
	struct UImage* Image_BlueprintNotReceived; // 0x2b8(0x08)
	struct UImage* Image_RarityBlueprint; // 0x2c0(0x08)
	struct UImage* Image_RarityWeapon; // 0x2c8(0x08)
	struct UImage* Image_Select; // 0x2d0(0x08)
	struct UImage* Image_UpgradePoints; // 0x2d8(0x08)
	struct UImage* Image_Weapon; // 0x2e0(0x08)
	struct UCanvasPanel* LockedSlot; // 0x2e8(0x08)
	struct UCanvasPanel* RegularItem; // 0x2f0(0x08)
	struct UWidgetSwitcher* TypeSwitcher; // 0x2f8(0x08)
	struct UWBP_RichTextLabel_C* UpgradePointAmount; // 0x300(0x08)
	struct UHorizontalBox* UpgradePoints; // 0x308(0x08)
	struct UWBP_Box_C* WBP_Box; // 0x310(0x08)
	struct UWBP_Box_C* WBP_Box_2; // 0x318(0x08)
	struct UWBP_Box_C* WBP_Box_3; // 0x320(0x08)
	struct UWBP_Box_C* WBP_Box_212; // 0x328(0x08)
	struct UWBP_Box_C* WBP_Box_408; // 0x330(0x08)
	struct UWBP_RichTextLabel_C* WBP_RichTextLabel; // 0x338(0x08)
	struct UWBP_RichTextLabel_C* WBP_RichTextLabel_3; // 0x340(0x08)
	struct UWBP_RichTextLabel_C* WBP_RichTextLabel_4; // 0x348(0x08)
	struct UWBP_RichTextLabel_C* WeaponName; // 0x350(0x08)
	struct UHWArmoryWeaponItem* WeaponItem; // 0x358(0x08)
	struct UHWArmoryItem* BlueprintArmoryItem; // 0x360(0x08)

	void LoadWeaponImage(struct FName ReceiverPartId, struct UTexture2D* Texture); // Function WBP_Armory2_Weapon_Card.WBP_Armory2_Weapon_Card_C.LoadWeaponImage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BP_OnEntryReleased(); // Function WBP_Armory2_Weapon_Card.WBP_Armory2_Weapon_Card_C.BP_OnEntryReleased // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function WBP_Armory2_Weapon_Card.WBP_Armory2_Weapon_Card_C.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function WBP_Armory2_Weapon_Card.WBP_Armory2_Weapon_Card_C.BP_OnItemSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_Armory2_Weapon_Card.WBP_Armory2_Weapon_Card_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void InitializeWithItem(struct UHWArmoryWeaponItem* Item); // Function WBP_Armory2_Weapon_Card.WBP_Armory2_Weapon_Card_C.InitializeWithItem // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Update(); // Function WBP_Armory2_Weapon_Card.WBP_Armory2_Weapon_Card_C.Update // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnListItemObjectSet(struct UObject* ListItemObject); // Function WBP_Armory2_Weapon_Card.WBP_Armory2_Weapon_Card_C.OnListItemObjectSet // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void OnItemChanged(struct UHWArmoryWeaponItem* Item); // Function WBP_Armory2_Weapon_Card.WBP_Armory2_Weapon_Card_C.OnItemChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_Armory2_Weapon_Card.WBP_Armory2_Weapon_Card_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function WBP_Armory2_Weapon_Card.WBP_Armory2_Weapon_Card_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void InitializeWithBlueprint(struct UHWArmoryWeaponItem* WeaponItem, struct UHWArmoryItem* BlueprintArmoryItem); // Function WBP_Armory2_Weapon_Card.WBP_Armory2_Weapon_Card_C.InitializeWithBlueprint // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Armory2_Weapon_Card(int32_t EntryPoint); // Function WBP_Armory2_Weapon_Card.WBP_Armory2_Weapon_Card_C.ExecuteUbergraph_WBP_Armory2_Weapon_Card // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

