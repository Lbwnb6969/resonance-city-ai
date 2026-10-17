// RVA 0x1dca10 | Placemaker.Ui.GamepadScreenCursor.<>c__DisplayClass12_0$$<Placemaker.Ui.UiMaster.IUiSetup.OnSetup>b__0
// PDB: U3CU3Ec__DisplayClass12_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__0_mACC12833CAB2AC31D667EA30C4AA39864693E60D
// Body: [[101dca10, 101dce72]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103e9590 UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
// 10661e30 RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2
// 10662cd0 Rect_get_max_mD553C13D7CBC8CD7DB0D7FD0D7D2B703734EAC78
// 10662d00 Rect_get_min_mAB48143A34188D0C92C811E6BCE3684FC81F29B6
// 1066f120 Transform_TransformPoint_m68AF95765A9279192E601208A9C5170027A5F0D2
// 1066f960 Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
// 106700e0 Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91
// 10673a30 Vector3_MoveTowards_mFB45EE30324E487925CA26EE6C001F0A3D257796
// 10a36e40 Behaviour_get_enabled_m08077AB79934634E1EAE909C2B482BEF4C15A800
// 10a36ea0 Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a43af0 Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87
// 10a44170 Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14

void __cdecl
U3CU3Ec__DisplayClass12_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__0_mACC12833CAB2AC31D667EA30C4AA39864693E60D
          (U3CU3Ec__DisplayClass12_0_tA9DDB437CFE98734E80FEB07874355C2B3DBDE1D *param_1,int param_2,
          int param_3,MethodInfo *param_4)

