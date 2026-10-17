// RVA 0x110ce80 | FuryStudios.FurySDK.Internal.PlatformPlayerPrefs$$GetInt
// PDB: PlatformPlayerPrefs_GetInt_mD712ED432866775399FD68D79DFE07F7BF6FD64F
// Body: [[1110ce80, 1110cee2]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10d00a20 Dictionary_2_TryGetValue_m2377E865A8C08B77CE2108585784C9118DAE4E2A_gshared

int __cdecl
PlatformPlayerPrefs_GetInt_mD712ED432866775399FD68D79DFE07F7BF6FD64F
          (PlatformPlayerPrefs_t9473F0F596FC2C6200FD273286475145A0EF282E *param_1,String_t *param_2,
          int param_3,MethodInfo *param_4)

{
  Dictionary_2_t05DA59462DB2B73E336E6741454AE4A402C9178B *pDVar1;
  bool bVar2;
  Il2CppObject *local_8;

  if (DAT_11523ea0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2_TryGetValue_m8E06A6DF244254BF419D7EC23A9A6809E19A544D_RuntimeMethod_var
              );
    DAT_11523ea0 = '\x01';
  }
  local_8 = (Il2CppObject *)0x0;
  if ((param_1->___data_0 != (PlayerPrefsSaveData_t8B8AAC39C8A51CE7EA2AF47E8F5D075A00613ADB *)0x0)
     && (pDVar1 = (Dictionary_2_t05DA59462DB2B73E336E6741454AE4A402C9178B *)
                  param_1->___data_0->___savedInt_0,
        pDVar1 != (Dictionary_2_t05DA59462DB2B73E336E6741454AE4A402C9178B *)0x0)) {
    bVar2 = Dictionary_2_TryGetValue_m2377E865A8C08B77CE2108585784C9118DAE4E2A_gshared
                      (pDVar1,(AchievementID_t13562D86FC9C116E950E863A44792F46EBFFE67D)param_2,
                       &local_8,
                       Dictionary_2_TryGetValue_m8E06A6DF244254BF419D7EC23A9A6809E19A544D_RuntimeMethod_var
                      );
    if (!bVar2) {
      local_8 = (Il2CppObject *)param_3;
    }
    return (int)local_8;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
