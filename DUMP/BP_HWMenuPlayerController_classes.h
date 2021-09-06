// BlueprintGeneratedClass BP_HWMenuPlayerController.BP_HWMenuPlayerController_C
// Size: 0x670 (Inherited: 0x600)
struct ABP_HWMenuPlayerController_C : AHWMenuPlayerController {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x600(0x08)
	struct UMediaSoundComponent* VideoSoundComponent; // 0x608(0x08)
	struct TScriptInterface<None> TutorialWidget; // 0x610(0x10)
	struct FMulticastInlineDelegate LootBoxChanged; // 0x620(0x10)
	struct TScriptInterface<None> LootBoxRenderer; // 0x630(0x10)
	struct UWBP_Main_C* MainWidgetRef; // 0x640(0x08)
	struct FName LastWeaponId; // 0x648(0x08)
	struct UWBP_Armory2_Popup_Weapon_C* WeaponPopup; // 0x650(0x08)
	struct TArray<struct FName> LightingLevelsNames; // 0x658(0x10)
	struct FName CurrentLightingLevel; // 0x668(0x08)

	void GetLastVisitedMainViewId(struct FName ID); // Function BP_HWMenuPlayerController.BP_HWMenuPlayerController_C.GetLastVisitedMainViewId // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetShopItemDataForReceiver(struct FName ReceiverId, struct FHWShopItem ShopItem, bool IsAvailable, struct FBP_ShopSubsectionWithCampaignId SubsectionData); // Function BP_HWMenuPlayerController.BP_HWMenuPlayerController_C.GetShopItemDataForReceiver // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetMenuTutorial(struct TScriptInterface<None> Tutorial); // Function BP_HWMenuPlayerController.BP_HWMenuPlayerController_C.GetMenuTutorial // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void IsInMainMenu(bool InMainMenu); // Function BP_HWMenuPlayerController.BP_HWMenuPlayerController_C.IsInMainMenu // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GoToCorporation(enum class EHWFaction Corporation, enum class BPE_UIView From, struct UUserWidget* Widget); // Function BP_HWMenuPlayerController.BP_HWMenuPlayerController_C.GoToCorporation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetLastViewedWeapon(struct FName WeaponID); // Function BP_HWMenuPlayerController.BP_HWMenuPlayerController_C.GetLastViewedWeapon // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void AssignMainWidget(struct UWBP_Main_C* MainWidget); // Function BP_HWMenuPlayerController.BP_HWMenuPlayerController_C.AssignMainWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GoToAccessLevel(int32_t Level); // Function BP_HWMenuPlayerController.BP_HWMenuPlayerController_C.GoToAccessLevel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GoToMainTab(struct FName Tab); // Function BP_HWMenuPlayerController.BP_HWMenuPlayerController_C.GoToMainTab // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void FocusMainWidget(); // Function BP_HWMenuPlayerController.BP_HWMenuPlayerController_C.FocusMainWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GoToArmoryItem(struct UHWArmoryItem* ArmoryItem, struct UHWArmoryWeaponItem* WeaponItem, struct FText Title); // Function BP_HWMenuPlayerController.BP_HWMenuPlayerController_C.GoToArmoryItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ReceiveBeginPlay(); // Function BP_HWMenuPlayerController.BP_HWMenuPlayerController_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void GoToView(enum class BPE_UIView View, enum class BPE_UIMenuVisibility MenuVisibility); // Function BP_HWMenuPlayerController.BP_HWMenuPlayerController_C.GoToView // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetMenuVisibility(enum class BPE_UIMenuVisibility Visibility); // Function BP_HWMenuPlayerController.BP_HWMenuPlayerController_C.SetMenuVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GoToShopItemDetails(struct FHWShopItem ShopItem, struct FString SubsectionId, struct FString CampaignId, bool BundleItem, int32_t OpenedIndex); // Function BP_HWMenuPlayerController.BP_HWMenuPlayerController_C.GoToShopItemDetails // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GoToLoadout(struct FString LoadoutName); // Function BP_HWMenuPlayerController.BP_HWMenuPlayerController_C.GoToLoadout // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GoToWeaponView(struct FString WeaponID, struct FText Title); // Function BP_HWMenuPlayerController.BP_HWMenuPlayerController_C.GoToWeaponView // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GoToShopCategory(struct FString Category); // Function BP_HWMenuPlayerController.BP_HWMenuPlayerController_C.GoToShopCategory // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetMenuFooter(enum class BPE_UIView View); // Function BP_HWMenuPlayerController.BP_HWMenuPlayerController_C.SetMenuFooter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetLastViewedWeapon(struct FName WeaponID); // Function BP_HWMenuPlayerController.BP_HWMenuPlayerController_C.SetLastViewedWeapon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetHeaderFooterVisibility(bool IsVisible); // Function BP_HWMenuPlayerController.BP_HWMenuPlayerController_C.SetHeaderFooterVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ScrollShopCategoryToIndex(struct FString Category, int32_t Index); // Function BP_HWMenuPlayerController.BP_HWMenuPlayerController_C.ScrollShopCategoryToIndex // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GoToArmoryWeaponView(struct UHWArmoryWeaponModel* WeaponModel, bool GotoParamVIew, enum class EHWWeaponPartType ZoomToPartType); // Function BP_HWMenuPlayerController.BP_HWMenuPlayerController_C.GoToArmoryWeaponView // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_BP_HWMenuPlayerController(int32_t EntryPoint); // Function BP_HWMenuPlayerController.BP_HWMenuPlayerController_C.ExecuteUbergraph_BP_HWMenuPlayerController // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
	void LootBoxChanged__DelegateSignature(); // Function BP_HWMenuPlayerController.BP_HWMenuPlayerController_C.LootBoxChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

