// RVA 0x10d1dc0 | FuryStudios.FurySDK.Settings.RichPresenceDatabase$$.ctor
// PDB: RichPresenceDatabase__ctor_m783A5E17DE4B1B8D18AE4825CAC99212DE595353
// Body: [[110d1dc0, 110d1e33]]
// Direct callees:
// 101275a0 il2cpp_array_new_specific
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 10226660 Dictionary_2__ctor_mAA4C8F456AA58EC1FB154441680BCFAA27AD6183_gshared
// 10667a00 ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063

void __cdecl
RichPresenceDatabase__ctor_m783A5E17DE4B1B8D18AE4825CAC99212DE595353
          (RichPresenceDatabase_t4D6F2DEA9F4133F39C370B01150E794E28C03D1E *param_1,
          MethodInfo *param_2)

{
  RichPresenceInfoU5BU5D_t2023E03B0C06A04DE599A473C298F0F826F191A3 *pRVar1;
  Dictionary_2_tBF9E2338C61ABCF5ED32053F509AFB44385F774C *pDVar2;

  if (DAT_11523aa7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2__ctor_m0C5EF5A2A3EE555CC6E650E5C4E39617E1B8D387_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Dictionary_2_t17EF7FB86D6D0B48BBEAF9B9214C56B8D6EF98FB_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       RichPresenceInfoU5BU5D_t2023E03B0C06A04DE599A473C298F0F826F191A3_il2cpp_TypeInfo_var
              );
    DAT_11523aa7 = '\x01';
  }
  pRVar1 = (RichPresenceInfoU5BU5D_t2023E03B0C06A04DE599A473C298F0F826F191A3 *)
           il2cpp_array_new_specific
                     (RichPresenceInfoU5BU5D_t2023E03B0C06A04DE599A473C298F0F826F191A3_il2cpp_TypeInfo_var
                      ,0);
  param_1->___richPresences_4 = pRVar1;
  pDVar2 = (Dictionary_2_tBF9E2338C61ABCF5ED32053F509AFB44385F774C *)
           il2cpp_codegen_object_new
                     (Dictionary_2_t17EF7FB86D6D0B48BBEAF9B9214C56B8D6EF98FB_il2cpp_TypeInfo_var);
  Dictionary_2__ctor_mAA4C8F456AA58EC1FB154441680BCFAA27AD6183_gshared
            (pDVar2,Dictionary_2__ctor_m0C5EF5A2A3EE555CC6E650E5C4E39617E1B8D387_RuntimeMethod_var);
  param_1->___database_5 = (Dictionary_2_t17EF7FB86D6D0B48BBEAF9B9214C56B8D6EF98FB *)pDVar2;
  ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063
            ((ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A *)param_1,(MethodInfo *)0x0
            );
  return;
}
