// BlueprintGeneratedClass BP_LoadOutCharactersView_Base.BP_LoadOutCharactersView_Base_C
// Size: 0x290 (Inherited: 0x220)
struct ABP_LoadOutCharactersView_Base_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UCineCameraComponent* HubCamera; // 0x228(0x08)
	struct UChildActorComponent* Teammate2; // 0x230(0x08)
	struct UChildActorComponent* Teammate1; // 0x238(0x08)
	struct UChildActorComponent* LocalCharacter; // 0x240(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x248(0x08)
	bool Rebuild; // 0x250(0x01)
	char pad_251[0x3]; // 0x251(0x03)
	struct FFLoadoutCharacterSettings Local Player Config; // 0x254(0x10)
	struct FFLoadoutCharacterSettings Teammate 1 Config; // 0x264(0x10)
	struct FFLoadoutCharacterSettings Teammate 2 Config; // 0x274(0x10)
	enum class BPE_MenuRenderView State; // 0x284(0x01)
	char pad_285[0x3]; // 0x285(0x03)
	struct ACineCameraActor* Hub Camera Ref; // 0x288(0x08)

	void GetScreenPositionForCharacter(int32_t CharacterIndex, struct FVector2D ScreenPosition); // Function BP_LoadOutCharactersView_Base.BP_LoadOutCharactersView_Base_C.GetScreenPositionForCharacter // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetScreenPositionForCustomizationSlot(enum class BPE_Customization_Slot_Type Slot, struct FVector2D ScreenPosition); // Function BP_LoadOutCharactersView_Base.BP_LoadOutCharactersView_Base_C.GetScreenPositionForCustomizationSlot // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetSpawnedWeapon(struct AHWWeapon* Weapon); // Function BP_LoadOutCharactersView_Base.BP_LoadOutCharactersView_Base_C.GetSpawnedWeapon // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetWeaponCameraComponent(struct UBP_WeaponCameraComponent_C* Component); // Function BP_LoadOutCharactersView_Base.BP_LoadOutCharactersView_Base_C.GetWeaponCameraComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Update Characters Pose Animation(); // Function BP_LoadOutCharactersView_Base.BP_LoadOutCharactersView_Base_C.Update Characters Pose Animation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Set Camera Active(enum class BPE_MenuRenderView Camera Type, bool HasCamera); // Function BP_LoadOutCharactersView_Base.BP_LoadOutCharactersView_Base_C.Set Camera Active // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetCharacterComponents(struct TArray<struct UChildActorComponent*> Characters); // Function BP_LoadOutCharactersView_Base.BP_LoadOutCharactersView_Base_C.GetCharacterComponents // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void Copy Camera Properties(); // Function BP_LoadOutCharactersView_Base.BP_LoadOutCharactersView_Base_C.Copy Camera Properties // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Get Loadout Character(int32_t Index, struct ABP_LoadOutCharacter_C* Character); // Function BP_LoadOutCharactersView_Base.BP_LoadOutCharactersView_Base_C.Get Loadout Character // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void UserConstructionScript(); // Function BP_LoadOutCharactersView_Base.BP_LoadOutCharactersView_Base_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ShowOnlyMyCharacter(); // Function BP_LoadOutCharactersView_Base.BP_LoadOutCharactersView_Base_C.ShowOnlyMyCharacter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ShowMyTeam(); // Function BP_LoadOutCharactersView_Base.BP_LoadOutCharactersView_Base_C.ShowMyTeam // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SpawnWeapon(struct FHWWeaponInfo Info, enum class EHWWeaponPartType PreviewPart, struct FName PreviewPartId, struct FName PreviewCosmeticId); // Function BP_LoadOutCharactersView_Base.BP_LoadOutCharactersView_Base_C.SpawnWeapon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ClearWeapon(); // Function BP_LoadOutCharactersView_Base.BP_LoadOutCharactersView_Base_C.ClearWeapon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetWeaponRotation(struct FRotator Rotation); // Function BP_LoadOutCharactersView_Base.BP_LoadOutCharactersView_Base_C.SetWeaponRotation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PlayCraftingAnimation(); // Function BP_LoadOutCharactersView_Base.BP_LoadOutCharactersView_Base_C.PlayCraftingAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void RenderShopWeapon(struct FName AssembledWeaponId); // Function BP_LoadOutCharactersView_Base.BP_LoadOutCharactersView_Base_C.RenderShopWeapon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void RenderShopArmor(struct FName ArmorSetId, struct FName CharacterId); // Function BP_LoadOutCharactersView_Base.BP_LoadOutCharactersView_Base_C.RenderShopArmor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void RenderShopArmorItem(enum class EHWArmorType ItemType, struct FName ArmorId); // Function BP_LoadOutCharactersView_Base.BP_LoadOutCharactersView_Base_C.RenderShopArmorItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void RenderShopWeaponItem(enum class EHWWeaponPartType ItemType, struct FName PartId); // Function BP_LoadOutCharactersView_Base.BP_LoadOutCharactersView_Base_C.RenderShopWeaponItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetWeaponVisible(bool Visible); // Function BP_LoadOutCharactersView_Base.BP_LoadOutCharactersView_Base_C.SetWeaponVisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetActiveView(enum class BPE_MenuRenderView NewView); // Function BP_LoadOutCharactersView_Base.BP_LoadOutCharactersView_Base_C.SetActiveView // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void EquipLoadout(int32_t CharIndex, struct FHWPlayerPublicProfile PublicProfile, struct FString BackendPlayerId, bool Preview); // Function BP_LoadOutCharactersView_Base.BP_LoadOutCharactersView_Base_C.EquipLoadout // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ReceiveBeginPlay(); // Function BP_LoadOutCharactersView_Base.BP_LoadOutCharactersView_Base_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void Set Camera Enabled(bool Value); // Function BP_LoadOutCharactersView_Base.BP_LoadOutCharactersView_Base_C.Set Camera Enabled // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetPartyMemberVisible(int32_t CharIndex, bool IsVisible); // Function BP_LoadOutCharactersView_Base.BP_LoadOutCharactersView_Base_C.SetPartyMemberVisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Set Name Tags Visible(bool Visible); // Function BP_LoadOutCharactersView_Base.BP_LoadOutCharactersView_Base_C.Set Name Tags Visible // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetLoadoutVisible(bool Visible, enum class ELoadoutCharacterSelection Affects); // Function BP_LoadOutCharactersView_Base.BP_LoadOutCharactersView_Base_C.SetLoadoutVisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_BP_LoadOutCharactersView_Base(int32_t EntryPoint); // Function BP_LoadOutCharactersView_Base.BP_LoadOutCharactersView_Base_C.ExecuteUbergraph_BP_LoadOutCharactersView_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

