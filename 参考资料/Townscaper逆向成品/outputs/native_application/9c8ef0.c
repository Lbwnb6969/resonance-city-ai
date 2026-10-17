// RVA 0x9c8ef0 | Placemaker.Ui.UndoRedoButtons.<>c__DisplayClass16_0$$<Placemaker.Ui.UiMaster.IUiSetup.OnSetup>b__2
// PDB: U3CU3Ec__DisplayClass16_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__2_m38E4D7BC3BB63D88FE0101A6FE23DCD5D544238C
// Body: [[109c8ef0, 109c8f5b]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1066da00 Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258
// 10a36ea0 Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32

void __cdecl
U3CU3Ec__DisplayClass16_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__2_m38E4D7BC3BB63D88FE0101A6FE23DCD5D544238C
          (U3CU3Ec__DisplayClass16_0_t18FC3433C5842C497F94F76C7C4B411015480C5C *param_1,bool param_2
          ,MethodInfo *param_3)

{
  UndoRedoButtons_tE1CE0FC31595AAB34C0E78372FFAE375232149F3 *pUVar1;
  float fVar2;

  pUVar1 = param_1->___U3CU3E4__this_0;
  if (pUVar1 != (UndoRedoButtons_tE1CE0FC31595AAB34C0E78372FFAE375232149F3 *)0x0) {
    if (pUVar1->___isUndoDown_9 == param_2) {
      return;
    }
    pUVar1->___isUndoDown_9 = param_2;
    if (param_1->___U3CU3E4__this_0 !=
        (UndoRedoButtons_tE1CE0FC31595AAB34C0E78372FFAE375232149F3 *)0x0) {
      Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32
                ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)param_1->___U3CU3E4__this_0,
                 true,(MethodInfo *)0x0);
      if (!param_2) {
        return;
      }
      if (param_1->___U3CU3E4__this_0 !=
          (UndoRedoButtons_tE1CE0FC31595AAB34C0E78372FFAE375232149F3 *)0x0) {
        param_1->___U3CU3E4__this_0->___hasUndone_16 = false;
        pUVar1 = param_1->___U3CU3E4__this_0;
        fVar2 = Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258((MethodInfo *)0x0);
        if (pUVar1 != (UndoRedoButtons_tE1CE0FC31595AAB34C0E78372FFAE375232149F3 *)0x0) {
          pUVar1->___undoDownTime_13 = fVar2 + __real_3f800000;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
