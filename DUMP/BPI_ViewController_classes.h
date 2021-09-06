// BlueprintGeneratedClass BPI_ViewController.BPI_ViewController_C
// Size: 0x28 (Inherited: 0x28)
struct UBPI_ViewController_C : UInterface {

	void GetLastVisitedMainViewId(struct FName ID); // Function BPI_ViewController.BPI_ViewController_C.GetLastVisitedMainViewId // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GoToArmoryWeaponView(struct UHWArmoryWeaponModel* WeaponModel, bool GotoParamVIew, enum class EHWWeaponPartType ZoomToPartType); // Function BPI_ViewController.BPI_ViewController_C.GoToArmoryWeaponView // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetShopItemDataForReceiver(struct FName ReceiverId, struct FHWShopItem ShopItem, bool IsAvailable, struct FBP_ShopSubsectionWithCampaignId SubsectionData); // Function BPI_ViewController.BPI_ViewController_C.GetShopItemDataForReceiver // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ScrollShopCategoryToIndex(struct FString Category, int32_t Index); // Function BPI_ViewController.BPI_ViewController_C.ScrollShopCategoryToIndex // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetHeaderFooterVisibility(bool IsVisible); // Function BPI_ViewController.BPI_ViewController_C.SetHeaderFooterVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetLastViewedWeapon(struct FName WeaponID); // Function BPI_ViewController.BPI_ViewController_C.SetLastViewedWeapon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetMenuFooter(enum class BPE_UIView View); // Function BPI_ViewController.BPI_ViewController_C.SetMenuFooter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetMenuTutorial(struct TScriptInterface<None> Tutorial); // Function BPI_ViewController.BPI_ViewController_C.GetMenuTutorial // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void IsInMainMenu(bool InMainMenu); // Function BPI_ViewController.BPI_ViewController_C.IsInMainMenu // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GoToArmoryItem(struct UHWArmoryItem* ArmoryItem, struct UHWArmoryWeaponItem* WeaponItem, struct FText Title); // Function BPI_ViewController.BPI_ViewController_C.GoToArmoryItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GoToWeaponView(struct FString WeaponID, struct FText Title); // Function BPI_ViewController.BPI_ViewController_C.GoToWeaponView // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GoToLoadout(struct FString LoadoutName); // Function BPI_ViewController.BPI_ViewController_C.GoToLoadout // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetMenuVisibility(enum class BPE_UIMenuVisibility Visibility); // Function BPI_ViewController.BPI_ViewController_C.SetMenuVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetLastViewedWeapon(struct FName WeaponID); // Function BPI_ViewController.BPI_ViewController_C.GetLastViewedWeapon // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void FocusMainWidget(); // Function BPI_ViewController.BPI_ViewController_C.FocusMainWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GoToMainTab(struct FName Tab); // Function BPI_ViewController.BPI_ViewController_C.GoToMainTab // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GoToShopItemDetails(struct FHWShopItem ShopItem, struct FString SubsectionId, struct FString CampaignId, bool BundleItem, int32_t OpenedIndex); // Function BPI_ViewController.BPI_ViewController_C.GoToShopItemDetails // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GoToShopCategory(struct FString Category); // Function BPI_ViewController.BPI_ViewController_C.GoToShopCategory // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GoToView(enum class BPE_UIView View, enum class BPE_UIMenuVisibility MenuVisibility); // Function BPI_ViewController.BPI_ViewController_C.GoToView // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GoToCorporation(enum class EHWFaction Corporation, enum class BPE_UIView From, struct UUserWidget* Widget); // Function BPI_ViewController.BPI_ViewController_C.GoToCorporation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GoToAccessLevel(int32_t Level); // Function BPI_ViewController.BPI_ViewController_C.GoToAccessLevel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

