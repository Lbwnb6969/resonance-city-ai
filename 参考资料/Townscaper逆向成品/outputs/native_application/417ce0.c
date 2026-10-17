// RVA 0x417ce0 | Placemaker.Ui.InputModeManager$$SetState
// PDB: InputModeManager_SetState_m21123CFA099EA7A87E0992F04FF6B34CDEE8F97D
// Body: [[10417ce0, 10417d33]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103e9590 UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15

void __cdecl
InputModeManager_SetState_m21123CFA099EA7A87E0992F04FF6B34CDEE8F97D
          (InputModeManager_t01E99A79BA01878A68D72A50C3060B585610CF08 *param_1,int param_2,
          MethodInfo *param_3)

{
  if (param_2 == param_1->___mode_8) {
    return;
  }
  param_1->___mode_8 = param_2;
  if (param_1->___gamepadState_6 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
    UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
              (param_1->___gamepadState_6,param_2 == 1,(MethodInfo *)0x0);
    if (param_1->___touchAndMouseState_7 !=
        (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
      UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
                (param_1->___touchAndMouseState_7,param_2 == 2,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
