// RVA 0x448850 | Os.Utils.ExtraMath$$Swap<Vector3>
// PDB: ExtraMath_Swap_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_mE88A46A5EC903029D69ED80EDE8527D78AEC4FE5_gshared
// Body: [[10448850, 10448889]]
// Direct callees:

void __cdecl
ExtraMath_Swap_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_mE88A46A5EC903029D69ED80EDE8527D78AEC4FE5_gshared
          (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *param_1,
          Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *param_2,
          Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *param_3,MethodInfo *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;

  fVar1 = param_1->___z_4;
  fVar3 = param_2->___y_3;
  fVar4 = param_1->___x_2;
  fVar5 = param_1->___y_3;
  fVar2 = param_2->___z_4;
  param_1->___x_2 = param_2->___x_2;
  param_1->___y_3 = fVar3;
  param_1->___z_4 = fVar2;
  fVar3 = param_3->___y_3;
  fVar2 = param_3->___z_4;
  param_2->___x_2 = param_3->___x_2;
  param_2->___y_3 = fVar3;
  param_2->___z_4 = fVar2;
  param_3->___x_2 = fVar4;
  param_3->___y_3 = fVar5;
  param_3->___z_4 = fVar1;
  return;
}
