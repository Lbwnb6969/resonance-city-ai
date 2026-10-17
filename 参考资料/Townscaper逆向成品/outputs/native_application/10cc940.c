// RVA 0x10cc940 | FuryStudios.FurySDK.Settings.AchievementDatabase$$GetGOGAchievementID
// PDB: AchievementDatabase_GetGOGAchievementID_m04F8C7EBF7D82C583E56BE1B5BAF57C5E3A89292
// Body: [[110cc940, 110cc9a4]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10d00a20 Dictionary_2_TryGetValue_m2377E865A8C08B77CE2108585784C9118DAE4E2A_gshared

String_t * __cdecl
AchievementDatabase_GetGOGAchievementID_m04F8C7EBF7D82C583E56BE1B5BAF57C5E3A89292
          (AchievementDatabase_t56947D99CE5B97AE236AA16FE0C87B8A8BBF27E4 *param_1,
          AchievementID_t13562D86FC9C116E950E863A44792F46EBFFE67D param_2,MethodInfo *param_3)

{
  bool bVar1;
  Il2CppObject *local_8;

  if (DAT_11523a5a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2_TryGetValue_m2801A4B6C30796E2AFF110E4E632F252050FE803_RuntimeMethod_var
              );
    DAT_11523a5a = '\x01';
  }
  local_8 = (Il2CppObject *)0x0;
  if ((Dictionary_2_t05DA59462DB2B73E336E6741454AE4A402C9178B *)param_1->___database_5 !=
      (Dictionary_2_t05DA59462DB2B73E336E6741454AE4A402C9178B *)0x0) {
    bVar1 = Dictionary_2_TryGetValue_m2377E865A8C08B77CE2108585784C9118DAE4E2A_gshared
                      ((Dictionary_2_t05DA59462DB2B73E336E6741454AE4A402C9178B *)
                       param_1->___database_5,param_2,&local_8,
                       Dictionary_2_TryGetValue_m2801A4B6C30796E2AFF110E4E632F252050FE803_RuntimeMethod_var
                      );
    if (bVar1) {
      if (local_8 != (Il2CppObject *)0x0) {
        return (String_t *)local_8[4].field0_0x0.klass;
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_null_reference_exception();
    }
  }
  return (String_t *)0x0;
}
