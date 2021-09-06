// BlueprintGeneratedClass BP_DroppableMag.BP_DroppableMag_C
// Size: 0x25c (Inherited: 0x220)
struct ABP_DroppableMag_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x228(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x230(0x08)
	struct UBoxComponent* Collider; // 0x238(0x08)
	float ReloadTime; // 0x240(0x04)
	char pad_244[0x4]; // 0x244(0x04)
	struct AHWWeapon* CurrentWeapon; // 0x248(0x08)
	struct FVector TorqueVector; // 0x250(0x0c)

	void ReceiveBeginPlay(); // Function BP_DroppableMag.BP_DroppableMag_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void SpawnDroppableMag(float ReloadTime, struct AHWWeapon* CurrentWeapon); // Function BP_DroppableMag.BP_DroppableMag_C.SpawnDroppableMag // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void DestroySelfMagEvent(); // Function BP_DroppableMag.BP_DroppableMag_C.DestroySelfMagEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_BP_DroppableMag(int32_t EntryPoint); // Function BP_DroppableMag.BP_DroppableMag_C.ExecuteUbergraph_BP_DroppableMag // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

