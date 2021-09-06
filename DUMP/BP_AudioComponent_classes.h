// BlueprintGeneratedClass BP_AudioComponent.BP_AudioComponent_C
// Size: 0xc0 (Inherited: 0xb0)
struct UBP_AudioComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	struct ABP_PlayerCharacter_Anim_C* BP_PlayerCharAnim_REF; // 0xb8(0x08)

	void ReceiveBeginPlay(); // Function BP_AudioComponent.BP_AudioComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ReceiveTick(float DeltaSeconds); // Function BP_AudioComponent.BP_AudioComponent_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_BP_AudioComponent(int32_t EntryPoint); // Function BP_AudioComponent.BP_AudioComponent_C.ExecuteUbergraph_BP_AudioComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

