// WidgetBlueprintGeneratedClass WBP_Rigs_CosmeticArmorItem.WBP_Rigs_CosmeticArmorItem_C
// Size: 0x328 (Inherited: 0x260)
struct UWBP_Rigs_CosmeticArmorItem_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWBP_Rigs_ButtonBackground_C* Background; // 0x268(0x08)
	struct UImage* Image_Icon; // 0x270(0x08)
	struct UWBP_RichTextLabel_C* Label_Name; // 0x278(0x08)
	struct UWBP_RichTextLabel_C* Label_UnlockInfo; // 0x280(0x08)
	struct UImage* LockIcon; // 0x288(0x08)
	struct FMulticastInlineDelegate OnClicked; // 0x290(0x10)
	int32_t SlotIndex; // 0x2a0(0x04)
	bool IsLast; // 0x2a4(0x01)
	char pad_2A5[0x3]; // 0x2a5(0x03)
	struct FHWArmorData ArmorData; // 0x2a8(0x68)
	bool IsLocked; // 0x310(0x01)
	bool IsSelected; // 0x311(0x01)
	enum class EHWArmorType ArmorType; // 0x312(0x01)
	char pad_313[0x5]; // 0x313(0x05)
	struct FMulticastInlineDelegate OnHovered; // 0x318(0x10)

	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_Rigs_CosmeticArmorItem.WBP_Rigs_CosmeticArmorItem_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PreConstruct(bool IsDesignTime); // Function WBP_Rigs_CosmeticArmorItem.WBP_Rigs_CosmeticArmorItem_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_Rigs_CosmeticArmorItem.WBP_Rigs_CosmeticArmorItem_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void SetData(struct FHWArmorData ArmorData, enum class EHWArmorType ArmorType, bool Selected, bool Locked); // Function WBP_Rigs_CosmeticArmorItem.WBP_Rigs_CosmeticArmorItem_C.SetData // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_Rigs_CosmeticArmorItem.WBP_Rigs_CosmeticArmorItem_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function WBP_Rigs_CosmeticArmorItem.WBP_Rigs_CosmeticArmorItem_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Rigs_CosmeticArmorItem(int32_t EntryPoint); // Function WBP_Rigs_CosmeticArmorItem.WBP_Rigs_CosmeticArmorItem_C.ExecuteUbergraph_WBP_Rigs_CosmeticArmorItem // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
	void OnHovered__DelegateSignature(struct FName ItemId, enum class EHWArmorType Type, bool IsHovered); // Function WBP_Rigs_CosmeticArmorItem.WBP_Rigs_CosmeticArmorItem_C.OnHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnClicked__DelegateSignature(struct FName ItemId, enum class EHWArmorType Type); // Function WBP_Rigs_CosmeticArmorItem.WBP_Rigs_CosmeticArmorItem_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

