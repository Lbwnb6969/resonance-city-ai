// RVA 0x2ff720 | Placemaker.Ui.SunButton$$OnDrag
// PDB: SunButton_OnDrag_m39D3FB74FC80F4F3A4F22D1FD2567172BD2B0B07
// Body: [[102ff720, 102ff9d3]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d1480 AutoScroll_get_targetPosition_m3E7108A35FE9F905A4D9F1E072AC9B8915491DDA
// 101d1490 AutoScroll_get_time_m821A91DD5EC59EEA7FFD61FB87B16342F3A5CB54
// 10661e30 RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2
// 1066e660 Transform_InverseTransformVector_mAE27324FC01E136CF80D1A414AC10BA7616024C4
// 10a0afd0 ShadowBaker_SetAngle_m5C36D66DB1DE079F87F08B9BB716C990FCEEB918
// 10a0b020 ShadowBaker_SetX_m53159ACC756F5463D7767555210A64434148D1B3
// 10a0b060 ShadowBaker_SetY_mEC8E2A9DC7FD72B394516DEF1C649B8FFB49F087
// 10a43ab0 Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C
// 10a4a920 Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54

/* WARNING: Type propagation algorithm not settling */

void __cdecl
SunButton_OnDrag_m39D3FB74FC80F4F3A4F22D1FD2567172BD2B0B07
          (SunButton_t215E5C834FF2974681639E044A8C9F4D225EAE67 *param_1,
          PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *param_2,
          SunSlider_t5377A5354C7D2E09BF671D1681C1B608D4007427 *param_3,MethodInfo *param_4)

