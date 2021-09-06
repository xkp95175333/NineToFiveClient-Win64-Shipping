// BlueprintGeneratedClass BP_MetroWagons_Animated.BP_MetroWagons_Animated_C
// Size: 0x2ac (Inherited: 0x220)
struct ABP_MetroWagons_Animated_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UParticleSystemComponent* PS_Flare1; // 0x228(0x08)
	struct UParticleSystemComponent* PS_Flare; // 0x230(0x08)
	struct USpotLightComponent* SpotLight1; // 0x238(0x08)
	struct UAkComponent* Play_platform_01_Rev; // 0x240(0x08)
	struct UAkComponent* AkMetro_Sound_Leave; // 0x248(0x08)
	struct UAkComponent* AkmetroSounds_Start; // 0x250(0x08)
	struct USpotLightComponent* SpotLight; // 0x258(0x08)
	struct UStaticMeshComponent* Wagons_Mesh; // 0x260(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x268(0x08)
	float Metro_Wait_Anim_Progress_7CE5D83D4578251747C1C5B25DBBCEAA; // 0x270(0x04)
	enum class ETimelineDirection Metro_Wait_Anim__Direction_7CE5D83D4578251747C1C5B25DBBCEAA; // 0x274(0x01)
	char pad_275[0x3]; // 0x275(0x03)
	struct UTimelineComponent* Metro_Wait_Anim; // 0x278(0x08)
	float Metro_Out_Anim_Progress_F9CF3DCD493FD15295BE85BDC09DE518; // 0x280(0x04)
	enum class ETimelineDirection Metro_Out_Anim__Direction_F9CF3DCD493FD15295BE85BDC09DE518; // 0x284(0x01)
	char pad_285[0x3]; // 0x285(0x03)
	struct UTimelineComponent* Metro_Out_Anim; // 0x288(0x08)
	float Metro_In_Anim_Progress_41D248B04AD9A8404FEAE295111EBB20; // 0x290(0x04)
	enum class ETimelineDirection Metro_In_Anim__Direction_41D248B04AD9A8404FEAE295111EBB20; // 0x294(0x01)
	char pad_295[0x3]; // 0x295(0x03)
	struct UTimelineComponent* Metro_In_Anim; // 0x298(0x08)
	float Start_Distance; // 0x2a0(0x04)
	float MetroTimeMin; // 0x2a4(0x04)
	float MetroTimeMax; // 0x2a8(0x04)

	void UserConstructionScript(); // Function BP_MetroWagons_Animated.BP_MetroWagons_Animated_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Metro_Wait_Anim__FinishedFunc(); // Function BP_MetroWagons_Animated.BP_MetroWagons_Animated_C.Metro_Wait_Anim__FinishedFunc // (BlueprintEvent) // @ game+0x13c4ca0
	void Metro_Wait_Anim__UpdateFunc(); // Function BP_MetroWagons_Animated.BP_MetroWagons_Animated_C.Metro_Wait_Anim__UpdateFunc // (BlueprintEvent) // @ game+0x13c4ca0
	void Metro_Out_Anim__FinishedFunc(); // Function BP_MetroWagons_Animated.BP_MetroWagons_Animated_C.Metro_Out_Anim__FinishedFunc // (BlueprintEvent) // @ game+0x13c4ca0
	void Metro_Out_Anim__UpdateFunc(); // Function BP_MetroWagons_Animated.BP_MetroWagons_Animated_C.Metro_Out_Anim__UpdateFunc // (BlueprintEvent) // @ game+0x13c4ca0
	void Metro_In_Anim__FinishedFunc(); // Function BP_MetroWagons_Animated.BP_MetroWagons_Animated_C.Metro_In_Anim__FinishedFunc // (BlueprintEvent) // @ game+0x13c4ca0
	void Metro_In_Anim__UpdateFunc(); // Function BP_MetroWagons_Animated.BP_MetroWagons_Animated_C.Metro_In_Anim__UpdateFunc // (BlueprintEvent) // @ game+0x13c4ca0
	void PlayMetroAnim(); // Function BP_MetroWagons_Animated.BP_MetroWagons_Animated_C.PlayMetroAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ReceiveBeginPlay(); // Function BP_MetroWagons_Animated.BP_MetroWagons_Animated_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_BP_MetroWagons_Animated(int32_t EntryPoint); // Function BP_MetroWagons_Animated.BP_MetroWagons_Animated_C.ExecuteUbergraph_BP_MetroWagons_Animated // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

