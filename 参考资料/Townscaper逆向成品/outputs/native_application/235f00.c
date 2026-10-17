// RVA 0x235f00 | Placemaker.Ui.ControlBinding$$<SetRowButtons>g__SetActionElement|32_0
// PDB: ControlBinding_U3CSetRowButtonsU3Eg__SetActionElementU7C32_0_m18FFF59D713ED208F17083CCA9BFB0EB365AE285
// Body: [[10235f00, 10236197]]
// Direct callees:
// 1003e420 Invoke
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 102361be FUN_102361be
// 10a3aa50 Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
// 10a3dc10 GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86
// 10d68580 ControllerHelper_get_joystickCount_mB89C4AF30E14599E4F093F6FC5FEE9D99697AC13
// 10e5cf00 MapHelper_GetMap_mC3654CDC5CE98A0B6B46B4CEEFBD1942E5FB822E
// 10e96700 ControllerMap_ElementMapsWithAction_mEF5E5A6CE97879AADA9FD8488279ADDBF4634F41
// 10f04510 String_Equals_mAFC6038D294F341434D9D67D7EADC7F97C556C9B
// 110a89e0 ActionElementMap_ShowInField_mDFCB5A661388799E55E2B7C6F17C334EF27784EB
// 110aa6e0 ActionElementMap_get_elementIdentifierName_mB12B33305EB177C9C7ADC9234467076B770FDFA6

void __cdecl
ControlBinding_U3CSetRowButtonsU3Eg__SetActionElementU7C32_0_m18FFF59D713ED208F17083CCA9BFB0EB365AE285
          (ControlBinding_tC850FCC2A9AEB8764F07FB598BB1125043AAB3EA *param_1,
          BindingRow_t56D7B2F34271796B77D8360E8DF57BA956DC0BA7 *param_2,int param_3,int param_4,
          ControllerTypeU5BU5D_tD4866CF8011DF99C121876AD92F7C4CC3FE68478 *param_5,
          MethodInfo *param_6)

