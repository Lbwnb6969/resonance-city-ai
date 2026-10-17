// RVA 0x305770 | Placemaker.Ui.ToolsButton$$UnityEngine.EventSystems.IPointerEnterHandler.OnPointerEnter
// PDB: ToolsButton_UnityEngine_EventSystems_IPointerEnterHandler_OnPointerEnter_mFFFABC1A84AA6079B8375EED02B3E6691D8B6688
// Body: [[10305770, 10305790]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception

void __cdecl
ToolsButton_UnityEngine_EventSystems_IPointerEnterHandler_OnPointerEnter_mFFFABC1A84AA6079B8375EED02B3E6691D8B6688
          (ToolsButton_t82FD1730196D131A12C4C86C08ACDAA30952BF26 *param_1,
          PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *param_2,MethodInfo *param_3)

{
  if (param_2 != (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *)0x0) {
    if (param_2->___U3CdraggingU3Ek__BackingField_22 == false) {
      param_1->___hovered_4 = true;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
