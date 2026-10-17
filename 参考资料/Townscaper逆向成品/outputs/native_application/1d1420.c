// RVA 0x1d1420 | Placemaker.Ui.CreditsMenu.AutoScroll$$ResetTimer
// PDB: AutoScroll_ResetTimer_m8C1E2E380D89E28F1AAA57A4DE2CF559FB482886
// Body: [[101d1420, 101d1437]]
// Direct callees:
// 1066da00 Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258

void __cdecl
AutoScroll_ResetTimer_m8C1E2E380D89E28F1AAA57A4DE2CF559FB482886
          (AutoScroll_t1A0CA51C495D2BC1005833EF85B60738D8D39D8A *param_1,float param_2,
          MethodInfo *param_3)

{
  float fVar1;

  fVar1 = Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258((MethodInfo *)0x0);
  param_1->___U3CtimeU3Ek__BackingField_3 = fVar1 + param_2;
  return;
}
