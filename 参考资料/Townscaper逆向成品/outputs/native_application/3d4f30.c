// RVA 0x3d4f30 | Placemaker.Ui.MasterClicker$$UnityEngine.EventSystems.IPointerExitHandler.OnPointerExit
// PDB: MasterClicker_UnityEngine_EventSystems_IPointerExitHandler_OnPointerExit_m07E6247EF0D15983F6C8D8B0D07C150CBB29627E
// Body: [[103d4f30, 103d4f7f]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103e7660 UiMaster_get_hoverData_mEA27829A32F095E68FBBE542DC09AD54CFE86BFC
// 1040fe40 HoverData_ClearHover_m1C5458A14DEB3D303AD18CE212FF6279F73D84AC
// 1113f230 Input_get_mousePresent_mBCACCE1C97E146FF46C7AE7FFE693F7BAB4E4FE5

void __cdecl
MasterClicker_UnityEngine_EventSystems_IPointerExitHandler_OnPointerExit_m07E6247EF0D15983F6C8D8B0D07C150CBB29627E
          (MasterClicker_t3CC2EEB38FD790B0557073353FD781FDE8459BED *param_1,
          PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *param_2,MethodInfo *param_3)

{
  bool bVar1;
  HoverData_t14F4E30D60384FB7DB47D81775CB2091DE7C9D55 *pHVar2;

  if (param_2 != (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *)0x0) {
    if ((param_2->___U3CpointerIdU3Ek__BackingField_12 != -1) ||
       (bVar1 = Input_get_mousePresent_mBCACCE1C97E146FF46C7AE7FFE693F7BAB4E4FE5((MethodInfo *)0x0),
       !bVar1)) {
      return;
    }
    param_1->___hovered_9 = false;
    if ((param_1->___master_7 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
       (pHVar2 = UiMaster_get_hoverData_mEA27829A32F095E68FBBE542DC09AD54CFE86BFC
                           (param_1->___master_7,(MethodInfo *)0x0),
       pHVar2 != (HoverData_t14F4E30D60384FB7DB47D81775CB2091DE7C9D55 *)0x0)) {
      HoverData_ClearHover_m1C5458A14DEB3D303AD18CE212FF6279F73D84AC(pHVar2,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
