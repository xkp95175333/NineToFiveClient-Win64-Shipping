// WidgetBlueprintGeneratedClass WBP_Armory2_Popup_Weapon.WBP_Armory2_Popup_Weapon_C
// Size: 0x6e0 (Inherited: 0x268)
struct UWBP_Armory2_Popup_Weapon_C : UHWWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWBP_MainButton_C* BackButton; // 0x270(0x08)
	struct UWBP_Box_C* BG_Parameters; // 0x278(0x08)
	struct UWBP_Box_C* BG_Weapon_Parameters; // 0x280(0x08)
	struct UButton* BlueprintButton; // 0x288(0x08)
	struct UImage* BlueprintGridImage; // 0x290(0x08)
	struct UCanvasPanel* BlueprintPage; // 0x298(0x08)
	struct UImage* BorderLeft; // 0x2a0(0x08)
	struct UWBP_RichTextLabel_C* BPCodeCount; // 0x2a8(0x08)
	struct UHorizontalBox* BPCodes; // 0x2b0(0x08)
	struct UWBP_Armory2_Title_Bar_C* BpParamGroup1; // 0x2b8(0x08)
	struct UWBP_Armory2_Title_Bar_C* BpParamGroup2; // 0x2c0(0x08)
	struct UWBP_Armory2_Title_Bar_C* BpParamGroup3; // 0x2c8(0x08)
	struct UWBP_Armory2_Title_Bar_C* BpParamGroup4; // 0x2d0(0x08)
	struct UWBP_Armory2_Title_Bar_C* BpParamGroup5; // 0x2d8(0x08)
	struct UCanvasPanel* Canvas; // 0x2e0(0x08)
	struct UWBP_Armory2_Rarity_Card_Detailed_C* CommonCard; // 0x2e8(0x08)
	struct UBackgroundBlur* CraftBlockBackground; // 0x2f0(0x08)
	struct UBorder* CraftBlockBorder; // 0x2f8(0x08)
	struct UWBP_Button_C* CraftButton; // 0x300(0x08)
	struct UWBP_CurrencyCost_C* CraftingCost; // 0x308(0x08)
	struct UWidgetSwitcher* CraftingSwitcher; // 0x310(0x08)
	struct UHorizontalBox* CraftPage_Default; // 0x318(0x08)
	struct UHorizontalBox* CraftPage_No_Blueprint; // 0x320(0x08)
	struct UHorizontalBox* CraftPage_No_Slots; // 0x328(0x08)
	struct UImage* CurrentItemRarityIndicator; // 0x330(0x08)
	struct UWBP_RichTextLabel_C* CurrentPartTitle; // 0x338(0x08)
	struct UWBP_MainButton_C* DismantleWeaponButton; // 0x340(0x08)
	struct UWBP_Armory2_Rarity_Card_Detailed_C* EpicCard; // 0x348(0x08)
	struct UVerticalBox* ExpectedRarity; // 0x350(0x08)
	struct UImage* FactionLogo; // 0x358(0x08)
	struct UImage* Image; // 0x360(0x08)
	struct UImage* Image_80; // 0x368(0x08)
	struct UImage* Image_156; // 0x370(0x08)
	struct UImage* Image_363; // 0x378(0x08)
	struct UImage* Image_Arrow; // 0x380(0x08)
	struct UImage* Image_BPCodes; // 0x388(0x08)
	struct UImage* Image_Darken; // 0x390(0x08)
	struct UCanvasPanel* ItemPage; // 0x398(0x08)
	struct UWidgetSwitcher* ItemPageSwitcher; // 0x3a0(0x08)
	struct UButton* ItemParametersClickable; // 0x3a8(0x08)
	struct UWBP_Armory2_Title_Bar_C* ItemParamGroup1; // 0x3b0(0x08)
	struct UWBP_Armory2_Title_Bar_C* ItemParamGroup2; // 0x3b8(0x08)
	struct UWBP_Armory2_Title_Bar_C* ItemParamGroup3; // 0x3c0(0x08)
	struct UWBP_Armory2_Title_Bar_C* ItemParamGroup4; // 0x3c8(0x08)
	struct UWBP_Armory2_Title_Bar_C* ItemParamGroup5; // 0x3d0(0x08)
	struct UListView* ItemSlotListView; // 0x3d8(0x08)
	struct UWBP_Armory2_Rarity_Card_Detailed_C* LegendaryCard; // 0x3e0(0x08)
	struct UWBP_RichTextLabel_C* ModelName; // 0x3e8(0x08)
	struct UWidgetSwitcher* ModeSwitcher; // 0x3f0(0x08)
	struct UImage* NaviBar; // 0x3f8(0x08)
	struct UVerticalBox* NoRarityUpgrade; // 0x400(0x08)
	struct UWBP_Button_C* OpenInLoadout; // 0x408(0x08)
	struct UWidgetSwitcher* PageSwitcher; // 0x410(0x08)
	struct UButton* ParametersClickable; // 0x418(0x08)
	struct UWBP_Armory2_Parameter_Group_C* Part_PG_First; // 0x420(0x08)
	struct UWBP_Armory2_Parameter_Group_C* Part_PG_Second; // 0x428(0x08)
	struct UListView* PartList; // 0x430(0x08)
	struct UOverlay* PartListContainer; // 0x438(0x08)
	struct UWBP_MainButton_C* PartPickerBackButton; // 0x440(0x08)
	struct UCanvasPanel* PartPickerPage; // 0x448(0x08)
	struct UWBP_MainButton_C* PartPickerResetButton; // 0x450(0x08)
	struct UWBP_ScreenHeader_C* PartPickerTitle; // 0x458(0x08)
	struct UOverlay* PartPopupContainer; // 0x460(0x08)
	struct UOverlay* PopupRoot; // 0x468(0x08)
	struct UWBP_Armory2_Rarity_Card_Detailed_C* RareCard; // 0x470(0x08)
	struct UWBP_Armory2_Rarity_Card_C* RarityCardCommon; // 0x478(0x08)
	struct UWBP_Armory2_Rarity_Card_C* RarityCardEpic; // 0x480(0x08)
	struct UWBP_Armory2_Rarity_Card_C* RarityCardLegendary; // 0x488(0x08)
	struct UWBP_Armory2_Rarity_Card_C* RarityCardRare; // 0x490(0x08)
	struct UWBP_Armory2_Rarity_Card_C* RarityCardUncommon; // 0x498(0x08)
	struct UWidgetSwitcher* RarityElementSwitcher; // 0x4a0(0x08)
	struct UWBP_Armory2_Rarity_Card_C* RarityProgress_NextRarity; // 0x4a8(0x08)
	struct UWBP_Armory2_Rarity_Card_C* RarityProgress_PreviousRarity; // 0x4b0(0x08)
	struct UWBP_RichTextLabel_C* RarityProgress_Title_2; // 0x4b8(0x08)
	struct UWBP_RichTextLabel_C* RarityProgress_Value; // 0x4c0(0x08)
	struct UProgressBar* RarityProgressBar; // 0x4c8(0x08)
	struct UWBP_RichTextLabel_C* RarityTextDelete; // 0x4d0(0x08)
	struct UWBP_MainButton_C* RarityUpgradeButton; // 0x4d8(0x08)
	struct UVerticalBox* RarityUpgradeComplete; // 0x4e0(0x08)
	struct UVerticalBox* RarityUpgradeInProgress; // 0x4e8(0x08)
	struct UWBP_MainButton_C* RenameWeaponButton; // 0x4f0(0x08)
	struct UWBP_MainButton_C* ReprogramButton; // 0x4f8(0x08)
	struct UImage* ResultRarityIcon; // 0x500(0x08)
	struct UImage* ResultRarityIndicator; // 0x508(0x08)
	struct UWBP_RichTextLabel_C* ResultRarityText; // 0x510(0x08)
	struct UOverlay* RootPage_Default; // 0x518(0x08)
	struct UWidgetSwitcher* RootSwitcher; // 0x520(0x08)
	struct UWBP_SectionHeaderBlack_C* SectionBlueprintParams; // 0x528(0x08)
	struct UWBP_SectionHeaderBlack_C* SectionBlueprintParams_2; // 0x530(0x08)
	struct UWBP_SectionHeaderBlack_C* SectionRarity; // 0x538(0x08)
	struct UBorder* SelectedPartNameBorder; // 0x540(0x08)
	struct UWBP_ScreenHeader_C* SingleWeaponHeader; // 0x548(0x08)
	struct UWidgetSwitcher* SingleWeaponSwitcher; // 0x550(0x08)
	struct UWBP_Item_Tag_Container_C* Tags; // 0x558(0x08)
	struct UWBP_Button_C* TestFocusButton1; // 0x560(0x08)
	struct UWBP_Button_C* TestFocusButton2; // 0x568(0x08)
	struct UWBP_Button_C* TestFocusButton3; // 0x570(0x08)
	struct UWBP_Button_C* TestFocusButton4; // 0x578(0x08)
	struct UWBP_Armory2_Rarity_Card_Detailed_C* UnCommonCard; // 0x580(0x08)
	struct UWBP_RichTextLabel_C* UnspentUpgradePointsAmount; // 0x588(0x08)
	struct UHorizontalBox* UnspentUpgradePointsElement; // 0x590(0x08)
	struct UWBP_MainButton_C* UpgradeWeaponButton; // 0x598(0x08)
	struct UImage* VendorLogo; // 0x5a0(0x08)
	struct UWBP_Box_C* WBP_Box_2; // 0x5a8(0x08)
	struct UWBP_RichTextLabel_C* WBP_RichTextLabel; // 0x5b0(0x08)
	struct UWBP_RichTextLabel_C* WBP_RichTextLabel_2; // 0x5b8(0x08)
	struct UWBP_RichTextLabel_C* WBP_RichTextLabel_121; // 0x5c0(0x08)
	struct UWBP_RichTextLabel_C* WBP_RichTextLabel_186; // 0x5c8(0x08)
	struct UWBP_RichTextLabel_C* WBP_RichTextLabel_219; // 0x5d0(0x08)
	struct UWBP_RichTextLabel_C* WBP_RichTextLabel_315; // 0x5d8(0x08)
	struct UWBP_RichTextLabel_C* WBP_RichTextLabel_363; // 0x5e0(0x08)
	struct UWBP_Armory2_Weapon_Card_C* WeaponCardForBlueprint; // 0x5e8(0x08)
	struct UHorizontalBox* WeaponModificationList; // 0x5f0(0x08)
	struct UWBP_RichTextLabel_C* WeaponNameLabel; // 0x5f8(0x08)
	struct UCanvasPanel* WeaponPropertiesPage; // 0x600(0x08)
	struct UWBP_Armory2_Sockets_C* WeaponSocketsLayer; // 0x608(0x08)
	struct UHWArmoryItem* BlueprintArmoryItem; // 0x610(0x08)
	struct TArray<struct UHWArmoryWeaponItem*> WeaponItems; // 0x618(0x10)
	struct UHWWeaponParameters* CurrentBlueprintParameters; // 0x628(0x08)
	struct UHWArmoryWeaponItem* CurrentWeaponItem; // 0x630(0x08)
	struct UHWWeaponParameters* CurrentWeaponParameters; // 0x638(0x08)
	bool SingleWeaponMode; // 0x640(0x01)
	enum class EHWWeaponPartType PartPicker_CurrentPartType; // 0x641(0x01)
	char pad_642[0x2]; // 0x642(0x02)
	struct FName PartPicker_OriginalPartIdInSlot; // 0x644(0x08)
	bool PartPicker_OriginalPartIdWasFound; // 0x64c(0x01)
	char pad_64D[0x3]; // 0x64d(0x03)
	struct UHWPartItem* PartPicker_OriginalPartItem; // 0x650(0x08)
	struct UHWWeaponParameters* PartPreviewParameters; // 0x658(0x08)
	struct UHWPartItem* DefaultWeaponPartItem; // 0x660(0x08)
	struct UHWArmoryWeaponItem* TemporaryWeaponItem; // 0x668(0x08)
	struct UHWArmoryWeaponItem* WeaponItemForBlueprint; // 0x670(0x08)
	int32_t CurrentWeaponItemIndex; // 0x678(0x04)
	enum class EHWRarity CurrentResultRarity; // 0x67c(0x01)
	char pad_67D[0x3]; // 0x67d(0x03)
	struct TSoftObjectPtr<struct UWBP_Armory2_Popup_Params_C> ParameterPopup; // 0x680(0x28)
	struct FMulticastInlineDelegate OnPartPickerClosed; // 0x6a8(0x10)
	bool SkipCraftingConfirmation; // 0x6b8(0x01)
	char pad_6B9[0x7]; // 0x6b9(0x07)
	struct FMulticastInlineDelegate BeingRemovedFromParent; // 0x6c0(0x10)
	bool AnyPartSelected; // 0x6d0(0x01)
	bool IgnoreClosePart; // 0x6d1(0x01)
	char pad_6D2[0x6]; // 0x6d2(0x06)
	struct UHWPartItem* SelectedWeaponPart; // 0x6d8(0x08)

	void OnBack(bool IsHandled); // Function WBP_Armory2_Popup_Weapon.WBP_Armory2_Popup_Weapon_C.OnBack // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ShowMaterialCurrency(enum class EHWRarity Rarity, enum class EHWVendor Vendor); // Function WBP_Armory2_Popup_Weapon.WBP_Armory2_Popup_Weapon_C.ShowMaterialCurrency // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Update Weapon with Part(enum class EHWWeaponPartType ModifiedPartType, struct FName ModifiedPartId, bool ModifiedPartExists); // Function WBP_Armory2_Popup_Weapon.WBP_Armory2_Popup_Weapon_C.Update Weapon with Part // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateWeaponCardForBlueprint(); // Function WBP_Armory2_Popup_Weapon.WBP_Armory2_Popup_Weapon_C.UpdateWeaponCardForBlueprint // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	struct UWidget* GetRarityUpgradeTooltipWidget(); // Function WBP_Armory2_Popup_Weapon.WBP_Armory2_Popup_Weapon_C.GetRarityUpgradeTooltipWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void OnItemParameterPopupClosed_1(); // Function WBP_Armory2_Popup_Weapon.WBP_Armory2_Popup_Weapon_C.OnItemParameterPopupClosed_1 // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnBlueprintParameterPopupClosed(); // Function WBP_Armory2_Popup_Weapon.WBP_Armory2_Popup_Weapon_C.OnBlueprintParameterPopupClosed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetParameterPopup(struct UWBP_Armory2_Popup_Params_C* ParameterPopup); // Function WBP_Armory2_Popup_Weapon.WBP_Armory2_Popup_Weapon_C.GetParameterPopup // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void PartPicker_ShowPartPreview(enum class EHWWeaponPartType PartType, struct UHWPartItem* Part); // Function WBP_Armory2_Popup_Weapon.WBP_Armory2_Popup_Weapon_C.PartPicker_ShowPartPreview // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ClosePartPicker(); // Function WBP_Armory2_Popup_Weapon.WBP_Armory2_Popup_Weapon_C.ClosePartPicker // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OpenPartPicker(enum class EHWWeaponPartType PartType); // Function WBP_Armory2_Popup_Weapon.WBP_Armory2_Popup_Weapon_C.OpenPartPicker // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	struct UWidget* Get_ExpectedRarity_ToolTipWidget_1(); // Function WBP_Armory2_Popup_Weapon.WBP_Armory2_Popup_Weapon_C.Get_ExpectedRarity_ToolTipWidget_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetRelevantParamGroupsForParts(struct TArray<struct FName> PartIds, struct TArray<enum class EHWCraftingParameterGroup> Groups); // Function WBP_Armory2_Popup_Weapon.WBP_Armory2_Popup_Weapon_C.GetRelevantParamGroupsForParts // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void AddSlotItem(enum class EHWWeaponItemType ItemType); // Function WBP_Armory2_Popup_Weapon.WBP_Armory2_Popup_Weapon_C.AddSlotItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateItemsAndSlots(); // Function WBP_Armory2_Popup_Weapon.WBP_Armory2_Popup_Weapon_C.UpdateItemsAndSlots // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateRarityWidget(struct UBorder* Widget, enum class EHWRarity Rarity, enum class EHWRarity CurrentRarity); // Function WBP_Armory2_Popup_Weapon.WBP_Armory2_Popup_Weapon_C.UpdateRarityWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateRarities(); // Function WBP_Armory2_Popup_Weapon.WBP_Armory2_Popup_Weapon_C.UpdateRarities // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PopulateHeader(); // Function WBP_Armory2_Popup_Weapon.WBP_Armory2_Popup_Weapon_C.PopulateHeader // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	struct UWidget* Get_RarityUncommon_ToolTipWidget_1(); // Function WBP_Armory2_Popup_Weapon.WBP_Armory2_Popup_Weapon_C.Get_RarityUncommon_ToolTipWidget_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	struct UWidget* Get_RarityCommon_ToolTipWidget_1(); // Function WBP_Armory2_Popup_Weapon.WBP_Armory2_Popup_Weapon_C.Get_RarityCommon_ToolTipWidget_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	struct UWidget* Get_RarityRare_ToolTipWidget_1(); // Function WBP_Armory2_Popup_Weapon.WBP_Armory2_Popup_Weapon_C.Get_RarityRare_ToolTipWidget_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	struct UWidget* Get_RarityLegendary_ToolTipWidget_1(); // Function WBP_Armory2_Popup_Weapon.WBP_Armory2_Popup_Weapon_C.Get_RarityLegendary_ToolTipWidget_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	struct UWidget* Get_RarityEpic_ToolTipWidget_1(); // Function WBP_Armory2_Popup_Weapon.WBP_Armory2_Popup_Weapon_C.Get_RarityEpic_ToolTipWidget_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void CreateRarityTooltip(enum class EHWRarity Rarity, struct UWBP_Armory2_Rarity_Tooltip_C* Result); // Function WBP_Armory2_Popup_Weapon.WBP_Armory2_Popup_Weapon_C.CreateRarityTooltip // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void OnPlayerDetailsChanged(struct FHWPlayerDetails Data); // Function WBP_Armory2_Popup_Weapon.WBP_Armory2_Popup_Weapon_C.OnPlayerDetailsChanged // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerMissionChanged(struct FHWPlayerMission Data); // Function WBP_Armory2_Popup_Weapon.WBP_Armory2_Popup_Weapon_C.OnPlayerMissionChanged // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerProgressionChanged(struct FHWPlayerProgression Data); // Function WBP_Armory2_Popup_Weapon.WBP_Armory2_Popup_Weapon_C.OnPlayerProgressionChanged // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerStatsChanged(struct FHWPlayerStats Data); // Function WBP_Armory2_Popup_Weapon.WBP_Armory2_Popup_Weapon_C.OnPlayerStatsChanged // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_Armory2_Popup_Weapon.WBP_Armory2_Popup_Weapon_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__BackToListButton_1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_Armory2_Popup_Weapon.WBP_Armory2_Popup_Weapon_C.BndEvt__BackToListButton_1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void SetCurrentItemParameters(struct UHWWeaponParameters* Params); // Function WBP_Armory2_Popup_Weapon.WBP_Armory2_Popup_Weapon_C.SetCurrentItemParameters // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__ReprogramButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_Armory2_Popup_Weapon.WBP_Armory2_Popup_Weapon_C.BndEvt__ReprogramButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__TestFocusButton1_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_Armory2_Popup_Weapon.WBP_Armory2_Popup_Weapon_C.BndEvt__TestFocusButton1_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__TestFocusButton2_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_Armory2_Popup_Weapon.WBP_Armory2_Popup_Weapon_C.BndEvt__TestFocusButton2_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__TestFocusButton3_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_Armory2_Popup_Weapon.WBP_Armory2_Popup_Weapon_C.BndEvt__TestFocusButton3_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__TestFocusButton4_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_Armory2_Popup_Weapon.WBP_Armory2_Popup_Weapon_C.BndEvt__TestFocusButton4_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__CraftButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_Armory2_Popup_Weapon.WBP_Armory2_Popup_Weapon_C.BndEvt__CraftButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__ItemSlotTiles_K2Node_ComponentBoundEvent_7_SimpleListItemEventDynamic__DelegateSignature(struct UObject* Item); // Function WBP_Armory2_Popup_Weapon.WBP_Armory2_Popup_Weapon_C.BndEvt__ItemSlotTiles_K2Node_ComponentBoundEvent_7_SimpleListItemEventDynamic__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void OpenItem(struct UHWArmoryWeaponItem* WeaponItem, bool IsFromCraftingResult); // Function WBP_Armory2_Popup_Weapon.WBP_Armory2_Popup_Weapon_C.OpenItem // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateBlueprintParameters(struct UHWWeaponParameters* Params); // Function WBP_Armory2_Popup_Weapon.WBP_Armory2_Popup_Weapon_C.UpdateBlueprintParameters // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__3DWeaponView_K2Node_ComponentBoundEvent_9_OnWeaponSocketClicked__DelegateSignature(enum class EHWWeaponPartType PartType, struct UWBP_Armory_Weapon_Socket_C* Widget); // Function WBP_Armory2_Popup_Weapon.WBP_Armory2_Popup_Weapon_C.BndEvt__3DWeaponView_K2Node_ComponentBoundEvent_9_OnWeaponSocketClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void PopulateWeaponPartList(); // Function WBP_Armory2_Popup_Weapon.WBP_Armory2_Popup_Weapon_C.PopulateWeaponPartList // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__PartBackButton_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_Armory2_Popup_Weapon.WBP_Armory2_Popup_Weapon_C.BndEvt__PartBackButton_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__PartList_K2Node_ComponentBoundEvent_12_OnItemIsHoveredChangedDynamic__DelegateSignature(struct UObject* Item, bool bIsHovered); // Function WBP_Armory2_Popup_Weapon.WBP_Armory2_Popup_Weapon_C.BndEvt__PartList_K2Node_ComponentBoundEvent_12_OnItemIsHoveredChangedDynamic__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__PartList_K2Node_ComponentBoundEvent_13_SimpleListItemEventDynamic__DelegateSignature(struct UObject* Item); // Function WBP_Armory2_Popup_Weapon.WBP_Armory2_Popup_Weapon_C.BndEvt__PartList_K2Node_ComponentBoundEvent_13_SimpleListItemEventDynamic__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerInventoryChanged(struct FHWPlayerInventory Data); // Function WBP_Armory2_Popup_Weapon.WBP_Armory2_Popup_Weapon_C.OnPlayerInventoryChanged // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_Armory2_Popup_Weapon.WBP_Armory2_Popup_Weapon_C.BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__RarityCardCommon_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(enum class EHWRarity Rarity); // Function WBP_Armory2_Popup_Weapon.WBP_Armory2_Popup_Weapon_C.BndEvt__RarityCardCommon_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__RarityCardUncommon_K2Node_ComponentBoundEvent_16_OnClicked__DelegateSignature(enum class EHWRarity Rarity); // Function WBP_Armory2_Popup_Weapon.WBP_Armory2_Popup_Weapon_C.BndEvt__RarityCardUncommon_K2Node_ComponentBoundEvent_16_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__RarityCardRare_K2Node_ComponentBoundEvent_17_OnClicked__DelegateSignature(enum class EHWRarity Rarity); // Function WBP_Armory2_Popup_Weapon.WBP_Armory2_Popup_Weapon_C.BndEvt__RarityCardRare_K2Node_ComponentBoundEvent_17_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__RarityCardLegendary_K2Node_ComponentBoundEvent_18_OnClicked__DelegateSignature(enum class EHWRarity Rarity); // Function WBP_Armory2_Popup_Weapon.WBP_Armory2_Popup_Weapon_C.BndEvt__RarityCardLegendary_K2Node_ComponentBoundEvent_18_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__RarityCardEpic_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature(enum class EHWRarity Rarity); // Function WBP_Armory2_Popup_Weapon.WBP_Armory2_Popup_Weapon_C.BndEvt__RarityCardEpic_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__DismantleWeaponButton_K2Node_ComponentBoundEvent_20_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_Armory2_Popup_Weapon.WBP_Armory2_Popup_Weapon_C.BndEvt__DismantleWeaponButton_K2Node_ComponentBoundEvent_20_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void OnDismantleConfirmed(bool Result); // Function WBP_Armory2_Popup_Weapon.WBP_Armory2_Popup_Weapon_C.OnDismantleConfirmed // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnDismantleCompleted(struct FHWResponseBase Response); // Function WBP_Armory2_Popup_Weapon.WBP_Armory2_Popup_Weapon_C.OnDismantleCompleted // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnDismantleFailed(enum class EHWErrorMessage ErrorMessage); // Function WBP_Armory2_Popup_Weapon.WBP_Armory2_Popup_Weapon_C.OnDismantleFailed // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnRenameTextEntered(struct FString Result); // Function WBP_Armory2_Popup_Weapon.WBP_Armory2_Popup_Weapon_C.OnRenameTextEntered // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__RenameWeaponButton_K2Node_ComponentBoundEvent_23_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_Armory2_Popup_Weapon.WBP_Armory2_Popup_Weapon_C.BndEvt__RenameWeaponButton_K2Node_ComponentBoundEvent_23_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void OpenCurrentItem(); // Function WBP_Armory2_Popup_Weapon.WBP_Armory2_Popup_Weapon_C.OpenCurrentItem // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__ItemSlotTiles_K2Node_ComponentBoundEvent_11_OnItemIsHoveredChangedDynamic__DelegateSignature(struct UObject* Item, bool bIsHovered); // Function WBP_Armory2_Popup_Weapon.WBP_Armory2_Popup_Weapon_C.BndEvt__ItemSlotTiles_K2Node_ComponentBoundEvent_11_OnItemIsHoveredChangedDynamic__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void UpdateParametersView(struct UHWWeaponParameters* Params); // Function WBP_Armory2_Popup_Weapon.WBP_Armory2_Popup_Weapon_C.UpdateParametersView // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SelectWeaponPart(struct UHWPartItem* Part); // Function WBP_Armory2_Popup_Weapon.WBP_Armory2_Popup_Weapon_C.SelectWeaponPart // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__BlueprintButton_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature(); // Function WBP_Armory2_Popup_Weapon.WBP_Armory2_Popup_Weapon_C.BndEvt__BlueprintButton_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void SetCurrentWeaponItem(struct UHWArmoryWeaponItem* Item); // Function WBP_Armory2_Popup_Weapon.WBP_Armory2_Popup_Weapon_C.SetCurrentWeaponItem // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__PartPickerResetButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(struct UWBP_MainButton_C* Button); // Function WBP_Armory2_Popup_Weapon.WBP_Armory2_Popup_Weapon_C.BndEvt__PartPickerResetButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void Update3DWeapon(); // Function WBP_Armory2_Popup_Weapon.WBP_Armory2_Popup_Weapon_C.Update3DWeapon // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void MarkCurrentItemAsSeen(); // Function WBP_Armory2_Popup_Weapon.WBP_Armory2_Popup_Weapon_C.MarkCurrentItemAsSeen // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnMarkSeenFailed(enum class EHWErrorMessage ErrorMessage); // Function WBP_Armory2_Popup_Weapon.WBP_Armory2_Popup_Weapon_C.OnMarkSeenFailed // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnMarkSeenCompleted(struct FHWResponseBase Response); // Function WBP_Armory2_Popup_Weapon.WBP_Armory2_Popup_Weapon_C.OnMarkSeenCompleted // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__ParametersClickable_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature(); // Function WBP_Armory2_Popup_Weapon.WBP_Armory2_Popup_Weapon_C.BndEvt__ParametersClickable_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__ItemParametersClickable_K2Node_ComponentBoundEvent_31_OnButtonClickedEvent__DelegateSignature(); // Function WBP_Armory2_Popup_Weapon.WBP_Armory2_Popup_Weapon_C.BndEvt__ItemParametersClickable_K2Node_ComponentBoundEvent_31_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BeginCraftingResultSequence(); // Function WBP_Armory2_Popup_Weapon.WBP_Armory2_Popup_Weapon_C.BeginCraftingResultSequence // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__ParametersClickable_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature(); // Function WBP_Armory2_Popup_Weapon.WBP_Armory2_Popup_Weapon_C.BndEvt__ParametersClickable_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__ParametersClickable_K2Node_ComponentBoundEvent_30_OnButtonHoverEvent__DelegateSignature(); // Function WBP_Armory2_Popup_Weapon.WBP_Armory2_Popup_Weapon_C.BndEvt__ParametersClickable_K2Node_ComponentBoundEvent_30_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__ItemParametersClickable_K2Node_ComponentBoundEvent_32_OnButtonHoverEvent__DelegateSignature(); // Function WBP_Armory2_Popup_Weapon.WBP_Armory2_Popup_Weapon_C.BndEvt__ItemParametersClickable_K2Node_ComponentBoundEvent_32_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__ItemParametersClickable_K2Node_ComponentBoundEvent_33_OnButtonHoverEvent__DelegateSignature(); // Function WBP_Armory2_Popup_Weapon.WBP_Armory2_Popup_Weapon_C.BndEvt__ItemParametersClickable_K2Node_ComponentBoundEvent_33_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void UpdateWeaponName(struct UHWArmoryWeaponItem* FromItem); // Function WBP_Armory2_Popup_Weapon.WBP_Armory2_Popup_Weapon_C.UpdateWeaponName // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__OpenInLoadout_K2Node_ComponentBoundEvent_25_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_Armory2_Popup_Weapon.WBP_Armory2_Popup_Weapon_C.BndEvt__OpenInLoadout_K2Node_ComponentBoundEvent_25_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void SetSingleWeaponMode(struct FText TitleText); // Function WBP_Armory2_Popup_Weapon.WBP_Armory2_Popup_Weapon_C.SetSingleWeaponMode // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GoToLoadout(); // Function WBP_Armory2_Popup_Weapon.WBP_Armory2_Popup_Weapon_C.GoToLoadout // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void TutorialEnsureFirstItemIsOpen(); // Function WBP_Armory2_Popup_Weapon.WBP_Armory2_Popup_Weapon_C.TutorialEnsureFirstItemIsOpen // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void TutorialEnsureBlueprintIsOpen(); // Function WBP_Armory2_Popup_Weapon.WBP_Armory2_Popup_Weapon_C.TutorialEnsureBlueprintIsOpen // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void TutorialSetSkipCraftingConfirmation(); // Function WBP_Armory2_Popup_Weapon.WBP_Armory2_Popup_Weapon_C.TutorialSetSkipCraftingConfirmation // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateBlueprintCodeCount(); // Function WBP_Armory2_Popup_Weapon.WBP_Armory2_Popup_Weapon_C.UpdateBlueprintCodeCount // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__PartList_K2Node_ComponentBoundEvent_26_OnListItemSelectionChangedDynamic__DelegateSignature(struct UObject* Item, bool bIsSelected); // Function WBP_Armory2_Popup_Weapon.WBP_Armory2_Popup_Weapon_C.BndEvt__PartList_K2Node_ComponentBoundEvent_26_OnListItemSelectionChangedDynamic__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void SetSelectedWeaponPartName(); // Function WBP_Armory2_Popup_Weapon.WBP_Armory2_Popup_Weapon_C.SetSelectedWeaponPartName // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetFactionLogoOnCards(); // Function WBP_Armory2_Popup_Weapon.WBP_Armory2_Popup_Weapon_C.SetFactionLogoOnCards // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BackButtonClicked(); // Function WBP_Armory2_Popup_Weapon.WBP_Armory2_Popup_Weapon_C.BackButtonClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Armory2_Popup_Weapon(int32_t EntryPoint); // Function WBP_Armory2_Popup_Weapon.WBP_Armory2_Popup_Weapon_C.ExecuteUbergraph_WBP_Armory2_Popup_Weapon // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
	void BeingRemovedFromParent__DelegateSignature(); // Function WBP_Armory2_Popup_Weapon.WBP_Armory2_Popup_Weapon_C.BeingRemovedFromParent__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnPartPickerClosed__DelegateSignature(struct UWBP_Armory2_Popup_Weapon_C* WeaponPopup); // Function WBP_Armory2_Popup_Weapon.WBP_Armory2_Popup_Weapon_C.OnPartPickerClosed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

