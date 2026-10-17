// RVA 0x3e6950 | Placemaker.Ui.UiMaster$$SubscribeToMenuState
// PDB: UiMaster_SubscribeToMenuState_mE782237CD39DD56FB441C83148B723D4C4940272
// Body: [[103e6950, 103e69ce]]
// Direct callees:
// 1018e530 RaiseInvalidCastException
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10742280 Action_2_Invoke_m152C98E120D38857ED1464915833AAE22C0812B5_gshared
// 10b15e50 Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55

void __cdecl
UiMaster_SubscribeToMenuState_mE782237CD39DD56FB441C83148B723D4C4940272
          (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *param_1,
          Action_2_t4DD01329FC38EBF9CEAC744A13C1C3E37D93C169 *param_2,MethodInfo *param_3)

{
  Action_2_t4DD01329FC38EBF9CEAC744A13C1C3E37D93C169 *pAVar1;
  Action_2_t4DD01329FC38EBF9CEAC744A13C1C3E37D93C169 *pAVar2;

  if (DAT_1151c8b3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_2_Invoke_m06B382510D57D98EBD33FD76C7726CF86A28D4CB_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_2_t4DD01329FC38EBF9CEAC744A13C1C3E37D93C169_il2cpp_TypeInfo_var);
    DAT_1151c8b3 = '\x01';
  }
  if (param_2 == (Action_2_t4DD01329FC38EBF9CEAC744A13C1C3E37D93C169 *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_null_reference_exception();
  }
  Action_2_Invoke_m152C98E120D38857ED1464915833AAE22C0812B5_gshared
            ((Action_2_tAEEAE0CA76819C6105A7D08A17A11166D3071492 *)param_2,param_1->___menuState_30,
             (Il2CppObject *)param_1->___menuState_30,
             Action_2_Invoke_m06B382510D57D98EBD33FD76C7726CF86A28D4CB_RuntimeMethod_var);
  pAVar1 = (Action_2_t4DD01329FC38EBF9CEAC744A13C1C3E37D93C169 *)
           Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55
                     ((Delegate_t *)param_1->___onMenuStateChange_31,(Delegate_t *)param_2,
                      (MethodInfo *)0x0);
  pAVar2 = (Action_2_t4DD01329FC38EBF9CEAC744A13C1C3E37D93C169 *)0x0;
  if (pAVar1 != (Action_2_t4DD01329FC38EBF9CEAC744A13C1C3E37D93C169 *)0x0) {
    if (*(Il2CppClass **)pAVar1 ==
        Action_2_t4DD01329FC38EBF9CEAC744A13C1C3E37D93C169_il2cpp_TypeInfo_var) {
      pAVar2 = pAVar1;
    }
    if (pAVar2 == (Action_2_t4DD01329FC38EBF9CEAC744A13C1C3E37D93C169 *)0x0) {
                    /* WARNING: Subroutine does not return */
      RaiseInvalidCastException
                ((Il2CppObject *)pAVar1,
                 Action_2_t4DD01329FC38EBF9CEAC744A13C1C3E37D93C169_il2cpp_TypeInfo_var);
    }
  }
  param_1->___onMenuStateChange_31 = pAVar2;
  return;
}
