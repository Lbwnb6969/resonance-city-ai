// RVA 0x3e5200 | Placemaker.Ui.UiMaster$$AddState
// PDB: UiMaster_AddState_mBEDD5B000A27415FBFABC160DF4F683F4189BACF
// Body: [[103e5200, 103e53f6]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e530 RaiseInvalidCastException
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d17c0 BreakPoint__ctor_m1900245FA061B6C11A6ADD2176B3A5BEF5D8C8B0
// 101d8560 OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
// 10325a00 UnityAction_1_Invoke_m2BCE3E687DD62E352139131BB1AD26D8AA444E77_gshared
// 10b15e50 Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55
// 1102ffd0 List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared

void __cdecl
UiMaster_AddState_mBEDD5B000A27415FBFABC160DF4F683F4189BACF
          (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *param_1,MethodInfo *param_2)

{
  List_1_tAC387D40AA794C98425777894B362093CF4E78AC *pLVar1;
  String_t *pSVar2;
  BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *pBVar3;
  OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *pOVar4;
  Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *pAVar5;
  Delegate_t *pDVar6;
  Delegate_t *pDVar7;
  Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *pAVar8;

  if (DAT_1151c8b1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Add_m876AFCB19D4D15AA18BE0B8158487CAF0F1C5BC2_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass66_0_U3CAddStateU3Eb__0_mCBD53BF3F5E1161ADD15DAB5C6568E8D180E9704_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass66_0_U3CAddStateU3Eb__1_m65DAEE60CE0F1CC27C642FC94F1DF180223D25B5_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass66_0_tEB7BC6A1AE68902D323EF2E1BB228C862EFC5256_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var);
    DAT_1151c8b1 = '\x01';
  }
  pBVar3 = (BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *)
           il2cpp_codegen_object_new
                     (
                     U3CU3Ec__DisplayClass66_0_tEB7BC6A1AE68902D323EF2E1BB228C862EFC5256_il2cpp_TypeInfo_var
                     );
  BreakPoint__ctor_m1900245FA061B6C11A6ADD2176B3A5BEF5D8C8B0(pBVar3,(MethodInfo *)0x0);
  if (pBVar3 != (BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *)0x0) {
    pBVar3->___name_0 = (String_t *)param_1;
    if (param_1 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
      if (param_1->___isUpdating_2 != false) {
        if ((UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var->has_cctor !=
             '\0') &&
           (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var->cctor_finished
            == 0)) {
          il2cpp_runtime_class_init
                    (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var);
        }
        pLVar1 = *(List_1_tAC387D40AA794C98425777894B362093CF4E78AC **)
                  ((int)UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var->
                        static_fields + 4);
        if (pLVar1 == (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)0x0) goto LAB_103e53e4;
        List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                  (pLVar1,(OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)
                          pBVar3->___name_0,
                   List_1_Add_m876AFCB19D4D15AA18BE0B8158487CAF0F1C5BC2_RuntimeMethod_var);
        param_1 = (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)pBVar3->___name_0;
      }
      if (param_1 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
        pAVar8 = param_1->___onStart_5;
        pOVar4 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
                 il2cpp_codegen_object_new
                           (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
        OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                  (pOVar4,(Il2CppObject *)pBVar3,
                   (int)
                   U3CU3Ec__DisplayClass66_0_U3CAddStateU3Eb__0_mCBD53BF3F5E1161ADD15DAB5C6568E8D180E9704_RuntimeMethod_var
                   ,(MethodInfo *)0x0);
        pAVar5 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)
                 Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55
                           ((Delegate_t *)pAVar8,(Delegate_t *)pOVar4,(MethodInfo *)0x0);
        pAVar8 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)0x0;
        if (pAVar5 != (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)0x0) {
          if (*(Il2CppClass **)pAVar5 ==
              Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var) {
            pAVar8 = pAVar5;
          }
          if (pAVar8 == (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)0x0) {
                    /* WARNING: Subroutine does not return */
            RaiseInvalidCastException
                      ((Il2CppObject *)pAVar5,
                       Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
          }
        }
        param_1->___onStart_5 = pAVar8;
        pSVar2 = pBVar3->___name_0;
        if (pSVar2 != (String_t *)0x0) {
          pDVar7 = (Delegate_t *)pSVar2[2]._padding_;
          pOVar4 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
                   il2cpp_codegen_object_new
                             (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
          OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                    (pOVar4,(Il2CppObject *)pBVar3,
                     (int)
                     U3CU3Ec__DisplayClass66_0_U3CAddStateU3Eb__1_m65DAEE60CE0F1CC27C642FC94F1DF180223D25B5_RuntimeMethod_var
                     ,(MethodInfo *)0x0);
          pDVar6 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55
                             (pDVar7,(Delegate_t *)pOVar4,(MethodInfo *)0x0);
          pDVar7 = (Delegate_t *)0x0;
          if (pDVar6 != (Delegate_t *)0x0) {
            if ((Il2CppClass *)pDVar6->_padding_ ==
                Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var) {
              pDVar7 = pDVar6;
            }
            if (pDVar7 == (Delegate_t *)0x0) {
                    /* WARNING: Subroutine does not return */
              RaiseInvalidCastException
                        ((Il2CppObject *)pDVar6,
                         Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
            }
          }
          pSVar2[2]._padding_ = (int)pDVar7;
          pSVar2 = pBVar3->___name_0;
          if (pSVar2 != (String_t *)0x0) {
            if (DAT_1151c8cb == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        ((uint *)&
                                 Action_1_Invoke_mB4E4B9A52AFDB6F7EF89A35E53068E836B1C312E_RuntimeMethod_var
                        );
              DAT_1151c8cb = '\x01';
            }
            if ((UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB *)pSVar2[1]._padding_ !=
                (UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB *)0x0) {
              UnityAction_1_Invoke_m2BCE3E687DD62E352139131BB1AD26D8AA444E77_gshared
                        ((UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB *)
                         pSVar2[1]._padding_,(float)pSVar2->___m_stringLength_0,
                         Action_1_Invoke_mB4E4B9A52AFDB6F7EF89A35E53068E836B1C312E_RuntimeMethod_var
                        );
              if ((UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB *)
                  pSVar2[1].___m_stringLength_0 !=
                  (UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB *)0x0) {
                UnityAction_1_Invoke_m2BCE3E687DD62E352139131BB1AD26D8AA444E77_gshared
                          ((UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB *)
                           pSVar2[1].___m_stringLength_0,*(float *)&pSVar2->___m_firstChar_1,
                           Action_1_Invoke_mB4E4B9A52AFDB6F7EF89A35E53068E836B1C312E_RuntimeMethod_var
                          );
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_103e53e4:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
