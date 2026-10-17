// RVA 0x10d19d0 | FuryStudios.FurySDK.Settings.RichPresenceDatabase$$GetGDKRichPresenceID
// PDB: RichPresenceDatabase_GetGDKRichPresenceID_m4F999F5778EA4379846C50A40AB94668E608601A
// Body: [[110d19d0, 110d1a34]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10d00a20 Dictionary_2_TryGetValue_m2377E865A8C08B77CE2108585784C9118DAE4E2A_gshared

String_t * __cdecl
RichPresenceDatabase_GetGDKRichPresenceID_m4F999F5778EA4379846C50A40AB94668E608601A
          (RichPresenceDatabase_t4D6F2DEA9F4133F39C370B01150E794E28C03D1E *param_1,
          RichPresenceID_t8C87FE2686D772BD5D4036D9D7A4536A4B699F87 param_2,MethodInfo *param_3)

{
  bool bVar1;
  Il2CppObject *local_8;

  if (DAT_11523aa5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2_TryGetValue_m2385A7FE3C16C2D6CF50B3CC5977A607B6CF7A33_RuntimeMethod_var
              );
    DAT_11523aa5 = '\x01';
  }
  local_8 = (Il2CppObject *)0x0;
  if ((Dictionary_2_t05DA59462DB2B73E336E6741454AE4A402C9178B *)param_1->___database_5 !=
      (Dictionary_2_t05DA59462DB2B73E336E6741454AE4A402C9178B *)0x0) {
    bVar1 = Dictionary_2_TryGetValue_m2377E865A8C08B77CE2108585784C9118DAE4E2A_gshared
                      ((Dictionary_2_t05DA59462DB2B73E336E6741454AE4A402C9178B *)
                       param_1->___database_5,
                       (AchievementID_t13562D86FC9C116E950E863A44792F46EBFFE67D)param_2.___id_0,
                       &local_8,
                       Dictionary_2_TryGetValue_m2385A7FE3C16C2D6CF50B3CC5977A607B6CF7A33_RuntimeMethod_var
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
