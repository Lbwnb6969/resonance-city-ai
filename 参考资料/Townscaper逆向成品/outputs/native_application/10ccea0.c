// RVA 0x10ccea0 | FuryStudios.FurySDK.Settings.AchievementDatabase$$get_Keys
// PDB: AchievementDatabase_get_Keys_m4206068B2BAF649E880EEC93C10B66D40590C45F
// Body: [[110ccea0, 110ccedf]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10220b60 Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m196F1022DE509BE4E009CE9D1F990A36B9DAE84B_gshared

Il2CppObject * __cdecl
AchievementDatabase_get_Keys_m4206068B2BAF649E880EEC93C10B66D40590C45F
          (AchievementDatabase_t56947D99CE5B97AE236AA16FE0C87B8A8BBF27E4 *param_1,
          MethodInfo *param_2)

{
  Il2CppObject *pIVar1;

  if (DAT_11523a57 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2_get_Keys_mE80B6B89BB8FEB2E8908A0A76D76845EEE24AA88_RuntimeMethod_var
              );
    DAT_11523a57 = '\x01';
  }
  if ((Dictionary_2_t43A014CDB0984719F37DCAB5C913F212A7902086 *)param_1->___database_5 !=
      (Dictionary_2_t43A014CDB0984719F37DCAB5C913F212A7902086 *)0x0) {
    pIVar1 = Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m196F1022DE509BE4E009CE9D1F990A36B9DAE84B_gshared
                       ((Dictionary_2_t43A014CDB0984719F37DCAB5C913F212A7902086 *)
                        param_1->___database_5,
                        Dictionary_2_get_Keys_mE80B6B89BB8FEB2E8908A0A76D76845EEE24AA88_RuntimeMethod_var
                       );
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
