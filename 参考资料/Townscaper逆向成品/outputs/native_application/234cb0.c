// RVA 0x234cb0 | Placemaker.Ui.ControlBinding$$SetRowButtons
// PDB: ControlBinding_SetRowButtons_m053148B88D731A986175B287F6FC29C96C70EF5C
// Body: [[10234cb0, 10234d6c] [10234d70, 10234e54] [10234e58, 10234ec8]]
// Direct callees:
// 101275a0 il2cpp_array_new_specific
// 1018e740 il2cpp_codegen_get_index_out_of_range_exception
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eab0 il2cpp_codegen_raise_exception
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10235f00 ControlBinding_U3CSetRowButtonsU3Eg__SetActionElementU7C32_0_m18FFF59D713ED208F17083CCA9BFB0EB365AE285
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
// 10d68580 ControllerHelper_get_joystickCount_mB89C4AF30E14599E4F093F6FC5FEE9D99697AC13

void __cdecl
ControlBinding_SetRowButtons_m053148B88D731A986175B287F6FC29C96C70EF5C
          (ControlBinding_tC850FCC2A9AEB8764F07FB598BB1125043AAB3EA *param_1,MethodInfo *param_2)

{
  TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 *pTVar1;
  BindingRow_t56D7B2F34271796B77D8360E8DF57BA956DC0BA7 *pBVar2;
  Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E *pPVar3;
  ControllerHelper_t7321E4C8D92738EAD49659BFD68FB9A9C7E6D268 *pCVar4;
  ControlBinding_tC850FCC2A9AEB8764F07FB598BB1125043AAB3EA *pCVar5;
  ControllerTypeU5BU5D_tD4866CF8011DF99C121876AD92F7C4CC3FE68478 *pCVar6;
  int iVar7;
  List_1_tF3AA9FA5EF02F951C3DDBA8F6098F62A445F97E3 *pLVar8;
  Exception_t *pEVar9;
  uint uVar10;
  MethodInfo *pMVar11;

  pCVar5 = param_1;
  if (DAT_1151b598 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       ControllerTypeU5BU5D_tD4866CF8011DF99C121876AD92F7C4CC3FE68478_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_mF953D9003DA4060A94A2A0FDFB75A8000503AC9A_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m9938DEC7940787960C6206941B1A6F338F9162CC_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral9539CB75F4E916A1D80D4F26675C807CDA6817EF);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralFFEF3DBE279EE1F92E1E2E46F45BC18EBBF55A1A);
    DAT_1151b598 = '\x01';
  }
  pTVar1 = param_1->___statusText_7;
  if (pTVar1 != (TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 *)0x0) {
    (**(code **)(pTVar1->_padding_ + 0x2cc))
              (pTVar1,_stringLiteralFFEF3DBE279EE1F92E1E2E46F45BC18EBBF55A1A,
               *(undefined4 *)(pTVar1->_padding_ + 0x2d0));
    if (param_1->___selectedControllerGroupType_20 == 1) {
      if (((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
          (pPVar3 = param_1->___master_4->___player_43,
          pPVar3 != (Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E *)0x0)) &&
         (pCVar4 = pPVar3->___controllers_7,
         pCVar4 != (ControllerHelper_t7321E4C8D92738EAD49659BFD68FB9A9C7E6D268 *)0x0)) {
        iVar7 = ControllerHelper_get_joystickCount_mB89C4AF30E14599E4F093F6FC5FEE9D99697AC13
                          (pCVar4,(MethodInfo *)0x0);
        if (iVar7 == 0) {
          pTVar1 = param_1->___statusText_7;
          if (pTVar1 == (TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 *)0x0)
          goto LAB_10234ec4;
          (**(code **)(pTVar1->_padding_ + 0x2cc))
                    (pTVar1,_stringLiteral9539CB75F4E916A1D80D4F26675C807CDA6817EF,
                     *(undefined4 *)(pTVar1->_padding_ + 0x2d0));
        }
        pLVar8 = param_1->___bindingRows_8;
        uVar10 = 0;
        if (pLVar8 != (List_1_tF3AA9FA5EF02F951C3DDBA8F6098F62A445F97E3 *)0x0) {
          param_1 = (ControlBinding_tC850FCC2A9AEB8764F07FB598BB1125043AAB3EA *)0x10;
          do {
            if (pLVar8->____size_2 <= (int)uVar10) {
              return;
            }
            if (pLVar8 == (List_1_tF3AA9FA5EF02F951C3DDBA8F6098F62A445F97E3 *)0x0) break;
            if ((uint)pLVar8->____size_2 <= uVar10) {
                    /* WARNING: Subroutine does not return */
              ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                        ((MethodInfo *)0x0);
            }
            pBVar2 = *(BindingRow_t56D7B2F34271796B77D8360E8DF57BA956DC0BA7 **)
                      (pLVar8->____items_1 + (int)&param_1->_padding_);
            iVar7 = pCVar5->___selectedControllerGroupId_21;
            pCVar6 = (ControllerTypeU5BU5D_tD4866CF8011DF99C121876AD92F7C4CC3FE68478 *)
                     il2cpp_array_new_specific
                               (ControllerTypeU5BU5D_tD4866CF8011DF99C121876AD92F7C4CC3FE68478_il2cpp_TypeInfo_var
                                ,1);
            if (pCVar6 == (ControllerTypeU5BU5D_tD4866CF8011DF99C121876AD92F7C4CC3FE68478 *)0x0)
            break;
            if (pCVar6->_padding_ == 0) goto LAB_10234eb9;
            pCVar6->m_Items[0] = 2;
            ControlBinding_U3CSetRowButtonsU3Eg__SetActionElementU7C32_0_m18FFF59D713ED208F17083CCA9BFB0EB365AE285
                      (pCVar5,pBVar2,uVar10,iVar7,pCVar6,(MethodInfo *)0x0);
            pLVar8 = pCVar5->___bindingRows_8;
            param_1 = (ControlBinding_tC850FCC2A9AEB8764F07FB598BB1125043AAB3EA *)
                      &param_1->_padding_;
            uVar10 = uVar10 + 1;
          } while (pLVar8 != (List_1_tF3AA9FA5EF02F951C3DDBA8F6098F62A445F97E3 *)0x0);
        }
      }
    }
    else {
      if (param_1->___selectedControllerGroupType_20 != 0) {
        return;
      }
      pLVar8 = param_1->___bindingRows_8;
      uVar10 = 0;
      if (pLVar8 != (List_1_tF3AA9FA5EF02F951C3DDBA8F6098F62A445F97E3 *)0x0) {
        param_1 = (ControlBinding_tC850FCC2A9AEB8764F07FB598BB1125043AAB3EA *)0x10;
        do {
          if (pLVar8->____size_2 <= (int)uVar10) {
            return;
          }
          if (pLVar8 == (List_1_tF3AA9FA5EF02F951C3DDBA8F6098F62A445F97E3 *)0x0) break;
          if ((uint)pLVar8->____size_2 <= uVar10) {
                    /* WARNING: Subroutine does not return */
            ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                      ((MethodInfo *)0x0);
          }
          pBVar2 = *(BindingRow_t56D7B2F34271796B77D8360E8DF57BA956DC0BA7 **)
                    (pLVar8->____items_1 + (int)&param_1->_padding_);
          pCVar6 = (ControllerTypeU5BU5D_tD4866CF8011DF99C121876AD92F7C4CC3FE68478 *)
                   il2cpp_array_new_specific
                             (ControllerTypeU5BU5D_tD4866CF8011DF99C121876AD92F7C4CC3FE68478_il2cpp_TypeInfo_var
                              ,2);
          if (pCVar6 == (ControllerTypeU5BU5D_tD4866CF8011DF99C121876AD92F7C4CC3FE68478 *)0x0)
          break;
          if (pCVar6->_padding_ == 0) {
LAB_10234eb9:
            pMVar11 = (MethodInfo *)0x0;
            pEVar9 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
            il2cpp_codegen_raise_exception(pEVar9,pMVar11);
          }
          pCVar6->m_Items[0] = 1;
          ControlBinding_U3CSetRowButtonsU3Eg__SetActionElementU7C32_0_m18FFF59D713ED208F17083CCA9BFB0EB365AE285
                    (pCVar5,pBVar2,uVar10,0,pCVar6,(MethodInfo *)0x0);
          pLVar8 = pCVar5->___bindingRows_8;
          param_1 = (ControlBinding_tC850FCC2A9AEB8764F07FB598BB1125043AAB3EA *)&param_1->_padding_;
          uVar10 = uVar10 + 1;
        } while (pLVar8 != (List_1_tF3AA9FA5EF02F951C3DDBA8F6098F62A445F97E3 *)0x0);
      }
    }
  }
LAB_10234ec4:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
