// RVA 0x1d13a0 | Placemaker.Ui.CreditsMenu.AutoScroll$$ChangeDirection
// PDB: AutoScroll_ChangeDirection_m463415D006A8DE9DF7D7743C1D917285753FD5D7
// Body: [[101d13a0, 101d13ec]]
// Direct callees:

void __cdecl
AutoScroll_ChangeDirection_m463415D006A8DE9DF7D7743C1D917285753FD5D7
          (AutoScroll_t1A0CA51C495D2BC1005833EF85B60738D8D39D8A *param_1,MethodInfo *param_2)

{
  float fVar1;
  float fVar2;

  fVar1 = __real_3f800000;
  fVar2 = __real_3f800000;
  if (param_1->___U3CtargetPositionU3Ek__BackingField_4 == __real_3f800000) {
    fVar2 = 0.0;
  }
  param_1->___U3CtargetPositionU3Ek__BackingField_4 = fVar2;
  if (param_1->___U3CdirectionU3Ek__BackingField_5 != fVar1) {
    param_1->___U3CdirectionU3Ek__BackingField_5 = fVar1;
    return;
  }
  param_1->___U3CdirectionU3Ek__BackingField_5 = __real_bf800000;
  return;
}
