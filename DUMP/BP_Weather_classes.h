// BlueprintGeneratedClass BP_Weather.BP_Weather_C
// Size: 0x25c (Inherited: 0x220)
struct ABP_Weather_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UArrowComponent* GenerealWindDirection; // 0x228(0x08)
	struct UArrowComponent* WindDirection; // 0x230(0x08)
	struct USceneComponent* Scene; // 0x238(0x08)
	struct FVector WindDirectionTarget; // 0x240(0x0c)
	float TargetStrength; // 0x24c(0x04)
	float WindInterpSpeed; // 0x250(0x04)
	float CurrentWindStrength; // 0x254(0x04)
	float RandomAngle; // 0x258(0x04)

	void OnRep_WindDirectionTarget(); // Function BP_Weather.BP_Weather_C.OnRep_WindDirectionTarget // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UserConstructionScript(); // Function BP_Weather.BP_Weather_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void RandomWind(); // Function BP_Weather.BP_Weather_C.RandomWind // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void NiagaraParams(); // Function BP_Weather.BP_Weather_C.NiagaraParams // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ReceiveTick(float DeltaSeconds); // Function BP_Weather.BP_Weather_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ReceiveBeginPlay(); // Function BP_Weather.BP_Weather_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_BP_Weather(int32_t EntryPoint); // Function BP_Weather.BP_Weather_C.ExecuteUbergraph_BP_Weather // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

