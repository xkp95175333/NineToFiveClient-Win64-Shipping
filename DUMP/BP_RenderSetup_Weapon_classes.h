// BlueprintGeneratedClass BP_RenderSetup_Weapon.BP_RenderSetup_Weapon_C
// Size: 0x260 (Inherited: 0x228)
struct ABP_RenderSetup_Weapon_C : AHWImageRendererSetup {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x228(0x08)
	struct UDirectionalLightComponent* DirectionalLightKey; // 0x230(0x08)
	struct UDirectionalLightComponent* DirectionalLightFill; // 0x238(0x08)
	struct UHWSceneCaptureComponent2D* SceneCapture_Alpha; // 0x240(0x08)
	struct UStaticMeshComponent* Preview_Mesh; // 0x248(0x08)
	struct UHWSceneCaptureComponent2D* SceneCapture_Color; // 0x250(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x258(0x08)

	void GetMainCaptureComponent(struct USceneCaptureComponent2D* Comp); // Function BP_RenderSetup_Weapon.BP_RenderSetup_Weapon_C.GetMainCaptureComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetRenderTargets(struct UTextureRenderTarget2D* Color, struct UTextureRenderTarget2D* Alpha); // Function BP_RenderSetup_Weapon.BP_RenderSetup_Weapon_C.SetRenderTargets // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_BP_RenderSetup_Weapon(int32_t EntryPoint); // Function BP_RenderSetup_Weapon.BP_RenderSetup_Weapon_C.ExecuteUbergraph_BP_RenderSetup_Weapon // (Final|UbergraphFunction) // @ game+0x13c4ca0
};

