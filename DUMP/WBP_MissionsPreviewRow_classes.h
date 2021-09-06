// WidgetBlueprintGeneratedClass WBP_MissionsPreviewRow.WBP_MissionsPreviewRow_C
// Size: 0x2f4 (Inherited: 0x260)
struct UWBP_MissionsPreviewRow_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* Image_Star; // 0x268(0x08)
	struct UImage* Image_Star_2; // 0x270(0x08)
	struct UImage* Image_Star_3; // 0x278(0x08)
	struct UImage* Image_Star_4; // 0x280(0x08)
	struct UImage* Image_Star_5; // 0x288(0x08)
	struct UImage* Image_Star_6; // 0x290(0x08)
	struct UImage* Image_Star_7; // 0x298(0x08)
	struct UImage* Image_Star_8; // 0x2a0(0x08)
	struct UButton* MissionButton; // 0x2a8(0x08)
	struct UWBP_RichTextLabel_C* MissionDescriptionText; // 0x2b0(0x08)
	struct UImage* MissionIcon; // 0x2b8(0x08)
	struct UWBP_RichTextLabel_C* MissionProgressText; // 0x2c0(0x08)
	struct UImage* OneStar; // 0x2c8(0x08)
	struct UImage* ThreeStar; // 0x2d0(0x08)
	struct UImage* TwoStar; // 0x2d8(0x08)
	struct UWBP_Box_C* WBP_Box; // 0x2e0(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_Stars; // 0x2e8(0x08)
	int32_t Stars; // 0x2f0(0x04)

	void BP_OnEntryReleased(); // Function WBP_MissionsPreviewRow.WBP_MissionsPreviewRow_C.BP_OnEntryReleased // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function WBP_MissionsPreviewRow.WBP_MissionsPreviewRow_C.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function WBP_MissionsPreviewRow.WBP_MissionsPreviewRow_C.BP_OnItemSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void OnListItemObjectSet(struct UObject* ListItemObject); // Function WBP_MissionsPreviewRow.WBP_MissionsPreviewRow_C.OnListItemObjectSet // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_MissionsPreviewRow.WBP_MissionsPreviewRow_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function WBP_MissionsPreviewRow.WBP_MissionsPreviewRow_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function WBP_MissionsPreviewRow.WBP_MissionsPreviewRow_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_MissionsPreviewRow(int32_t EntryPoint); // Function WBP_MissionsPreviewRow.WBP_MissionsPreviewRow_C.ExecuteUbergraph_WBP_MissionsPreviewRow // (Final|UbergraphFunction) // @ game+0x13c4ca0
};

