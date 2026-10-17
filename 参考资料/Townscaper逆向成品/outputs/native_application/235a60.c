// RVA 0x235a60 | Placemaker.Ui.ControlBinding$$StartListeningDelayedJoystick
// PDB: ControlBinding_StartListeningDelayedJoystick_m2B82BCFB29C792C35EFDF30DD2C5F5D3E4A812DE
// Body: [[10235a60, 10235bae] [10235bb5, 10235c02] [10235c06, 10235c64]]
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
// 10db5f00 InputMapper_Stop_m439AEDEF502A790055D13AACA82F0C086F0DD69A
// 10e5cf00 MapHelper_GetMap_mC3654CDC5CE98A0B6B46B4CEEFBD1942E5FB822E
// 10e62330 MapHelper_SetMapsEnabled_m7CFAEE9C134C8970940A6DD4301D6F3315CAD5D4

void __cdecl
ControlBinding_StartListeningDelayedJoystick_m2B82BCFB29C792C35EFDF30DD2C5F5D3E4A812DE
          (ControlBinding_tC850FCC2A9AEB8764F07FB598BB1125043AAB3EA *param_1,int param_2,int param_3
          ,MethodInfo *param_4)

{
  Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E *pPVar1;
  ControllerHelper_t7321E4C8D92738EAD49659BFD68FB9A9C7E6D268 *pCVar2;
  MapHelper_t58AB9B830B39654835B74258921F7F6D30F7B00D *pMVar3;
  TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 *pTVar4;
  InputMapper_tEA4DC41995ECCD501FE44781A16D568B91806505 *pIVar5;
  List_1_tF3AA9FA5EF02F951C3DDBA8F6098F62A445F97E3 *pLVar6;
  int iVar7;
  ControllerMap_t840E4A4BAB81ECA540A6D251DF61CC71F20F604D *pCVar8;
  Context_t9BC03BF9EFFA681A34550D1E4B9AE4C52BC990E1 *pCVar9;
  ActionElementMap_t028B1851A43E163C6CD5D57B37A6449791F1C537 *pAVar10;

  if (DAT_1151b59e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Context_t9BC03BF9EFFA681A34550D1E4B9AE4C52BC990E1_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m9938DEC7940787960C6206941B1A6F338F9162CC_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral9D5313975DA8153FF9A5262016CB413A4E84846E);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralA4249AEA5B1AE9E78829F6D9A0EFE24DE7967450);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralB93F5E13E0AD8E8044D7D80E771F9A55F393D87F);
    DAT_1151b59e = '\x01';
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
      if (((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
          (pPVar1 = param_1->___master_4->___player_43,
          pPVar1 != (Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E *)0x0)) &&
         ((pCVar2 = pPVar1->___controllers_7,
          pCVar2 != (ControllerHelper_t7321E4C8D92738EAD49659BFD68FB9A9C7E6D268 *)0x0 &&
          (pMVar3 = pCVar2->___maps_12,
          pMVar3 != (MapHelper_t58AB9B830B39654835B74258921F7F6D30F7B00D *)0x0)))) {
        pCVar8 = MapHelper_GetMap_mC3654CDC5CE98A0B6B46B4CEEFBD1942E5FB822E
                           (pMVar3,2,param_1->___selectedControllerGroupId_21,
                            _stringLiteral9D5313975DA8153FF9A5262016CB413A4E84846E,
                            _stringLiteral9D5313975DA8153FF9A5262016CB413A4E84846E,(MethodInfo *)0x0
                           );
        if (param_1->___inputMapperJoystickKeyboard_18 !=
            (InputMapper_tEA4DC41995ECCD501FE44781A16D568B91806505 *)0x0) {
          InputMapper_Stop_m439AEDEF502A790055D13AACA82F0C086F0DD69A
                    (param_1->___inputMapperJoystickKeyboard_18,(MethodInfo *)0x0);
          pIVar5 = param_1->___inputMapperJoystickKeyboard_18;
          pCVar9 = (Context_t9BC03BF9EFFA681A34550D1E4B9AE4C52BC990E1 *)
                   il2cpp_codegen_object_new
                             (Context_t9BC03BF9EFFA681A34550D1E4B9AE4C52BC990E1_il2cpp_TypeInfo_var)
          ;
          Context__ctor_m44C2AF9AD6AD61C3C87ADDF1BE20BE0E088F8511(pCVar9,(MethodInfo *)0x0);
          pLVar6 = param_1->___bindingRows_8;
          if (pLVar6 != (List_1_tF3AA9FA5EF02F951C3DDBA8F6098F62A445F97E3 *)0x0) {
            if ((uint)pLVar6->____size_2 <= (uint)param_2) {
                    /* WARNING: Subroutine does not return */
              ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                        ((MethodInfo *)0x0);
            }
            if (((*(int *)(pLVar6->____items_1 + param_2 * 4 + 0x10) != 0) &&
                (iVar7 = *(int *)(*(int *)(pLVar6->____items_1 + param_2 * 4 + 0x10) + 0x18),
                iVar7 != 0)) && (pCVar9 != (Context_t9BC03BF9EFFA681A34550D1E4B9AE4C52BC990E1 *)0x0)
               ) {
              Context_set_actionId_mC283FE87FF0A7A50375B85965F1E3BD4A1261C9A
                        (pCVar9,*(int *)(iVar7 + 8),(MethodInfo *)0x0);
              Context_set_controllerMap_m692E094AD64F0BEF58BEED4183C5F41D8756F6B2
                        (pCVar9,pCVar8,(MethodInfo *)0x0);
              pLVar6 = param_1->___bindingRows_8;
              if (pLVar6 != (List_1_tF3AA9FA5EF02F951C3DDBA8F6098F62A445F97E3 *)0x0) {
                if ((uint)pLVar6->____size_2 <= (uint)param_2) {
                    /* WARNING: Subroutine does not return */
                  ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                            ((MethodInfo *)0x0);
                }
                if (*(int *)(pLVar6->____items_1 + param_2 * 4 + 0x10) != 0) {
                  Context_set_actionRange_mCD0F54FE2E9189B3CC724DCA469D47E6699F50BD
                            (pCVar9,*(int *)(*(int *)(pLVar6->____items_1 + param_2 * 4 + 0x10) +
                                            0x1c),(MethodInfo *)0x0);
                  if (pCVar8 != (ControllerMap_t840E4A4BAB81ECA540A6D251DF61CC71F20F604D *)0x0) {
                    pAVar10 = (ActionElementMap_t028B1851A43E163C6CD5D57B37A6449791F1C537 *)
                              (**(code **)(pCVar8->_padding_ + 0x10c))
                                        (pCVar8,param_3,*(undefined4 *)(pCVar8->_padding_ + 0x110));
                    Context_set_actionElementMapToReplace_mB3AE2B45A7FB3E895D80DAF1B0A78D67AC6AB5E4
                              (pCVar9,pAVar10,(MethodInfo *)0x0);
                    if (pIVar5 != (InputMapper_tEA4DC41995ECCD501FE44781A16D568B91806505 *)0x0) {
                      InputMapper_Start_mEE0A703AFF951F45733B50FB6C9DAA33C88F8683
                                (pIVar5,pCVar9,(MethodInfo *)0x0);
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
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
