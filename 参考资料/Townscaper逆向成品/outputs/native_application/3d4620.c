// RVA 0x3d4620 | Placemaker.Ui.MasterClicker$$RemoveHover
// PDB: MasterClicker_RemoveHover_mBD2F6AEF6D165D1B157189BE1150A615ADA9B982
// Body: [[103d4620, 103d4654]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103e7660 UiMaster_get_hoverData_mEA27829A32F095E68FBBE542DC09AD54CFE86BFC
// 1040fe40 HoverData_ClearHover_m1C5458A14DEB3D303AD18CE212FF6279F73D84AC

void __cdecl
MasterClicker_RemoveHover_mBD2F6AEF6D165D1B157189BE1150A615ADA9B982
          (MasterClicker_t3CC2EEB38FD790B0557073353FD781FDE8459BED *param_1,MethodInfo *param_2)

{
  HoverData_t14F4E30D60384FB7DB47D81775CB2091DE7C9D55 *pHVar1;

  param_1->___hovered_9 = false;
  if (param_1->___master_7 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) {
    pHVar1 = UiMaster_get_hoverData_mEA27829A32F095E68FBBE542DC09AD54CFE86BFC
                       (param_1->___master_7,(MethodInfo *)0x0);
    if (pHVar1 != (HoverData_t14F4E30D60384FB7DB47D81775CB2091DE7C9D55 *)0x0) {
      HoverData_ClearHover_m1C5458A14DEB3D303AD18CE212FF6279F73D84AC(pHVar1,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
