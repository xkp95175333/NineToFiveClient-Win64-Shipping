// WidgetBlueprintGeneratedClass WBP_Armory2_Weapon_Model_Card.WBP_Armory2_Weapon_Model_Card_C
// Size: 0x379 (Inherited: 0x268)
struct UWBP_Armory2_Weapon_Model_Card_C : UHWWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UBorder* BgImage; // 0x270(0x08)
	struct UCanvasPanel* Canvas; // 0x278(0x08)
	struct UWBP_RichTextLabel_C* CodesCount; // 0x280(0x08)
	struct UWBP_RichTextLabel_C* CraftingLabel; // 0x288(0x08)
	struct UHorizontalBox* FooterCodes; // 0x290(0x08)
	struct UBorder* Header; // 0x298(0x08)
	struct UBorder* HoverIndicator; // 0x2a0(0x08)
	struct UImage* Image; // 0x2a8(0x08)
	struct UImage* Image_2; // 0x2b0(0x08)
	struct UImage* Image_3; // 0x2b8(0x08)
	struct UImage* Image_473; // 0x2c0(0x08)
	struct UImage* Image_LineBottom; // 0x2c8(0x08)
	struct UImage* Image_LineTop; // 0x2d0(0x08)
	struct UImage* Image_Lock; // 0x2d8(0x08)
	struct UImage* ItemImage; // 0x2e0(0x08)
	struct UWBP_RichTextLabel_C* ItemName; // 0x2e8(0x08)
	struct UImage* Line; // 0x2f0(0x08)
	struct UImage* Line_2; // 0x2f8(0x08)
	struct UBorder* NewLabel; // 0x300(0x08)
	struct UBorder* NotAvailableforUpgrade; // 0x308(0x08)
	struct UBorder* NotavailableIndicator; // 0x310(0x08)
	struct UBorder* NotCraftedIndicator; // 0x318(0x08)
	struct UBorder* RarityIndicator; // 0x320(0x08)
	struct UOverlay* RarityUpgradeFooter; // 0x328(0x08)
	struct UWBP_RichTextLabel_C* RarityUpgradeLabel; // 0x330(0x08)
	struct UProgressBar* RarityUpgradeProgress; // 0x338(0x08)
	struct UWBP_RichTextLabel_C* WBP_RichTextLabel; // 0x340(0x08)
	struct UWBP_RichTextLabel_C* WBP_RichTextLabel_3; // 0x348(0x08)
	struct UWBP_RichTextLabel_C* WBP_RichTextLabel_181; // 0x350(0x08)
	struct UImage* WeaponType; // 0x358(0x08)
	enum class EHWArmoryItemSelectionType SelectionType; // 0x360(0x01)
	char pad_361[0x7]; // 0x361(0x07)
	struct UHWArmoryItem* CurrentItem; // 0x368(0x08)
	struct UBP_Armory2_DragDropContext_C* DragDropContext; // 0x370(0x08)
	bool CanBeHovered; // 0x378(0x01)

	void OnDragCompleted(struct UDragDropOperation* Operation); // Function WBP_Armory2_Weapon_Model_Card.WBP_Armory2_Weapon_Model_Card_C.OnDragCompleted // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnDragCanceled(struct UDragDropOperation* Operation); // Function WBP_Armory2_Weapon_Model_Card.WBP_Armory2_Weapon_Model_Card_C.OnDragCanceled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnDragDetected(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function WBP_Armory2_Weapon_Model_Card.WBP_Armory2_Weapon_Model_Card_C.OnDragDetected // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_Armory2_Weapon_Model_Card.WBP_Armory2_Weapon_Model_Card_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetWeaponTypes(struct TArray<enum class EHWWeaponType> Types); // Function WBP_Armory2_Weapon_Model_Card.WBP_Armory2_Weapon_Model_Card_C.SetWeaponTypes // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetImage(); // Function WBP_Armory2_Weapon_Model_Card.WBP_Armory2_Weapon_Model_Card_C.SetImage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateContents(struct UHWArmoryItem* Item); // Function WBP_Armory2_Weapon_Model_Card.WBP_Armory2_Weapon_Model_Card_C.UpdateContents // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function WBP_Armory2_Weapon_Model_Card.WBP_Armory2_Weapon_Model_Card_C.BP_OnItemSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function WBP_Armory2_Weapon_Model_Card.WBP_Armory2_Weapon_Model_Card_C.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_Armory2_Weapon_Model_Card.WBP_Armory2_Weapon_Model_Card_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function WBP_Armory2_Weapon_Model_Card.WBP_Armory2_Weapon_Model_Card_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void BP_OnEntryReleased(); // Function WBP_Armory2_Weapon_Model_Card.WBP_Armory2_Weapon_Model_Card_C.BP_OnEntryReleased // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void SetDefaultVisibility(); // Function WBP_Armory2_Weapon_Model_Card.WBP_Armory2_Weapon_Model_Card_C.SetDefaultVisibility // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void InitializeWithItem(struct UHWArmoryItem* Item); // Function WBP_Armory2_Weapon_Model_Card.WBP_Armory2_Weapon_Model_Card_C.InitializeWithItem // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnListItemObjectSet(struct UObject* ListItemObject); // Function WBP_Armory2_Weapon_Model_Card.WBP_Armory2_Weapon_Model_Card_C.OnListItemObjectSet // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void OnDragCancelled(struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function WBP_Armory2_Weapon_Model_Card.WBP_Armory2_Weapon_Model_Card_C.OnDragCancelled // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Armory2_Weapon_Model_Card(int32_t EntryPoint); // Function WBP_Armory2_Weapon_Model_Card.WBP_Armory2_Weapon_Model_Card_C.ExecuteUbergraph_WBP_Armory2_Weapon_Model_Card // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

