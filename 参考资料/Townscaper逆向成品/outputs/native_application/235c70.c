// RVA 0x235c70 | Placemaker.Ui.ControlBinding$$StartListeningDelayedMouseAndKeyboard
// PDB: ControlBinding_StartListeningDelayedMouseAndKeyboard_mC14470302E254017C56D43E89617AC5695A60EE0
// Body: [[10235c70, 10235d53] [10235d5a, 10235dae] [10235db5, 10235e48] [10235e4f, 10235e9c] [10235ea0, 10235efe]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
// 10b242c0 Context__ctor_m44C2AF9AD6AD61C3C87ADDF1BE20BE0E088F8511
// 10b24470 Context_set_actionElementMapToReplace_mB3AE2B45A7FB3E895D80DAF1B0A78D67AC6AB5E4
// 10b244e0 Context_set_actionId_mC283FE87FF0A7A50375B85965F1E3BD4A1261C9A
// 10b24650 Context_set_actionRange_mCD0F54FE2E9189B3CC724DCA469D47E6699F50BD
// 10b246a0 Context_set_controllerMap_m692E094AD64F0BEF58BEED4183C5F41D8756F6B2
// 10db5e80 InputMapper_Start_mEE0A703AFF951F45733B50FB6C9DAA33C88F8683
// 10e62330 MapHelper_SetMapsEnabled_m7CFAEE9C134C8970940A6DD4301D6F3315CAD5D4

void __cdecl
ControlBinding_StartListeningDelayedMouseAndKeyboard_mC14470302E254017C56D43E89617AC5695A60EE0
          (ControlBinding_tC850FCC2A9AEB8764F07FB598BB1125043AAB3EA *param_1,int param_2,
          ControllerMap_t840E4A4BAB81ECA540A6D251DF61CC71F20F604D *param_3,
          ControllerMap_t840E4A4BAB81ECA540A6D251DF61CC71F20F604D *param_4,int param_5,bool param_6,
          MethodInfo *param_7)

