// RVA 0x4203e0 | Placemaker.Ui.KeyboardAndMouseControlRemap$$OnInputFieldClicked
// PDB: KeyboardAndMouseControlRemap_OnInputFieldClicked_m677D82E8FDE5D969533AA0FE0F84D946966E8071
// Body: [[104203e0, 10420751]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103e9590 UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
// 10661ea0 RectTransform_get_sizeDelta_mCFAE8C916280C173AB79BE32B910376E310D1C50
// 106625b0 RectTransform_set_sizeDelta_m61943618442E31C6FF0556CDFC70940AE7AD04D0
// 1066efb0 Transform_SetAsLastSibling_m2AF5610CFC845BB1121152BAB38A1251D210A187
// 1066f960 Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
// 1066fbe0 Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200
// 106700e0 Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91
// 10670140 Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a4aa60 Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
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
KeyboardAndMouseControlRemap_OnInputFieldClicked_m677D82E8FDE5D969533AA0FE0F84D946966E8071
          (KeyboardAndMouseControlRemap_t2C7DF50DD90CC4E9372E1B2BB2E5935B9578EC37 *param_1,
          ControlBindingKey_t8AEA78973EA9D7777243BEFE675B13C562714798 *param_2,MethodInfo *param_3)

{
  Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E *pPVar1;
  ControllerHelper_t7321E4C8D92738EAD49659BFD68FB9A9C7E6D268 *pCVar2;
  MapHelper_t58AB9B830B39654835B74258921F7F6D30F7B00D *pMVar3;
  ControlBindingKey_t8AEA78973EA9D7777243BEFE675B13C562714798 *pCVar4;
  bool bVar5;
  ControllerMap_t840E4A4BAB81ECA540A6D251DF61CC71F20F604D *pCVar6;
  Context_t9BC03BF9EFFA681A34550D1E4B9AE4C52BC990E1 *pCVar7;
  ActionElementMap_t028B1851A43E163C6CD5D57B37A6449791F1C537 *pAVar8;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar9;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar10;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *pQVar11;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar12;
  RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *pRVar13;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar14;
  undefined1 local_18 [16];
  InputMapper_tEA4DC41995ECCD501FE44781A16D568B91806505 *local_8;

  if (DAT_1151cb0d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Context_t9BC03BF9EFFA681A34550D1E4B9AE4C52BC990E1_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_il2cpp_TypeInfo_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral9D5313975DA8153FF9A5262016CB413A4E84846E);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralB93F5E13E0AD8E8044D7D80E771F9A55F393D87F);
    DAT_1151cb0d = '\x01';
  }
  if (param_1->___buttonMapState_16 != false) {
    return;
  }
  param_1->___buttonMapState_16 = true;
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
    if (param_1->___inputMapper_11 != (InputMapper_tEA4DC41995ECCD501FE44781A16D568B91806505 *)0x0)
    {
      InputMapper_Stop_m439AEDEF502A790055D13AACA82F0C086F0DD69A
                (param_1->___inputMapper_11,(MethodInfo *)0x0);
      if (((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
          (pPVar1 = param_1->___master_4->___player_43,
          pPVar1 != (Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E *)0x0)) &&
         ((pCVar2 = pPVar1->___controllers_7,
          pCVar2 != (ControllerHelper_t7321E4C8D92738EAD49659BFD68FB9A9C7E6D268 *)0x0 &&
          (pMVar3 = pCVar2->___maps_12,
          pMVar3 != (MapHelper_t58AB9B830B39654835B74258921F7F6D30F7B00D *)0x0)))) {
        pCVar6 = MapHelper_GetMap_mC3654CDC5CE98A0B6B46B4CEEFBD1942E5FB822E
                           (pMVar3,0,0,_stringLiteral9D5313975DA8153FF9A5262016CB413A4E84846E,
                            _stringLiteral9D5313975DA8153FF9A5262016CB413A4E84846E,(MethodInfo *)0x0
                           );
        local_8 = param_1->___inputMapper_11;
        pCVar7 = (Context_t9BC03BF9EFFA681A34550D1E4B9AE4C52BC990E1 *)
                 il2cpp_codegen_object_new
                           (Context_t9BC03BF9EFFA681A34550D1E4B9AE4C52BC990E1_il2cpp_TypeInfo_var);
        Context__ctor_m44C2AF9AD6AD61C3C87ADDF1BE20BE0E088F8511(pCVar7,(MethodInfo *)0x0);
        if (((param_2 != (ControlBindingKey_t8AEA78973EA9D7777243BEFE675B13C562714798 *)0x0) &&
            (param_2->___inputAction_5 !=
             (InputAction_tD22CF065BFD88C292C239741BE6F8E37F5AE7ADE *)0x0)) &&
           (pCVar7 != (Context_t9BC03BF9EFFA681A34550D1E4B9AE4C52BC990E1 *)0x0)) {
          Context_set_actionId_mC283FE87FF0A7A50375B85965F1E3BD4A1261C9A
                    (pCVar7,param_2->___inputAction_5->____id_0,(MethodInfo *)0x0);
          Context_set_controllerMap_m692E094AD64F0BEF58BEED4183C5F41D8756F6B2
                    (pCVar7,pCVar6,(MethodInfo *)0x0);
          Context_set_actionRange_mCD0F54FE2E9189B3CC724DCA469D47E6699F50BD
                    (pCVar7,param_2->___axisRange_6,(MethodInfo *)0x0);
          if (pCVar6 != (ControllerMap_t840E4A4BAB81ECA540A6D251DF61CC71F20F604D *)0x0) {
            pAVar8 = (ActionElementMap_t028B1851A43E163C6CD5D57B37A6449791F1C537 *)
                     (**(code **)(pCVar6->_padding_ + 0x10c))
                               (pCVar6,param_2->___actionElementMapId_7,
                                *(undefined4 *)(pCVar6->_padding_ + 0x110));
            Context_set_actionElementMapToReplace_mB3AE2B45A7FB3E895D80DAF1B0A78D67AC6AB5E4
                      (pCVar7,pAVar8,(MethodInfo *)0x0);
            if (local_8 != (InputMapper_tEA4DC41995ECCD501FE44781A16D568B91806505 *)0x0) {
              InputMapper_Start_mEE0A703AFF951F45733B50FB6C9DAA33C88F8683
                        (local_8,pCVar7,(MethodInfo *)0x0);
              pCVar4 = param_1->___currentKey_18;
              if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor
                   != '\0') &&
                 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->
                  cctor_finished == 0)) {
                il2cpp_runtime_class_init
                          (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
              }
              bVar5 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                                ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pCVar4,
                                 (MethodInfo *)0x0);
              if (bVar5) {
                if (param_1->___darkenState_10 !=
                    (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
                  UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
                            (param_1->___darkenState_10,false,(MethodInfo *)0x0);
                  return;
                }
              }
              else if (((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                        param_1->___darkener_9 !=
                        (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) &&
                      (pTVar9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                          ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                           param_1->___darkener_9,(MethodInfo *)0x0),
                      pTVar9 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) {
                Transform_SetAsLastSibling_m2AF5610CFC845BB1121152BAB38A1251D210A187
                          (pTVar9,(MethodInfo *)0x0);
                if ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1->___darkener_9 !=
                    (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) {
                  pTVar9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                     ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                      param_1->___darkener_9,(MethodInfo *)0x0);
                  pTVar10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                      ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                       param_2,(MethodInfo *)0x0);
                  if ((pTVar10 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) &&
                     (pQVar11 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200
                                          ((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)
                                           local_18,pTVar10,(MethodInfo *)0x0),
                     pTVar9 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) {
                    Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4
                              (pTVar9,*pQVar11,(MethodInfo *)0x0);
                    if ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                        param_1->___darkener_9 !=
                        (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) {
                      pTVar9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                         ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                          param_1->___darkener_9,(MethodInfo *)0x0);
                      pTVar10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                          ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                           param_2,(MethodInfo *)0x0);
                      if ((pTVar10 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) &&
                         (pVVar12 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                                              ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)
                                               (local_18 + 4),pTVar10,(MethodInfo *)0x0),
                         pTVar9 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) {
                        Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91
                                  (pTVar9,*pVVar12,(MethodInfo *)0x0);
                        if ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                            param_1->___darkener_9 !=
                            (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) {
                          pTVar9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                             ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *
                                              )param_1->___darkener_9,(MethodInfo *)0x0);
                          pTVar10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                              ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
                                                *)param_2,(MethodInfo *)0x0);
                          if (pTVar10 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)
                          {
                            pRVar13 = (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)0x0
                            ;
                            if (*(Il2CppClass **)pTVar10 ==
                                RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_il2cpp_TypeInfo_var
                               ) {
                              pRVar13 = (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)
                                        pTVar10;
                            }
                            if ((pRVar13 !=
                                 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)0x0) &&
                               (VVar14 = RectTransform_get_sizeDelta_mCFAE8C916280C173AB79BE32B910376E310D1C50
                                                   (pRVar13,(MethodInfo *)0x0),
                               pTVar9 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)
                               ) {
                              pRVar13 = (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)
                                        0x0;
                              if (*(Il2CppClass **)pTVar9 ==
                                  RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_il2cpp_TypeInfo_var
                                 ) {
                                pRVar13 = (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *
                                          )pTVar9;
                              }
                              if (pRVar13 !=
                                  (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)0x0) {
                                RectTransform_set_sizeDelta_m61943618442E31C6FF0556CDFC70940AE7AD04D0
                                          (pRVar13,VVar14,(MethodInfo *)0x0);
                                pTVar9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                                   ((
                                                  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
                                                  *)param_2,(MethodInfo *)0x0);
                                if (pTVar9 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *
                                              )0x0) {
                                  Transform_SetAsLastSibling_m2AF5610CFC845BB1121152BAB38A1251D210A187
                                            (pTVar9,(MethodInfo *)0x0);
                                  if (param_1->___darkenState_10 !=
                                      (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0)
                                  {
                                    UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
                                              (param_1->___darkenState_10,true,(MethodInfo *)0x0);
                                    param_1->___currentKey_18 = param_2;
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
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
