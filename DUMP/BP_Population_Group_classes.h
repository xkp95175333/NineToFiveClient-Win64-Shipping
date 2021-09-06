// BlueprintGeneratedClass BP_Population_Group.BP_Population_Group_C
// Size: 0x24c (Inherited: 0x220)
struct ABP_Population_Group_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USkeletalMeshComponent* Listening; // 0x228(0x08)
	struct USkeletalMeshComponent* Talking; // 0x230(0x08)
	struct UArrowComponent* Arrow; // 0x238(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x240(0x08)
	float ProbabiltyOfSpawning; // 0x248(0x04)

	void ReceiveBeginPlay(); // Function BP_Population_Group.BP_Population_Group_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_BP_Population_Group(int32_t EntryPoint); // Function BP_Population_Group.BP_Population_Group_C.ExecuteUbergraph_BP_Population_Group // (Final|UbergraphFunction) // @ game+0x13c4ca0
};

