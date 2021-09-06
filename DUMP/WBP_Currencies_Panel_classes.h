// WidgetBlueprintGeneratedClass WBP_Currencies_Panel.WBP_Currencies_Panel_C
// Size: 0x468 (Inherited: 0x268)
struct UWBP_Currencies_Panel_C : UHWWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UImage* ActiveBooster_Indication; // 0x270(0x08)
	struct UImage* AllianceLogo; // 0x278(0x08)
	struct UBorder* Border_4; // 0x280(0x08)
	struct UVerticalBox* Credit_Boosters; // 0x288(0x08)
	struct UWBP_RichTextLabel_C* CreditsLabel; // 0x290(0x08)
	struct UWBP_RichTextLabel_C* DescriptionLabel; // 0x298(0x08)
	struct UImage* Divider; // 0x2a0(0x08)
	struct UImage* Divider_2; // 0x2a8(0x08)
	struct UImage* Divider_3; // 0x2b0(0x08)
	struct UImage* Divider_4; // 0x2b8(0x08)
	struct UImage* Divider_5; // 0x2c0(0x08)
	struct UImage* Divider_6; // 0x2c8(0x08)
	struct UWBP_RichTextLabel_C* ExcellenceLabel; // 0x2d0(0x08)
	struct UWBP_RichTextLabel_C* ExcellenceText; // 0x2d8(0x08)
	struct UWBP_RichTextLabel_C* Header; // 0x2e0(0x08)
	struct UImage* Icon_Farmira; // 0x2e8(0x08)
	struct UImage* Icon_MashMedia; // 0x2f0(0x08)
	struct UImage* Icon_NWF; // 0x2f8(0x08)
	struct UImage* Image; // 0x300(0x08)
	struct UImage* Image_2; // 0x308(0x08)
	struct UImage* Image_118; // 0x310(0x08)
	struct UImage* Image_Credits; // 0x318(0x08)
	struct UImage* Image_ExcellencePoints; // 0x320(0x08)
	struct UImage* Image_Platinum; // 0x328(0x08)
	struct UImage* Image_ShoppingCart; // 0x330(0x08)
	struct UListView* ListView_268; // 0x338(0x08)
	struct UTileView* MaterialTiles_DELETE; // 0x340(0x08)
	struct UImage* MerlinLogo; // 0x348(0x08)
	struct UVerticalBox* My_Savings; // 0x350(0x08)
	struct UImage* NWF_Logo; // 0x358(0x08)
	struct UWBP_RichTextLabel_C* PlatinumAmount; // 0x360(0x08)
	struct UWBP_RichTextLabel_C* PlatinumLabel; // 0x368(0x08)
	struct UWBP_RichTextLabel_C* SuppliesHeading; // 0x370(0x08)
	struct UWidgetSwitcher* TabSwitcher; // 0x378(0x08)
	struct UWBP_Wallet_TimerShield_C* Wallet_TimerShield; // 0x380(0x08)
	struct UWBP_MainButton_C* WBP_AddBooster; // 0x388(0x08)
	struct UWBP_ButtonBar_C* WBP_ButtonBar; // 0x390(0x08)
	struct UWBP_MainButton_C* WBP_BuyMoreCredits; // 0x398(0x08)
	struct UWBP_MainButton_C* WBP_BuyMorePlatinum; // 0x3a0(0x08)
	struct UWBP_MainButton_C* WBP_CheckOffers; // 0x3a8(0x08)
	struct UWBP_CloseButton_C* WBP_CloseButton_120; // 0x3b0(0x08)
	struct UWBP_RichTextLabel_C* WBP_CreditsLabel; // 0x3b8(0x08)
	struct UWBP_RichTextLabel_C* WBP_Farmira; // 0x3c0(0x08)
	struct UWBP_InfoButton_C* WBP_InfoButton; // 0x3c8(0x08)
	struct UWBP_InfoButton_C* WBP_InfoButton_2; // 0x3d0(0x08)
	struct UWBP_InfoButton_C* WBP_InfoButton_3; // 0x3d8(0x08)
	struct UWBP_RichTextLabel_C* WBP_MashMedia; // 0x3e0(0x08)
	struct UWBP_RichTextLabel_C* WBP_MaterialsValue_Farmira; // 0x3e8(0x08)
	struct UWBP_RichTextLabel_C* WBP_MaterialsValue_MashMedia; // 0x3f0(0x08)
	struct UWBP_RichTextLabel_C* WBP_MaterialsValue_NWF; // 0x3f8(0x08)
	struct UWBP_RichTextLabel_C* WBP_NWF; // 0x400(0x08)
	struct UWBP_RichTextLabel_C* WBP_RichTextLabel; // 0x408(0x08)
	struct FString TooltipStr; // 0x410(0x10)
	struct UMenuAnchor* MenuAnchor; // 0x420(0x08)
	struct TArray<enum class EHWVendor> AllVendors; // 0x428(0x10)
	struct TArray<enum class EHWRarity> AllRarities; // 0x438(0x10)
	struct FMulticastInlineDelegate CloseCurrenciesPanelClicked; // 0x448(0x10)
	struct TArray<struct UImage*> CorporationsLogo; // 0x458(0x10)

	struct UWidget* CreateTooltip_CorporationSupplies(); // Function WBP_Currencies_Panel.WBP_Currencies_Panel_C.CreateTooltip_CorporationSupplies // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	struct UWidget* Get Platinum Tool Tip(); // Function WBP_Currencies_Panel.WBP_Currencies_Panel_C.Get Platinum Tool Tip // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	struct UWidget* Create Tool Tip Excellence Points(); // Function WBP_Currencies_Panel.WBP_Currencies_Panel_C.Create Tool Tip Excellence Points // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	struct UWidget* Create Tool Tip Vouchers(); // Function WBP_Currencies_Panel.WBP_Currencies_Panel_C.Create Tool Tip Vouchers // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	struct UWidget* CreateTooltip_Rarity_Legendary(); // Function WBP_Currencies_Panel.WBP_Currencies_Panel_C.CreateTooltip_Rarity_Legendary // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	struct UWidget* CreateTooltip_Rarity_Rare(); // Function WBP_Currencies_Panel.WBP_Currencies_Panel_C.CreateTooltip_Rarity_Rare // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	struct UWidget* CreateTooltip_Rarity_Uncommon(); // Function WBP_Currencies_Panel.WBP_Currencies_Panel_C.CreateTooltip_Rarity_Uncommon // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	struct UWidget* CreateTooltip_Credits(); // Function WBP_Currencies_Panel.WBP_Currencies_Panel_C.CreateTooltip_Credits // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void CreateTooltip(struct FText InputPin, struct UWidget* Widget); // Function WBP_Currencies_Panel.WBP_Currencies_Panel_C.CreateTooltip // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void SetValueToLabel(struct UWBP_Label_C* Label, int32_t Value); // Function WBP_Currencies_Panel.WBP_Currencies_Panel_C.SetValueToLabel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	struct UWidget* GetToolTipWidget_1(); // Function WBP_Currencies_Panel.WBP_Currencies_Panel_C.GetToolTipWidget_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void OnPlayerDetailsChanged(struct FHWPlayerDetails Data); // Function WBP_Currencies_Panel.WBP_Currencies_Panel_C.OnPlayerDetailsChanged // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerMissionChanged(struct FHWPlayerMission Data); // Function WBP_Currencies_Panel.WBP_Currencies_Panel_C.OnPlayerMissionChanged // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerProgressionChanged(struct FHWPlayerProgression Data); // Function WBP_Currencies_Panel.WBP_Currencies_Panel_C.OnPlayerProgressionChanged // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerStatsChanged(struct FHWPlayerStats Data); // Function WBP_Currencies_Panel.WBP_Currencies_Panel_C.OnPlayerStatsChanged // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateContentForMaterials(); // Function WBP_Currencies_Panel.WBP_Currencies_Panel_C.UpdateContentForMaterials // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateFactionLogo(); // Function WBP_Currencies_Panel.WBP_Currencies_Panel_C.UpdateFactionLogo // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PreConstruct(bool IsDesignTime); // Function WBP_Currencies_Panel.WBP_Currencies_Panel_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerInventoryChanged(struct FHWPlayerInventory Data); // Function WBP_Currencies_Panel.WBP_Currencies_Panel_C.OnPlayerInventoryChanged // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_CloseButton_119_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(); // Function WBP_Currencies_Panel.WBP_Currencies_Panel_C.BndEvt__WBP_CloseButton_119_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_ButtonBar_K2Node_ComponentBoundEvent_0_ButtonClicked__DelegateSignature(struct FBP_NavigationBar_Item Button); // Function WBP_Currencies_Panel.WBP_Currencies_Panel_C.BndEvt__WBP_ButtonBar_K2Node_ComponentBoundEvent_0_ButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_BuyMoreCredits_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(struct UWBP_MainButton_C* Button); // Function WBP_Currencies_Panel.WBP_Currencies_Panel_C.BndEvt__WBP_BuyMoreCredits_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_BuyMorePlatinum_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(struct UWBP_MainButton_C* Button); // Function WBP_Currencies_Panel.WBP_Currencies_Panel_C.BndEvt__WBP_BuyMorePlatinum_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Currencies_Panel(int32_t EntryPoint); // Function WBP_Currencies_Panel.WBP_Currencies_Panel_C.ExecuteUbergraph_WBP_Currencies_Panel // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
	void CloseCurrenciesPanelClicked__DelegateSignature(); // Function WBP_Currencies_Panel.WBP_Currencies_Panel_C.CloseCurrenciesPanelClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

