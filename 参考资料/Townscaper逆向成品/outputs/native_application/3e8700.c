// RVA 0x3e8700 | Placemaker.Ui.UpdateState$$SubscribeTick
// PDB: UpdateState_SubscribeTick_m4A6573150A14C7A02DCD412D3E880EC9120DD75D
// Body: [[103e8700, 103e88f7]]
// Direct callees:
// 1018e530 RaiseInvalidCastException
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d17c0 BreakPoint__ctor_m1900245FA061B6C11A6ADD2176B3A5BEF5D8C8B0
// 101d8560 OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
// 10325a00 UnityAction_1_Invoke_m2BCE3E687DD62E352139131BB1AD26D8AA444E77_gshared
// 10448a10 GameObject_GetComponentInChildren_TisRuntimeObject_m8AC8197BF05FE2328AC7879AB44495C245B768F5_gshared
// 10a3aa50 Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
// 10a3ded0 GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34
// 10b15e50 Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55

UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C * __cdecl
UpdateState_SubscribeTick_m4A6573150A14C7A02DCD412D3E880EC9120DD75D
          (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *param_1,
          GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *param_2,MethodInfo *param_3)

{
  BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *pBVar1;
  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *pCVar2;
  String_t *pSVar3;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar4;
  OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *pOVar5;
  Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *pAVar6;
  Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *pAVar7;

  if (DAT_1151c8ce == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       GameObject_GetComponentInChildren_TisCanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F_mEEBDD7DDE2D41588AE8E6F3A8F0ABBC7F20A8702_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass30_0_U3CSubscribeTickU3Eb__0_mF37258052D883780F18EE1D5B58EEFE6E278CE87_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass30_0_U3CSubscribeTickU3Eb__1_mDDB89C15A969DB1EAAF588931B018BB7E3AC6495_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass30_0_t79A3B23E607F92F0D47DDAFAE181886665BB3A1F_il2cpp_TypeInfo_var
              );
    DAT_1151c8ce = '\x01';
  }
  pBVar1 = (BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *)
           il2cpp_codegen_object_new
                     (
                     U3CU3Ec__DisplayClass30_0_t79A3B23E607F92F0D47DDAFAE181886665BB3A1F_il2cpp_TypeInfo_var
                     );
  BreakPoint__ctor_m1900245FA061B6C11A6ADD2176B3A5BEF5D8C8B0(pBVar1,(MethodInfo *)0x0);
  if (pBVar1 != (BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *)0x0) {
    pBVar1->___name_0 = (String_t *)param_2;
    if (param_2 == (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0) goto LAB_103e88ec;
    pCVar2 = (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
             GameObject_GetComponentInChildren_TisRuntimeObject_m8AC8197BF05FE2328AC7879AB44495C245B768F5_gshared
                       (param_2,true,
                        GameObject_GetComponentInChildren_TisCanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F_mEEBDD7DDE2D41588AE8E6F3A8F0ABBC7F20A8702_RuntimeMethod_var
                       );
    (pBVar1->___referenceResolution_2).___x_0 = (float)pCVar2;
    if (pCVar2 == (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) goto LAB_103e88ec;
    pSVar3 = (String_t *)
             Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
                       (pCVar2,(MethodInfo *)0x0);
    pBVar1->___name_0 = pSVar3;
    if (pSVar3 == (String_t *)0x0) goto LAB_103e88ec;
    pTVar4 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34
                       ((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)pSVar3,
                        (MethodInfo *)0x0);
    pBVar1->___screenAspectRatio_1 = (float)pTVar4;
    pOVar5 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
             il2cpp_codegen_object_new
                       (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var);
    OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
              (pOVar5,(Il2CppObject *)pBVar1,
               (int)
               U3CU3Ec__DisplayClass30_0_U3CSubscribeTickU3Eb__0_mF37258052D883780F18EE1D5B58EEFE6E278CE87_RuntimeMethod_var
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
    if (pOVar5 == (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)0x0)
    goto LAB_103e88ec;
    UnityAction_1_Invoke_m2BCE3E687DD62E352139131BB1AD26D8AA444E77_gshared
              ((UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB *)pOVar5,
               param_1->____current_0,
               Action_1_Invoke_mB4E4B9A52AFDB6F7EF89A35E53068E836B1C312E_RuntimeMethod_var);
    pAVar6 = (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)
             Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55
                       ((Delegate_t *)param_1->___onValueChanged_3,(Delegate_t *)pOVar5,
                        (MethodInfo *)0x0);
    pAVar7 = (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)0x0;
    if (pAVar6 != (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)0x0) {
      if (*(Il2CppClass **)pAVar6 ==
          Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var) {
        pAVar7 = pAVar6;
      }
      if (pAVar7 == (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)0x0) goto LAB_103e88f1;
    }
    param_1->___onValueChanged_3 = pAVar7;
    pOVar5 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
             il2cpp_codegen_object_new
                       (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var);
    OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
              (pOVar5,(Il2CppObject *)pBVar1,
               (int)
               U3CU3Ec__DisplayClass30_0_U3CSubscribeTickU3Eb__1_mDDB89C15A969DB1EAAF588931B018BB7E3AC6495_RuntimeMethod_var
               ,Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3_RuntimeMethod_var);
    if (DAT_1151c8cf == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                ((uint *)&
                         Action_1_Invoke_mB4E4B9A52AFDB6F7EF89A35E53068E836B1C312E_RuntimeMethod_var
                );
      il2cpp_codegen_initialize_runtime_metadata
                ((uint *)&Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var);
      DAT_1151c8cf = '\x01';
    }
    if (pOVar5 != (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)0x0) {
      UnityAction_1_Invoke_m2BCE3E687DD62E352139131BB1AD26D8AA444E77_gshared
                ((UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB *)pOVar5,
                 param_1->____target_1,
                 Action_1_Invoke_mB4E4B9A52AFDB6F7EF89A35E53068E836B1C312E_RuntimeMethod_var);
      pAVar6 = (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)
               Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55
                         ((Delegate_t *)param_1->___onTargetChange_4,(Delegate_t *)pOVar5,
                          (MethodInfo *)0x0);
      pAVar7 = (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)0x0;
      if (pAVar6 != (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)0x0) {
        if (*(Il2CppClass **)pAVar6 ==
            Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var) {
          pAVar7 = pAVar6;
        }
        if (pAVar7 == (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)0x0) {
LAB_103e88f1:
                    /* WARNING: Subroutine does not return */
          RaiseInvalidCastException
                    ((Il2CppObject *)pAVar6,
                     Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var);
        }
      }
      param_1->___onTargetChange_4 = pAVar7;
      return param_1;
    }
  }
LAB_103e88ec:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
