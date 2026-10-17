// RVA 0x10cca90 | FuryStudios.FurySDK.Settings.AchievementDatabase$$GetSteamAchivementInfo
// PDB: AchievementDatabase_GetSteamAchivementInfo_mFA923DD2C2764D419ACB58A70FA837347CF1CF13
// Body: [[110cca90, 110ccb02]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10d00a20 Dictionary_2_TryGetValue_m2377E865A8C08B77CE2108585784C9118DAE4E2A_gshared

SteamAchievementInfo_t8BF76073C9D2E781BF879CC55D4E8EF80C3FDDCD * __cdecl
AchievementDatabase_GetSteamAchivementInfo_mFA923DD2C2764D419ACB58A70FA837347CF1CF13
          (SteamAchievementInfo_t8BF76073C9D2E781BF879CC55D4E8EF80C3FDDCD *__return_storage_ptr__,
          AchievementDatabase_t56947D99CE5B97AE236AA16FE0C87B8A8BBF27E4 *param_1,
          AchievementID_t13562D86FC9C116E950E863A44792F46EBFFE67D param_2,MethodInfo *param_3)

{
  MonitorData *pMVar1;
  Il2CppObject_u_0 IVar2;
  MonitorData *pMVar3;
  bool bVar4;
  Il2CppObject *local_8;

  if (DAT_11523a59 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2_TryGetValue_m2801A4B6C30796E2AFF110E4E632F252050FE803_RuntimeMethod_var
              );
    DAT_11523a59 = '\x01';
  }
  local_8 = (Il2CppObject *)0x0;
  if ((Dictionary_2_t05DA59462DB2B73E336E6741454AE4A402C9178B *)param_1->___database_5 !=
      (Dictionary_2_t05DA59462DB2B73E336E6741454AE4A402C9178B *)0x0) {
    bVar4 = Dictionary_2_TryGetValue_m2377E865A8C08B77CE2108585784C9118DAE4E2A_gshared
                      ((Dictionary_2_t05DA59462DB2B73E336E6741454AE4A402C9178B *)
                       param_1->___database_5,param_2,&local_8,
                       Dictionary_2_TryGetValue_m2801A4B6C30796E2AFF110E4E632F252050FE803_RuntimeMethod_var
                      );
    if (bVar4) {
      if (local_8 != (Il2CppObject *)0x0) {
        pMVar1 = local_8[2].monitor;
        IVar2 = local_8[3].field0_0x0;
        pMVar3 = local_8[3].monitor;
        __return_storage_ptr__->___statName_0 = (String_t *)local_8[2].field0_0x0;
        __return_storage_ptr__->___statType_1 = (int)pMVar1;
        __return_storage_ptr__->___minValue_2 = (float)IVar2;
        __return_storage_ptr__->___maxValue_3 = (float)pMVar3;
        return __return_storage_ptr__;
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_null_reference_exception();
    }
  }
  __return_storage_ptr__->___statName_0 = (String_t *)0x0;
  __return_storage_ptr__->___statType_1 = 0;
  __return_storage_ptr__->___minValue_2 = 0.0;
  __return_storage_ptr__->___maxValue_3 = 0.0;
  return __return_storage_ptr__;
}
