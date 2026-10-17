// RVA 0x4ee9c0 | Placemaker.Ui.KeyboardControlsMenu$$DarkenerClicked
// PDB: KeyboardControlsMenu_DarkenerClicked_mD8C47D0735D72B4ED505E2B0B6CFD30E3AAE7428
// Body: [[104ee9c0, 104ee9e0]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103e9590 UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15

void __cdecl
KeyboardControlsMenu_DarkenerClicked_mD8C47D0735D72B4ED505E2B0B6CFD30E3AAE7428
          (KeyboardControlsMenu_t8A1421617C595C06F6BA074D899E4D4C458562D2 *param_1,
          MethodInfo *param_2)

{
  if (param_1->___darkenState_8 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
    UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
              (param_1->___darkenState_8,false,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
