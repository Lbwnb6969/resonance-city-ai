// RVA 0x10cf7e0 | FuryStudios.FurySDK.Settings.LeaderboardsDatabase$$GetGDKID
// PDB: LeaderboardsDatabase_GetGDKID_m387F038575A50B998FA9651168AD233C4FCAD0CF
// Body: [[110cf7e0, 110cf844]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10d00a20 Dictionary_2_TryGetValue_m2377E865A8C08B77CE2108585784C9118DAE4E2A_gshared

String_t * __cdecl
LeaderboardsDatabase_GetGDKID_m387F038575A50B998FA9651168AD233C4FCAD0CF
          (LeaderboardsDatabase_tBF977EEE70A67A980B80E5D722E1467190CE1FAC *param_1,
          StatID_t49358985665638845884309A782C9128E571E796 param_2,MethodInfo *param_3)

{
  bool bVar1;
  Il2CppObject *local_8;

  if (DAT_11523a84 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2_TryGetValue_m11096D40A1EEE5AD7C7E0004B6A4BC82AC5562C8_RuntimeMethod_var
              );
    DAT_11523a84 = '\x01';
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
        return (String_t *)local_8[2].field0_0x0.klass;
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_null_reference_exception();
    }
  }
  return (String_t *)0x0;
}
