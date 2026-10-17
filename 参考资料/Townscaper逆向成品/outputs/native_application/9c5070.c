// RVA 0x9c5070 | Placemaker.StorageUtils.<FilesListChanged>d__26$$System.Collections.IEnumerator.get_Current
// PDB: U3CFilesListChangedU3Ed__26_System_Collections_IEnumerator_get_Current_m628DDE4A28DB9EC4DC65E63ACD66B9E356CE6E37
// Body: [[109c5070, 109c50ac]]
// Direct callees:
// 10128ae0 il2cpp_value_box
// 1018e950 il2cpp_codegen_initialize_runtime_metadata

Il2CppObject * __cdecl
U3CFilesListChangedU3Ed__26_System_Collections_IEnumerator_get_Current_m628DDE4A28DB9EC4DC65E63ACD66B9E356CE6E37
          (U3CFilesListChangedU3Ed__26_t844587706C6C57443B19B63471EE1D9185CBAFD3 *param_1,
          MethodInfo *param_2)

{
  Il2CppObject *pIVar1;

  if (DAT_1151ff3d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
    DAT_1151ff3d = '\x01';
  }
  param_1 = (U3CFilesListChangedU3Ed__26_t844587706C6C57443B19B63471EE1D9185CBAFD3 *)
            CONCAT13(param_1->___U3CU3E2__current_1,param_1._0_3_);
  pIVar1 = il2cpp_value_box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var,
                            (void *)((int)&param_1 + 3));
  return pIVar1;
}
