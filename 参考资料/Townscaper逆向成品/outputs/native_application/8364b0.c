// RVA 0x8364b0 | Os.Utils.ExtraMath$$Encapsulate
// PDB: ExtraMath_Encapsulate_mED29E896A8CCE990053CB340424DD9115BBE9F90
// Body: [[108364b0, 10836509]]
// Direct callees:
// 10a43fb0 Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775
// 10a44170 Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14

Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 __cdecl
ExtraMath_Encapsulate_mED29E896A8CCE990053CB340424DD9115BBE9F90
          (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 param_1,float param_2,
          MethodInfo *param_3)

{
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar1;
  float fVar2;
  float fVar3;

  fVar2 = Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14
                    (param_1.___x_0,param_2,(MethodInfo *)0x0);
  fVar3 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775
                    (param_1.___y_1,param_2,(MethodInfo *)0x0);
  VVar1.___y_1 = fVar3;
  VVar1.___x_0 = fVar2;
  return VVar1;
}
