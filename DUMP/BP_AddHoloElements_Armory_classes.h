// BlueprintGeneratedClass BP_AddHoloElements_Armory.BP_AddHoloElements_Armory_C
// Size: 0x258 (Inherited: 0x220)
struct ABP_AddHoloElements_Armory_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x228(0x08)
	struct UChildActorComponent* Weapon; // 0x230(0x08)
	struct UMaterialInstanceDynamic* Mid; // 0x238(0x08)
	struct UMaterialInstanceDynamic* MID2; // 0x240(0x08)
	struct TArray<struct UStaticMeshComponent*> ElementsArray; // 0x248(0x10)

	void AddSquares(struct AHWWeapon* Target, float Scale, float Speed, float LineLenght, struct UStaticMesh* Mesh, float Separation Divide); // Function BP_AddHoloElements_Armory.BP_AddHoloElements_Armory_C.AddSquares // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void AddElementToSocket(struct FString ObjectName, struct FString TargetObject, struct USceneComponent* Terget, struct FName SocketName, struct UStaticMesh* Mesh, float Offset, struct FVector Scale); // Function BP_AddHoloElements_Armory.BP_AddHoloElements_Armory_C.AddElementToSocket // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void AddElements(struct AHWWeapon* Weapon); // Function BP_AddHoloElements_Armory.BP_AddHoloElements_Armory_C.AddElements // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ReceiveBeginPlay(); // Function BP_AddHoloElements_Armory.BP_AddHoloElements_Armory_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void Clear(); // Function BP_AddHoloElements_Armory.BP_AddHoloElements_Armory_C.Clear // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_BP_AddHoloElements_Armory(int32_t EntryPoint); // Function BP_AddHoloElements_Armory.BP_AddHoloElements_Armory_C.ExecuteUbergraph_BP_AddHoloElements_Armory // (Final|UbergraphFunction) // @ game+0x13c4ca0
};

