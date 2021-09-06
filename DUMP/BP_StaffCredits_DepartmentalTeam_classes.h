// BlueprintGeneratedClass BP_StaffCredits_DepartmentalTeam.BP_StaffCredits_DepartmentalTeam_C
// Size: 0x80 (Inherited: 0x28)
struct UBP_StaffCredits_DepartmentalTeam_C : UObject {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x28(0x08)
	struct TMap<struct FString, struct UBP_Credits_Team_C*> DepartmentToMembers; // 0x30(0x50)

	void AddMemberToDepartment(struct FString Department, struct FDS_StaffCredits_TeamMember Member); // Function BP_StaffCredits_DepartmentalTeam.BP_StaffCredits_DepartmentalTeam_C.AddMemberToDepartment // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_BP_StaffCredits_DepartmentalTeam(int32_t EntryPoint); // Function BP_StaffCredits_DepartmentalTeam.BP_StaffCredits_DepartmentalTeam_C.ExecuteUbergraph_BP_StaffCredits_DepartmentalTeam // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