{
  undefined8 uVar1;
  GamepadScreenCursor_t16442AD23130B50028C8F87084D1AC48DB3F8DB0 *pGVar2;
  UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *pUVar3;
  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *pCVar4;
  MasterClicker_t3CC2EEB38FD790B0557073353FD781FDE8459BED *pMVar5;
  RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *pRVar6;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar7;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar8;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar9;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar10;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar11;
  bool bVar12;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar13;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar14;
  Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *pRVar15;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar16;
  Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 local_80;
  float local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 local_60;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_50;
  float local_3c;
  float fStack_38;
  float local_34;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_30;
  float local_1c;
  float local_18;
  float local_14;

  if (param_1->___U3CU3E4__this_0 !=
      (GamepadScreenCursor_t16442AD23130B50028C8F87084D1AC48DB3F8DB0 *)0x0) {
    Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32
              ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)param_1->___U3CU3E4__this_0,
               param_3 == 0x40,(MethodInfo *)0x0);
    pGVar2 = param_1->___U3CU3E4__this_0;
    if (pGVar2 != (GamepadScreenCursor_t16442AD23130B50028C8F87084D1AC48DB3F8DB0 *)0x0) {
      pUVar3 = pGVar2->___openState_9;
      bVar12 = Behaviour_get_enabled_m08077AB79934634E1EAE909C2B482BEF4C15A800
                         ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)pGVar2,
                          (MethodInfo *)0x0);
      local_18 = (float)CONCAT31(local_18._1_3_,bVar12);
      if (pUVar3 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
        UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
                  (pUVar3,bVar12,(MethodInfo *)0x0);
        if (param_1->___U3CU3E4__this_0 !=
            (GamepadScreenCursor_t16442AD23130B50028C8F87084D1AC48DB3F8DB0 *)0x0) {
          bVar12 = Behaviour_get_enabled_m08077AB79934634E1EAE909C2B482BEF4C15A800
                             ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)
                              param_1->___U3CU3E4__this_0,(MethodInfo *)0x0);
          if (bVar12) {
            if ((param_2 & 0x20U) == 0) {
              if ((param_1->___U3CU3E4__this_0 ==
                   (GamepadScreenCursor_t16442AD23130B50028C8F87084D1AC48DB3F8DB0 *)0x0) ||
                 (pCVar4 = (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                           param_1->___U3CU3E4__this_0->___cursor_6,
                 pCVar4 == (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0))
              goto LAB_101dce6e;
              pTVar13 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                  (pCVar4,(MethodInfo *)0x0);
              if (pTVar13 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)
              goto LAB_101dce6e;
              pVVar14 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                                  (&local_30,pTVar13,(MethodInfo *)0x0);
              uVar1._0_4_ = pVVar14->___x_2;
              uVar1._4_4_ = pVVar14->___y_3;
              local_50.___z_4 = pVVar14->___z_4;
              local_70 = (float)uVar1;
              local_50._0_8_ = uVar1;
              local_3c = (float)uVar1;
              fStack_38 = uVar1._4_4_;
              local_34 = local_50.___z_4;
            }
            else {
              if ((param_1->___master_1 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0
                  ) || (pMVar5 = param_1->___master_1->___masterClicker_16,
                       pMVar5 == (MasterClicker_t3CC2EEB38FD790B0557073353FD781FDE8459BED *)0x0))
              goto LAB_101dce6e;
              local_70 = (pMVar5->___pointerPosition_16).___x_0;
              uVar1._4_4_ = (pMVar5->___pointerPosition_16).___y_1;
            }
            uStack_64 = 0;
            uStack_68 = 0;
            uStack_6c = 0;
            local_14 = uVar1._4_4_;
            if ((param_1->___U3CU3E4__this_0 !=
                 (GamepadScreenCursor_t16442AD23130B50028C8F87084D1AC48DB3F8DB0 *)0x0) &&
               (pRVar6 = param_1->___U3CU3E4__this_0->___field_5,
               pRVar6 != (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)0x0)) {
              pRVar15 = RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2
                                  (&local_60,pRVar6,(MethodInfo *)0x0);
              local_80.___m_XMin_0 = pRVar15->___m_XMin_0;
              local_80.___m_YMin_1 = pRVar15->___m_YMin_1;
              local_80.___m_Width_2 = pRVar15->___m_Width_2;
              local_80.___m_Height_3 = pRVar15->___m_Height_3;
              if ((param_1->___U3CU3E4__this_0 !=
                   (GamepadScreenCursor_t16442AD23130B50028C8F87084D1AC48DB3F8DB0 *)0x0) &&
                 (pCVar4 = (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                           param_1->___U3CU3E4__this_0->___field_5,
                 pCVar4 != (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0)) {
                pTVar13 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                    (pCVar4,(MethodInfo *)0x0);
                VVar16 = Rect_get_min_mAB48143A34188D0C92C811E6BCE3684FC81F29B6
                                   (&local_80,(MethodInfo *)0x0);
                local_30.___x_2 = fStack_38;
                fStack_38 = VVar16.___x_0;
                local_34 = VVar16.___y_1;
                local_30.___y_3 = local_34;
                local_30.___z_4 = 0.0;
                if (pTVar13 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
                  VVar9.___y_3 = local_34;
                  VVar9.___x_2 = local_30.___x_2;
                  VVar9.___z_4 = 0.0;
                  pVVar14 = Transform_TransformPoint_m68AF95765A9279192E601208A9C5170027A5F0D2
                                      (&local_50,pTVar13,VVar9,(MethodInfo *)0x0);
                  local_30.___x_2 = pVVar14->___x_2;
                  local_30.___y_3 = pVVar14->___y_3;
                  local_30.___z_4 = pVVar14->___z_4;
                  if ((param_1->___U3CU3E4__this_0 !=
                       (GamepadScreenCursor_t16442AD23130B50028C8F87084D1AC48DB3F8DB0 *)0x0) &&
                     (pCVar4 = (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                               param_1->___U3CU3E4__this_0->___field_5,
                     pCVar4 != (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0)) {
                    pTVar13 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                        (pCVar4,(MethodInfo *)0x0);
                    VVar16 = Rect_get_max_mD553C13D7CBC8CD7DB0D7FD0D7D2B703734EAC78
                                       (&local_80,(MethodInfo *)0x0);
                    local_50.___x_2 = fStack_38;
                    fStack_38 = VVar16.___x_0;
                    local_34 = VVar16.___y_1;
                    local_50.___y_3 = local_34;
                    local_50.___z_4 = 0.0;
                    if (pTVar13 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
                      VVar10.___y_3 = local_34;
                      VVar10.___x_2 = local_50.___x_2;
                      VVar10.___z_4 = 0.0;
                      pVVar14 = Transform_TransformPoint_m68AF95765A9279192E601208A9C5170027A5F0D2
                                          ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)
                                           &local_60,pTVar13,VVar10,(MethodInfo *)0x0);
                      local_50.___x_2 = pVVar14->___x_2;
                      local_50.___y_3 = pVVar14->___y_3;
                      local_50.___z_4 = pVVar14->___z_4;
                      local_3c = local_50.___x_2;
                      fStack_38 = local_50.___y_3;
                      local_34 = local_50.___z_4;
                      local_18 = Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14
                                           (local_50.___x_2 - local_30.___x_2,
                                            local_50.___y_3 - local_30.___y_3,(MethodInfo *)0x0);
                      local_18 = local_18 * __real_3e4ccccd;
                      local_30.___z_4 = local_30.___y_3 + local_18;
                      local_1c = local_50.___y_3 - local_18;
                      local_34 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87
                                           (local_70,local_30.___x_2 + local_18,
                                            local_50.___x_2 - local_18,(MethodInfo *)0x0);
                      local_30.___z_4 =
                           Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87
                                     (local_14,local_30.___z_4,local_1c,(MethodInfo *)0x0);
                      uVar1._4_4_ = local_34;
                      local_34 = 0.0;
                      local_50.___z_4 = 0.0;
                      VVar7.___y_3 = local_30.___z_4;
                      VVar7.___x_2 = uVar1._4_4_;
                      VVar7.___z_4 = 0.0;
                      VVar8.___y_3 = local_14;
                      VVar8.___x_2 = local_70;
                      VVar8.___z_4 = 0.0;
                      pVVar14 = Vector3_MoveTowards_mFB45EE30324E487925CA26EE6C001F0A3D257796
                                          ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)
                                           &local_60,VVar7,VVar8,local_18,(MethodInfo *)0x0);
                      local_50.___x_2 = pVVar14->___x_2;
                      local_50.___y_3 = pVVar14->___y_3;
                      local_50.___z_4 = pVVar14->___z_4;
                      local_3c = local_50.___x_2;
                      fStack_38 = local_50.___y_3;
                      if ((param_1->___U3CU3E4__this_0 !=
                           (GamepadScreenCursor_t16442AD23130B50028C8F87084D1AC48DB3F8DB0 *)0x0) &&
                         (pCVar4 = (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                   param_1->___U3CU3E4__this_0->___cursor_6,
                         pCVar4 != (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0)) {
                        pTVar13 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                            (pCVar4,(MethodInfo *)0x0);
                        uVar1._4_4_ = local_50.___x_2;
                        local_50.___y_3 = fStack_38;
                        local_50.___x_2 = uVar1._4_4_;
                        local_50.___z_4 = 0.0;
                        if (pTVar13 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
                          VVar11.___y_3 = fStack_38;
                          VVar11.___x_2 = uVar1._4_4_;
                          VVar11.___z_4 = 0.0;
                          Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91
                                    (pTVar13,VVar11,(MethodInfo *)0x0);
                          return;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          else if ((param_1->___U3CU3E4__this_0 !=
                    (GamepadScreenCursor_t16442AD23130B50028C8F87084D1AC48DB3F8DB0 *)0x0) &&
                  (pUVar3 = param_1->___U3CU3E4__this_0->___visibleState_10,
                  pUVar3 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0)) {
            UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
                      (pUVar3,false,(MethodInfo *)0x0);
            if ((param_1->___U3CU3E4__this_0 !=
                 (GamepadScreenCursor_t16442AD23130B50028C8F87084D1AC48DB3F8DB0 *)0x0) &&
               (pUVar3 = param_1->___U3CU3E4__this_0->___arrowState_11,
               pUVar3 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0)) {
              UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
                        (pUVar3,false,(MethodInfo *)0x0);
              if (param_1->___U3CU3E4__this_0 !=
                  (GamepadScreenCursor_t16442AD23130B50028C8F87084D1AC48DB3F8DB0 *)0x0) {
                param_1->___U3CU3E4__this_0->___isAdding_15 = false;
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_101dce6e:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
