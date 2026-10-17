// RVA 0x10cf850 | FuryStudios.FurySDK.Settings.LeaderboardsDatabase$$GetPS4ID
// PDB: LeaderboardsDatabase_GetPS4ID_m2B208DE24A68F1991B6F7BCD288B27766C80E86E
// Body: [[110cf850, 110cf8b4]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10d00a20 Dictionary_2_TryGetValue_m2377E865A8C08B77CE2108585784C9118DAE4E2A_gshared

uint __cdecl
LeaderboardsDatabase_GetPS4ID_m2B208DE24A68F1991B6F7BCD288B27766C80E86E
          (LeaderboardsDatabase_tBF977EEE70A67A980B80E5D722E1467190CE1FAC *param_1,
          StatID_t49358985665638845884309A782C9128E571E796 param_2,MethodInfo *param_3)

{
  bool bVar1;
  Il2CppObject *local_8;

  if (DAT_11523a83 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2_TryGetValue_m11096D40A1EEE5AD7C7E0004B6A4BC82AC5562C8_RuntimeMethod_var
              );
    DAT_11523a83 = '\x01';
  }
  local_8 = (Il2CppObject *)0x0;
  if ((Dictionary_2_t05DA59462DB2B73E336E6741454AE4A402C9178B *)param_1->___database_5 !=
      (Dictionary_2_t05DA59462DB2B73E336E6741454AE4A402C9178B *)0x0) {
    bVar1 = Dictionary_2_TryGetValue_m2377E865A8C08B77CE2108585784C9118DAE4E2A_gshared
                      ((Dictionary_2_t05DA59462DB2B73E336E6741454AE4A402C9178B *)
                       param_1->___database_5,
                       (AchievementID_t13562D86FC9C116E950E863A44792F46EBFFE67D)param_2.___id_0,
                       &local_8,
                       Dictionary_2_TryGetValue_m11096D40A1EEE5AD7C7E0004B6A4BC82AC5562C8_RuntimeMethod_var
                      );
    if (bVar1) {
      if (local_8 != (Il2CppObject *)0x0) {
        return (uint)local_8[1].monitor;
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_null_reference_exception();
    }
  }
  return 0;
}
