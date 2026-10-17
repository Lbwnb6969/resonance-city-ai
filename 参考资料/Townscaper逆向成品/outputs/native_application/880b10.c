// RVA 0x880b10 | Placemaker.BorderDrawer$$OnEnable
// PDB: BorderDrawer_OnEnable_m5272739FF0ECE4E8C63A70AF441E4C744ED16B20
// Body: [[10880b10, 10880b85]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10880be0 BorderDrawer_SetupBlock_m5A934DC296C252B9519F54CA1650098071C93DFC
// 10a4aa60 Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499

void __cdecl
BorderDrawer_OnEnable_m5272739FF0ECE4E8C63A70AF441E4C744ED16B20
          (BorderDrawer_t5CCF0A662FEFF553A6CDA812C86BCB079D1B618C *param_1,MethodInfo *param_2)

{
  AoBaker_t9129C481C867A370E0057056B761ECEB59BE1C20 *pAVar1;
  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *pOVar2;
  bool bVar3;

  if (DAT_1151f5ce == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    DAT_1151f5ce = '\x01';
  }
  if ((param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) &&
     (pAVar1 = param_1->___master_4->___aoBaker_11,
     pAVar1 != (AoBaker_t9129C481C867A370E0057056B761ECEB59BE1C20 *)0x0)) {
    pOVar2 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pAVar1->___marchingSquaresTex_17;
    if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
       (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0))
    {
      il2cpp_runtime_class_init
                (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    }
    bVar3 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(pOVar2,(MethodInfo *)0x0);
    if (bVar3) {
      BorderDrawer_SetupBlock_m5A934DC296C252B9519F54CA1650098071C93DFC(param_1,(MethodInfo *)0x0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
