// BlueprintGeneratedClass BP_RenderSetup_ResultsTeam.BP_RenderSetup_ResultsTeam_C
// Size: 0x268 (Inherited: 0x228)
struct ABP_RenderSetup_ResultsTeam_C : AHWImageRendererSetup {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x228(0x08)
	struct UHWSceneCaptureComponent2D* SceneCapture_Alpha; // 0x230(0x08)
	struct UArrowComponent* Spawn3; // 0x238(0x08)
	struct UArrowComponent* Spawn2; // 0x240(0x08)
	struct UArrowComponent* Spawn1; // 0x248(0x08)
	struct UDirectionalLightComponent* DirectionalLight; // 0x250(0x08)
	struct UHWSceneCaptureComponent2D* SceneCapture_Color; // 0x258(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x260(0x08)

	void SpawnCharacters(struct TArray<struct FHWLoadoutData> Loadouts); // Function BP_RenderSetup_ResultsTeam.BP_RenderSetup_ResultsTeam_C.SpawnCharacters // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetRenderTargets(struct UTextureRenderTarget2D* Color, struct UTextureRenderTarget2D* Alpha); // Function BP_RenderSetup_ResultsTeam.BP_RenderSetup_ResultsTeam_C.SetRenderTargets // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_BP_RenderSetup_ResultsTeam(int32_t EntryPoint); // Function BP_RenderSetup_ResultsTeam.BP_RenderSetup_ResultsTeam_C.ExecuteUbergraph_BP_RenderSetup_ResultsTeam // (Final|UbergraphFunction) // @ game+0x13c4ca0
};

