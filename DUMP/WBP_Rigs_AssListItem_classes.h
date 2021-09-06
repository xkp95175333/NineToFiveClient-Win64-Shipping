// WidgetBlueprintGeneratedClass WBP_Rigs_AssListItem.WBP_Rigs_AssListItem_C
// Size: 0x319 (Inherited: 0x260)
struct UWBP_Rigs_AssListItem_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWBP_Rigs_ButtonBackground_C* Background; // 0x268(0x08)
	struct UImage* Image_Icon; // 0x270(0x08)
	struct UWBP_RichTextLabel_C* Label_Name; // 0x278(0x08)
	struct UWBP_RichTextLabel_C* Label_UninstallInfo; // 0x280(0x08)
	struct UWBP_RichTextLabel_C* Label_UnlockInfo; // 0x288(0x08)
	struct UImage* LockIcon; // 0x290(0x08)
	struct FMulticastInlineDelegate OnClicked; // 0x298(0x10)
	struct FHWArmorFeatureData AssData; // 0x2a8(0x58)
	bool CanBeSelected; // 0x300(0x01)
	char pad_301[0x3]; // 0x301(0x03)
	int32_t UnlockLevel; // 0x304(0x04)
	struct FMulticastInlineDelegate OnHover; // 0x308(0x10)
	enum class EHWFaction UnlockFaction; // 0x318(0x01)

	void ShowHoverInfo(bool IsHovered); // Function WBP_Rigs_AssListItem.WBP_Rigs_AssListItem_C.ShowHoverInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Update(); // Function WBP_Rigs_AssListItem.WBP_Rigs_AssListItem_C.Update // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Set Data(struct FHWArmorFeatureData AssData, bool Selected, bool IsLast); // Function WBP_Rigs_AssListItem.WBP_Rigs_AssListItem_C.Set Data // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_Rigs_AssListItem.WBP_Rigs_AssListItem_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_Rigs_AssListItem.WBP_Rigs_AssListItem_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function WBP_Rigs_AssListItem.WBP_Rigs_AssListItem_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Rigs_AssListItem(int32_t EntryPoint); // Function WBP_Rigs_AssListItem.WBP_Rigs_AssListItem_C.ExecuteUbergraph_WBP_Rigs_AssListItem // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
	void OnHover__DelegateSignature(bool IsHover, struct FName AssId); // Function WBP_Rigs_AssListItem.WBP_Rigs_AssListItem_C.OnHover__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnClicked__DelegateSignature(struct FName AssId); // Function WBP_Rigs_AssListItem.WBP_Rigs_AssListItem_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

