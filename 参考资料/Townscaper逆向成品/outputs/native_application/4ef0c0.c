// RVA 0x4ef0c0 | Placemaker.Ui.KeyboardControlsMenu$$OnSetup
// PDB: KeyboardControlsMenu_OnSetup_m0C0F1890E4B8B1F2FE6714C50A117FAD67228E63
// Body: [[104ef0c0, 104ef45b]]
// Direct callees:
// 1003e070 Invoke
// 101280f0 il2cpp_runtime_class_init
// 1018e530 RaiseInvalidCastException
// 1018e740 il2cpp_codegen_get_index_out_of_range_exception
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eab0 il2cpp_codegen_raise_exception
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d17c0 BreakPoint__ctor_m1900245FA061B6C11A6ADD2176B3A5BEF5D8C8B0
// 101d8560 OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
// 103e50e0 UiMaster_AddMenuStateState_m397266B42DBFECE978AE7E1BDD387A123A21C84E
// 103e5200 UiMaster_AddState_mBEDD5B000A27415FBFABC160DF4F683F4189BACF
// 103e8900 UpdateState_SubscribeToTarget_m4B75B353E42A7EE934424059A570D5DC521EA2EB
// 103e8a10 UpdateState_SubscribeToTarget_mDCA151230E54C0D720A6D8BB492AED067CFBED08
// 103e8aa0 UpdateState_Subscribe_m204EF4956F69A083507E07478ACD5A36B93EB9ED
// 1043f140 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
// 1043f210 Component_GetComponentsInChildren_TisRuntimeObject_mCA5B356D4B0824C6DE60A8E90E6A6D4188C56C2F_gshared
// 10b15e50 Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55
// 10e5cba0 MapHelper_GetMap_mA6CE196900CC7D5C8FD3319A0305A0641ECF1197
// 10e9aea0 ControllerMap_GetFirstElementMapMatch_m7A97558A115F2B5740C7EC866930E6D0B702A0F5
// 10f0a070 String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2
// 110aa6e0 ActionElementMap_get_elementIdentifierName_mB12B33305EB177C9C7ADC9234467076B770FDFA6

void __cdecl
KeyboardControlsMenu_OnSetup_m0C0F1890E4B8B1F2FE6714C50A117FAD67228E63
          (KeyboardControlsMenu_t8A1421617C595C06F6BA074D899E4D4C458562D2 *param_1,
          UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *param_2,MethodInfo *param_3)

