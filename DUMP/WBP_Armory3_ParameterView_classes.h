// WidgetBlueprintGeneratedClass WBP_Armory3_ParameterView.WBP_Armory3_ParameterView_C
// Size: 0x3b1 (Inherited: 0x268)
struct UWBP_Armory3_ParameterView_C : UHWWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWBP_MainButton_C* ApplyCodeButton; // 0x270(0x08)
	struct UWBP_RichTextLabel_C* ApplyMessage; // 0x278(0x08)
	struct UWBP_MainButton_C* BackToWeaponButton; // 0x280(0x08)
	struct UListView* CodeList; // 0x288(0x08)
	struct UOverlay* CodeList_NoCodes; // 0x290(0x08)
	struct UWidgetSwitcher* CodeListSwitcher; // 0x298(0x08)
	struct UWBP_SectionHeaderBlack_C* CodesHeader; // 0x2a0(0x08)
	struct UWBP_Armory3_ParameterGroup_C* Group_Ammo; // 0x2a8(0x08)
	struct UWBP_Armory3_ParameterGroup_C* Group_Ballistics; // 0x2b0(0x08)
	struct UWBP_Armory3_ParameterGroup_C* Group_Efficiency; // 0x2b8(0x08)
	struct UWBP_Armory3_ParameterGroup_C* Group_Handling; // 0x2c0(0x08)
	struct UWBP_Armory3_ParameterGroup_C* Group_Stealth; // 0x2c8(0x08)
	struct UImage* Image_408; // 0x2d0(0x08)
	struct UWBP_SectionHeaderBlack_C* ParametersHeader; // 0x2d8(0x08)
	struct UWBP_MainButton_C* ResetPointsButton; // 0x2e0(0x08)
	struct UWBP_Box_C* WBP_Box; // 0x2e8(0x08)
	struct UWBP_RichTextLabel_C* WBP_Explanation; // 0x2f0(0x08)
	struct UWBP_RichTextLabel_C* WBP_Heading; // 0x2f8(0x08)
	struct UHWArmoryWeaponModel* WeaponModel; // 0x300(0x08)
	struct UHWArmoryWeaponVariation* WeaponVariation; // 0x308(0x08)
	struct TArray<struct UHWArmoryWeaponCodeItem*> Codes; // 0x310(0x10)
	struct FMulticastInlineDelegate OnClosed; // 0x320(0x10)
	struct UHWWeaponParameters* DefaultWeaponParameters; // 0x330(0x08)
	int32_t LastSelectedCodeIndex; // 0x338(0x04)
	char pad_33C[0x4]; // 0x33c(0x04)
	struct UHWWeaponParameters* TempParameters; // 0x340(0x08)
	struct TMap<enum class EHWCraftingParameter, struct UWBP_Armory3_ParameterBar_C*> ParameterBars; // 0x348(0x50)
	struct TArray<enum class EHWCraftingParameter> CurrentUpgrades; // 0x398(0x10)
	struct UHWArmoryWeaponUpgradeState* UpgradeState; // 0x3a8(0x08)
	bool CodeApplied; // 0x3b0(0x01)

	void IsAnyGroupSelected(bool Result); // Function WBP_Armory3_ParameterView.WBP_Armory3_ParameterView_C.IsAnyGroupSelected // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_Armory3_ParameterView.WBP_Armory3_ParameterView_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void IsGroupSelected(enum class EHWCraftingParameterGroup Group, bool Result); // Function WBP_Armory3_ParameterView.WBP_Armory3_ParameterView_C.IsGroupSelected // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void OnGroupClicked(enum class EHWCraftingParameterGroup Group, struct UWBP_Armory3_ParameterGroup_C* Widget); // Function WBP_Armory3_ParameterView.WBP_Armory3_ParameterView_C.OnGroupClicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void CanApplyCode(struct UHWArmoryWeaponCodeItem* Code, bool Result); // Function WBP_Armory3_ParameterView.WBP_Armory3_ParameterView_C.CanApplyCode // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void CanResetUpgrades(bool Result); // Function WBP_Armory3_ParameterView.WBP_Armory3_ParameterView_C.CanResetUpgrades // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void SetApplyButton(bool ApplyCode, bool ApplyPoints); // Function WBP_Armory3_ParameterView.WBP_Armory3_ParameterView_C.SetApplyButton // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnUpgradeStateChanged(struct UHWArmoryWeaponUpgradeState* State, enum class EHWCraftingParameterGroup Group); // Function WBP_Armory3_ParameterView.WBP_Armory3_ParameterView_C.OnUpgradeStateChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnRemoveUpgradeClicked(enum class EHWCraftingParameter Parameter); // Function WBP_Armory3_ParameterView.WBP_Armory3_ParameterView_C.OnRemoveUpgradeClicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnAddUpgradeClicked(enum class EHWCraftingParameter Parameter); // Function WBP_Armory3_ParameterView.WBP_Armory3_ParameterView_C.OnAddUpgradeClicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Set Parameters(struct UHWWeaponParameters* Params); // Function WBP_Armory3_ParameterView.WBP_Armory3_ParameterView_C.Set Parameters // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Select Code(struct UHWArmoryWeaponCodeItem* Item); // Function WBP_Armory3_ParameterView.WBP_Armory3_ParameterView_C.Select Code // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ResetCodeSelection(); // Function WBP_Armory3_ParameterView.WBP_Armory3_ParameterView_C.ResetCodeSelection // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetGroups(struct TArray<struct UWBP_Armory3_ParameterGroup_C*> Groups); // Function WBP_Armory3_ParameterView.WBP_Armory3_ParameterView_C.GetGroups // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetGroupWidget(enum class EHWCraftingParameterGroup Group, struct UWBP_Armory3_ParameterGroup_C* Widget); // Function WBP_Armory3_ParameterView.WBP_Armory3_ParameterView_C.GetGroupWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void OnPlayerDetailsChanged(struct FHWPlayerDetails Data); // Function WBP_Armory3_ParameterView.WBP_Armory3_ParameterView_C.OnPlayerDetailsChanged // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerMissionChanged(struct FHWPlayerMission Data); // Function WBP_Armory3_ParameterView.WBP_Armory3_ParameterView_C.OnPlayerMissionChanged // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerProgressionChanged(struct FHWPlayerProgression Data); // Function WBP_Armory3_ParameterView.WBP_Armory3_ParameterView_C.OnPlayerProgressionChanged // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerStatsChanged(struct FHWPlayerStats Data); // Function WBP_Armory3_ParameterView.WBP_Armory3_ParameterView_C.OnPlayerStatsChanged // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_Armory3_ParameterView.WBP_Armory3_ParameterView_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void SetContent(struct UHWArmoryWeaponModel* WeaponModel, struct UHWArmoryWeaponVariation* WeaponVariation); // Function WBP_Armory3_ParameterView.WBP_Armory3_ParameterView_C.SetContent // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__BackToWeaponButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(struct UWBP_MainButton_C* Button); // Function WBP_Armory3_ParameterView.WBP_Armory3_ParameterView_C.BndEvt__BackToWeaponButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__CodeList_K2Node_ComponentBoundEvent_2_OnListItemSelectionChangedDynamic__DelegateSignature(struct UObject* Item, bool bIsSelected); // Function WBP_Armory3_ParameterView.WBP_Armory3_ParameterView_C.BndEvt__CodeList_K2Node_ComponentBoundEvent_2_OnListItemSelectionChangedDynamic__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__ApplyCodeButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(struct UWBP_MainButton_C* Button); // Function WBP_Armory3_ParameterView.WBP_Armory3_ParameterView_C.BndEvt__ApplyCodeButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerInventoryChanged(struct FHWPlayerInventory Data); // Function WBP_Armory3_ParameterView.WBP_Armory3_ParameterView_C.OnPlayerInventoryChanged // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void PlayAnimationOnSelectedGroup(); // Function WBP_Armory3_ParameterView.WBP_Armory3_ParameterView_C.PlayAnimationOnSelectedGroup // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateParameterView(); // Function WBP_Armory3_ParameterView.WBP_Armory3_ParameterView_C.UpdateParameterView // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__CodeList_K2Node_ComponentBoundEvent_3_OnListEntryGeneratedDynamic__DelegateSignature(struct UUserWidget* Widget); // Function WBP_Armory3_ParameterView.WBP_Armory3_ParameterView_C.BndEvt__CodeList_K2Node_ComponentBoundEvent_3_OnListEntryGeneratedDynamic__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void RefreshContent(); // Function WBP_Armory3_ParameterView.WBP_Armory3_ParameterView_C.RefreshContent // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__CodeList_K2Node_ComponentBoundEvent_4_OnListEntryReleasedDynamic__DelegateSignature(struct UUserWidget* Widget); // Function WBP_Armory3_ParameterView.WBP_Armory3_ParameterView_C.BndEvt__CodeList_K2Node_ComponentBoundEvent_4_OnListEntryReleasedDynamic__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Armory3_ParameterView(int32_t EntryPoint); // Function WBP_Armory3_ParameterView.WBP_Armory3_ParameterView_C.ExecuteUbergraph_WBP_Armory3_ParameterView // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
	void OnClosed__DelegateSignature(); // Function WBP_Armory3_ParameterView.WBP_Armory3_ParameterView_C.OnClosed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

