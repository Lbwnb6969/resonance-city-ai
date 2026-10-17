// RVA 0x10d1e40 | FuryStudios.FurySDK.Settings.RichPresenceDatabase$$get_Keys
// PDB: RichPresenceDatabase_get_Keys_mF13A6DE4C5B57D21A6D20EBE9C9FE199482C9630
// Body: [[110d1e40, 110d1e7f]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10220b60 Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m196F1022DE509BE4E009CE9D1F990A36B9DAE84B_gshared

Il2CppObject * __cdecl
RichPresenceDatabase_get_Keys_mF13A6DE4C5B57D21A6D20EBE9C9FE199482C9630
          (RichPresenceDatabase_t4D6F2DEA9F4133F39C370B01150E794E28C03D1E *param_1,
          MethodInfo *param_2)

{
  Il2CppObject *pIVar1;

  if (DAT_11523aa2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2_get_Keys_m56FEE1A178677C2866B02F574C3324DB6741E1BF_RuntimeMethod_var
              );
    DAT_11523aa2 = '\x01';
  }
  if ((Dictionary_2_t43A014CDB0984719F37DCAB5C913F212A7902086 *)param_1->___database_5 !=
      (Dictionary_2_t43A014CDB0984719F37DCAB5C913F212A7902086 *)0x0) {
    pIVar1 = Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m196F1022DE509BE4E009CE9D1F990A36B9DAE84B_gshared
                       ((Dictionary_2_t43A014CDB0984719F37DCAB5C913F212A7902086 *)
                        param_1->___database_5,
                        Dictionary_2_get_Keys_m56FEE1A178677C2866B02F574C3324DB6741E1BF_RuntimeMethod_var
                       );
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
