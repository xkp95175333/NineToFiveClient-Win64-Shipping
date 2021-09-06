// BlueprintGeneratedClass BP_StaffCredits_Companies.BP_StaffCredits_Companies_C
// Size: 0x80 (Inherited: 0x28)
struct UBP_StaffCredits_Companies_C : UObject {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x28(0x08)
	struct TMap<struct FString, struct UBP_StaffCredits_DepartmentalTeam_C*> CompanyToDepartmentalTeams; // 0x30(0x50)

	void AddMember(struct FString Company, struct FDS_StaffCredits_TeamMember Member); // Function BP_StaffCredits_Companies.BP_StaffCredits_Companies_C.AddMember // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_BP_StaffCredits_Companies(int32_t EntryPoint); // Function BP_StaffCredits_Companies.BP_StaffCredits_Companies_C.ExecuteUbergraph_BP_StaffCredits_Companies // (Final|UbergraphFunction) // @ game+0x13c4ca0
};

