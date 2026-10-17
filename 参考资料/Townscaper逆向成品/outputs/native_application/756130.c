// RVA 0x756130 | Placemaker.Ui.ProgressBarButton$$<Placemaker.Ui.UiMaster.IUiSetup.OnSetup>b__11_0
// PDB: ProgressBarButton_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__11_0_m9D011F4CFA260FE5060AEB1A5219EE8E9E243AF8
// Body: [[10756130, 10756184]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103e9610 UpdateState_set_target_mE17720317B95AD21B3A598B430573508DBB96BE4
// 1066da00 Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258
// 10a36ea0 Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32

void __cdecl
ProgressBarButton_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__11_0_m9D011F4CFA260FE5060AEB1A5219EE8E9E243AF8
          (ProgressBarButton_t53730DC96EE47269D9729BEC4405F4126B379F4A *param_1,uchar param_2,
          MethodInfo *param_3)

{
  float fVar1;

  if (param_2 != '\x02') {
    param_1->___pressedByMouse_9 = false;
    return;
  }
  param_1->___hasBeenInvoked_11 = false;
  fVar1 = Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258((MethodInfo *)0x0);
  param_1->___pressedByMouse_9 = true;
  param_1->___gamepadPressTime_12 = fVar1;
  if (param_1->___pressed_7 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
    UpdateState_set_target_mE17720317B95AD21B3A598B430573508DBB96BE4
              (param_1->___pressed_7,1.0,(MethodInfo *)0x0);
    Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32
              ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)param_1,true,(MethodInfo *)0x0
              );
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
