// RVA 0x804d10 | Placemaker.Props.PropReference$$NameAfterProps
// PDB: PropReference_NameAfterProps_m82061E65F9E7A06956969C1EAF1A348E3C219F78
// Body: [[10804d10, 10804d87]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10a4a8b0 Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB
// 10a4aa60 Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
// 10a4ac90 Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781

void __cdecl
PropReference_NameAfterProps_m82061E65F9E7A06956969C1EAF1A348E3C219F78
          (PropReference_t6E2A1950F9D20D5E78CEDF74F676E773BB668110 *param_1,MethodInfo *param_2)

{
  Prop_tFB36A7E740F843093CDC437435E4BA4054D50B46 *pPVar1;
  bool bVar2;
  String_t *pSVar3;

  if (DAT_1151f1f0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    DAT_1151f1f0 = '\x01';
  }
  pPVar1 = param_1->___prop_4;
  if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
  }
  bVar2 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                    ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pPVar1,(MethodInfo *)0x0);
  if (bVar2) {
    if (param_1->___prop_4 == (Prop_tFB36A7E740F843093CDC437435E4BA4054D50B46 *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_null_reference_exception();
    }
    pSVar3 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB
                       ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)param_1->___prop_4,
                        (MethodInfo *)0x0);
    Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781
              ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)param_1,pSVar3,(MethodInfo *)0x0)
    ;
  }
  return;
}
