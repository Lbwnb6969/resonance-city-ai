// RVA 0x87efe0 | Placemaker.Life.BirdFlock$$SetLanding
// PDB: BirdFlock_SetLanding_mA7B5BA5BD831833CBA54D626B3CA707E564F8DA3
// Body: [[1087efe0, 1087f0e3]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1066d9a0 Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844
// 1087eab0 BirdFlock_SetBird_m548DC1954ACE4B88F649D219A1E1477AC5B72C5C
// 10a4a920 Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54
// 10a4aa60 Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499

void __cdecl
BirdFlock_SetLanding_mA7B5BA5BD831833CBA54D626B3CA707E564F8DA3
          (BirdFlock_tB63DB4CEF81D7D9D17C18531A0BEEEA771442436 *param_1,
          Bird_t844A261674A59156BC85FE5538301FE90489C0E8 *param_2,
          BirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB *param_3,MethodInfo *param_4)

{
  BirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB *pBVar1;
  bool bVar2;
  float fVar3;

  if (DAT_1151f5c8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    DAT_1151f5c8 = '\x01';
  }
  if (param_2 != (Bird_t844A261674A59156BC85FE5538301FE90489C0E8 *)0x0) {
    pBVar1 = param_2->___landing_20;
    if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
       (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0))
    {
      il2cpp_runtime_class_init
                (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    }
    bVar2 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54
                      ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pBVar1,
                       (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)param_3,(MethodInfo *)0x0
                      );
    if (!bVar2) {
      pBVar1 = param_2->___landing_20;
      if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0')
         && (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished ==
             0)) {
        il2cpp_runtime_class_init
                  (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
      }
      bVar2 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                        ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pBVar1,
                         (MethodInfo *)0x0);
      if (bVar2) {
        BirdFlock_SetBird_m548DC1954ACE4B88F649D219A1E1477AC5B72C5C
                  (param_1,param_2->___landing_20,
                   (Bird_t844A261674A59156BC85FE5538301FE90489C0E8 *)0x0,(MethodInfo *)0x0);
      }
      if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0')
         && (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished ==
             0)) {
        il2cpp_runtime_class_init
                  (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
      }
      bVar2 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                        ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)param_3,
                         (MethodInfo *)0x0);
      if (bVar2) {
        BirdFlock_SetBird_m548DC1954ACE4B88F649D219A1E1477AC5B72C5C
                  (param_1,param_3,param_2,(MethodInfo *)0x0);
      }
      param_2->___landing_20 = param_3;
      fVar3 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844((MethodInfo *)0x0);
      param_2->___lastActionTime_19 = fVar3;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
