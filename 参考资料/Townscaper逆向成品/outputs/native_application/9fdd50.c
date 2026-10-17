// RVA 0x9fdd50 | Placemaker.SaveData$$ReadNonImageDataFrom
// PDB: SaveData_ReadNonImageDataFrom_m555D61BB42582A4E6702001232BD3FFA23E42D00
// Body: [[109fdd50, 109fde16]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 105d1260 List_1_AddRange_m8704F52E688E545812CCE7D22B75C986E0EF9135_gshared
// 105d1420 List_1_Clear_m4335002B0D1AECDD647452579DC34E13BD1B83CD_gshared

void __cdecl
SaveData_ReadNonImageDataFrom_m555D61BB42582A4E6702001232BD3FFA23E42D00
          (SaveData_t108FDD1E782E68BC3B924BE75B58816350034188 *param_1,
          SaveData_t108FDD1E782E68BC3B924BE75B58816350034188 *param_2,MethodInfo *param_3)

{
  uchar uVar1;
  uchar uVar2;

  if (DAT_11520193 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_AddRange_m595BC8472F64A5157D2B99C325E28D4EFF7BE1FA_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_AddRange_mCA5F058CD491A609514659F2822B602E5F4B2629_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Clear_m3849B6EE17AA2EB6BD3221159E97746E36B4E8DF_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Clear_m3A42793E42914F1251A2F05F7818CC40E397D76E_RuntimeMethod_var);
    DAT_11520193 = '\x01';
  }
  if (param_1->___corners_4 != (List_1_t65B5CE5C2CCE2EE12BA01A686F7853869760B043 *)0x0) {
    List_1_Clear_m4335002B0D1AECDD647452579DC34E13BD1B83CD_gshared
              ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)param_1->___corners_4,
               List_1_Clear_m3849B6EE17AA2EB6BD3221159E97746E36B4E8DF_RuntimeMethod_var);
    if ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)param_1->___voxels_5 !=
        (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)0x0) {
      List_1_Clear_m4335002B0D1AECDD647452579DC34E13BD1B83CD_gshared
                ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)param_1->___voxels_5,
                 List_1_Clear_m3A42793E42914F1251A2F05F7818CC40E397D76E_RuntimeMethod_var);
      if ((param_2 != (SaveData_t108FDD1E782E68BC3B924BE75B58816350034188 *)0x0) &&
         (param_1->___corners_4 != (List_1_t65B5CE5C2CCE2EE12BA01A686F7853869760B043 *)0x0)) {
        List_1_AddRange_m8704F52E688E545812CCE7D22B75C986E0EF9135_gshared
                  ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)param_1->___corners_4,
                   (Il2CppObject *)param_2->___corners_4,
                   List_1_AddRange_m595BC8472F64A5157D2B99C325E28D4EFF7BE1FA_RuntimeMethod_var);
        if ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)param_1->___voxels_5 !=
            (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)0x0) {
          List_1_AddRange_m8704F52E688E545812CCE7D22B75C986E0EF9135_gshared
                    ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)param_1->___voxels_5,
                     (Il2CppObject *)param_2->___voxels_5,
                     List_1_AddRange_mCA5F058CD491A609514659F2822B602E5F4B2629_RuntimeMethod_var);
          uVar2 = (param_2->___cam_2).___y_1;
          uVar1 = (param_2->___cam_2).___z_2;
          (param_1->___cam_2).___x_0 = (param_2->___cam_2).___x_0;
          (param_1->___cam_2).___y_1 = uVar2;
          (param_1->___cam_2).___z_2 = uVar1;
          param_1->___sun_3 = param_2->___sun_3;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
