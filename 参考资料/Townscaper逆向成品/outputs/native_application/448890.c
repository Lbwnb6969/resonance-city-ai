// RVA 0x448890 | Os.Utils.ExtraMath$$Swap<int2>
// PDB: ExtraMath_Swap_Tisint2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568_m27170B0AA5AD6B7948595E7D4481FC808006824B_gshared
// Body: [[10448890, 104488ce]]
// Direct callees:

void __cdecl
ExtraMath_Swap_Tisint2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568_m27170B0AA5AD6B7948595E7D4481FC808006824B_gshared
          (int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 *param_1,
          int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 *param_2,
          int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 *param_3,
          int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 *param_4,MethodInfo *param_5)

{
  int iVar1;
  int iVar2;

  iVar1 = param_1->___y_1;
  iVar2 = param_1->___x_0;
  param_1->___x_0 = param_2->___x_0;
  param_1->___y_1 = param_2->___y_1;
  param_2->___x_0 = param_3->___x_0;
  param_2->___y_1 = param_3->___y_1;
  param_3->___x_0 = param_4->___x_0;
  param_3->___y_1 = param_4->___y_1;
  param_4->___x_0 = iVar2;
  param_4->___y_1 = iVar1;
  return;
}
