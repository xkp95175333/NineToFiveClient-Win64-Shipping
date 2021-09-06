// BlueprintGeneratedClass BP_Mission_Item_Data.BP_Mission_Item_Data_C
// Size: 0xc2 (Inherited: 0x28)
struct UBP_Mission_Item_Data_C : UObject {
	struct FHWMission Mission; // 0x28(0x98)
	bool Enabled; // 0xc0(0x01)
	bool WeekendPromotion; // 0xc1(0x01)

	void GetMissionId(struct FString ID); // Function BP_Mission_Item_Data.BP_Mission_Item_Data_C.GetMissionId // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void Initialize(struct FHWMission Mission, bool Enabled, bool bWeekendPromotion); // Function BP_Mission_Item_Data.BP_Mission_Item_Data_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

