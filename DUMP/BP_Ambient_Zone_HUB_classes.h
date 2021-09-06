// BlueprintGeneratedClass BP_Ambient_Zone_HUB.BP_Ambient_Zone_HUB_C
// Size: 0x240 (Inherited: 0x220)
struct ABP_Ambient_Zone_HUB_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UBoxComponent* Ambient_Zone; // 0x228(0x08)
	struct UAkComponent* Play_City_Hum_Rnd; // 0x230(0x08)
	struct ABP_Weather_C* WeatherBlueprint; // 0x238(0x08)

	void get weather blueprint(struct ABP_Weather_C* WeatherBlueprint); // Function BP_Ambient_Zone_HUB.BP_Ambient_Zone_HUB_C.get weather blueprint // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void ReceiveBeginPlay(); // Function BP_Ambient_Zone_HUB.BP_Ambient_Zone_HUB_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void ReceiveTick(float DeltaSeconds); // Function BP_Ambient_Zone_HUB.BP_Ambient_Zone_HUB_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_BP_Ambient_Zone_HUB(int32_t EntryPoint); // Function BP_Ambient_Zone_HUB.BP_Ambient_Zone_HUB_C.ExecuteUbergraph_BP_Ambient_Zone_HUB // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

