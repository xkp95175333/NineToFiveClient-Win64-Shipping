// BlueprintGeneratedClass Mainmenu.Mainmenu_C
// Size: 0x2a0 (Inherited: 0x228)
struct AMainmenu_C : ALevelScriptActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x228(0x08)
	float Animated_Crafting_PostProcessOutline_BE720E19461FFCCCFB5AC1BEFE050326; // 0x230(0x04)
	float Animated_Crafting_CraftingProgress_BE720E19461FFCCCFB5AC1BEFE050326; // 0x234(0x04)
	enum class ETimelineDirection Animated_Crafting__Direction_BE720E19461FFCCCFB5AC1BEFE050326; // 0x238(0x01)
	char pad_239[0x7]; // 0x239(0x07)
	struct UTimelineComponent* Animated_Crafting; // 0x240(0x08)
	struct UUserWidget* LoginWidget; // 0x248(0x08)
	struct UUserWidget* MainWidget; // 0x250(0x08)
	struct UWBP_NotificationSplash_C* NotificationScreen; // 0x258(0x08)
	struct AHWWeapon* CurrentWeaponInstance; // 0x260(0x08)
	struct AActor* WeaponRoot; // 0x268(0x08)
	struct UShapeComponent* WeaponConstraints; // 0x270(0x08)
	struct UMaterialInterface* WeaponBlueprintMaterial; // 0x278(0x08)
	enum class BPE_MenuRenderView CurrentView; // 0x280(0x01)
	char pad_281[0x7]; // 0x281(0x07)
	struct ABP_ShopWeaponView_C* BP_ShopWeaponView_2_ExecuteUbergraph_Mainmenu_RefProperty; // 0x288(0x08)
	struct ABP_ShopArmorView_C* BP_ShopArmorView_6_ExecuteUbergraph_Mainmenu_RefProperty; // 0x290(0x08)
	struct ABP_AddHoloElements_Armory_C* BP_AddHoloElements_Armory_2_EdGraph_5_RefProperty; // 0x298(0x08)

	void GetScreenPositionForCharacter(int32_t CharacterIndex, struct FVector2D ScreenPosition); // Function Mainmenu.Mainmenu_C.GetScreenPositionForCharacter // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetScreenPositionForCustomizationSlot(enum class BPE_Customization_Slot_Type Slot, struct FVector2D ScreenPosition); // Function Mainmenu.Mainmenu_C.GetScreenPositionForCustomizationSlot // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetSpawnedWeapon(struct AHWWeapon* Weapon); // Function Mainmenu.Mainmenu_C.GetSpawnedWeapon // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetWeaponCameraComponent(struct UBP_WeaponCameraComponent_C* Component); // Function Mainmenu.Mainmenu_C.GetWeaponCameraComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ShouldInstantlyLogin(bool InstantLogin); // Function Mainmenu.Mainmenu_C.ShouldInstantlyLogin // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetPartyCharacter(int32_t CharIndex, struct ABP_LoadOutCharacter_C* Character); // Function Mainmenu.Mainmenu_C.GetPartyCharacter // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void AddHologramElements(bool NewParam, bool NewParam1, bool NewParam2, bool NewParam3); // Function Mainmenu.Mainmenu_C.AddHologramElements // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void AssignMaterialsToBlueprintWeapon(struct AHWWeapon* Weapon); // Function Mainmenu.Mainmenu_C.AssignMaterialsToBlueprintWeapon // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void DoClearWeapon(); // Function Mainmenu.Mainmenu_C.DoClearWeapon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void DoSpawnWeapon(struct FHWWeaponInfo WeaponInfo, struct FName BlueprintWeaponPartId); // Function Mainmenu.Mainmenu_C.DoSpawnWeapon // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void FindActorWithTag(struct AActor* ActorClass, struct FName Tag, struct AActor* OutActor); // Function Mainmenu.Mainmenu_C.FindActorWithTag // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void ShowSplashScreen(); // Function Mainmenu.Mainmenu_C.ShowSplashScreen // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ShowNetworkError(); // Function Mainmenu.Mainmenu_C.ShowNetworkError // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ShowMatchResults(); // Function Mainmenu.Mainmenu_C.ShowMatchResults // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ShouldGoToLoginScreen(bool Result); // Function Mainmenu.Mainmenu_C.ShouldGoToLoginScreen // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void Animated_Crafting__FinishedFunc(); // Function Mainmenu.Mainmenu_C.Animated_Crafting__FinishedFunc // (BlueprintEvent) // @ game+0x13c4ca0
	void Animated_Crafting__UpdateFunc(); // Function Mainmenu.Mainmenu_C.Animated_Crafting__UpdateFunc // (BlueprintEvent) // @ game+0x13c4ca0
	void OnLoggedIn(struct FString SessionId); // Function Mainmenu.Mainmenu_C.OnLoggedIn // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnCanReconnectToMatch(); // Function Mainmenu.Mainmenu_C.OnCanReconnectToMatch // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ReceiveBeginPlay(); // Function Mainmenu.Mainmenu_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void RenderShopWeaponItem(enum class EHWWeaponPartType ItemType, struct FName PartId); // Function Mainmenu.Mainmenu_C.RenderShopWeaponItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnNetworkErrorDialogClosed(bool Result); // Function Mainmenu.Mainmenu_C.OnNetworkErrorDialogClosed // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ContinueToLogin(); // Function Mainmenu.Mainmenu_C.ContinueToLogin // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetActiveView(enum class BPE_MenuRenderView NewView); // Function Mainmenu.Mainmenu_C.SetActiveView // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetCamera(struct AActor* Camera); // Function Mainmenu.Mainmenu_C.SetCamera // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void RenderShopArmorItem(enum class EHWArmorType ItemType, struct FName ArmorId); // Function Mainmenu.Mainmenu_C.RenderShopArmorItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetLoadoutVisible(bool Visible, enum class ELoadoutCharacterSelection Affects); // Function Mainmenu.Mainmenu_C.SetLoadoutVisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ShowMyTeam(); // Function Mainmenu.Mainmenu_C.ShowMyTeam // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SpawnWeapon(struct FHWWeaponInfo Info, enum class EHWWeaponPartType PreviewPart, struct FName PreviewPartId, struct FName PreviewCosmeticId); // Function Mainmenu.Mainmenu_C.SpawnWeapon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ClearWeapon(); // Function Mainmenu.Mainmenu_C.ClearWeapon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ShowOnlyMyCharacter(); // Function Mainmenu.Mainmenu_C.ShowOnlyMyCharacter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetWeaponRotation(struct FRotator Rotation); // Function Mainmenu.Mainmenu_C.SetWeaponRotation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnWholePartyReady(); // Function Mainmenu.Mainmenu_C.OnWholePartyReady // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void EquipLoadout(int32_t CharIndex, struct FHWPlayerPublicProfile PublicProfile, struct FString BackendPlayerId, bool Preview); // Function Mainmenu.Mainmenu_C.EquipLoadout // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnUserStoreFailed(); // Function Mainmenu.Mainmenu_C.OnUserStoreFailed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void SpawnBlueprintWeapon(struct FName PartId); // Function Mainmenu.Mainmenu_C.SpawnBlueprintWeapon // (HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void SetWeaponVisible(bool Visible); // Function Mainmenu.Mainmenu_C.SetWeaponVisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnUserStored(); // Function Mainmenu.Mainmenu_C.OnUserStored // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnUserLoadFailed(struct FString SessionIdLoadedUser); // Function Mainmenu.Mainmenu_C.OnUserLoadFailed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnUserLoaded(struct FString SessionIdLoadedUser); // Function Mainmenu.Mainmenu_C.OnUserLoaded // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnUpdateRequired(); // Function Mainmenu.Mainmenu_C.OnUpdateRequired // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void SetCameraWithBlend(struct AActor* Camera, float BlendTime); // Function Mainmenu.Mainmenu_C.SetCameraWithBlend // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeamInviteAcceptProcessed(bool Success, enum class EHWErrorMessage ErrorMessage); // Function Mainmenu.Mainmenu_C.OnTeamInviteAcceptProcessed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnShopCampaignsLoaded(); // Function Mainmenu.Mainmenu_C.OnShopCampaignsLoaded // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnServerPingsDone(); // Function Mainmenu.Mainmenu_C.OnServerPingsDone // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnReconnectableMatchLost(); // Function Mainmenu.Mainmenu_C.OnReconnectableMatchLost // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMatchStatusWaiting(); // Function Mainmenu.Mainmenu_C.OnMatchStatusWaiting // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMatchStatusStarted(); // Function Mainmenu.Mainmenu_C.OnMatchStatusStarted // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMatchStatusOpen(); // Function Mainmenu.Mainmenu_C.OnMatchStatusOpen // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void PlayCraftingAnimation(); // Function Mainmenu.Mainmenu_C.PlayCraftingAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnMatchStatusMatched(); // Function Mainmenu.Mainmenu_C.OnMatchStatusMatched // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMasterDataLoadFailed(enum class EHWErrorMessage Error, struct FString Message); // Function Mainmenu.Mainmenu_C.OnMasterDataLoadFailed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMasterDataLoaded(); // Function Mainmenu.Mainmenu_C.OnMasterDataLoaded // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnLogoutCompleted(); // Function Mainmenu.Mainmenu_C.OnLogoutCompleted // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnGetWeekInfoFailed(); // Function Mainmenu.Mainmenu_C.OnGetWeekInfoFailed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnGetWeekInfo(struct FHWWeekInfoResponse Response); // Function Mainmenu.Mainmenu_C.OnGetWeekInfo // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnFriendsListUpdated(bool Success, struct FHWFetchFriendsResponse Response); // Function Mainmenu.Mainmenu_C.OnFriendsListUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void SetPartyMemberVisible(int32_t CharIndex, bool IsVisible); // Function Mainmenu.Mainmenu_C.SetPartyMemberVisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void RenderShopWeapon(struct FName AssembledWeaponId); // Function Mainmenu.Mainmenu_C.RenderShopWeapon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void RenderShopArmor(struct FName ArmorSetId, struct FName CharacterId); // Function Mainmenu.Mainmenu_C.RenderShopArmor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ReloadUI(); // Function Mainmenu.Mainmenu_C.ReloadUI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnCanReconnectToQueue(); // Function Mainmenu.Mainmenu_C.OnCanReconnectToQueue // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_Mainmenu(int32_t EntryPoint); // Function Mainmenu.Mainmenu_C.ExecuteUbergraph_Mainmenu // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

