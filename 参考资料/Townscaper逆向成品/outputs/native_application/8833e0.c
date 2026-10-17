// RVA 0x8833e0 | Placemaker.Life.ButterflyFlock$$SetLanding
// PDB: ButterflyFlock_SetLanding_m95DE165838E4D59EEAAB965D1050601B77B5B014
// Body: [[108833e0, 108834c8]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 108832d0 ButterflyFlock_SetButterfly_m2118D8C52DFDB8F2C82882F5248CC208250F1D38
// 10a4a920 Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54
// 10a4aa60 Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499

void __cdecl
ButterflyFlock_SetLanding_m95DE165838E4D59EEAAB965D1050601B77B5B014
          (ButterflyFlock_t232314275686A150CB7BF02C9493FBAB75C6DDFD *param_1,
          Butterfly_tD88FB24FED212100B54898A76CACE40F8EBAC53E *param_2,
          ButterflyLanding_t7CB933CAC325175F465615B454645E4BA106654B *param_3,MethodInfo *param_4)

{
  ButterflyLanding_t7CB933CAC325175F465615B454645E4BA106654B *pBVar1;
  bool bVar2;

  if (DAT_1151f5d5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    DAT_1151f5d5 = '\x01';
  }
  if (param_2 != (Butterfly_tD88FB24FED212100B54898A76CACE40F8EBAC53E *)0x0) {
    pBVar1 = param_2->___landing_12;
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
      pBVar1 = param_2->___landing_12;
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
        ButterflyFlock_SetButterfly_m2118D8C52DFDB8F2C82882F5248CC208250F1D38
                  (param_1,param_2->___landing_12,
                   (Butterfly_tD88FB24FED212100B54898A76CACE40F8EBAC53E *)0x0,(MethodInfo *)0x0);
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
        ButterflyFlock_SetButterfly_m2118D8C52DFDB8F2C82882F5248CC208250F1D38
                  (param_1,param_3,param_2,(MethodInfo *)0x0);
      }
      param_2->___landing_12 = param_3;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
