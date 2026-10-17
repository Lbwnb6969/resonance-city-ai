// RVA 0x872490 | Placemaker.AoBaker$$OnEnable
// PDB: AoBaker_OnEnable_m04013304721BBE5BD1C7A1DF227A54E7879E37AF
// Body: [[10872490, 108724f2]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 10872c20 AoBaker_Restore_mA751F0B8AB2A8B8DEB528EF2254E53036E98BEA0
// 10a4aa60 Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499

void __cdecl
AoBaker_OnEnable_m04013304721BBE5BD1C7A1DF227A54E7879E37AF
          (AoBaker_t9129C481C867A370E0057056B761ECEB59BE1C20 *param_1,MethodInfo *param_2)

{
  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *pOVar1;
  bool bVar2;

  if (DAT_1151f58e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    DAT_1151f58e = '\x01';
  }
  pOVar1 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)param_1->___material_10;
  if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
  }
  bVar2 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(pOVar1,(MethodInfo *)0x0);
  if (bVar2) {
    AoBaker_Restore_mA751F0B8AB2A8B8DEB528EF2254E53036E98BEA0(param_1,(MethodInfo *)0x0);
  }
  return;
}
