// RVA 0x74f3b0 | Placemaker.Ui.PaletteMenu$$UnityEngine.EventSystems.IDragHandler.OnDrag
// PDB: PaletteMenu_UnityEngine_EventSystems_IDragHandler_OnDrag_m0D37F33F1343A1E1D3B3F8FBFBE0E7D8B15F0A8A
// Body: [[1074f3b0, 1074f400]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception

void __cdecl
PaletteMenu_UnityEngine_EventSystems_IDragHandler_OnDrag_m0D37F33F1343A1E1D3B3F8FBFBE0E7D8B15F0A8A
          (PaletteMenu_tF5DC99C89B93E9D402B3CFF9C429F936BDDE3D4F *param_1,
          PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *param_2,MethodInfo *param_3)

{
  float fVar1;

  if (param_2 != (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *)0x0) {
    fVar1 = param_1->___targetScroll_8 -
            ((param_2->___U3CdeltaU3Ek__BackingField_14).___x_0 * (param_1->___dir_19).___x_0 +
            (param_2->___U3CdeltaU3Ek__BackingField_14).___y_1 * (param_1->___dir_19).___y_1);
    if (fVar1 != param_1->___targetScroll_8) {
      param_1->___targetScroll_8 = fVar1;
      param_1->___updating_25 = true;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
