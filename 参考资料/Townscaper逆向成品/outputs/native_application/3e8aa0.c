// RVA 0x3e8aa0 | Placemaker.Ui.UpdateState$$Subscribe
// PDB: UpdateState_Subscribe_m204EF4956F69A083507E07478ACD5A36B93EB9ED
// Body: [[103e8aa0, 103e8c5e]]
// Direct callees:
// 1018e530 RaiseInvalidCastException
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d17c0 BreakPoint__ctor_m1900245FA061B6C11A6ADD2176B3A5BEF5D8C8B0
// 101d8560 OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
// 10325a00 UnityAction_1_Invoke_m2BCE3E687DD62E352139131BB1AD26D8AA444E77_gshared
// 10a3aa50 Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
// 10a3dc10 GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86
// 10b15e50 Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55
// 11134ba0 CanvasGroup_set_blocksRaycasts_m322FC5A1B70A23524463A84CC707BF50FD284B3A

UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C * __cdecl
UpdateState_Subscribe_m204EF4956F69A083507E07478ACD5A36B93EB9ED
          (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *param_1,
          CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F *param_2,MethodInfo *param_3)

{
  BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *pBVar1;
  OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *pOVar2;
  Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *pAVar3;
  Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *pAVar4;
  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *pGVar5;

  if (DAT_1151c8d1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass33_0_U3CSubscribeU3Eb__0_m833274C5C7FC6DE676259AE00F9B6557A103DB3A_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass33_0_U3CSubscribeU3Eb__1_m72DC792B7A1662A5CC78B0F05B3CA4E4F091D613_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass33_0_tFBF011B4E72A4951EF31CDB1C4EFC13AE2AD5CAD_il2cpp_TypeInfo_var
              );
    DAT_1151c8d1 = '\x01';
  }
  pBVar1 = (BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *)
           il2cpp_codegen_object_new
                     (
                     U3CU3Ec__DisplayClass33_0_tFBF011B4E72A4951EF31CDB1C4EFC13AE2AD5CAD_il2cpp_TypeInfo_var
                     );
  BreakPoint__ctor_m1900245FA061B6C11A6ADD2176B3A5BEF5D8C8B0(pBVar1,(MethodInfo *)0x0);
  if (pBVar1 != (BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *)0x0) {
    pBVar1->___name_0 = (String_t *)param_2;
    pOVar2 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
             il2cpp_codegen_object_new
                       (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var);
    OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
              (pOVar2,(Il2CppObject *)pBVar1,
               (int)
               U3CU3Ec__DisplayClass33_0_U3CSubscribeU3Eb__0_m833274C5C7FC6DE676259AE00F9B6557A103DB3A_RuntimeMethod_var
               ,Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3_RuntimeMethod_var);
    if (DAT_1151c8cd == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                ((uint *)&
                         Action_1_Invoke_mB4E4B9A52AFDB6F7EF89A35E53068E836B1C312E_RuntimeMethod_var
                );
      il2cpp_codegen_initialize_runtime_metadata
                ((uint *)&Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var);
      DAT_1151c8cd = '\x01';
    }
    if (pOVar2 == (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)0x0)
    goto LAB_103e8c53;
    UnityAction_1_Invoke_m2BCE3E687DD62E352139131BB1AD26D8AA444E77_gshared
              ((UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB *)pOVar2,
               param_1->____current_0,
               Action_1_Invoke_mB4E4B9A52AFDB6F7EF89A35E53068E836B1C312E_RuntimeMethod_var);
    pAVar3 = (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)
             Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55
                       ((Delegate_t *)param_1->___onValueChanged_3,(Delegate_t *)pOVar2,
                        (MethodInfo *)0x0);
    pAVar4 = (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)0x0;
    if (pAVar3 != (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)0x0) {
      if (*(Il2CppClass **)pAVar3 ==
          Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var) {
        pAVar4 = pAVar3;
      }
      if (pAVar4 == (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)0x0) goto LAB_103e8c58;
    }
    param_1->___onValueChanged_3 = pAVar4;
    pAVar4 = param_1->___onTargetChange_4;
    pOVar2 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
             il2cpp_codegen_object_new
                       (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var);
    OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
              (pOVar2,(Il2CppObject *)pBVar1,
               (int)
               U3CU3Ec__DisplayClass33_0_U3CSubscribeU3Eb__1_m72DC792B7A1662A5CC78B0F05B3CA4E4F091D613_RuntimeMethod_var
               ,Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3_RuntimeMethod_var);
    pAVar3 = (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)
             Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55
                       ((Delegate_t *)pAVar4,(Delegate_t *)pOVar2,(MethodInfo *)0x0);
    pAVar4 = (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)0x0;
    if (pAVar3 != (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)0x0) {
      if (*(Il2CppClass **)pAVar3 ==
          Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var) {
        pAVar4 = pAVar3;
      }
      if (pAVar4 == (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)0x0) {
LAB_103e8c58:
                    /* WARNING: Subroutine does not return */
        RaiseInvalidCastException
                  ((Il2CppObject *)pAVar3,
                   Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var);
      }
    }
    param_1->___onTargetChange_4 = pAVar4;
    if (pBVar1->___name_0 != (String_t *)0x0) {
      pGVar5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
                         ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pBVar1->___name_0,
                          (MethodInfo *)0x0);
      if (pGVar5 != (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0) {
        GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86
                  (pGVar5,0.0 < param_1->____current_0,(MethodInfo *)0x0);
        if (pBVar1->___name_0 != (String_t *)0x0) {
          CanvasGroup_set_blocksRaycasts_m322FC5A1B70A23524463A84CC707BF50FD284B3A
                    ((CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F *)pBVar1->___name_0,
                     0.0 < param_1->____target_1,(MethodInfo *)0x0);
          return param_1;
        }
      }
    }
  }
LAB_103e8c53:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
