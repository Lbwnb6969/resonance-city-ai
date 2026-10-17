// RVA 0x878700 | Placemaker.BigMesh$$Clear
// PDB: BigMesh_Clear_m8C760A14BBAF352BD12CC90F609BC888EF00CB1B
// Body: [[10878700, 108787fc]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 105d1420 List_1_Clear_m4335002B0D1AECDD647452579DC34E13BD1B83CD_gshared

void __cdecl
BigMesh_Clear_m8C760A14BBAF352BD12CC90F609BC888EF00CB1B
          (BigMesh_t210F22099D8F21B93EF9ABEB33418A400DBD22BA *param_1,MethodInfo *param_2)

{
  if (DAT_1151f5ae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Clear_m06065F47F36FB47C1D674BF6D5AC5A767DF614DC_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Clear_m17AB4CF64254D2A036FA95D9ECC208B39A4A6E50_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Clear_m508B72E5229FAE7042D99A04555F66F10C597C7A_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Clear_mF8F71E7E816FF23D7B695E08E43893C83A814C22_RuntimeMethod_var);
    DAT_1151f5ae = '\x01';
  }
  if (param_1->___verts_10 != (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)0x0) {
    List_1_Clear_m4335002B0D1AECDD647452579DC34E13BD1B83CD_gshared
              ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)param_1->___verts_10,
               List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702_RuntimeMethod_var);
    if (param_1->___normals_11 != (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)0x0) {
      List_1_Clear_m4335002B0D1AECDD647452579DC34E13BD1B83CD_gshared
                ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)param_1->___normals_11,
                 List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702_RuntimeMethod_var);
      if (param_1->___tangents_12 != (List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *)0x0) {
        List_1_Clear_m4335002B0D1AECDD647452579DC34E13BD1B83CD_gshared
                  ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)param_1->___tangents_12,
                   List_1_Clear_m06065F47F36FB47C1D674BF6D5AC5A767DF614DC_RuntimeMethod_var);
        if ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)param_1->___uvs_13 !=
            (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)0x0) {
          List_1_Clear_m4335002B0D1AECDD647452579DC34E13BD1B83CD_gshared
                    ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)param_1->___uvs_13,
                     List_1_Clear_m17AB4CF64254D2A036FA95D9ECC208B39A4A6E50_RuntimeMethod_var);
          if ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)param_1->___tris_14 !=
              (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)0x0) {
            List_1_Clear_m4335002B0D1AECDD647452579DC34E13BD1B83CD_gshared
                      ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)param_1->___tris_14,
                       List_1_Clear_m508B72E5229FAE7042D99A04555F66F10C597C7A_RuntimeMethod_var);
            if ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)param_1->___availableIndexes_8
                != (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)0x0) {
              List_1_Clear_m4335002B0D1AECDD647452579DC34E13BD1B83CD_gshared
                        ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)
                         param_1->___availableIndexes_8,
                         List_1_Clear_mF8F71E7E816FF23D7B695E08E43893C83A814C22_RuntimeMethod_var);
              if ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)param_1->___availableTris_9 !=
                  (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)0x0) {
                List_1_Clear_m4335002B0D1AECDD647452579DC34E13BD1B83CD_gshared
                          ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)
                           param_1->___availableTris_9,
                           List_1_Clear_m508B72E5229FAE7042D99A04555F66F10C597C7A_RuntimeMethod_var)
                ;
                param_1->___createdCount_5 = 0;
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
