// WidgetBlueprintGeneratedClass WBP_Shop_AssembledWeaponPart.WBP_Shop_AssembledWeaponPart_C
// Size: 0x2d0 (Inherited: 0x260)
struct UWBP_Shop_AssembledWeaponPart_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct USizeBox* Customization; // 0x268(0x08)
	struct UBorder* CustomizationBorder; // 0x270(0x08)
	struct UImage* Image_116; // 0x278(0x08)
	struct UWBP_RichTextLabel_C* Label; // 0x280(0x08)
	struct UWBP_RichTextLabel_C* Owned_Label; // 0x288(0x08)
	struct USizeBox* Part; // 0x290(0x08)
	struct UBorder* RarityBorder; // 0x298(0x08)
	struct UHorizontalBox* Socket_Default; // 0x2a0(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_1; // 0x2a8(0x08)
	enum class EHWWeaponPartType PartType; // 0x2b0(0x01)
	enum class EHWRarity PartRarity; // 0x2b1(0x01)
	char pad_2B2[0x2]; // 0x2b2(0x02)
	struct FName PartId; // 0x2b4(0x08)
	char pad_2BC[0x4]; // 0x2bc(0x04)
	struct FMulticastInlineDelegate OnHovered; // 0x2c0(0x10)

	void Construct(); // Function WBP_Shop_AssembledWeaponPart.WBP_Shop_AssembledWeaponPart_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void Update(); // Function WBP_Shop_AssembledWeaponPart.WBP_Shop_AssembledWeaponPart_C.Update // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_Shop_AssembledWeaponPart.WBP_Shop_AssembledWeaponPart_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function WBP_Shop_AssembledWeaponPart.WBP_Shop_AssembledWeaponPart_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void Destruct(); // Function WBP_Shop_AssembledWeaponPart.WBP_Shop_AssembledWeaponPart_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Shop_AssembledWeaponPart(int32_t EntryPoint); // Function WBP_Shop_AssembledWeaponPart.WBP_Shop_AssembledWeaponPart_C.ExecuteUbergraph_WBP_Shop_AssembledWeaponPart // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
	void OnHovered__DelegateSignature(bool IsHovered, struct UWBP_Shop_AssembledWeaponPart_C* Widget); // Function WBP_Shop_AssembledWeaponPart.WBP_Shop_AssembledWeaponPart_C.OnHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

