// WidgetBlueprintGeneratedClass WBP_Rigs_ItemListItem.WBP_Rigs_ItemListItem_C
// Size: 0x389 (Inherited: 0x260)
struct UWBP_Rigs_ItemListItem_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWBP_RichTextLabel_C* AlreadyEquipped; // 0x268(0x08)
	struct UWBP_Rigs_ButtonBackground_C* Background; // 0x270(0x08)
	struct UHorizontalBox* HB_ItemLocked; // 0x278(0x08)
	struct UImage* Image_205; // 0x280(0x08)
	struct UImage* Image_Icon; // 0x288(0x08)
	struct UWBP_RichTextLabel_C* Label_Count; // 0x290(0x08)
	struct UWBP_RichTextLabel_C* Label_Name; // 0x298(0x08)
	struct UWBP_RichTextLabel_C* Label_Name2; // 0x2a0(0x08)
	struct UWBP_RichTextLabel_C* Label_UnlockInfo; // 0x2a8(0x08)
	struct UWidgetSwitcher* SwitcherItemData; // 0x2b0(0x08)
	struct FMulticastInlineDelegate OnClicked; // 0x2b8(0x10)
	struct FName ItemId; // 0x2c8(0x08)
	struct FHWItemData ItemData; // 0x2d0(0x78)
	int32_t SlotIdx; // 0x348(0x04)
	char pad_34C[0x4]; // 0x34c(0x04)
	struct FMulticastInlineDelegate OnHover; // 0x350(0x10)
	bool IsUnlocked; // 0x360(0x01)
	char pad_361[0x3]; // 0x361(0x03)
	int32_t ItemUnlockLevel; // 0x364(0x04)
	enum class EHWFaction ItemUnlockFaction; // 0x368(0x01)
	char pad_369[0x3]; // 0x369(0x03)
	int32_t AlreadyInSlotIndex; // 0x36c(0x04)
	struct FText OldOtherText; // 0x370(0x18)
	enum class ESlateVisibility OldOtherVisibility; // 0x388(0x01)

	void ShowHoverInfo(bool IsHovered); // Function WBP_Rigs_ItemListItem.WBP_Rigs_ItemListItem_C.ShowHoverInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetUnlockStatus(struct FName ItemId); // Function WBP_Rigs_ItemListItem.WBP_Rigs_ItemListItem_C.SetUnlockStatus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Update(); // Function WBP_Rigs_ItemListItem.WBP_Rigs_ItemListItem_C.Update // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetData(struct FHWItemData ItemData, int32_t SlotIdx, bool Selected, bool IsLast, int32_t AlreadyInSlot); // Function WBP_Rigs_ItemListItem.WBP_Rigs_ItemListItem_C.SetData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_Rigs_ItemListItem.WBP_Rigs_ItemListItem_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_Rigs_ItemListItem.WBP_Rigs_ItemListItem_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function WBP_Rigs_ItemListItem.WBP_Rigs_ItemListItem_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Rigs_ItemListItem(int32_t EntryPoint); // Function WBP_Rigs_ItemListItem.WBP_Rigs_ItemListItem_C.ExecuteUbergraph_WBP_Rigs_ItemListItem // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
	void OnHover__DelegateSignature(bool IsHover, struct FName ItemId); // Function WBP_Rigs_ItemListItem.WBP_Rigs_ItemListItem_C.OnHover__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnClicked__DelegateSignature(struct FName ItemId, int32_t SlotIdx); // Function WBP_Rigs_ItemListItem.WBP_Rigs_ItemListItem_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

