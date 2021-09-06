// BlueprintGeneratedClass BPL_RenderHelpers.BPL_RenderHelpers_C
// Size: 0x28 (Inherited: 0x28)
struct UBPL_RenderHelpers_C : UBlueprintFunctionLibrary {

	void GetMainMenuRenderer(struct UObject* __WorldContext, struct TScriptInterface<None> Renderer); // Function BPL_RenderHelpers.BPL_RenderHelpers_C.GetMainMenuRenderer // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void SetLoadoutCharacterVisible(bool Visible, enum class ELoadoutCharacterSelection Affects, struct UObject* __WorldContext); // Function BPL_RenderHelpers.BPL_RenderHelpers_C.SetLoadoutCharacterVisible // (Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void RenderBackpackAngle(bool Value, struct UObject* __WorldContext); // Function BPL_RenderHelpers.BPL_RenderHelpers_C.RenderBackpackAngle // (Static|Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetArmoryWeaponCameraComponent(struct UObject* __WorldContext, struct UBP_WeaponCameraComponent_C* Component); // Function BPL_RenderHelpers.BPL_RenderHelpers_C.GetArmoryWeaponCameraComponent // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ClearArmoryWeapon(struct UObject* __WorldContext); // Function BPL_RenderHelpers.BPL_RenderHelpers_C.ClearArmoryWeapon // (Static|Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetLoadoutScreenPosition(struct UObject* __WorldContext, struct FVector2D Position); // Function BPL_RenderHelpers.BPL_RenderHelpers_C.GetLoadoutScreenPosition // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void RenderPartyMember(int32_t CharIndex, bool IsVisible, struct UObject* __WorldContext); // Function BPL_RenderHelpers.BPL_RenderHelpers_C.RenderPartyMember // (Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void RenderLoadout(int32_t CharIndex, struct FHWPlayerPublicProfile PublicProfile, struct FString BackendPlayerId, bool Preview, struct UObject* __WorldContext); // Function BPL_RenderHelpers.BPL_RenderHelpers_C.RenderLoadout // (Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void RenderMenuView(enum class BPE_MenuRenderView NewView, struct UObject* __WorldContext); // Function BPL_RenderHelpers.BPL_RenderHelpers_C.RenderMenuView // (Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void FindCameraWithTag(struct FName Tag, struct UObject* __WorldContext, struct ACameraActor* OutCamera); // Function BPL_RenderHelpers.BPL_RenderHelpers_C.FindCameraWithTag // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void FindActorWithTag(struct AActor* Actor Class, struct FName Tag, struct UObject* __WorldContext, struct AActor* OutActor); // Function BPL_RenderHelpers.BPL_RenderHelpers_C.FindActorWithTag // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetMenuRenderer(struct UObject* __WorldContext, struct TScriptInterface<None> Actor); // Function BPL_RenderHelpers.BPL_RenderHelpers_C.GetMenuRenderer // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void RenderTeam(struct TArray<struct FHWLoadoutData> Loadouts, int32_t TeamIndex, struct UObject* __WorldContext, struct UHWImageRenderer* Renderer); // Function BPL_RenderHelpers.BPL_RenderHelpers_C.RenderTeam // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void RenderWeapon(struct FHWWeaponInfo WeaponInfo, struct UObject* __WorldContext, struct UHWImageRenderer* Renderer); // Function BPL_RenderHelpers.BPL_RenderHelpers_C.RenderWeapon // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void CreateImageRenderer(struct UObject* Outer, struct UObject* __WorldContext, struct UHWImageRenderer* Renderer); // Function BPL_RenderHelpers.BPL_RenderHelpers_C.CreateImageRenderer // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void CreateRenderTargets(int32_t Width, int32_t Height, struct UObject* __WorldContext, struct UTextureRenderTarget2D* Color, struct UTextureRenderTarget2D* Alpha); // Function BPL_RenderHelpers.BPL_RenderHelpers_C.CreateRenderTargets // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