{
  SunSlider_t5377A5354C7D2E09BF671D1681C1B608D4007427 *pSVar1;
  UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *pUVar2;
  ShadowBaker_t6F06B45A35DED9505A63AA08A159E2BD749BD427 *pSVar3;
  WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *pWVar4;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar5;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar6;
  bool bVar7;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar8;
  Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *pRVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  undefined1 local_30 [16];
  undefined8 local_20;
  undefined8 local_14;
  float local_c;
  float local_8;

  if (DAT_1151c202 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    DAT_1151c202 = '\x01';
  }
  fVar12 = local_c;
  if (param_2 != (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *)0x0) {
    fVar10 = (param_2->___U3CpositionU3Ek__BackingField_13).___x_0 -
             (param_2->___U3CpressPositionU3Ek__BackingField_15).___x_0;
    fVar11 = (param_2->___U3CpositionU3Ek__BackingField_13).___y_1 -
             (param_2->___U3CpressPositionU3Ek__BackingField_15).___y_1;
    local_14 = CONCAT44(fVar11,fVar10);
    local_c = 0.0;
    fVar12 = local_c;
    if ((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)param_1->___bothContainer_13 !=
        (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
      VVar5.___y_3 = fVar11;
      VVar5.___x_2 = fVar10;
      VVar5.___z_4 = 0.0;
      pVVar8 = Transform_InverseTransformVector_mAE27324FC01E136CF80D1A414AC10BA7616024C4
                         ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(local_30 + 4),
                          (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)
                          param_1->___bothContainer_13,VVar5,(MethodInfo *)0x0);
      local_20._0_4_ = pVVar8->___x_2;
      local_20._4_4_ = pVVar8->___y_3;
      local_c = pVVar8->___z_4;
      pSVar1 = param_1->___sliderX_14;
      param_2 = (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *)(undefined4)local_20;
      local_8 = (float)local_20._4_4_;
      local_14 = local_20;
      if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0')
         && (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished ==
             0)) {
        il2cpp_runtime_class_init
                  (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
      }
      bVar7 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54
                        ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)param_3,
                         (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pSVar1,
                         (MethodInfo *)0x0);
      if (bVar7) {
        local_8 = 0.0;
      }
      else {
        pSVar1 = param_1->___sliderY_15;
        if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0'
            ) && (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->
                  cctor_finished == 0)) {
          il2cpp_runtime_class_init
                    (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
        }
        bVar7 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54
                          ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)param_3,
                           (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pSVar1,
                           (MethodInfo *)0x0);
        if (bVar7) {
          param_2 = (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *)0x0;
        }
      }
      fVar12 = local_c;
      if (param_1->___bothContainer_13 !=
          (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)0x0) {
        pRVar9 = RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2
                           ((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)local_30,
                            param_1->___bothContainer_13,(MethodInfo *)0x0);
        local_40 = pRVar9->___m_XMin_0;
        fStack_3c = pRVar9->___m_YMin_1;
        fStack_38 = pRVar9->___m_Width_2;
        fStack_34 = pRVar9->___m_Height_3;
        fVar12 = AutoScroll_get_time_m821A91DD5EC59EEA7FFD61FB87B16342F3A5CB54
                           ((AutoScroll_t1A0CA51C495D2BC1005833EF85B60738D8D39D8A *)&local_40,
                            (MethodInfo *)0x0);
        fVar10 = AutoScroll_get_targetPosition_m3E7108A35FE9F905A4D9F1E072AC9B8915491DDA
                           ((AutoScroll_t1A0CA51C495D2BC1005833EF85B60738D8D39D8A *)&local_40,
                            (MethodInfo *)0x0);
        local_8 = local_8 / fVar10;
        local_c = (float)param_2 / fVar12 + (param_1->___start_18).___x_0;
        fVar10 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C
                           (local_8 + (param_1->___start_18).___y_1,(MethodInfo *)0x0);
        pSVar1 = param_1->___sliderX_14;
        if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0'
            ) && (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->
                  cctor_finished == 0)) {
          il2cpp_runtime_class_init
                    (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
        }
        bVar7 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54
                          ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)param_3,
                           (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pSVar1,
                           (MethodInfo *)0x0);
        if (bVar7) {
          fVar12 = local_c;
          if (((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0)
              && (pWVar4 = param_1->___master_4->___worldMaster_5,
                 pWVar4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)) &&
             (pSVar3 = pWVar4->___shadowBaker_31,
             pSVar3 != (ShadowBaker_t6F06B45A35DED9505A63AA08A159E2BD749BD427 *)0x0)) {
            ShadowBaker_SetX_m53159ACC756F5463D7767555210A64434148D1B3
                      (pSVar3,local_c,(MethodInfo *)0x0);
            return;
          }
        }
        else {
          pSVar1 = param_1->___sliderY_15;
          if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor !=
               '\0') &&
             (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished
              == 0)) {
            il2cpp_runtime_class_init
                      (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
          }
          bVar7 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54
                            ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)param_3,
                             (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pSVar1,
                             (MethodInfo *)0x0);
          pUVar2 = param_1->___master_4;
          fVar12 = local_c;
          if (bVar7) {
            if (((pUVar2 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
                (pUVar2->___worldMaster_5 !=
                 (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)) &&
               (pSVar3 = pUVar2->___worldMaster_5->___shadowBaker_31,
               pSVar3 != (ShadowBaker_t6F06B45A35DED9505A63AA08A159E2BD749BD427 *)0x0)) {
              ShadowBaker_SetY_mEC8E2A9DC7FD72B394516DEF1C649B8FFB49F087
                        (pSVar3,fVar10,(MethodInfo *)0x0);
              return;
            }
          }
          else if ((pUVar2 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
                  (pUVar2->___worldMaster_5 !=
                   (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)) {
            pSVar3 = pUVar2->___worldMaster_5->___shadowBaker_31;
            local_14 = CONCAT44(local_c,(undefined4)local_14);
            fVar12 = fVar10;
            if (pSVar3 != (ShadowBaker_t6F06B45A35DED9505A63AA08A159E2BD749BD427 *)0x0) {
              VVar6.___y_1 = fVar10;
              VVar6.___x_0 = local_c;
              local_c = fVar10;
              ShadowBaker_SetAngle_m5C36D66DB1DE079F87F08B9BB716C990FCEEB918
                        (pSVar3,VVar6,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  local_c = fVar12;
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
