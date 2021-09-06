// WidgetBlueprintGeneratedClass WBP_Armory3_WeaponPartSlot.WBP_Armory3_WeaponPartSlot_C
// Size: 0x388 (Inherited: 0x260)
struct UWBP_Armory3_WeaponPartSlot_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* FullSet_Activated; // 0x268(0x08)
	struct UWidgetAnimation* Set_Activated; // 0x270(0x08)
	struct UWidgetAnimation* OnHover; // 0x278(0x08)
	struct UBorder* Cosmetic; // 0x280(0x08)
	struct UBorder* Default; // 0x288(0x08)
	struct UHorizontalBox* HorizontalBox_1; // 0x290(0x08)
	struct UImage* Icon; // 0x298(0x08)
	struct UImage* Inner; // 0x2a0(0x08)
	struct UImage* Inner_2; // 0x2a8(0x08)
	struct UImage* Inner_3; // 0x2b0(0x08)
	struct UImage* Inner_4; // 0x2b8(0x08)
	struct UImage* Inner_5; // 0x2c0(0x08)
	struct UImage* Inner_6; // 0x2c8(0x08)
	struct UBorder* NoParts; // 0x2d0(0x08)
	struct USizeBox* OverlayGlow; // 0x2d8(0x08)
	struct USizeBox* OverlayRing; // 0x2e0(0x08)
	struct UWBP_RichTextLabel_C* PartName; // 0x2e8(0x08)
	struct UBorder* Set; // 0x2f0(0x08)
	struct UBorder* SetFull; // 0x2f8(0x08)
	struct USizeBox* SetIcon; // 0x300(0x08)
	struct UOverlay* SetIconParent; // 0x308(0x08)
	struct UBorder* SetNotActive; // 0x310(0x08)
	struct UWidgetSwitcher* SlotType; // 0x318(0x08)
	struct UImage* Texture; // 0x320(0x08)
	struct UImage* Texture_2; // 0x328(0x08)
	struct FMulticastInlineDelegate OnSlotHovered; // 0x330(0x10)
	struct FMulticastInlineDelegate OnSlotClicked; // 0x340(0x10)
	struct FBP_WeaponPartSlotData SlotData; // 0x350(0x38)

	struct UWidget* GetToolTipWidget_1(); // Function WBP_Armory3_WeaponPartSlot.WBP_Armory3_WeaponPartSlot_C.GetToolTipWidget_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetSlotTypeWidget(struct UWidget* Widget); // Function WBP_Armory3_WeaponPartSlot.WBP_Armory3_WeaponPartSlot_C.GetSlotTypeWidget // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_Armory3_WeaponPartSlot.WBP_Armory3_WeaponPartSlot_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PreConstruct(bool IsDesignTime); // Function WBP_Armory3_WeaponPartSlot.WBP_Armory3_WeaponPartSlot_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_Armory3_WeaponPartSlot.WBP_Armory3_WeaponPartSlot_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_Armory3_WeaponPartSlot.WBP_Armory3_WeaponPartSlot_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function WBP_Armory3_WeaponPartSlot.WBP_Armory3_WeaponPartSlot_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void PlayActiveAnimation(); // Function WBP_Armory3_WeaponPartSlot.WBP_Armory3_WeaponPartSlot_C.PlayActiveAnimation // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Armory3_WeaponPartSlot(int32_t EntryPoint); // Function WBP_Armory3_WeaponPartSlot.WBP_Armory3_WeaponPartSlot_C.ExecuteUbergraph_WBP_Armory3_WeaponPartSlot // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
	void OnSlotClicked__DelegateSignature(enum class EHWWeaponPartType Type, struct UWBP_Armory3_WeaponPartSlot_C* Slot); // Function WBP_Armory3_WeaponPartSlot.WBP_Armory3_WeaponPartSlot_C.OnSlotClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnSlotHovered__DelegateSignature(enum class EHWWeaponPartType Type, bool IsHovered); // Function WBP_Armory3_WeaponPartSlot.WBP_Armory3_WeaponPartSlot_C.OnSlotHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

