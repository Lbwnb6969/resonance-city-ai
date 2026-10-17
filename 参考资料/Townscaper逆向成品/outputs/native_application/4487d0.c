// RVA 0x4487d0 | Os.Utils.ExtraMath$$Swap<Vector3>
// PDB: ExtraMath_Swap_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m828EBDAECB7087C58E75BDC38E70B6CC61CBF6AC_gshared
// Body: [[104487d0, 1044881c]]
// Direct callees:

void __cdecl
ExtraMath_Swap_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m828EBDAECB7087C58E75BDC38E70B6CC61CBF6AC_gshared
          (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *param_1,
          Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *param_2,
          Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *param_3,
          Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *param_4,MethodInfo *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;

  fVar4 = param_1->___x_2;
  fVar5 = param_1->___y_3;
  fVar3 = param_2->___y_3;
  fVar1 = param_2->___z_4;
  fVar2 = param_1->___z_4;
  param_1->___x_2 = param_2->___x_2;
  param_1->___y_3 = fVar3;
  param_1->___z_4 = fVar1;
  fVar3 = param_3->___y_3;
  fVar1 = param_3->___z_4;
  param_2->___x_2 = param_3->___x_2;
  param_2->___y_3 = fVar3;
  param_2->___z_4 = fVar1;
  fVar3 = param_4->___y_3;
  fVar1 = param_4->___z_4;
  param_3->___x_2 = param_4->___x_2;
  param_3->___y_3 = fVar3;
  param_3->___z_4 = fVar1;
  param_4->___x_2 = fVar4;
  param_4->___y_3 = fVar5;
  param_4->___z_4 = fVar2;
  return;
}
