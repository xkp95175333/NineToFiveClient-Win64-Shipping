// BlueprintGeneratedClass BP_Population_IdlePerson.BP_Population_IdlePerson_C
// Size: 0x260 (Inherited: 0x220)
struct ABP_Population_IdlePerson_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USkeletalMeshComponent* IDLE; // 0x228(0x08)
	struct UArrowComponent* Arrow; // 0x230(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x238(0x08)
	struct TArray<struct USkeletalMesh*> MaleMeshArray; // 0x240(0x10)
	struct TArray<struct USkeletalMesh*> FemaleMeshArray; // 0x250(0x10)

	void ReceiveBeginPlay(); // Function BP_Population_IdlePerson.BP_Population_IdlePerson_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_BP_Population_IdlePerson(int32_t EntryPoint); // Function BP_Population_IdlePerson.BP_Population_IdlePerson_C.ExecuteUbergraph_BP_Population_IdlePerson // (Final|UbergraphFunction) // @ game+0x13c4ca0
};

