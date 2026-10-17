// RVA 0x3d94e0 | Placemaker.Modules.Processing.ModuleImporter$$Awake
// PDB: ModuleImporter_Awake_mEF43EEDE2F987C484C3AD4FCAEFAC43503BF9B2C
// Body: [[103d94e0, 103d95c2]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10a3aa50 Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
// 10a3dc10 GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86
// 10a4aa60 Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499

void __cdecl
ModuleImporter_Awake_mEF43EEDE2F987C484C3AD4FCAEFAC43503BF9B2C
          (ModuleImporter_t33A2FDE718D9410873818057F73F9EC8BD7FF00A *param_1,MethodInfo *param_2)

{
  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *pOVar1;
  bool bVar2;
  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *pGVar3;

  if (DAT_1151c880 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    DAT_1151c880 = '\x01';
  }
  pGVar3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
                     ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                      (MethodInfo *)0x0);
  if (pGVar3 != (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0) {
    GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(pGVar3,false,(MethodInfo *)0x0);
    pOVar1 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)param_1->___toDisable_5;
    if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
       (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0))
    {
      il2cpp_runtime_class_init
                (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    }
    bVar2 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(pOVar1,(MethodInfo *)0x0);
    if (bVar2) {
      if (param_1->___toDisable_5 == (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0)
      goto LAB_103d95be;
      GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86
                (param_1->___toDisable_5,false,(MethodInfo *)0x0);
    }
    pOVar1 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)param_1->___prefabContainer_9;
    if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
       (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0))
    {
      il2cpp_runtime_class_init
                (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    }
    bVar2 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(pOVar1,(MethodInfo *)0x0);
    if (!bVar2) {
      return;
    }
    if (((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1->___prefabContainer_9 !=
         (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) &&
       (pGVar3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
                           ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                            param_1->___prefabContainer_9,(MethodInfo *)0x0),
       pGVar3 != (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0)) {
      GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(pGVar3,false,(MethodInfo *)0x0)
      ;
      return;
    }
  }
LAB_103d95be:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
