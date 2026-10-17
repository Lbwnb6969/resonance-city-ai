// RVA 0x10cfbd0 | FuryStudios.FurySDK.Settings.LeaderboardsDatabase$$.ctor
// PDB: LeaderboardsDatabase__ctor_m879BB70D9C0F62A0057AABBFBF112668DF452923
// Body: [[110cfbd0, 110cfc43]]
// Direct callees:
// 101275a0 il2cpp_array_new_specific
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 10226660 Dictionary_2__ctor_mAA4C8F456AA58EC1FB154441680BCFAA27AD6183_gshared
// 10667a00 ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063

void __cdecl
LeaderboardsDatabase__ctor_m879BB70D9C0F62A0057AABBFBF112668DF452923
          (LeaderboardsDatabase_tBF977EEE70A67A980B80E5D722E1467190CE1FAC *param_1,
          MethodInfo *param_2)

{
  LeaderboardInfoU5BU5D_t184C99583402D5D36217BCF53993DAD1214DCC4B *pLVar1;
  Dictionary_2_tBF9E2338C61ABCF5ED32053F509AFB44385F774C *pDVar2;

  if (DAT_11523a87 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2__ctor_m4F5B29D0B7AD1E5B29A648DFE54961AE7CC24C66_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Dictionary_2_t0689204FBD978AF83FC8CB10826B5983A6EDB6A9_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       LeaderboardInfoU5BU5D_t184C99583402D5D36217BCF53993DAD1214DCC4B_il2cpp_TypeInfo_var
              );
    DAT_11523a87 = '\x01';
  }
  pLVar1 = (LeaderboardInfoU5BU5D_t184C99583402D5D36217BCF53993DAD1214DCC4B *)
           il2cpp_array_new_specific
                     (LeaderboardInfoU5BU5D_t184C99583402D5D36217BCF53993DAD1214DCC4B_il2cpp_TypeInfo_var
                      ,0);
  param_1->___leaderboards_4 = pLVar1;
  pDVar2 = (Dictionary_2_tBF9E2338C61ABCF5ED32053F509AFB44385F774C *)
           il2cpp_codegen_object_new
                     (Dictionary_2_t0689204FBD978AF83FC8CB10826B5983A6EDB6A9_il2cpp_TypeInfo_var);
  Dictionary_2__ctor_mAA4C8F456AA58EC1FB154441680BCFAA27AD6183_gshared
            (pDVar2,Dictionary_2__ctor_m4F5B29D0B7AD1E5B29A648DFE54961AE7CC24C66_RuntimeMethod_var);
  param_1->___database_5 = (Dictionary_2_t0689204FBD978AF83FC8CB10826B5983A6EDB6A9 *)pDVar2;
  ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063
            ((ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A *)param_1,(MethodInfo *)0x0
            );
  return;
}
