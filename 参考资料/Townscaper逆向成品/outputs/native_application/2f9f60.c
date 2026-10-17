// RVA 0x2f9f60 | Placemaker.Ui.Slider$$UnityEngine.EventSystems.IEndDragHandler.OnEndDrag
// PDB: Slider_UnityEngine_EventSystems_IEndDragHandler_OnEndDrag_mDFA256C0AA8AD065D04CA47F661B2F81B4850B34
// Body: [[102f9f60, 102f9f91]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception

void __cdecl
Slider_UnityEngine_EventSystems_IEndDragHandler_OnEndDrag_mDFA256C0AA8AD065D04CA47F661B2F81B4850B34
          (Slider_tD8A2D42879D86E2025759D2A26C7F53F08A56B6D *param_1,
          PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *param_2,MethodInfo *param_3)

{
  param_1->___dragging_7 = false;
  param_1->___oldValue_12 = param_1->___newValue_13;
  if (param_2 != (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *)0x0) {
    (**(code **)(param_2->_padding_ + 0xe4))(param_2,*(undefined4 *)(param_2->_padding_ + 0xe8));
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
