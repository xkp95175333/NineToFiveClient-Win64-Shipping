// BlueprintGeneratedClass BP_Walk_RandomPerson.BP_Walk_RandomPerson_C
// Size: 0x290 (Inherited: 0x220)
struct ABP_Walk_RandomPerson_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UArrowComponent* Arrow; // 0x228(0x08)
	struct USkeletalMeshComponent* Mesh; // 0x230(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x238(0x08)
	float Walk_Progress_1DFEAF0A41E6599336E56CAB5C55E589; // 0x240(0x04)
	enum class ETimelineDirection Walk__Direction_1DFEAF0A41E6599336E56CAB5C55E589; // 0x244(0x01)
	char pad_245[0x3]; // 0x245(0x03)
	struct UTimelineComponent* Walk; // 0x248(0x08)
	float WalkDistance; // 0x250(0x04)
	float StartDelayMin; // 0x254(0x04)
	float StartDelayMax; // 0x258(0x04)
	char pad_25C[0x4]; // 0x25c(0x04)
	struct TArray<struct USkeletalMesh*> MaleMeshesArray; // 0x260(0x10)
	bool IsMale; // 0x270(0x01)
	char pad_271[0x7]; // 0x271(0x07)
	struct TArray<struct USkeletalMesh*> FemaleMeshesArray; // 0x278(0x10)
	bool IsEnabled; // 0x288(0x01)
	char pad_289[0x3]; // 0x289(0x03)
	float RandPlayRate; // 0x28c(0x04)

	void Walk__FinishedFunc(); // Function BP_Walk_RandomPerson.BP_Walk_RandomPerson_C.Walk__FinishedFunc // (BlueprintEvent) // @ game+0x13c4ca0
	void Walk__UpdateFunc(); // Function BP_Walk_RandomPerson.BP_Walk_RandomPerson_C.Walk__UpdateFunc // (BlueprintEvent) // @ game+0x13c4ca0
	void WalkTheMan(); // Function BP_Walk_RandomPerson.BP_Walk_RandomPerson_C.WalkTheMan // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void RandomizeChar(); // Function BP_Walk_RandomPerson.BP_Walk_RandomPerson_C.RandomizeChar // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ReceiveBeginPlay(); // Function BP_Walk_RandomPerson.BP_Walk_RandomPerson_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_BP_Walk_RandomPerson(int32_t EntryPoint); // Function BP_Walk_RandomPerson.BP_Walk_RandomPerson_C.ExecuteUbergraph_BP_Walk_RandomPerson // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

