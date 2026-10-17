// RVA 0x878970 | Placemaker.BigMesh$$get_availableCount
// PDB: BigMesh_get_availableCount_mF911DBD1759E272BE9BDBE7CB11B28EE6C435A52
// Body: [[10878970, 108789ab]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception

int __cdecl
BigMesh_get_availableCount_mF911DBD1759E272BE9BDBE7CB11B28EE6C435A52
          (BigMesh_t210F22099D8F21B93EF9ABEB33418A400DBD22BA *param_1,MethodInfo *param_2)

{
  if (DAT_1151f5ad == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_mF0887EBD72C74B3917768EEECB5D7A9DD66B75EB_RuntimeMethod_var
              );
    DAT_1151f5ad = '\x01';
  }
  if (param_1->___availableIndexes_8 != (List_1_tBBC4E953860E582A3E060CC10B1387AFC5A36FC5 *)0x0) {
    return (param_1->___availableIndexes_8->____size_2 - param_1->___createdCount_5) + 0xffff;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