{
  Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E *pPVar1;
  ControllerHelper_t7321E4C8D92738EAD49659BFD68FB9A9C7E6D268 *pCVar2;
  MapHelper_t58AB9B830B39654835B74258921F7F6D30F7B00D *pMVar3;
  TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 *pTVar4;
  InputMapper_tEA4DC41995ECCD501FE44781A16D568B91806505 *pIVar5;
  List_1_tF3AA9FA5EF02F951C3DDBA8F6098F62A445F97E3 *pLVar6;
  int iVar7;
  Context_t9BC03BF9EFFA681A34550D1E4B9AE4C52BC990E1 *pCVar8;
  ActionElementMap_t028B1851A43E163C6CD5D57B37A6449791F1C537 *pAVar9;

  if (DAT_1151b59d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Context_t9BC03BF9EFFA681A34550D1E4B9AE4C52BC990E1_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m9938DEC7940787960C6206941B1A6F338F9162CC_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralA4249AEA5B1AE9E78829F6D9A0EFE24DE7967450);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralB93F5E13E0AD8E8044D7D80E771F9A55F393D87F);
    DAT_1151b59d = '\x01';
  }
  if ((((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
       (pPVar1 = param_1->___master_4->___player_43,
       pPVar1 != (Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E *)0x0)) &&
      (pCVar2 = pPVar1->___controllers_7,
      pCVar2 != (ControllerHelper_t7321E4C8D92738EAD49659BFD68FB9A9C7E6D268 *)0x0)) &&
     (pMVar3 = pCVar2->___maps_12,
     pMVar3 != (MapHelper_t58AB9B830B39654835B74258921F7F6D30F7B00D *)0x0)) {
    MapHelper_SetMapsEnabled_m7CFAEE9C134C8970940A6DD4301D6F3315CAD5D4
              (pMVar3,false,_stringLiteralB93F5E13E0AD8E8044D7D80E771F9A55F393D87F,(MethodInfo *)0x0
              );
    pTVar4 = param_1->___statusText_7;
    if (pTVar4 != (TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 *)0x0) {
      (**(code **)(pTVar4->_padding_ + 0x2cc))
                (pTVar4,_stringLiteralA4249AEA5B1AE9E78829F6D9A0EFE24DE7967450,
                 *(undefined4 *)(pTVar4->_padding_ + 0x2d0));
      pIVar5 = param_1->___inputMapperJoystickKeyboard_18;
      pCVar8 = (Context_t9BC03BF9EFFA681A34550D1E4B9AE4C52BC990E1 *)
               il2cpp_codegen_object_new
                         (Context_t9BC03BF9EFFA681A34550D1E4B9AE4C52BC990E1_il2cpp_TypeInfo_var);
      Context__ctor_m44C2AF9AD6AD61C3C87ADDF1BE20BE0E088F8511(pCVar8,(MethodInfo *)0x0);
      pLVar6 = param_1->___bindingRows_8;
      if (pLVar6 != (List_1_tF3AA9FA5EF02F951C3DDBA8F6098F62A445F97E3 *)0x0) {
        if ((uint)pLVar6->____size_2 <= (uint)param_2) {
                    /* WARNING: Subroutine does not return */
          ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                    ((MethodInfo *)0x0);
        }
        if (((*(int *)(pLVar6->____items_1 + param_2 * 4 + 0x10) != 0) &&
            (iVar7 = *(int *)(*(int *)(pLVar6->____items_1 + param_2 * 4 + 0x10) + 0x18), iVar7 != 0
            )) && (pCVar8 != (Context_t9BC03BF9EFFA681A34550D1E4B9AE4C52BC990E1 *)0x0)) {
          Context_set_actionId_mC283FE87FF0A7A50375B85965F1E3BD4A1261C9A
                    (pCVar8,*(int *)(iVar7 + 8),(MethodInfo *)0x0);
          Context_set_controllerMap_m692E094AD64F0BEF58BEED4183C5F41D8756F6B2
                    (pCVar8,param_3,(MethodInfo *)0x0);
          pLVar6 = param_1->___bindingRows_8;
          if (pLVar6 != (List_1_tF3AA9FA5EF02F951C3DDBA8F6098F62A445F97E3 *)0x0) {
            if ((uint)pLVar6->____size_2 <= (uint)param_2) {
                    /* WARNING: Subroutine does not return */
              ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                        ((MethodInfo *)0x0);
            }
            if (*(int *)(pLVar6->____items_1 + param_2 * 4 + 0x10) != 0) {
              Context_set_actionRange_mCD0F54FE2E9189B3CC724DCA469D47E6699F50BD
                        (pCVar8,*(int *)(*(int *)(pLVar6->____items_1 + param_2 * 4 + 0x10) + 0x1c),
                         (MethodInfo *)0x0);
              if (param_3 != (ControllerMap_t840E4A4BAB81ECA540A6D251DF61CC71F20F604D *)0x0) {
                pAVar9 = (ActionElementMap_t028B1851A43E163C6CD5D57B37A6449791F1C537 *)
                         (**(code **)(param_3->_padding_ + 0x10c))
                                   (param_3,param_5,*(undefined4 *)(param_3->_padding_ + 0x110));
                Context_set_actionElementMapToReplace_mB3AE2B45A7FB3E895D80DAF1B0A78D67AC6AB5E4
                          (pCVar8,pAVar9,(MethodInfo *)0x0);
                if (pIVar5 != (InputMapper_tEA4DC41995ECCD501FE44781A16D568B91806505 *)0x0) {
                  InputMapper_Start_mEE0A703AFF951F45733B50FB6C9DAA33C88F8683
                            (pIVar5,pCVar8,(MethodInfo *)0x0);
                  pIVar5 = param_1->___inputMapperMouse_19;
                  pCVar8 = (Context_t9BC03BF9EFFA681A34550D1E4B9AE4C52BC990E1 *)
                           il2cpp_codegen_object_new
                                     (
                                     Context_t9BC03BF9EFFA681A34550D1E4B9AE4C52BC990E1_il2cpp_TypeInfo_var
                                     );
                  Context__ctor_m44C2AF9AD6AD61C3C87ADDF1BE20BE0E088F8511(pCVar8,(MethodInfo *)0x0);
                  pLVar6 = param_1->___bindingRows_8;
                  if (pLVar6 != (List_1_tF3AA9FA5EF02F951C3DDBA8F6098F62A445F97E3 *)0x0) {
                    if ((uint)pLVar6->____size_2 <= (uint)param_2) {
                    /* WARNING: Subroutine does not return */
                      ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                                ((MethodInfo *)0x0);
                    }
                    if (((*(int *)(pLVar6->____items_1 + param_2 * 4 + 0x10) != 0) &&
                        (iVar7 = *(int *)(*(int *)(pLVar6->____items_1 + param_2 * 4 + 0x10) + 0x18)
                        , iVar7 != 0)) &&
                       (pCVar8 != (Context_t9BC03BF9EFFA681A34550D1E4B9AE4C52BC990E1 *)0x0)) {
                      Context_set_actionId_mC283FE87FF0A7A50375B85965F1E3BD4A1261C9A
                                (pCVar8,*(int *)(iVar7 + 8),(MethodInfo *)0x0);
                      Context_set_controllerMap_m692E094AD64F0BEF58BEED4183C5F41D8756F6B2
                                (pCVar8,param_4,(MethodInfo *)0x0);
                      pLVar6 = param_1->___bindingRows_8;
                      if (pLVar6 != (List_1_tF3AA9FA5EF02F951C3DDBA8F6098F62A445F97E3 *)0x0) {
                        if ((uint)pLVar6->____size_2 <= (uint)param_2) {
                    /* WARNING: Subroutine does not return */
                          ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                                    ((MethodInfo *)0x0);
                        }
                        if (*(int *)(pLVar6->____items_1 + param_2 * 4 + 0x10) != 0) {
                          Context_set_actionRange_mCD0F54FE2E9189B3CC724DCA469D47E6699F50BD
                                    (pCVar8,*(int *)(*(int *)(pLVar6->____items_1 +
                                                             param_2 * 4 + 0x10) + 0x1c),
                                     (MethodInfo *)0x0);
                          if (param_4 !=
                              (ControllerMap_t840E4A4BAB81ECA540A6D251DF61CC71F20F604D *)0x0) {
                            pAVar9 = (ActionElementMap_t028B1851A43E163C6CD5D57B37A6449791F1C537 *)
                                     (**(code **)(param_4->_padding_ + 0x10c))
                                               (param_4,param_5,
                                                *(undefined4 *)(param_4->_padding_ + 0x110));
                            Context_set_actionElementMapToReplace_mB3AE2B45A7FB3E895D80DAF1B0A78D67AC6AB5E4
                                      (pCVar8,pAVar9,(MethodInfo *)0x0);
                            if (pIVar5 != (InputMapper_tEA4DC41995ECCD501FE44781A16D568B91806505 *)
                                          0x0) {
                              InputMapper_Start_mEE0A703AFF951F45733B50FB6C9DAA33C88F8683
                                        (pIVar5,pCVar8,(MethodInfo *)0x0);
                              return;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
