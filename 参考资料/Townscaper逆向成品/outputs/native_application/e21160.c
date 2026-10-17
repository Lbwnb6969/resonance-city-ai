// RVA 0xe21160 | Placemaker.GroundClicker$$UnityEngine.EventSystems.IPointerExitHandler.OnPointerExit
// PDB: GroundClicker_UnityEngine_EventSystems_IPointerExitHandler_OnPointerExit_m2B19D6D485E46457B2E69475D68EE6B43052A4A6
// Body: [[10e21160, 10e21190]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1040fe40 HoverData_ClearHover_m1C5458A14DEB3D303AD18CE212FF6279F73D84AC

void __cdecl
GroundClicker_UnityEngine_EventSystems_IPointerExitHandler_OnPointerExit_m2B19D6D485E46457B2E69475D68EE6B43052A4A6
          (GroundClicker_t4891E4F1FD705CD7457F4C0C4A563825C9EFA4EA *param_1,
          PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *param_2,MethodInfo *param_3)

{
  WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *pWVar1;
  HoverData_t14F4E30D60384FB7DB47D81775CB2091DE7C9D55 *pHVar2;

  param_1->___hovered_6 = false;
  if (((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
      (pWVar1 = param_1->___master_4->___worldMaster_5,
      pWVar1 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)) &&
     (pHVar2 = pWVar1->___hoverData_18,
     pHVar2 != (HoverData_t14F4E30D60384FB7DB47D81775CB2091DE7C9D55 *)0x0)) {
    HoverData_ClearHover_m1C5458A14DEB3D303AD18CE212FF6279F73D84AC(pHVar2,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