{
  InputAction_tD22CF065BFD88C292C239741BE6F8E37F5AE7ADE *pIVar1;
  Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E *pPVar2;
  ControllerHelper_t7321E4C8D92738EAD49659BFD68FB9A9C7E6D268 *pCVar3;
  MapHelper_t58AB9B830B39654835B74258921F7F6D30F7B00D *pMVar4;
  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *pGVar5;
  int iVar6;
  ControllerMap_t840E4A4BAB81ECA540A6D251DF61CC71F20F604D *pCVar7;
  Il2CppObject *pIVar8;
  ActionElementMap_t028B1851A43E163C6CD5D57B37A6449791F1C537 *pAVar9;
  OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *pOVar10;
  Exception_t *pEVar11;
  bool bVar12;
  bool bVar13;
  MethodInfo *pMVar14;
  String_t *local_18;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  local_8 = 0xffffffff;
  puStack_c = &
              __ehhandler__ControlBinding_U3CSetRowButtonsU3Eg__SetActionElementU7C32_0_m18FFF59D713ED208F17083CCA9BFB0EB365AE285
  ;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  if (DAT_1151b5a3 == '\0') {
    ExceptionList = &pvStack_10;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_3__ctor_m216A1342070CF206959A5487AB0CBA16A2ECAEA7_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_3_t8C989E8B6758A78BA011EE84316DF870E598D4AE_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       ControlBinding_OnInputFieldClicked_mE78B97210363925AC1804DE6E2959D95522035DD_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IEnumerable_1_t8BE6E1F258DEA8EDC30D58FB2205A944F35AB737_il2cpp_TypeInfo_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IEnumerator_1_tBDE3CDDEFEB1DD73A6387AC43023FE6600D80759_il2cpp_TypeInfo_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata((uint *)&String_t_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral9D5313975DA8153FF9A5262016CB413A4E84846E);
    DAT_1151b5a3 = '\x01';
  }
  bVar12 = false;
  if (param_5 != (ControllerTypeU5BU5D_tD4866CF8011DF99C121876AD92F7C4CC3FE68478 *)0x0) {
    if (param_5->_padding_ == 1) {
      bVar12 = param_5->m_Items[0] == 2;
    }
    if (param_2 != (BindingRow_t56D7B2F34271796B77D8360E8DF57BA956DC0BA7 *)0x0) {
      pIVar1 = param_2->___action_7;
      if (bVar12) {
        bVar13 = param_2->___visibility_9 != 0;
      }
      else {
        bVar13 = param_2->___visibility_9 != 1;
      }
      pGVar5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
                         ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_2,
                          (MethodInfo *)0x0);
      if (pGVar5 != (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0) {
        GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86
                  (pGVar5,bVar13,(MethodInfo *)0x0);
        if (bVar12) {
          if (((param_1->___master_4 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0)
              || (pPVar2 = param_1->___master_4->___player_43,
                 pPVar2 == (Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E *)0x0)) ||
             (pCVar3 = pPVar2->___controllers_7,
             pCVar3 == (ControllerHelper_t7321E4C8D92738EAD49659BFD68FB9A9C7E6D268 *)0x0))
          goto LAB_10236256;
          iVar6 = ControllerHelper_get_joystickCount_mB89C4AF30E14599E4F093F6FC5FEE9D99697AC13
                            (pCVar3,(MethodInfo *)0x0);
          if (iVar6 == 0) {
            ExceptionList = pvStack_10;
            return;
          }
        }
        local_18 = *(String_t **)String_t_il2cpp_TypeInfo_var->static_fields;
        if (param_5->_padding_ < 1) {
          pOVar10 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
                    il2cpp_codegen_object_new
                              (
                              Action_3_t8C989E8B6758A78BA011EE84316DF870E598D4AE_il2cpp_TypeInfo_var
                              );
          OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                    (pOVar10,(Il2CppObject *)param_1,
                     (int)
                     ControlBinding_OnInputFieldClicked_mE78B97210363925AC1804DE6E2959D95522035DD_RuntimeMethod_var
                     ,Action_3__ctor_m216A1342070CF206959A5487AB0CBA16A2ECAEA7_RuntimeMethod_var);
          BindingRow_SetButton_m08D3BD7C711391D0DA78B7FDAC5F72AD7C8E7ED6
                    (param_2,local_18,(Action_3_t8C989E8B6758A78BA011EE84316DF870E598D4AE *)pOVar10,
                     param_3,-1,false,(MethodInfo *)0x0);
          ExceptionList = pvStack_10;
          return;
        }
        if (param_5->_padding_ == 0) {
          pMVar14 = (MethodInfo *)0x0;
          pEVar11 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
          il2cpp_codegen_raise_exception(pEVar11,pMVar14);
        }
        if (((((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0)
              && (pPVar2 = param_1->___master_4->___player_43,
                 pPVar2 != (Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E *)0x0)) &&
             ((pCVar3 = pPVar2->___controllers_7,
              pCVar3 != (ControllerHelper_t7321E4C8D92738EAD49659BFD68FB9A9C7E6D268 *)0x0 &&
              ((pMVar4 = pCVar3->___maps_12,
               pMVar4 != (MapHelper_t58AB9B830B39654835B74258921F7F6D30F7B00D *)0x0 &&
               (pCVar7 = MapHelper_GetMap_mC3654CDC5CE98A0B6B46B4CEEFBD1942E5FB822E
                                   (pMVar4,param_5->m_Items[0],param_4,
                                    _stringLiteral9D5313975DA8153FF9A5262016CB413A4E84846E,
                                    _stringLiteral9D5313975DA8153FF9A5262016CB413A4E84846E,
                                    (MethodInfo *)0x0),
               pIVar1 != (InputAction_tD22CF065BFD88C292C239741BE6F8E37F5AE7ADE *)0x0)))))) &&
            (pCVar7 != (ControllerMap_t840E4A4BAB81ECA540A6D251DF61CC71F20F604D *)0x0)) &&
           (pIVar8 = ControllerMap_ElementMapsWithAction_mEF5E5A6CE97879AADA9FD8488279ADDBF4634F41
                               (pCVar7,pIVar1->____id_0,(MethodInfo *)0x0),
           pIVar8 != (Il2CppObject *)0x0)) {
          pIVar8 = (Il2CppObject *)
                   InterfaceFuncInvoker0<int>::Invoke
                             (0,
                              IEnumerable_1_t8BE6E1F258DEA8EDC30D58FB2205A944F35AB737_il2cpp_TypeInfo_var
                              ,pIVar8);
          local_8 = 0;
          while (pIVar8 != (Il2CppObject *)0x0) {
            iVar6 = InterfaceFuncInvoker0<int>::Invoke
                              (0,
                               IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var
                               ,pIVar8);
            if ((char)iVar6 == '\0') {
              FUN_102361be();
              return;
            }
            pAVar9 = (ActionElementMap_t028B1851A43E163C6CD5D57B37A6449791F1C537 *)
                     InterfaceFuncInvoker0<int>::Invoke
                               (0,
                                IEnumerator_1_tBDE3CDDEFEB1DD73A6387AC43023FE6600D80759_il2cpp_TypeInfo_var
                                ,pIVar8);
            if (pAVar9 == (ActionElementMap_t028B1851A43E163C6CD5D57B37A6449791F1C537 *)0x0) break;
            bVar12 = ActionElementMap_ShowInField_mDFCB5A661388799E55E2B7C6F17C334EF27784EB
                               (pAVar9,param_2->___actionRange_8,(MethodInfo *)0x0);
            if ((bVar12) &&
               (bVar12 = String_Equals_mAFC6038D294F341434D9D67D7EADC7F97C556C9B
                                   (local_18,*(String_t **)
                                              String_t_il2cpp_TypeInfo_var->static_fields,
                                    (MethodInfo *)0x0), bVar12)) {
              local_18 = ActionElementMap_get_elementIdentifierName_mB12B33305EB177C9C7ADC9234467076B770FDFA6
                                   (pAVar9,(MethodInfo *)0x0);
            }
          }
        }
      }
    }
  }
LAB_10236256:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
