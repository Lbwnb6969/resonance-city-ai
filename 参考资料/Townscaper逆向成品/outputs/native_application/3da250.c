// RVA 0x3da250 | Placemaker.ModuleMath$$MultiplyVector
// PDB: ModuleMath_MultiplyVector_mA1046A8EAD6D39D153BA544AA3CBA64C338B68E9
// Body: [[103da250, 103da2da]]
// Direct callees:
// 103cd350 math_mul_m8216B4BCB7ED4B82A4C35B49CCE6DFD8A393D243_inline

SbyteFloat3_t3C51AC7B3F6B94CFCF5CAA7971D05408AEC6B894 __cdecl
ModuleMath_MultiplyVector_mA1046A8EAD6D39D153BA544AA3CBA64C338B68E9
          (int4x4_t2CD7A9F659C5BF8B1C7C3961BC5573E009868331 param_1,
          SbyteFloat3_t3C51AC7B3F6B94CFCF5CAA7971D05408AEC6B894 param_2,MethodInfo *param_3)

{
  int4x4_t2CD7A9F659C5BF8B1C7C3961BC5573E009868331 iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  int4_t032A1A118EDA73DA66A2238859D535EC9B9CB067 iVar6;
  int iVar7;
  int iVar8;
  int4_t032A1A118EDA73DA66A2238859D535EC9B9CB067 *piVar9;
  undefined1 in_stack_00000047;
  undefined1 auVar3 [60];

  auVar3 = param_1._4_60_;
  iVar1.___c3_3.___w_3 = _param_2;
  auVar2 = auVar3._0_16_;
  auVar4 = auVar3._16_16_;
  auVar5 = auVar3._32_16_;
  iVar1.___c0_0.___x_0 = auVar2._0_4_;
  iVar1.___c0_0.___y_1 = auVar2._4_4_;
  iVar1.___c0_0.___z_2 = auVar2._8_4_;
  iVar1.___c0_0.___w_3 = auVar2._12_4_;
  iVar1.___c1_1.___x_0 = auVar4._0_4_;
  iVar1.___c1_1.___y_1 = auVar4._4_4_;
  iVar1.___c1_1.___z_2 = auVar4._8_4_;
  iVar1.___c1_1.___w_3 = auVar4._12_4_;
  iVar1.___c2_2.___x_0 = auVar5._0_4_;
  iVar1.___c2_2.___y_1 = auVar5._4_4_;
  iVar1.___c2_2.___z_2 = auVar5._8_4_;
  iVar1.___c2_2.___w_3 = auVar5._12_4_;
  iVar1.___c3_3.___x_0 = auVar3._48_4_;
  iVar1.___c3_3.___y_1 = auVar3._52_4_;
  iVar1.___c3_3.___z_2 = auVar3._56_4_;
  iVar6.___y_1 = (int)param_3._1_1_;
  iVar6.___x_0 = (int)(char)param_3;
  iVar6.___z_2 = (int)param_3._2_1_;
  iVar6.___w_3 = 0;
  piVar9 = math_mul_m8216B4BCB7ED4B82A4C35B49CCE6DFD8A393D243_inline
                     ((int4_t032A1A118EDA73DA66A2238859D535EC9B9CB067 *)&param_1.___c3_3.___y_1,
                      iVar1,iVar6,(MethodInfo *)0x0);
  iVar7 = piVar9->___y_1;
  iVar8 = piVar9->___z_2;
  *(char *)param_1.___c0_0.___x_0 = (char)piVar9->___x_0;
  *(char *)(param_1.___c0_0.___x_0 + 1) = (char)iVar7;
  *(char *)(param_1.___c0_0.___x_0 + 2) = (char)iVar8;
  return SUB43(param_1.___c0_0.___x_0,0);
}
