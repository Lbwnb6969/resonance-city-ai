// RVA 0x10cfc50 | FuryStudios.FurySDK.Settings.LeaderboardsDatabase$$get_Keys
// PDB: LeaderboardsDatabase_get_Keys_m9F209D6ECC23BFA2C64A4B5981A3DB85123030F5
// Body: [[110cfc50, 110cfc8f]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10220b60 Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m196F1022DE509BE4E009CE9D1F990A36B9DAE84B_gshared

Il2CppObject * __cdecl
LeaderboardsDatabase_get_Keys_m9F209D6ECC23BFA2C64A4B5981A3DB85123030F5
          (LeaderboardsDatabase_tBF977EEE70A67A980B80E5D722E1467190CE1FAC *param_1,
          MethodInfo *param_2)

{
  Il2CppObject *pIVar1;

  if (DAT_11523a82 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2_get_Keys_mA442D6183B6B6E8E21EA47BA31AF7C11F702439D_RuntimeMethod_var
              );
    DAT_11523a82 = '\x01';
  }
  if ((Dictionary_2_t43A014CDB0984719F37DCAB5C913F212A7902086 *)param_1->___database_5 !=
      (Dictionary_2_t43A014CDB0984719F37DCAB5C913F212A7902086 *)0x0) {
    pIVar1 = Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m196F1022DE509BE4E009CE9D1F990A36B9DAE84B_gshared
                       ((Dictionary_2_t43A014CDB0984719F37DCAB5C913F212A7902086 *)
                        param_1->___database_5,
                        Dictionary_2_get_Keys_mA442D6183B6B6E8E21EA47BA31AF7C11F702439D_RuntimeMethod_var
                       );
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
