// RVA 0x1d13f0 | Placemaker.Ui.CreditsMenu.AutoScroll$$OnOpen
// PDB: AutoScroll_OnOpen_mF5B28F3303FA021615FDFABD8B1B8CCA544B80B1
// Body: [[101d13f0, 101d141f]]
// Direct callees:
// 1066da00 Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258

void __cdecl
AutoScroll_OnOpen_mF5B28F3303FA021615FDFABD8B1B8CCA544B80B1
          (AutoScroll_t1A0CA51C495D2BC1005833EF85B60738D8D39D8A *param_1,MethodInfo *param_2)

{
  float fVar1;

  param_1->___U3CisActiveU3Ek__BackingField_0 = true;
  param_1->___U3CspeedIsSetU3Ek__BackingField_1 = false;
  param_1->___U3CtargetPositionU3Ek__BackingField_4 = 0.0;
  param_1->___U3CdirectionU3Ek__BackingField_5 = -1.0;
  fVar1 = Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258((MethodInfo *)0x0);
  param_1->___U3CtimeU3Ek__BackingField_3 = fVar1 + __real_40000000;
  return;
}
