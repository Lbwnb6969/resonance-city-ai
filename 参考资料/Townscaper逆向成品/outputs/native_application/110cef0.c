// RVA 0x110cef0 | FuryStudios.FurySDK.Internal.PlatformPlayerPrefs$$GetString
// PDB: PlatformPlayerPrefs_GetString_m8A49F048DF4582D9878D08E33E21CD71AA70C16E
// Body: [[1110cef0, 1110cf52]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10d00a20 Dictionary_2_TryGetValue_m2377E865A8C08B77CE2108585784C9118DAE4E2A_gshared

String_t * __cdecl
PlatformPlayerPrefs_GetString_m8A49F048DF4582D9878D08E33E21CD71AA70C16E
          (PlatformPlayerPrefs_t9473F0F596FC2C6200FD273286475145A0EF282E *param_1,String_t *param_2,
          String_t *param_3,MethodInfo *param_4)

{
  Dictionary_2_t05DA59462DB2B73E336E6741454AE4A402C9178B *pDVar1;
  bool bVar2;
  String_t *local_8;

  if (DAT_11523ea2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2_TryGetValue_m4519CCC2D78183181E5B916CE527868718A804FD_RuntimeMethod_var
              );
    DAT_11523ea2 = '\x01';
  }
  local_8 = (String_t *)0x0;
  if ((param_1->___data_0 != (PlayerPrefsSaveData_t8B8AAC39C8A51CE7EA2AF47E8F5D075A00613ADB *)0x0)
     && (pDVar1 = (Dictionary_2_t05DA59462DB2B73E336E6741454AE4A402C9178B *)
                  param_1->___data_0->___savedString_2,
        pDVar1 != (Dictionary_2_t05DA59462DB2B73E336E6741454AE4A402C9178B *)0x0)) {
    bVar2 = Dictionary_2_TryGetValue_m2377E865A8C08B77CE2108585784C9118DAE4E2A_gshared
                      (pDVar1,(AchievementID_t13562D86FC9C116E950E863A44792F46EBFFE67D)param_2,
                       (Il2CppObject **)&local_8,
                       Dictionary_2_TryGetValue_m4519CCC2D78183181E5B916CE527868718A804FD_RuntimeMethod_var
                      );
    if (!bVar2) {
      local_8 = param_3;
    }
    return local_8;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
