// BlueprintGeneratedClass BP_Placeholder_BulletTrail.BP_Placeholder_BulletTrail_C
// Size: 0x264 (Inherited: 0x220)
struct ABP_Placeholder_BulletTrail_C : AHWBulletTrail {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x228(0x08)
	float TracerTimeline_TracerTimeline_0071BE5C4F419387E5D47CB0B0BF5FD9; // 0x230(0x04)
	enum class ETimelineDirection TracerTimeline__Direction_0071BE5C4F419387E5D47CB0B0BF5FD9; // 0x234(0x01)
	char pad_235[0x3]; // 0x235(0x03)
	struct UTimelineComponent* TracerTimeline; // 0x238(0x08)
	struct UParticleSystemComponent* SpawnedParticle; // 0x240(0x08)
	bool hasTracer; // 0x248(0x01)
	char pad_249[0x7]; // 0x249(0x07)
	struct AActor* TracerRef; // 0x250(0x08)
	float TracerDuration; // 0x258(0x04)
	float DistanceToStartTrail; // 0x25c(0x04)
	float TracerSpeed; // 0x260(0x04)

	void TracerTimeline__FinishedFunc(); // Function BP_Placeholder_BulletTrail.BP_Placeholder_BulletTrail_C.TracerTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x13c4ca0
	void TracerTimeline__UpdateFunc(); // Function BP_Placeholder_BulletTrail.BP_Placeholder_BulletTrail_C.TracerTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x13c4ca0
	void SpawnTrail(struct FVector StartPosition, struct FVector EndPosition); // Function BP_Placeholder_BulletTrail.BP_Placeholder_BulletTrail_C.SpawnTrail // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void KillTracerAfterTimer(); // Function BP_Placeholder_BulletTrail.BP_Placeholder_BulletTrail_C.KillTracerAfterTimer // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_BP_Placeholder_BulletTrail(int32_t EntryPoint); // Function BP_Placeholder_BulletTrail.BP_Placeholder_BulletTrail_C.ExecuteUbergraph_BP_Placeholder_BulletTrail // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

