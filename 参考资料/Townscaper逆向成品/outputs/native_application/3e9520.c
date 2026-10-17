// RVA 0x3e9520 | Placemaker.Ui.UpdateState$$set_currentBool
// PDB: UpdateState_set_currentBool_m3D91F7A5C2199C7C487C9FAB2E39C6C7083BBB84
// Body: [[103e9520, 103e9559]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103e8320 UpdateState_CheckUpdating_m7397FCA65C184C4D75A5428D3FB9902E94204D7E

void __cdecl
UpdateState_set_currentBool_m3D91F7A5C2199C7C487C9FAB2E39C6C7083BBB84
          (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *param_1,bool param_2,
          MethodInfo *param_3)

{
  if (param_1 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
    if (param_1->____current_0 != (float)param_2) {
      param_1->____current_0 = (float)param_2;
      UpdateState_CheckUpdating_m7397FCA65C184C4D75A5428D3FB9902E94204D7E(param_1,(MethodInfo *)0x0)
      ;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
