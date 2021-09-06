// WidgetBlueprintGeneratedClass WBP_Rigs_DroneAbilityListItem.WBP_Rigs_DroneAbilityListItem_C
// Size: 0x2f8 (Inherited: 0x260)
struct UWBP_Rigs_DroneAbilityListItem_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWBP_Rigs_ButtonBackground_C* Background; // 0x268(0x08)
	struct UImage* Image_Icon; // 0x270(0x08)
	struct UWBP_RichTextLabel_C* Label_Name; // 0x278(0x08)
	struct UWBP_RichTextLabel_C* Label_UninstallInfo; // 0x280(0x08)
	struct UWBP_RichTextLabel_C* Label_UnlockInfo; // 0x288(0x08)
	struct UImage* LockIcon; // 0x290(0x08)
	struct FMulticastInlineDelegate OnClicked; // 0x298(0x10)
	bool CanBeSelected; // 0x2a8(0x01)
	char pad_2A9[0x3]; // 0x2a9(0x03)
	int32_t UnlockLevel; // 0x2ac(0x04)
	struct FHWDroneAbilityData AbilityData; // 0x2b0(0x30)
	enum class EHWFaction UnlockFaction; // 0x2e0(0x01)
	char pad_2E1[0x7]; // 0x2e1(0x07)
	struct FMulticastInlineDelegate OnHover; // 0x2e8(0x10)

	void ShowHoverInfo(bool IsHovered); // Function WBP_Rigs_DroneAbilityListItem.WBP_Rigs_DroneAbilityListItem_C.ShowHoverInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Update(); // Function WBP_Rigs_DroneAbilityListItem.WBP_Rigs_DroneAbilityListItem_C.Update // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetData(struct FHWDroneAbilityData DroneData, bool IsSelected, bool IsLast); // Function WBP_Rigs_DroneAbilityListItem.WBP_Rigs_DroneAbilityListItem_C.SetData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_Rigs_DroneAbilityListItem.WBP_Rigs_DroneAbilityListItem_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PreConstruct(bool IsDesignTime); // Function WBP_Rigs_DroneAbilityListItem.WBP_Rigs_DroneAbilityListItem_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_Rigs_DroneAbilityListItem.WBP_Rigs_DroneAbilityListItem_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function WBP_Rigs_DroneAbilityListItem.WBP_Rigs_DroneAbilityListItem_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Rigs_DroneAbilityListItem(int32_t EntryPoint); // Function WBP_Rigs_DroneAbilityListItem.WBP_Rigs_DroneAbilityListItem_C.ExecuteUbergraph_WBP_Rigs_DroneAbilityListItem // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
	void OnHover__DelegateSignature(bool IsHover, struct FName AbilityId); // Function WBP_Rigs_DroneAbilityListItem.WBP_Rigs_DroneAbilityListItem_C.OnHover__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnClicked__DelegateSignature(struct FName AbilityId); // Function WBP_Rigs_DroneAbilityListItem.WBP_Rigs_DroneAbilityListItem_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

