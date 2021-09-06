// WidgetBlueprintGeneratedClass WBP_Rigs_WeaponListItem.WBP_Rigs_WeaponListItem_C
// Size: 0x318 (Inherited: 0x260)
struct UWBP_Rigs_WeaponListItem_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWBP_Rigs_ButtonBackground_C* Background; // 0x268(0x08)
	struct UWBP_RichTextLabel_C* CorporationName; // 0x270(0x08)
	struct UImage* Image_RarityColor; // 0x278(0x08)
	struct UWBP_RichTextLabel_C* Label_PrimSec; // 0x280(0x08)
	struct UWBP_RichTextLabel_C* Label_Rarity; // 0x288(0x08)
	struct UWBP_RichTextLabel_C* Label_WeaponName; // 0x290(0x08)
	struct UWBP_Armory3_WeaponSets_C* WBP_Armory3_WeaponSets; // 0x298(0x08)
	struct FMulticastInlineDelegate OnHovered; // 0x2a0(0x10)
	struct FMulticastInlineDelegate OnClicked; // 0x2b0(0x10)
	struct FString ReceiverId; // 0x2c0(0x10)
	struct UHWWeaponParameters* WeaponParameters; // 0x2d0(0x08)
	bool IsSelected; // 0x2d8(0x01)
	char pad_2D9[0x7]; // 0x2d9(0x07)
	struct FText WeaponName; // 0x2e0(0x18)
	bool IsPrimary; // 0x2f8(0x01)
	char pad_2F9[0x7]; // 0x2f9(0x07)
	struct FText FactionName; // 0x300(0x18)

	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_Rigs_WeaponListItem.WBP_Rigs_WeaponListItem_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetData(bool IsSelected, struct FString ReceiverId, struct UHWWeaponParameters* Parameters, bool IsLast, bool IsPrimary); // Function WBP_Rigs_WeaponListItem.WBP_Rigs_WeaponListItem_C.SetData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Update(); // Function WBP_Rigs_WeaponListItem.WBP_Rigs_WeaponListItem_C.Update // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_Rigs_WeaponListItem.WBP_Rigs_WeaponListItem_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function WBP_Rigs_WeaponListItem.WBP_Rigs_WeaponListItem_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Rigs_WeaponListItem(int32_t EntryPoint); // Function WBP_Rigs_WeaponListItem.WBP_Rigs_WeaponListItem_C.ExecuteUbergraph_WBP_Rigs_WeaponListItem // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
	void OnClicked__DelegateSignature(struct FString ReceiverId); // Function WBP_Rigs_WeaponListItem.WBP_Rigs_WeaponListItem_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnHovered__DelegateSignature(bool Hovered, struct UWBP_Rigs_WeaponListItem_C* ListItem); // Function WBP_Rigs_WeaponListItem.WBP_Rigs_WeaponListItem_C.OnHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

