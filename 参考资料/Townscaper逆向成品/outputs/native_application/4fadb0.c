// RVA 0x4fadb0 | Placemaker.Ui.LoadingUi$$StopLoadingNow
// PDB: LoadingUi_StopLoadingNow_mFAD51DE9A74C81702A6DCD38EAED96F378041F45
// Body: [[104fadb0, 104fadd7]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103e9590 UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15

void __cdecl
LoadingUi_StopLoadingNow_mFAD51DE9A74C81702A6DCD38EAED96F378041F45
          (LoadingUi_t8BEFBE0AEDF33AF64CC6768876AA348D3AF5619F *param_1,MethodInfo *param_2)

{
  param_1->___state_16 = 4;
  if (param_1->___openState_5 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
    UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
              (param_1->___openState_5,false,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
