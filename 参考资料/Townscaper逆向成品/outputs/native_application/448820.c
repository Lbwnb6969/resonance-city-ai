// RVA 0x448820 | Os.Utils.ExtraMath$$Swap<Vector3>
// PDB: ExtraMath_Swap_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m93E71FE5877C538A79407C1583CD88FF6436DFC8_gshared
// Body: [[10448820, 10448848]]
// Direct callees:

void __cdecl
ExtraMath_Swap_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m93E71FE5877C538A79407C1583CD88FF6436DFC8_gshared
          (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *param_1,
          Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *param_2,MethodInfo *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;

  fVar3 = param_2->___y_3;
  fVar1 = param_1->___z_4;
  fVar4 = param_1->___x_2;
  fVar5 = param_1->___y_3;
  fVar2 = param_2->___z_4;
  param_1->___x_2 = param_2->___x_2;
  param_1->___y_3 = fVar3;
  param_1->___z_4 = fVar2;
  param_2->___x_2 = fVar4;
  param_2->___y_3 = fVar5;
  param_2->___z_4 = fVar1;
  return;
}
