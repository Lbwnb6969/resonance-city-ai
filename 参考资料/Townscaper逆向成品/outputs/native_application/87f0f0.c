// RVA 0x87f0f0 | Placemaker.Life.BirdFlock$$SetState
// PDB: BirdFlock_SetState_m72806889745C4C557D55CE9E6839387A5AE818AF
// Body: [[1087f0f0, 1087f1cf]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 106604d0 Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872
// 1066d9a0 Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844
// 10a3c6b0 Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485
// 10a4aa60 Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499

void __cdecl
BirdFlock_SetState_m72806889745C4C557D55CE9E6839387A5AE818AF
          (BirdFlock_tB63DB4CEF81D7D9D17C18531A0BEEEA771442436 *param_1,
          Bird_t844A261674A59156BC85FE5538301FE90489C0E8 *param_2,uchar param_3,MethodInfo *param_4)

{
  BirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB *pBVar1;
  bool bVar2;
  float fVar3;
  float fVar4;

  if (DAT_1151f5c3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral3641F172023B823C36CF1686D0308E81BA22A660);
    DAT_1151f5c3 = '\x01';
  }
  if (param_3 == '\x01') {
    if (param_2 == (Bird_t844A261674A59156BC85FE5538301FE90489C0E8 *)0x0) goto LAB_1087f1cb;
    pBVar1 = param_2->___landing_20;
    if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
       (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0))
    {
      il2cpp_runtime_class_init
                (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    }
    bVar2 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                      ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pBVar1,(MethodInfo *)0x0)
    ;
    if (!bVar2) {
      if ((Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->has_cctor != '\0')
         && (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->cctor_finished ==
             0)) {
        il2cpp_runtime_class_init
                  (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
      }
      Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485
                ((Il2CppObject *)_stringLiteral3641F172023B823C36CF1686D0308E81BA22A660,
                 (MethodInfo *)0x0);
    }
  }
  if (param_2 != (Bird_t844A261674A59156BC85FE5538301FE90489C0E8 *)0x0) {
    param_2->___stateNext_18 = param_3;
    fVar3 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844((MethodInfo *)0x0);
    fVar4 = Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872((MethodInfo *)0x0);
    param_2->___lastActionTime_19 = fVar4 + fVar3;
    return;
  }
LAB_1087f1cb:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
