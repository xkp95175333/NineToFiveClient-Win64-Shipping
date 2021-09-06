// BlueprintGeneratedClass BP_LoadoutEditView.BP_LoadoutEditView_C
// Size: 0x398 (Inherited: 0x220)
struct ABP_LoadoutEditView_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UCameraComponent* MatchResultsCamComp; // 0x228(0x08)
	struct UCameraComponent* RoundResultsCamComp; // 0x230(0x08)
	struct UCameraComponent* BackpackCamComp; // 0x238(0x08)
	struct UCameraComponent* PrematchCamComp; // 0x240(0x08)
	struct UChildActorComponent* Teammate2; // 0x248(0x08)
	struct UChildActorComponent* Teammate1; // 0x250(0x08)
	struct UStaticMeshComponent* Background; // 0x258(0x08)
	struct UChildActorComponent* PostProcessVolume; // 0x260(0x08)
	struct URectLightComponent* FillLight; // 0x268(0x08)
	struct URectLightComponent* KeyLight; // 0x270(0x08)
	struct URectLightComponent* BackLight; // 0x278(0x08)
	struct UCameraComponent* LoadoutCamComp; // 0x280(0x08)
	struct UCameraComponent* ArmorSetCamComp; // 0x288(0x08)
	struct UCameraComponent* FaceCloseUpCamComp; // 0x290(0x08)
	struct UChildActorComponent* LocalCharacter; // 0x298(0x08)
	struct UStaticMeshComponent* CurvedBackground; // 0x2a0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2a8(0x08)
	float Backpack_View_Animation_Alpha_8E74F5B94E735C986F1D08A8860A6865; // 0x2b0(0x04)
	enum class ETimelineDirection Backpack_View_Animation__Direction_8E74F5B94E735C986F1D08A8860A6865; // 0x2b4(0x01)
	char pad_2B5[0x3]; // 0x2b5(0x03)
	struct UTimelineComponent* Backpack View Animation; // 0x2b8(0x08)
	bool Rebuild; // 0x2c0(0x01)
	bool PreviewBackpackAngle; // 0x2c1(0x01)
	bool LoadoutEnvironment; // 0x2c2(0x01)
	char pad_2C3[0x1]; // 0x2c3(0x01)
	float BackpackRotation; // 0x2c4(0x04)
	float BackpackAnimTime; // 0x2c8(0x04)
	bool LoadoutEditView; // 0x2cc(0x01)
	bool ArmorSetView; // 0x2cd(0x01)
	bool FaceCloseUpView; // 0x2ce(0x01)
	bool BackpackView; // 0x2cf(0x01)
	bool RoundResultsView; // 0x2d0(0x01)
	bool MatchResultsView; // 0x2d1(0x01)
	bool PrematchView; // 0x2d2(0x01)
	char pad_2D3[0x1]; // 0x2d3(0x01)
	struct FFLoadoutCharacterSettings LocalPlayerConfig; // 0x2d4(0x10)
	struct FFLoadoutCharacterSettings Teammate1Config; // 0x2e4(0x10)
	struct FFLoadoutCharacterSettings Teammate2Config; // 0x2f4(0x10)
	char pad_304[0x4]; // 0x304(0x04)
	struct ACameraActor* FaceCloseUpCameraRef; // 0x308(0x08)
	struct ACameraActor* ArmorSetViewCameraRef; // 0x310(0x08)
	struct ACameraActor* LoadoutViewCameraRef; // 0x318(0x08)
	struct ACameraActor* PrematchViewCameraRef; // 0x320(0x08)
	struct ACameraActor* BackpackCameraRef; // 0x328(0x08)
	struct ACameraActor* RoundResultsCameraRef; // 0x330(0x08)
	struct ACameraActor* MatchResultsCameraRef; // 0x338(0x08)
	struct ACameraActor* LoadoutCamActor; // 0x340(0x08)
	struct ACameraActor* ArmorSetCamActor; // 0x348(0x08)
	struct ACameraActor* FaceCloseUpCamActor; // 0x350(0x08)
	struct ACameraActor* PrematchCamActor; // 0x358(0x08)
	enum class BPE_MenuRenderView State; // 0x360(0x01)
	char pad_361[0x7]; // 0x361(0x07)
	struct ACameraActor* CurrentCameraActor; // 0x368(0x08)
	float CameraBlendTime; // 0x370(0x04)
	float CameraBlendExp; // 0x374(0x04)
	struct ACameraActor* BackpackCamActor; // 0x378(0x08)
	struct ACameraActor* RoundResultsCamActor; // 0x380(0x08)
	struct ACameraActor* MatchResultsCamActor; // 0x388(0x08)
	struct UCameraComponent* CurrentCameraComponent; // 0x390(0x08)

	void GetScreenPositionForCharacter(int32_t CharacterIndex, struct FVector2D ScreenPosition); // Function BP_LoadoutEditView.BP_LoadoutEditView_C.GetScreenPositionForCharacter // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetSpawnedWeapon(struct AHWWeapon* Weapon); // Function BP_LoadoutEditView.BP_LoadoutEditView_C.GetSpawnedWeapon // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetWeaponCameraComponent(struct UBP_WeaponCameraComponent_C* Component); // Function BP_LoadoutEditView.BP_LoadoutEditView_C.GetWeaponCameraComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetScreenPositionForCustomizationSlot(enum class BPE_Customization_Slot_Type Slot, struct FVector2D ScreenPosition); // Function BP_LoadoutEditView.BP_LoadoutEditView_C.GetScreenPositionForCustomizationSlot // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateTeamRender(); // Function BP_LoadoutEditView.BP_LoadoutEditView_C.UpdateTeamRender // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetViewCameraComponent(int32_t Index, struct UCameraComponent* Component); // Function BP_LoadoutEditView.BP_LoadoutEditView_C.GetViewCameraComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetViewOptions(struct TArray<bool> Array); // Function BP_LoadoutEditView.BP_LoadoutEditView_C.GetViewOptions // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void UpdateCharactersAnimationPose(); // Function BP_LoadoutEditView.BP_LoadoutEditView_C.UpdateCharactersAnimationPose // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetLoadoutCharacter(int32_t CharIndex, struct ABP_LoadOutCharacter_C* LoadoutCharacter); // Function BP_LoadoutEditView.BP_LoadoutEditView_C.GetLoadoutCharacter // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	struct ACameraActor* SpawnCamera(struct UCameraComponent* Camera Component); // Function BP_LoadoutEditView.BP_LoadoutEditView_C.SpawnCamera // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	bool ShouldBlendCamera(); // Function BP_LoadoutEditView.BP_LoadoutEditView_C.ShouldBlendCamera // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void CopyCameraProperties(); // Function BP_LoadoutEditView.BP_LoadoutEditView_C.CopyCameraProperties // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UserConstructionScript(); // Function BP_LoadoutEditView.BP_LoadoutEditView_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Backpack View Animation__FinishedFunc(); // Function BP_LoadoutEditView.BP_LoadoutEditView_C.Backpack View Animation__FinishedFunc // (BlueprintEvent) // @ game+0x13c4ca0
	void Backpack View Animation__UpdateFunc(); // Function BP_LoadoutEditView.BP_LoadoutEditView_C.Backpack View Animation__UpdateFunc // (BlueprintEvent) // @ game+0x13c4ca0
	void SetPartyMemberVisible(int32_t CharIndex, bool IsVisible); // Function BP_LoadoutEditView.BP_LoadoutEditView_C.SetPartyMemberVisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Set Show Backpack(bool Value); // Function BP_LoadoutEditView.BP_LoadoutEditView_C.Set Show Backpack // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ReceiveBeginPlay(); // Function BP_LoadoutEditView.BP_LoadoutEditView_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void SetActiveView(enum class BPE_MenuRenderView NewView); // Function BP_LoadoutEditView.BP_LoadoutEditView_C.SetActiveView // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void EquipLoadout(int32_t CharIndex, struct FHWPlayerPublicProfile PublicProfile, struct FString BackendPlayerId, bool Preview); // Function BP_LoadoutEditView.BP_LoadoutEditView_C.EquipLoadout // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetWeaponVisible(bool Visible); // Function BP_LoadoutEditView.BP_LoadoutEditView_C.SetWeaponVisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void RenderShopWeaponItem(enum class EHWWeaponPartType ItemType, struct FName PartId); // Function BP_LoadoutEditView.BP_LoadoutEditView_C.RenderShopWeaponItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void RenderShopArmorItem(enum class EHWArmorType ItemType, struct FName ArmorId); // Function BP_LoadoutEditView.BP_LoadoutEditView_C.RenderShopArmorItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void RenderShopArmor(struct FName ArmorSetId, struct FName CharacterId); // Function BP_LoadoutEditView.BP_LoadoutEditView_C.RenderShopArmor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void RenderShopWeapon(struct FName AssembledWeaponId); // Function BP_LoadoutEditView.BP_LoadoutEditView_C.RenderShopWeapon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PlayCraftingAnimation(); // Function BP_LoadoutEditView.BP_LoadoutEditView_C.PlayCraftingAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SpawnCameraActors(); // Function BP_LoadoutEditView.BP_LoadoutEditView_C.SpawnCameraActors // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetWeaponRotation(struct FRotator Rotation); // Function BP_LoadoutEditView.BP_LoadoutEditView_C.SetWeaponRotation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ClearWeapon(); // Function BP_LoadoutEditView.BP_LoadoutEditView_C.ClearWeapon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SpawnWeapon(struct FHWWeaponInfo Info, enum class EHWWeaponPartType PreviewPart, struct FName PreviewPartId, struct FName PreviewCosmeticId); // Function BP_LoadoutEditView.BP_LoadoutEditView_C.SpawnWeapon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ShowMyTeam(); // Function BP_LoadoutEditView.BP_LoadoutEditView_C.ShowMyTeam // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ShowOnlyMyCharacter(); // Function BP_LoadoutEditView.BP_LoadoutEditView_C.ShowOnlyMyCharacter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void RenderLoggedPlayers(); // Function BP_LoadoutEditView.BP_LoadoutEditView_C.RenderLoggedPlayers // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetLoadoutVisible(bool Visible, enum class ELoadoutCharacterSelection Affects); // Function BP_LoadoutEditView.BP_LoadoutEditView_C.SetLoadoutVisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_BP_LoadoutEditView(int32_t EntryPoint); // Function BP_LoadoutEditView.BP_LoadoutEditView_C.ExecuteUbergraph_BP_LoadoutEditView // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