{
  UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *pUVar1;
  ControllerHelper_t7321E4C8D92738EAD49659BFD68FB9A9C7E6D268 *pCVar2;
  MapHelper_t58AB9B830B39654835B74258921F7F6D30F7B00D *pMVar3;
  bool bVar4;
  ControllerMap_t840E4A4BAB81ECA540A6D251DF61CC71F20F604D *pCVar5;
  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE *pOVar6;
  BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *pBVar7;
  Il2CppObject *pIVar8;
  OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *pOVar9;
  Delegate_t *pDVar10;
  Delegate_t *pDVar11;
  ActionElementMap_t028B1851A43E163C6CD5D57B37A6449791F1C537 *pAVar12;
  String_t *pSVar13;
  Exception_t *pEVar14;
  MethodInfo *pMVar15;
  uint local_c;
  Il2CppObject **local_8;

  if (DAT_1151d20f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisBaseButton_tAC6372317B2E4EDCF629E5ED7D229B2876B82F0C_m9079D68F2D5D466CD56C263696FEC506BDDCBC34_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisCanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F_mFED0C73400AFB37A709212A6C61F9BF44DBB88C4_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponentsInChildren_TisControlBindingKey_t8AEA78973EA9D7777243BEFE675B13C562714798_m8B5280D2ABCC65C97D39B33AEEED4745D59C61D5_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       KeyboardControlsMenu_U3COnSetupU3Eb__21_0_mE889910A848431562441DB43E58987AA9E6335CB_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       KeyboardControlsMenu_U3COnSetupU3Eb__21_1_m0BB70E2D533EDEFE7C9814FD7DDFAD9036C55247_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Predicate_1__ctor_mE648812954C876B681E2720DDC97307FC3B2457A_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Predicate_1_t409848DF540D70FD80D298FCA88A65AE7692FC83_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass21_0_U3COnSetupU3Eb__2_mBF199A9F480E5699425BD23CA57E9D387F23ACEE_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass21_0_U3COnSetupU3Eb__3_mA6AA2A961C240247059D154A0D91E022DEB1029E_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass21_0_t1E72C7D5060177FDEC2ADD4AB3C2B75B12D3DB88_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
    DAT_1151d20f = '\x01';
  }
  param_1->___master_4 = param_2;
  Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
            ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
             Component_GetComponent_TisCanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F_mFED0C73400AFB37A709212A6C61F9BF44DBB88C4_RuntimeMethod_var
            );
  if ((param_1->___controlsMenu_7 !=
       (GenericControlsMenu_t66403C6BC69A10D0CCE6ADA2AB2CC7F0AE79744E *)0x0) &&
     (pUVar1 = param_1->___controlsMenu_7->___openState_5,
     pUVar1 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0)) {
    UpdateState_SubscribeToTarget_m4B75B353E42A7EE934424059A570D5DC521EA2EB
              (pUVar1,(MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A *)param_1,
               (MethodInfo *)0x0);
    if ((param_2 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
       (((param_2->___player_43 != (Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E *)0x0 &&
         (pCVar2 = param_2->___player_43->___controllers_7,
         pCVar2 != (ControllerHelper_t7321E4C8D92738EAD49659BFD68FB9A9C7E6D268 *)0x0)) &&
        (pMVar3 = pCVar2->___maps_12,
        pMVar3 != (MapHelper_t58AB9B830B39654835B74258921F7F6D30F7B00D *)0x0)))) {
      pCVar5 = MapHelper_GetMap_mA6CE196900CC7D5C8FD3319A0305A0641ECF1197
                         (pMVar3,0,(MethodInfo *)0x0);
      pOVar6 = Component_GetComponentsInChildren_TisRuntimeObject_mCA5B356D4B0824C6DE60A8E90E6A6D4188C56C2F_gshared
                         ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                          Component_GetComponentsInChildren_TisControlBindingKey_t8AEA78973EA9D7777243BEFE675B13C562714798_m8B5280D2ABCC65C97D39B33AEEED4745D59C61D5_RuntimeMethod_var
                         );
      local_c = 0;
      if (pOVar6 != (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE *)0x0) {
        local_8 = pOVar6->m_Items;
        for (; (int)local_c < pOVar6->_padding_; local_c = local_c + 1) {
          pBVar7 = (BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *)
                   il2cpp_codegen_object_new
                             (
                             U3CU3Ec__DisplayClass21_0_t1E72C7D5060177FDEC2ADD4AB3C2B75B12D3DB88_il2cpp_TypeInfo_var
                             );
          BreakPoint__ctor_m1900245FA061B6C11A6ADD2176B3A5BEF5D8C8B0(pBVar7,(MethodInfo *)0x0);
          if (pBVar7 == (BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *)0x0)
          goto LAB_104ef443;
          pBVar7->___screenAspectRatio_1 = (float)param_1;
          if ((uint)pOVar6->_padding_ <= local_c) {
            pMVar15 = (MethodInfo *)0x0;
            pEVar14 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
            il2cpp_codegen_raise_exception(pEVar14,pMVar15);
          }
          pSVar13 = (String_t *)*local_8;
          pBVar7->___name_0 = pSVar13;
          if (pSVar13 == (String_t *)0x0) goto LAB_104ef443;
          pIVar8 = Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                             ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pSVar13,
                              Component_GetComponent_TisBaseButton_tAC6372317B2E4EDCF629E5ED7D229B2876B82F0C_m9079D68F2D5D466CD56C263696FEC506BDDCBC34_RuntimeMethod_var
                             );
          if (pIVar8 == (Il2CppObject *)0x0) goto LAB_104ef443;
          pDVar11 = (Delegate_t *)pIVar8[4].monitor;
          pOVar9 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
                   il2cpp_codegen_object_new
                             (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
          OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                    (pOVar9,(Il2CppObject *)pBVar7,
                     (int)
                     U3CU3Ec__DisplayClass21_0_U3COnSetupU3Eb__2_mBF199A9F480E5699425BD23CA57E9D387F23ACEE_RuntimeMethod_var
                     ,(MethodInfo *)0x0);
          pDVar10 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55
                              (pDVar11,(Delegate_t *)pOVar9,(MethodInfo *)0x0);
          pDVar11 = (Delegate_t *)0x0;
          if (pDVar10 != (Delegate_t *)0x0) {
            if ((Il2CppClass *)pDVar10->_padding_ ==
                Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var) {
              pDVar11 = pDVar10;
            }
            if (pDVar11 == (Delegate_t *)0x0) {
                    /* WARNING: Subroutine does not return */
              RaiseInvalidCastException
                        ((Il2CppObject *)pDVar10,
                         Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
            }
          }
          pIVar8[4].monitor = (MonitorData *)pDVar11;
          if (pBVar7->___name_0 == (String_t *)0x0) goto LAB_104ef443;
          pSVar13 = *(String_t **)&pBVar7->___name_0->___m_firstChar_1;
          if (pSVar13 != (String_t *)0x0) {
            bVar4 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2
                              (pSVar13,_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709,
                               (MethodInfo *)0x0);
            if (bVar4) {
              pOVar9 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
                       il2cpp_codegen_object_new
                                 (
                                 Predicate_1_t409848DF540D70FD80D298FCA88A65AE7692FC83_il2cpp_TypeInfo_var
                                 );
              OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                        (pOVar9,(Il2CppObject *)pBVar7,
                         (int)
                         U3CU3Ec__DisplayClass21_0_U3COnSetupU3Eb__3_mA6AA2A961C240247059D154A0D91E022DEB1029E_RuntimeMethod_var
                         ,
                         Predicate_1__ctor_mE648812954C876B681E2720DDC97307FC3B2457A_RuntimeMethod_var
                        );
              if (pCVar5 == (ControllerMap_t840E4A4BAB81ECA540A6D251DF61CC71F20F604D *)0x0)
              goto LAB_104ef443;
              pAVar12 = ControllerMap_GetFirstElementMapMatch_m7A97558A115F2B5740C7EC866930E6D0B702A0F5
                                  (pCVar5,(Predicate_1_t409848DF540D70FD80D298FCA88A65AE7692FC83 *)
                                          pOVar9,(MethodInfo *)0x0);
              if (pAVar12 != (ActionElementMap_t028B1851A43E163C6CD5D57B37A6449791F1C537 *)0x0) {
                if (pBVar7->___name_0 == (String_t *)0x0) goto LAB_104ef443;
                pIVar8 = *(Il2CppObject **)&pBVar7->___name_0[1].___m_firstChar_1;
                pSVar13 = ActionElementMap_get_elementIdentifierName_mB12B33305EB177C9C7ADC9234467076B770FDFA6
                                    (pAVar12,(MethodInfo *)0x0);
                if (pIVar8 == (Il2CppObject *)0x0) goto LAB_104ef443;
                VirtFuncInvoker1<bool,Il2CppObject_*>::Invoke(0x42,pIVar8,(Il2CppObject *)pSVar13);
              }
            }
          }
          local_8 = local_8 + 1;
        }
        if (param_1->___darkenState_8 !=
            (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
          UpdateState_Subscribe_m204EF4956F69A083507E07478ACD5A36B93EB9ED
                    (param_1->___darkenState_8,param_1->___darkener_5,(MethodInfo *)0x0);
          if (param_1->___controlsMenu_7 !=
              (GenericControlsMenu_t66403C6BC69A10D0CCE6ADA2AB2CC7F0AE79744E *)0x0) {
            pUVar1 = param_1->___controlsMenu_7->___openState_5;
            pOVar9 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
                     il2cpp_codegen_object_new
                               (
                               Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var
                               );
            OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                      (pOVar9,(Il2CppObject *)param_1,
                       (int)
                       KeyboardControlsMenu_U3COnSetupU3Eb__21_0_mE889910A848431562441DB43E58987AA9E6335CB_RuntimeMethod_var
                       ,Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3_RuntimeMethod_var);
            if (pUVar1 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
              UpdateState_SubscribeToTarget_mDCA151230E54C0D720A6D8BB492AED067CFBED08
                        (pUVar1,(Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)pOVar9,
                         (MethodInfo *)0x0);
              pUVar1 = param_1->___darkenState_8;
              pOVar9 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
                       il2cpp_codegen_object_new
                                 (
                                 Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var
                                 );
              OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                        (pOVar9,(Il2CppObject *)param_1,
                         (int)
                         KeyboardControlsMenu_U3COnSetupU3Eb__21_1_m0BB70E2D533EDEFE7C9814FD7DDFAD9036C55247_RuntimeMethod_var
                         ,Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3_RuntimeMethod_var
                        );
              if (pUVar1 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
                UpdateState_SubscribeToTarget_mDCA151230E54C0D720A6D8BB492AED067CFBED08
                          (pUVar1,(Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)pOVar9,
                           (MethodInfo *)0x0);
                UiMaster_AddMenuStateState_m397266B42DBFECE978AE7E1BDD387A123A21C84E
                          (param_2,param_1->___darkenState_8,0x800,(MethodInfo *)0x0);
                pUVar1 = param_1->___darkenState_8;
                if ((UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var->
                     has_cctor != '\0') &&
                   (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var->
                    cctor_finished == 0)) {
                  il2cpp_runtime_class_init
                            (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var)
                  ;
                }
                UiMaster_AddState_mBEDD5B000A27415FBFABC160DF4F683F4189BACF
                          (pUVar1,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_104ef443:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
