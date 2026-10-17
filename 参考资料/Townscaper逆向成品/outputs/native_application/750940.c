// RVA 0x750940 | Placemaker.Ui.PinnedUi$$Check
// PDB: PinnedUi_Check_mAC92DCFB7C3AE9C34B4D9E092C44F6CD9EABCE81
// Body: [[10750940, 10750978]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103e9590 UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15

void __cdecl
PinnedUi_Check_mAC92DCFB7C3AE9C34B4D9E092C44F6CD9EABCE81
          (PinnedUi_tB33174C851BDAF5FEACAEC23525832619BCB8242 *param_1,MethodInfo *param_2)

{
  char cVar1;

  if (param_1->___pinned_5 == false) {
    cVar1 = param_1->___hovered_6;
  }
  else {
    cVar1 = '\x01';
  }
  if (param_1->___state_4 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
    UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
              (param_1->___state_4,cVar1 != '\0',(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
