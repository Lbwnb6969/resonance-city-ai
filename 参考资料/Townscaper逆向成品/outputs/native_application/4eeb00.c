// RVA 0x4eeb00 | Placemaker.Ui.KeyboardControlsMenu$$OnControlBindingClicked
// PDB: KeyboardControlsMenu_OnControlBindingClicked_m20AFA6B2F5B698DB7093F37D7A07D598D8C3BC0D
// Body: [[104eeb00, 104eed14]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
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

void __cdecl
KeyboardControlsMenu_OnControlBindingClicked_m20AFA6B2F5B698DB7093F37D7A07D598D8C3BC0D
          (KeyboardControlsMenu_t8A1421617C595C06F6BA074D899E4D4C458562D2 *param_1,
          ControlBindingKey_t8AEA78973EA9D7777243BEFE675B13C562714798 *param_2,MethodInfo *param_3)

{
  ControlBindingKey_t8AEA78973EA9D7777243BEFE675B13C562714798 *pCVar1;
  bool bVar2;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar3;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar4;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *pQVar5;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar6;
  RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *pRVar7;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar8;
  undefined1 local_14 [16];

  if (DAT_1151d210 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_il2cpp_TypeInfo_var)
    ;
    DAT_1151d210 = '\x01';
  }
  pCVar1 = param_1->___currentKey_21;
  if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
  }
  bVar2 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                    ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pCVar1,(MethodInfo *)0x0);
  if (bVar2) {
    if (param_1->___darkenState_8 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
      UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
                (param_1->___darkenState_8,false,(MethodInfo *)0x0);
      return;
    }
  }
  else if ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1->___darkener_5 !=
           (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) {
    pTVar3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                       ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                        param_1->___darkener_5,(MethodInfo *)0x0);
    if (pTVar3 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
      Transform_SetAsLastSibling_m2AF5610CFC845BB1121152BAB38A1251D210A187(pTVar3,(MethodInfo *)0x0)
      ;
      if ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1->___darkener_5 !=
          (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) {
        pTVar3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                           ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                            param_1->___darkener_5,(MethodInfo *)0x0);
        if (param_2 != (ControlBindingKey_t8AEA78973EA9D7777243BEFE675B13C562714798 *)0x0) {
          pTVar4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                             ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_2,
                              (MethodInfo *)0x0);
          if (pTVar4 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
            pQVar5 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200
                               ((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)local_14,
                                pTVar4,(MethodInfo *)0x0);
            if (pTVar3 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
              Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4
                        (pTVar3,*pQVar5,(MethodInfo *)0x0);
              if ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1->___darkener_5 !=
                  (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) {
                pTVar3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                   ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                    param_1->___darkener_5,(MethodInfo *)0x0);
                pTVar4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                   ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_2,
                                    (MethodInfo *)0x0);
                if (pTVar4 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
                  pVVar6 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                                     ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)
                                      (local_14 + 4),pTVar4,(MethodInfo *)0x0);
                  if (pTVar3 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
                    Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91
                              (pTVar3,*pVVar6,(MethodInfo *)0x0);
                    if ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                        param_1->___darkener_5 !=
                        (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) {
                      pTVar3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                         ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                          param_1->___darkener_5,(MethodInfo *)0x0);
                      pTVar4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                         ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                          param_2,(MethodInfo *)0x0);
                      if (pTVar4 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
                        pRVar7 = (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)0x0;
                        if (*(Il2CppClass **)pTVar4 ==
                            RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_il2cpp_TypeInfo_var
                           ) {
                          pRVar7 = (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)pTVar4
                          ;
                        }
                        if (pRVar7 != (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)0x0
                           ) {
                          VVar8 = RectTransform_get_sizeDelta_mCFAE8C916280C173AB79BE32B910376E310D1C50
                                            (pRVar7,(MethodInfo *)0x0);
                          if (pTVar3 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)
                          {
                            pRVar7 = (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)0x0;
                            if (*(Il2CppClass **)pTVar3 ==
                                RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_il2cpp_TypeInfo_var
                               ) {
                              pRVar7 = (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)
                                       pTVar3;
                            }
                            if (pRVar7 != (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *
                                          )0x0) {
                              RectTransform_set_sizeDelta_m61943618442E31C6FF0556CDFC70940AE7AD04D0
                                        (pRVar7,VVar8,(MethodInfo *)0x0);
                              pTVar3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                                 ((
                                                  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
                                                  *)param_2,(MethodInfo *)0x0);
                              if (pTVar3 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)
                                            0x0) {
                                Transform_SetAsLastSibling_m2AF5610CFC845BB1121152BAB38A1251D210A187
                                          (pTVar3,(MethodInfo *)0x0);
                                if (param_1->___darkenState_8 !=
                                    (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
                                  UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
                                            (param_1->___darkenState_8,true,(MethodInfo *)0x0);
                                  param_1->___currentKey_21 = param_2;
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
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
