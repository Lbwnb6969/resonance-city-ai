// RVA 0x3e8d70 | Placemaker.Ui.UpdateState$$Subscribe
// PDB: UpdateState_Subscribe_m6FB44E1EF150C04E3E184689FBF4A3F282835BDA
// Body: [[103e8d70, 103e8df6]]
// Direct callees:
// 1018e530 RaiseInvalidCastException
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10325a00 UnityAction_1_Invoke_m2BCE3E687DD62E352139131BB1AD26D8AA444E77_gshared
// 10b15e50 Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55

UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C * __cdecl
UpdateState_Subscribe_m6FB44E1EF150C04E3E184689FBF4A3F282835BDA
          (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *param_1,
          Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *param_2,MethodInfo *param_3)

{
  Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *pAVar1;
  Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *pAVar2;

  if (DAT_1151c8cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1_Invoke_mB4E4B9A52AFDB6F7EF89A35E53068E836B1C312E_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var);
    DAT_1151c8cd = '\x01';
  }
  if (param_2 == (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_null_reference_exception();
  }
  UnityAction_1_Invoke_m2BCE3E687DD62E352139131BB1AD26D8AA444E77_gshared
            ((UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB *)param_2,
             param_1->____current_0,
             Action_1_Invoke_mB4E4B9A52AFDB6F7EF89A35E53068E836B1C312E_RuntimeMethod_var);
  pAVar1 = (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)
           Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55
                     ((Delegate_t *)param_1->___onValueChanged_3,(Delegate_t *)param_2,
                      (MethodInfo *)0x0);
  pAVar2 = (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)0x0;
  if (pAVar1 != (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)0x0) {
    if (*(Il2CppClass **)pAVar1 ==
        Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var) {
      pAVar2 = pAVar1;
    }
    if (pAVar2 == (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)0x0) {
                    /* WARNING: Subroutine does not return */
      RaiseInvalidCastException
                ((Il2CppObject *)pAVar1,
                 Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var);
    }
  }
  param_1->___onValueChanged_3 = pAVar2;
  return param_1;
}
