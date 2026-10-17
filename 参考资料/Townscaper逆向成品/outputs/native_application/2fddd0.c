// RVA 0x2fddd0 | Placemaker.StorageUtils$$get_files
// PDB: StorageUtils_get_files_m03CEF749C61C4F7B09F7917BBFB08163FAAA646C
// Body: [[102fddd0, 102fde0f]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 105d1300 List_1_AsReadOnly_m0D2936C52F85D32528A99AC99FA51BFDAA69757E_gshared

ReadOnlyCollection_1_t4348A40742B97AA544A2F3845FA1C60512811C28 * __cdecl
StorageUtils_get_files_m03CEF749C61C4F7B09F7917BBFB08163FAAA646C
          (StorageUtils_t6E9DFB789C54B9B5604E6701C1D0E230BB7FAEF3 *param_1,MethodInfo *param_2)

{
  ReadOnlyCollection_1_t55910590AFBC83D8DC438603A2037D983A0F51B7 *pRVar1;

  if (DAT_1151c1e6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       List_1_AsReadOnly_mB1BD2581C0F43C8833CBCB83E8D7A28927CCFB09_RuntimeMethod_var
              );
    DAT_1151c1e6 = '\x01';
  }
  if ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)param_1->___loadedFiles_7 !=
      (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)0x0) {
    pRVar1 = List_1_AsReadOnly_m0D2936C52F85D32528A99AC99FA51BFDAA69757E_gshared
                       ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)
                        param_1->___loadedFiles_7,
                        List_1_AsReadOnly_mB1BD2581C0F43C8833CBCB83E8D7A28927CCFB09_RuntimeMethod_var
                       );
    return (ReadOnlyCollection_1_t4348A40742B97AA544A2F3845FA1C60512811C28 *)pRVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
