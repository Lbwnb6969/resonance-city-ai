// RVA 0x9fdb90 | Placemaker.SaveData$$Clear
// PDB: SaveData_Clear_m7F698094AF5725EDB07E9F4A06994B837FD9DE52
// Body: [[109fdb90, 109fdc09]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 105d1420 List_1_Clear_m4335002B0D1AECDD647452579DC34E13BD1B83CD_gshared

void __cdecl
SaveData_Clear_m7F698094AF5725EDB07E9F4A06994B837FD9DE52
          (SaveData_t108FDD1E782E68BC3B924BE75B58816350034188 *param_1,MethodInfo *param_2)

{
  if (DAT_11520192 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Clear_m3849B6EE17AA2EB6BD3221159E97746E36B4E8DF_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Clear_m3A42793E42914F1251A2F05F7818CC40E397D76E_RuntimeMethod_var);
    DAT_11520192 = '\x01';
  }
  (param_1->___cam_2).___x_0 = '\x7f';
  (param_1->___cam_2).___y_1 = '\0';
  (param_1->___cam_2).___z_2 = '\x7f';
  (param_1->___sun_3).___h_0 = '\x7f';
  (param_1->___sun_3).___r_1 = '\x7f';
  if (param_1->___corners_4 != (List_1_t65B5CE5C2CCE2EE12BA01A686F7853869760B043 *)0x0) {
    List_1_Clear_m4335002B0D1AECDD647452579DC34E13BD1B83CD_gshared
              ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)param_1->___corners_4,
               List_1_Clear_m3849B6EE17AA2EB6BD3221159E97746E36B4E8DF_RuntimeMethod_var);
    if ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)param_1->___voxels_5 !=
        (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)0x0) {
      List_1_Clear_m4335002B0D1AECDD647452579DC34E13BD1B83CD_gshared
                ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)param_1->___voxels_5,
                 List_1_Clear_m3A42793E42914F1251A2F05F7818CC40E397D76E_RuntimeMethod_var);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
