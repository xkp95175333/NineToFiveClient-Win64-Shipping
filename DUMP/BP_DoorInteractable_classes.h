// BlueprintGeneratedClass BP_DoorInteractable.BP_DoorInteractable_C
// Size: 0x290 (Inherited: 0x220)
struct ABP_DoorInteractable_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UBoxComponent* Box; // 0x228(0x08)
	struct UStaticMeshComponent* RevolvingDoor; // 0x230(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x238(0x08)
	struct UHWDestructibleComponent* HWDestructible; // 0x240(0x08)
	struct UBP_InteractionComponent_ForAll_C* BP_InteractionComponent_ForAll; // 0x248(0x08)
	float DoorTimeline_RotationMultiplier_11BCC64F4CD6AAF51E2A3780908D49A5; // 0x250(0x04)
	enum class ETimelineDirection DoorTimeline__Direction_11BCC64F4CD6AAF51E2A3780908D49A5; // 0x254(0x01)
	char pad_255[0x3]; // 0x255(0x03)
	struct UTimelineComponent* DoorTimeline; // 0x258(0x08)
	struct UAkAudioEvent* DoorDestroySound; // 0x260(0x08)
	bool IsAnimating; // 0x268(0x01)
	char pad_269[0x3]; // 0x269(0x03)
	struct FRotator CurrentRotation; // 0x26c(0x0c)
	struct ABP_Door_W_Handle_300cm_150cm_Destructible_C* DestructibleDoorRef; // 0x278(0x08)
	int32_t OpenState; // 0x280(0x04)
	struct FRotator AnimationStartRotation; // 0x284(0x0c)

	void OnRep_OpenState(); // Function BP_DoorInteractable.BP_DoorInteractable_C.OnRep_OpenState // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PlaySound(bool IsOpen); // Function BP_DoorInteractable.BP_DoorInteractable_C.PlaySound // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void DoorTimeline__FinishedFunc(); // Function BP_DoorInteractable.BP_DoorInteractable_C.DoorTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x13c4ca0
	void DoorTimeline__UpdateFunc(); // Function BP_DoorInteractable.BP_DoorInteractable_C.DoorTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__RevolvingDoor_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult Hit); // Function BP_DoorInteractable.BP_DoorInteractable_C.BndEvt__RevolvingDoor_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__BP_InteractionComponent_ForAll_K2Node_ComponentBoundEvent_3_HWInteractionDelegate__DelegateSignature(struct AHWCharacter* Character); // Function BP_DoorInteractable.BP_DoorInteractable_C.BndEvt__BP_InteractionComponent_ForAll_K2Node_ComponentBoundEvent_3_HWInteractionDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__HWDestructible_K2Node_ComponentBoundEvent_4_HWDestructibleHitDelegate__DelegateSignature(struct AActor* Instigator, struct FHitResult Hit, struct AActor* DamageDealer, bool Destroyed, int32_t Damage, enum class EHWDamageType DamageType); // Function BP_DoorInteractable.BP_DoorInteractable_C.BndEvt__HWDestructible_K2Node_ComponentBoundEvent_4_HWDestructibleHitDelegate__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void DestroyDoor_Client(struct FHitResult Hit, struct AActor* DamageDealer); // Function BP_DoorInteractable.BP_DoorInteractable_C.DestroyDoor_Client // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void DoorStateChanged(); // Function BP_DoorInteractable.BP_DoorInteractable_C.DoorStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_BP_DoorInteractable(int32_t EntryPoint); // Function BP_DoorInteractable.BP_DoorInteractable_C.ExecuteUbergraph_BP_DoorInteractable // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

