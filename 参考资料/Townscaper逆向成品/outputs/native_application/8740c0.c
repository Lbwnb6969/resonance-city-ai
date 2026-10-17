// RVA 0x8740c0 | Placemaker.Ui.BaseButton$$Subscribe
// PDB: BaseButton_Subscribe_mD5456F93E497F42BA652483BE83B0AECA2089C2A
// Body: [[108740c0, 1087413e]]
// Direct callees:
// 1018e530 RaiseInvalidCastException
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1073dc90 Action_1_Invoke_m25A7CA9A142DE88FAC655DC8C4F2A9D469F0B591_gshared
// 10b15e50 Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55

void __cdecl
BaseButton_Subscribe_mD5456F93E497F42BA652483BE83B0AECA2089C2A
          (BaseButton_tAC6372317B2E4EDCF629E5ED7D229B2876B82F0C *param_1,
          Action_1_t8BF1017F2A88A0BEA05454ECAF5EB48218515BA1 *param_2,MethodInfo *param_3)

{
  Action_1_t8BF1017F2A88A0BEA05454ECAF5EB48218515BA1 *pAVar1;
  Action_1_t8BF1017F2A88A0BEA05454ECAF5EB48218515BA1 *pAVar2;

  if (DAT_1151f59e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1_Invoke_mFFFF0C0D209128F78982C79451D13E3F6B20D479_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1_t8BF1017F2A88A0BEA05454ECAF5EB48218515BA1_il2cpp_TypeInfo_var);
    DAT_1151f59e = '\x01';
  }
  if (param_2 == (Action_1_t8BF1017F2A88A0BEA05454ECAF5EB48218515BA1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_null_reference_exception();
  }
  Action_1_Invoke_m25A7CA9A142DE88FAC655DC8C4F2A9D469F0B591_gshared
            ((Action_1_t544C2655053A1384373C677D6CF61F3B89DA1435 *)param_2,param_1->___state_13,
             Action_1_Invoke_mFFFF0C0D209128F78982C79451D13E3F6B20D479_RuntimeMethod_var);
  pAVar1 = (Action_1_t8BF1017F2A88A0BEA05454ECAF5EB48218515BA1 *)
           Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55
                     ((Delegate_t *)param_1->___onStateChange_10,(Delegate_t *)param_2,
                      (MethodInfo *)0x0);
  pAVar2 = (Action_1_t8BF1017F2A88A0BEA05454ECAF5EB48218515BA1 *)0x0;
  if (pAVar1 != (Action_1_t8BF1017F2A88A0BEA05454ECAF5EB48218515BA1 *)0x0) {
    if (*(Il2CppClass **)pAVar1 ==
        Action_1_t8BF1017F2A88A0BEA05454ECAF5EB48218515BA1_il2cpp_TypeInfo_var) {
      pAVar2 = pAVar1;
    }
    if (pAVar2 == (Action_1_t8BF1017F2A88A0BEA05454ECAF5EB48218515BA1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      RaiseInvalidCastException
                ((Il2CppObject *)pAVar1,
                 Action_1_t8BF1017F2A88A0BEA05454ECAF5EB48218515BA1_il2cpp_TypeInfo_var);
    }
  }
  param_1->___onStateChange_10 = pAVar2;
  return;
}
