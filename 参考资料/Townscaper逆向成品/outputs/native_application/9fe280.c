// RVA 0x9fe280 | Placemaker.Ui.SaveMenu$$CancelFocusClicked
// PDB: SaveMenu_CancelFocusClicked_m0F5AD3AAAD7528270A2A858FD6B81711E756AED3
// Body: [[109fe280, 109fe2b2]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103e9590 UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
// 10a00660 SaveMenu_SetUIState_m399413EB76F072A77AA0159FC920A16BC7678727

void __cdecl
SaveMenu_CancelFocusClicked_m0F5AD3AAAD7528270A2A858FD6B81711E756AED3
          (SaveMenu_t5FABF5FD9F5391352EFA4B985C68F0D9E2D9E2E8 *param_1,MethodInfo *param_2)

{
  SaveMenu_SetUIState_m399413EB76F072A77AA0159FC920A16BC7678727(param_1,'\x01',(MethodInfo *)0x0);
  if (param_1->___focusCardState_30 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0)
  {
    UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
              (param_1->___focusCardState_30,false,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
