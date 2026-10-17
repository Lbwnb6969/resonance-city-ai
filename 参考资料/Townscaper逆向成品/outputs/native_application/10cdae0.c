// RVA 0x10cdae0 | FuryStudios.FurySDK.Utils.ConditionalGameObjectActivation$$Trigger
// PDB: ConditionalGameObjectActivation_Trigger_m5C5D7FB8EF5567FF2A0B5CACD5AA3EA1562400D7
// Body: [[110cdae0, 110cdcf3]]
// Direct callees:
// 1003e420 Invoke
// 101280f0 il2cpp_runtime_class_init
// 1018e740 il2cpp_codegen_get_index_out_of_range_exception
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eab0 il2cpp_codegen_raise_exception
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10328fc0 UnityEvent_1_Invoke_m93A9A80D13EE147EB2805A92EFD48453AF727D7F_gshared
// 10a3ca70 Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7
// 10a3dc10 GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86

void __cdecl
ConditionalGameObjectActivation_Trigger_m5C5D7FB8EF5567FF2A0B5CACD5AA3EA1562400D7
          (ConditionalGameObjectActivation_t4D291951E240E6F4C65D3D7805D5800E92112FE9 *param_1,
          MethodInfo *param_2)

{
  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *pGVar1;
  ConditionalGameObjectActivation_t4D291951E240E6F4C65D3D7805D5800E92112FE9 *pCVar2;
  char cVar3;
  int iVar4;
  Exception_t *pEVar5;
  GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642 *pGVar6;
  uint uVar7;
  MethodInfo *pMVar8;

  pCVar2 = param_1;
  if (DAT_11523a6c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ICondition_t82D263874F0091508E7EF216E360728103238913_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       UnityEvent_1_Invoke_m93A9A80D13EE147EB2805A92EFD48453AF727D7F_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral318DC0E67504D8F75143824C886AF5ED765B8AB8);
    DAT_11523a6c = '\x01';
  }
  if (param_1->___condition_7 == (Il2CppObject *)0x0) {
    if ((Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->has_cctor != '\0') &&
       (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->cctor_finished == 0)) {
      il2cpp_runtime_class_init(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)
      ;
    }
    Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7
              ((Il2CppObject *)_stringLiteral318DC0E67504D8F75143824C886AF5ED765B8AB8,
               (MethodInfo *)0x0);
    param_1._0_1_ = '\0';
    cVar3 = (char)param_1;
  }
  else {
    iVar4 = InterfaceFuncInvoker0<int>::Invoke
                      (0,ICondition_t82D263874F0091508E7EF216E360728103238913_il2cpp_TypeInfo_var,
                       param_1->___condition_7);
    cVar3 = (char)iVar4;
    if (cVar3 != '\0') {
      pGVar6 = param_1->___gameObjectsToActiveIfSatisfied_8;
      uVar7 = 0;
      if (pGVar6 != (GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642 *)0x0) {
        iVar4 = 0x10;
        do {
          if (pGVar6->_padding_ <= (int)uVar7) {
            pGVar6 = param_1->___gameObjectsToDeactiveIfSatisfied_9;
            uVar7 = 0;
            if (pGVar6 != (GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642 *)0x0) {
              iVar4 = 0x10;
              goto LAB_110cdbb7;
            }
            break;
          }
          if (pGVar6 == (GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642 *)0x0) break;
          if ((uint)pGVar6->_padding_ <= uVar7) goto LAB_110cdce7;
          pGVar1 = *(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 **)
                    ((int)pGVar6->m_Items + iVar4 + -0x10);
          if (pGVar1 == (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0) break;
          GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86
                    (pGVar1,true,(MethodInfo *)0x0);
          pGVar6 = param_1->___gameObjectsToActiveIfSatisfied_8;
          uVar7 = uVar7 + 1;
          iVar4 = iVar4 + 4;
        } while (pGVar6 != (GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642 *)0x0);
      }
      goto LAB_110cdce2;
    }
  }
  param_1._0_1_ = cVar3;
  pGVar6 = pCVar2->___gameObjectsToActiveIfNotSatisfied_10;
  uVar7 = 0;
  if (pGVar6 != (GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642 *)0x0) {
    iVar4 = 0x10;
    do {
      if (pGVar6->_padding_ <= (int)uVar7) {
        pGVar6 = pCVar2->___gameObjectsToDeactiveIfNotSatisfied_11;
        uVar7 = 0;
        if (pGVar6 != (GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642 *)0x0) {
          iVar4 = 0x10;
          goto LAB_110cdc91;
        }
        break;
      }
      if (pGVar6 == (GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642 *)0x0) break;
      if ((uint)pGVar6->_padding_ <= uVar7) goto LAB_110cdce7;
      pGVar1 = *(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 **)
                ((int)pGVar6->m_Items + iVar4 + -0x10);
      if (pGVar1 == (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0) break;
      GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(pGVar1,true,(MethodInfo *)0x0);
      pGVar6 = pCVar2->___gameObjectsToActiveIfNotSatisfied_10;
      uVar7 = uVar7 + 1;
      iVar4 = iVar4 + 4;
    } while (pGVar6 != (GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642 *)0x0);
  }
  goto LAB_110cdce2;
  while( true ) {
    if ((uint)pGVar6->_padding_ <= uVar7) goto LAB_110cdce7;
    pGVar1 = *(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 **)
              ((int)pGVar6->m_Items + iVar4 + -0x10);
    if (pGVar1 == (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0) break;
    GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(pGVar1,false,(MethodInfo *)0x0);
    pGVar6 = param_1->___gameObjectsToDeactiveIfSatisfied_9;
    uVar7 = uVar7 + 1;
    iVar4 = iVar4 + 4;
    if (pGVar6 == (GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642 *)0x0) break;
LAB_110cdbb7:
    if (pGVar6->_padding_ <= (int)uVar7) goto LAB_110cdcc4;
    if (pGVar6 == (GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642 *)0x0) break;
  }
  goto LAB_110cdce2;
LAB_110cdcc4:
  param_1._0_1_ = cVar3;
  if ((UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB *)pCVar2->___satisfiedEvent_12 !=
      (UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB *)0x0) {
    UnityEvent_1_Invoke_m93A9A80D13EE147EB2805A92EFD48453AF727D7F_gshared
              ((UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB *)
               pCVar2->___satisfiedEvent_12,(bool)(char)param_1,
               UnityEvent_1_Invoke_m93A9A80D13EE147EB2805A92EFD48453AF727D7F_RuntimeMethod_var);
    return;
  }
  goto LAB_110cdce2;
LAB_110cdc91:
  do {
    cVar3 = (char)param_1;
    if (pGVar6->_padding_ <= (int)uVar7) goto LAB_110cdcc4;
    if (pGVar6 == (GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642 *)0x0) break;
    if ((uint)pGVar6->_padding_ <= uVar7) {
LAB_110cdce7:
      pMVar8 = (MethodInfo *)0x0;
      pEVar5 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_exception(pEVar5,pMVar8);
    }
    pGVar1 = *(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 **)
              ((int)pGVar6->m_Items + iVar4 + -0x10);
    if (pGVar1 == (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0) break;
    GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(pGVar1,false,(MethodInfo *)0x0);
    pGVar6 = pCVar2->___gameObjectsToDeactiveIfNotSatisfied_11;
    uVar7 = uVar7 + 1;
    iVar4 = iVar4 + 4;
  } while (pGVar6 != (GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642 *)0x0);
LAB_110cdce2:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
