// BlueprintGeneratedClass ALS_Camera_BPI.ALS_Camera_BPI_C
// Size: 0x28 (Inherited: 0x28)
struct UALS_Camera_BPI_C : UInterface {

	void BPI_Get_3P_TraceParams(struct FVector TraceOrigin, float TraceRadius, enum class ETraceTypeQuery TraceChannel); // Function ALS_Camera_BPI.ALS_Camera_BPI_C.BPI_Get_3P_TraceParams // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	struct FTransform BPI_Get_3P_PivotTarget(); // Function ALS_Camera_BPI.ALS_Camera_BPI_C.BPI_Get_3P_PivotTarget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	struct FVector BPI_Get_FP_CameraTarget(); // Function ALS_Camera_BPI.ALS_Camera_BPI_C.BPI_Get_FP_CameraTarget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BPI_Get_CameraParameters(float TP_FOV, float FP_FOV, bool RightShoulder); // Function ALS_Camera_BPI.ALS_Camera_BPI_C.BPI_Get_CameraParameters // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

