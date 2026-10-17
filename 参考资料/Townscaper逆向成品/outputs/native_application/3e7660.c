// RVA 0x3e7660 | Placemaker.Ui.UiMaster$$get_hoverData
// PDB: UiMaster_get_hoverData_mEA27829A32F095E68FBBE542DC09AD54CFE86BFC
// Body: [[103e7660, 103e7676]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception

HoverData_t14F4E30D60384FB7DB47D81775CB2091DE7C9D55 * __cdecl
UiMaster_get_hoverData_mEA27829A32F095E68FBBE542DC09AD54CFE86BFC
          (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *param_1,MethodInfo *param_2)

{
  if (param_1->___worldMaster_5 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) {
    return param_1->___worldMaster_5->___hoverData_18;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
