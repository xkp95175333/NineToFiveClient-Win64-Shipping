// WidgetBlueprintGeneratedClass WBP_Armory3_ParameterGroup.WBP_Armory3_ParameterGroup_C
// Size: 0x360 (Inherited: 0x260)
struct UWBP_Armory3_ParameterGroup_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* ApplyCodeEffect_Anim; // 0x268(0x08)
	struct UOverlay* Additional; // 0x270(0x08)
	struct UWBP_RichTextLabel_C* AdditionalPoints; // 0x278(0x08)
	struct UBorder* ApplyCodeEffectBorder1; // 0x280(0x08)
	struct UBorder* ApplyCodeEffectBorder2; // 0x288(0x08)
	struct UVerticalBox* Bars; // 0x290(0x08)
	struct UWBP_RichTextLabel_C* CurrentPoints; // 0x298(0x08)
	struct UImage* CurrentPointsCircle; // 0x2a0(0x08)
	struct UWBP_RichTextLabel_C* Header; // 0x2a8(0x08)
	struct UImage* Highlight; // 0x2b0(0x08)
	struct UImage* IconImage; // 0x2b8(0x08)
	struct UImage* Image_173; // 0x2c0(0x08)
	struct UImage* OrangeHighlight; // 0x2c8(0x08)
	struct UWBP_Armory3_ParameterBar_C* ParameterBar1; // 0x2d0(0x08)
	struct UWBP_Armory3_ParameterBar_C* ParameterBar2; // 0x2d8(0x08)
	struct UWBP_Armory3_ParameterBar_C* ParameterBar3; // 0x2e0(0x08)
	struct UWBP_Armory3_ParameterBar_C* ParameterBar4; // 0x2e8(0x08)
	struct UWBP_RichTextLabel_C* Percentage; // 0x2f0(0x08)
	struct UWBP_Box_C* SelectedBorder_Placeholder; // 0x2f8(0x08)
	struct UWBP_RichTextLabel_C* Spend_Points; // 0x300(0x08)
	struct UButton* SpendPoints_HoverArea; // 0x308(0x08)
	struct UVerticalBox* VerticalBox_1; // 0x310(0x08)
	struct UWBP_Box_C* WBP_Box; // 0x318(0x08)
	enum class EHWCraftingParameterGroup ParameterGroup; // 0x320(0x01)
	char pad_321[0x7]; // 0x321(0x07)
	struct FMulticastInlineDelegate OnGroupClicked; // 0x328(0x10)
	bool IsSelected; // 0x338(0x01)
	enum class BPE_Box_Style BoxStyle; // 0x339(0x01)
	char pad_33A[0x2]; // 0x33a(0x02)
	struct FMargin BarPaddings; // 0x33c(0x10)
	char pad_34C[0x4]; // 0x34c(0x04)
	struct FMulticastInlineDelegate OnUpgradeAnimComplete; // 0x350(0x10)

	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_Armory3_ParameterGroup.WBP_Armory3_ParameterGroup_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetUpgradeState(struct UHWArmoryWeaponUpgradeState* State); // Function WBP_Armory3_ParameterGroup.WBP_Armory3_ParameterGroup_C.SetUpgradeState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ResetUpgradePoints(); // Function WBP_Armory3_ParameterGroup.WBP_Armory3_ParameterGroup_C.ResetUpgradePoints // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetUpgradePoints(int32_t Current, int32_t Delta); // Function WBP_Armory3_ParameterGroup.WBP_Armory3_ParameterGroup_C.SetUpgradePoints // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetParameterBars(struct TArray<struct UWBP_Armory3_ParameterBar_C*> Bars); // Function WBP_Armory3_ParameterGroup.WBP_Armory3_ParameterGroup_C.GetParameterBars // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void PreConstruct(bool IsDesignTime); // Function WBP_Armory3_ParameterGroup.WBP_Armory3_ParameterGroup_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void SetSelected(bool Selected, bool DimUnselected, enum class EHWRarity Rarity); // Function WBP_Armory3_ParameterGroup.WBP_Armory3_ParameterGroup_C.SetSelected // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetPercentage(int32_t Percentage); // Function WBP_Armory3_ParameterGroup.WBP_Armory3_ParameterGroup_C.SetPercentage // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__SpendPoints_HoverArea_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function WBP_Armory3_ParameterGroup.WBP_Armory3_ParameterGroup_C.BndEvt__SpendPoints_HoverArea_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__SpendPoints_HoverArea_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function WBP_Armory3_ParameterGroup.WBP_Armory3_ParameterGroup_C.BndEvt__SpendPoints_HoverArea_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void SetBasicData(); // Function WBP_Armory3_ParameterGroup.WBP_Armory3_ParameterGroup_C.SetBasicData // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PlayUpgradeAnimation(); // Function WBP_Armory3_ParameterGroup.WBP_Armory3_ParameterGroup_C.PlayUpgradeAnimation // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void AnimationFinished(); // Function WBP_Armory3_ParameterGroup.WBP_Armory3_ParameterGroup_C.AnimationFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Armory3_ParameterGroup(int32_t EntryPoint); // Function WBP_Armory3_ParameterGroup.WBP_Armory3_ParameterGroup_C.ExecuteUbergraph_WBP_Armory3_ParameterGroup // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
	void OnUpgradeAnimComplete__DelegateSignature(); // Function WBP_Armory3_ParameterGroup.WBP_Armory3_ParameterGroup_C.OnUpgradeAnimComplete__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnGroupClicked__DelegateSignature(enum class EHWCraftingParameterGroup Group, struct UWBP_Armory3_ParameterGroup_C* Widget); // Function WBP_Armory3_ParameterGroup.WBP_Armory3_ParameterGroup_C.OnGroupClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

