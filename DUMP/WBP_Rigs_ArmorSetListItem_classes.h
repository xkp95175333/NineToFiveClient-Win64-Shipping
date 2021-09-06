// WidgetBlueprintGeneratedClass WBP_Rigs_ArmorSetListItem.WBP_Rigs_ArmorSetListItem_C
// Size: 0x2f9 (Inherited: 0x260)
struct UWBP_Rigs_ArmorSetListItem_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWBP_Rigs_ButtonBackground_C* Background; // 0x268(0x08)
	struct UHorizontalBox* HB_Locked; // 0x270(0x08)
	struct UImage* Image_205; // 0x278(0x08)
	struct UWBP_RichTextLabel_C* Label_Name; // 0x280(0x08)
	struct UWBP_RichTextLabel_C* Label_Name_Locked; // 0x288(0x08)
	struct UWBP_RichTextLabel_C* Label_UnlockInfo; // 0x290(0x08)
	struct UWidgetSwitcher* Switcher; // 0x298(0x08)
	struct FMulticastInlineDelegate OnClicked; // 0x2a0(0x10)
	struct FName ArmorSetId; // 0x2b0(0x08)
	struct FHWArmorSetBaseData ArmorSetData; // 0x2b8(0x28)
	struct FMulticastInlineDelegate OnHover; // 0x2e0(0x10)
	bool CanBeSelected; // 0x2f0(0x01)
	char pad_2F1[0x3]; // 0x2f1(0x03)
	int32_t UnlockLevel; // 0x2f4(0x04)
	enum class EHWFaction UnlockFaction; // 0x2f8(0x01)

	void SetHover(bool Hover); // Function WBP_Rigs_ArmorSetListItem.WBP_Rigs_ArmorSetListItem_C.SetHover // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Update(); // Function WBP_Rigs_ArmorSetListItem.WBP_Rigs_ArmorSetListItem_C.Update // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetData(struct FHWArmorSetBaseData ArmorSetData, bool Unlocked, bool Selected, bool IsLast); // Function WBP_Rigs_ArmorSetListItem.WBP_Rigs_ArmorSetListItem_C.SetData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_Rigs_ArmorSetListItem.WBP_Rigs_ArmorSetListItem_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PreConstruct(bool IsDesignTime); // Function WBP_Rigs_ArmorSetListItem.WBP_Rigs_ArmorSetListItem_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_Rigs_ArmorSetListItem.WBP_Rigs_ArmorSetListItem_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function WBP_Rigs_ArmorSetListItem.WBP_Rigs_ArmorSetListItem_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Rigs_ArmorSetListItem(int32_t EntryPoint); // Function WBP_Rigs_ArmorSetListItem.WBP_Rigs_ArmorSetListItem_C.ExecuteUbergraph_WBP_Rigs_ArmorSetListItem // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
	void OnHover__DelegateSignature(struct FName ArmorSetId, bool IsHover); // Function WBP_Rigs_ArmorSetListItem.WBP_Rigs_ArmorSetListItem_C.OnHover__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnClicked__DelegateSignature(struct FName ArmorSetId); // Function WBP_Rigs_ArmorSetListItem.WBP_Rigs_ArmorSetListItem_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

