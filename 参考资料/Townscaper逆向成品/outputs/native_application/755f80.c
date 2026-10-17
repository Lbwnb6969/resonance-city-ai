// RVA 0x755f80 | Placemaker.Ui.ProgressBarButton$$GamepadPress
// PDB: ProgressBarButton_GamepadPress_m1DE864DB057D19DA6C5DA15D0F615A3DB9C608C6
// Body: [[10755f80, 10755fe2]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103e9590 UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
// 1066d8c0 Time_get_frameCount_m8601F5FB5B701680076B40D2F31405F304D963F0
// 1066da00 Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258
// 10a36ea0 Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32

void __cdecl
ProgressBarButton_GamepadPress_m1DE864DB057D19DA6C5DA15D0F615A3DB9C608C6
          (ProgressBarButton_t53730DC96EE47269D9729BEC4405F4126B379F4A *param_1,MethodInfo *param_2)

{
  int iVar1;
  int iVar2;
  float fVar3;

  iVar2 = param_1->___gamepadPressFrame_13;
  iVar1 = Time_get_frameCount_m8601F5FB5B701680076B40D2F31405F304D963F0((MethodInfo *)0x0);
  if (iVar2 < iVar1 + -1) {
    param_1->___hasBeenInvoked_11 = false;
    fVar3 = Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258((MethodInfo *)0x0);
    param_1->___gamepadPressTime_12 = fVar3;
  }
  iVar2 = Time_get_frameCount_m8601F5FB5B701680076B40D2F31405F304D963F0((MethodInfo *)0x0);
  param_1->___gamepadPressFrame_13 = iVar2;
  if (param_1->___pressed_7 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
    UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
              (param_1->___pressed_7,true,(MethodInfo *)0x0);
    param_1->___pressedByGamepad_10 = true;
    Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32
              ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)param_1,true,(MethodInfo *)0x0
              );
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
