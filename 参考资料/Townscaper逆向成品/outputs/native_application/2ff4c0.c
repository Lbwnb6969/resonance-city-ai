// RVA 0x2ff4c0 | Placemaker.Ui.SunButton$$OnClick
// PDB: SunButton_OnClick_m1E8D51C97839506C044E7046A758A2D479328969
// Body: [[102ff4c0, 102ff71a]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d1470 AutoScroll_get_speed_mD25D719F797FAE97AB8CB2B63496C881D1D51F57
// 102c1ff0 TMP_Offset_get_horizontal_m05407E9C4552DC57C8537C492F8411A018D67EDC
// 10661e30 RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2
// 10662d60 Rect_get_xMax_m174FFAACE6F19A59AA793B3D507BE70116E27DE5
// 10662d70 Rect_get_yMax_m9685BF55B44C51FF9BA080F9995073E458E1CDC3
// 1066e5e0 Transform_InverseTransformPoint_m476ABC8F3F14824D7D82FE2C54CEE5A151A669B8
// 10a0afd0 ShadowBaker_SetAngle_m5C36D66DB1DE079F87F08B9BB716C990FCEEB918
// 10a0b020 ShadowBaker_SetX_m53159ACC756F5463D7767555210A64434148D1B3
// 10a0b060 ShadowBaker_SetY_mEC8E2A9DC7FD72B394516DEF1C649B8FFB49F087
// 10a43d20 Mathf_InverseLerp_mCD2E6F9ADCFFB40EB7D3086E444DF2C702F9C29B
// 10a4a920 Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54

void __cdecl
SunButton_OnClick_m1E8D51C97839506C044E7046A758A2D479328969
          (SunButton_t215E5C834FF2974681639E044A8C9F4D225EAE67 *param_1,
          PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *param_2,
          SunSlider_t5377A5354C7D2E09BF671D1681C1B608D4007427 *param_3,MethodInfo *param_4)

{
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *pVVar1;
  SunSlider_t5377A5354C7D2E09BF671D1681C1B608D4007427 *pSVar2;
  UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *pUVar3;
  ShadowBaker_t6F06B45A35DED9505A63AA08A159E2BD749BD427 *pSVar4;
  WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *pWVar5;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar6;
  bool bVar7;
  Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *pRVar8;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar9;
  float fVar10;
  undefined1 local_30 [20];
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 local_1c;
  undefined4 local_14;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_10;

  if (DAT_1151c200 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    DAT_1151c200 = '\x01';
  }
  if (param_1->___bothContainer_13 != (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)0x0
     ) {
    pRVar8 = RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2
                       ((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(local_30 + 0x10),
                        param_1->___bothContainer_13,(MethodInfo *)0x0);
    local_30._0_4_ = pRVar8->___m_XMin_0;
    local_30._4_4_ = pRVar8->___m_YMin_1;
    local_30._8_4_ = pRVar8->___m_Width_2;
    local_30._12_4_ = pRVar8->___m_Height_3;
    if (param_2 != (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *)0x0) {
      pVVar1 = &param_2->___U3CpositionU3Ek__BackingField_13;
      local_1c = *pVVar1;
      local_14 = 0;
      if ((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)param_1->___bothContainer_13 !=
          (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
        VVar6.___z_4 = 0.0;
        VVar6.___x_2 = pVVar1->___x_0;
        VVar6.___y_3 = pVVar1->___y_1;
        pVVar9 = Transform_InverseTransformPoint_m476ABC8F3F14824D7D82FE2C54CEE5A151A669B8
                           (&local_10,
                            (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)
                            param_1->___bothContainer_13,VVar6,(MethodInfo *)0x0);
        local_1c.___x_0 = pVVar9->___x_2;
        local_1c.___y_1 = pVVar9->___y_3;
        local_10.___z_4 =
             TMP_Offset_get_horizontal_m05407E9C4552DC57C8537C492F8411A018D67EDC
                       ((TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 *)local_30,
                        (MethodInfo *)0x0);
        fVar10 = Rect_get_xMax_m174FFAACE6F19A59AA793B3D507BE70116E27DE5
                           ((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)local_30,
                            (MethodInfo *)0x0);
        fVar10 = Mathf_InverseLerp_mCD2E6F9ADCFFB40EB7D3086E444DF2C702F9C29B
                           (local_10.___z_4,fVar10,local_1c.___x_0,(MethodInfo *)0x0);
        local_1c.___x_0 = fVar10;
        local_10.___z_4 =
             AutoScroll_get_speed_mD25D719F797FAE97AB8CB2B63496C881D1D51F57
                       ((AutoScroll_t1A0CA51C495D2BC1005833EF85B60738D8D39D8A *)local_30,
                        (MethodInfo *)0x0);
        fVar10 = Rect_get_yMax_m9685BF55B44C51FF9BA080F9995073E458E1CDC3
                           ((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)local_30,
                            (MethodInfo *)0x0);
        local_1c.___y_1 =
             Mathf_InverseLerp_mCD2E6F9ADCFFB40EB7D3086E444DF2C702F9C29B
                       (local_10.___z_4,fVar10,local_1c.___y_1,(MethodInfo *)0x0);
        pSVar2 = param_1->___sliderX_14;
        if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0'
            ) && (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->
                  cctor_finished == 0)) {
          il2cpp_runtime_class_init
                    (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
        }
        bVar7 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54
                          ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)param_3,
                           (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pSVar2,
                           (MethodInfo *)0x0);
        if (bVar7) {
          if (((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0)
              && (pWVar5 = param_1->___master_4->___worldMaster_5,
                 pWVar5 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)) &&
             (pSVar4 = pWVar5->___shadowBaker_31,
             pSVar4 != (ShadowBaker_t6F06B45A35DED9505A63AA08A159E2BD749BD427 *)0x0)) {
            ShadowBaker_SetX_m53159ACC756F5463D7767555210A64434148D1B3
                      (pSVar4,local_1c.___x_0,(MethodInfo *)0x0);
            return;
          }
        }
        else {
          pSVar2 = param_1->___sliderY_15;
          if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor !=
               '\0') &&
             (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished
              == 0)) {
            il2cpp_runtime_class_init
                      (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
          }
          bVar7 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54
                            ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)param_3,
                             (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pSVar2,
                             (MethodInfo *)0x0);
          pUVar3 = param_1->___master_4;
          if (bVar7) {
            if (((pUVar3 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
                (pUVar3->___worldMaster_5 !=
                 (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)) &&
               (pSVar4 = pUVar3->___worldMaster_5->___shadowBaker_31,
               pSVar4 != (ShadowBaker_t6F06B45A35DED9505A63AA08A159E2BD749BD427 *)0x0)) {
              ShadowBaker_SetY_mEC8E2A9DC7FD72B394516DEF1C649B8FFB49F087
                        (pSVar4,local_1c.___y_1,(MethodInfo *)0x0);
              return;
            }
          }
          else if ((pUVar3 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
                  (pUVar3->___worldMaster_5 !=
                   (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)) {
            pSVar4 = pUVar3->___worldMaster_5->___shadowBaker_31;
            local_10.___y_3 = local_1c.___x_0;
            local_10.___z_4 = local_1c.___y_1;
            if (pSVar4 != (ShadowBaker_t6F06B45A35DED9505A63AA08A159E2BD749BD427 *)0x0) {
              ShadowBaker_SetAngle_m5C36D66DB1DE079F87F08B9BB716C990FCEEB918
                        (pSVar4,local_1c,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
