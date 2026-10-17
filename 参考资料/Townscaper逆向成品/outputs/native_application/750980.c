// RVA 0x750980 | Placemaker.Ui.PinnedUi$$SetPinned
// PDB: PinnedUi_SetPinned_m82A241C8CD27A14FB1DDE9CE8ADF274B5EFC66D9
// Body: [[10750980, 107509bf]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103e9590 UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15

void __cdecl
PinnedUi_SetPinned_m82A241C8CD27A14FB1DDE9CE8ADF274B5EFC66D9
          (PinnedUi_tB33174C851BDAF5FEACAEC23525832619BCB8242 *param_1,bool param_2,
          MethodInfo *param_3)

{
  char cVar1;

  param_1->___pinned_5 = param_2;
  cVar1 = '\x01';
  if (!param_2) {
    cVar1 = param_1->___hovered_6;
  }
  if (param_1->___state_4 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
    UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
              (param_1->___state_4,cVar1 != '\0',(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
