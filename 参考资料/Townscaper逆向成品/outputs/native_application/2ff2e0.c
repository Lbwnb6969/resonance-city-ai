// RVA 0x2ff2e0 | Placemaker.Ui.SunButton$$OnBeginDrag
// PDB: SunButton_OnBeginDrag_m4BF4735C615BEE88FD3805272DB95E3C7E315987
// Body: [[102ff2e0, 102ff4b2]]
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
// 1066f960 Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
// 10a43d20 Mathf_InverseLerp_mCD2E6F9ADCFFB40EB7D3086E444DF2C702F9C29B
// 10a4a920 Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54

void __cdecl
SunButton_OnBeginDrag_m4BF4735C615BEE88FD3805272DB95E3C7E315987
          (SunButton_t215E5C834FF2974681639E044A8C9F4D225EAE67 *param_1,
          PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *param_2,
          SunSlider_t5377A5354C7D2E09BF671D1681C1B608D4007427 *param_3,MethodInfo *param_4)

{
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar1;
  SunSlider_t5377A5354C7D2E09BF671D1681C1B608D4007427 *pSVar2;
  bool bVar3;
  Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *pRVar4;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar5;
  float fVar6;
  undefined1 local_34 [20];
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_20;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_14;
  float local_8;

  if (DAT_1151c201 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    DAT_1151c201 = '\x01';
  }
  if (param_1->___bothContainer_13 != (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)0x0
     ) {
    pRVar4 = RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2
                       ((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(local_34 + 0x10),
                        param_1->___bothContainer_13,(MethodInfo *)0x0);
    pTVar1 = (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)param_1->___bothContainer_13;
    local_34._0_4_ = pRVar4->___m_XMin_0;
    local_34._4_4_ = pRVar4->___m_YMin_1;
    local_34._8_4_ = pRVar4->___m_Width_2;
    local_34._12_4_ = pRVar4->___m_Height_3;
    if ((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)param_1->___handleBoth_8 !=
        (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
      pVVar5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                         (&local_14,
                          (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)
                          param_1->___handleBoth_8,(MethodInfo *)0x0);
      if (pTVar1 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
        pVVar5 = Transform_InverseTransformPoint_m476ABC8F3F14824D7D82FE2C54CEE5A151A669B8
                           (&local_20,pTVar1,*pVVar5,(MethodInfo *)0x0);
        local_14.___x_2 = pVVar5->___x_2;
        local_14.___y_3 = pVVar5->___y_3;
        local_8 = TMP_Offset_get_horizontal_m05407E9C4552DC57C8537C492F8411A018D67EDC
                            ((TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 *)local_34,
                             (MethodInfo *)0x0);
        fVar6 = Rect_get_xMax_m174FFAACE6F19A59AA793B3D507BE70116E27DE5
                          ((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)local_34,
                           (MethodInfo *)0x0);
        fVar6 = Mathf_InverseLerp_mCD2E6F9ADCFFB40EB7D3086E444DF2C702F9C29B
                          (local_8,fVar6,local_14.___x_2,(MethodInfo *)0x0);
        local_14.___x_2 = fVar6;
        local_8 = AutoScroll_get_speed_mD25D719F797FAE97AB8CB2B63496C881D1D51F57
                            ((AutoScroll_t1A0CA51C495D2BC1005833EF85B60738D8D39D8A *)local_34,
                             (MethodInfo *)0x0);
        fVar6 = Rect_get_yMax_m9685BF55B44C51FF9BA080F9995073E458E1CDC3
                          ((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)local_34,
                           (MethodInfo *)0x0);
        local_14.___y_3 =
             Mathf_InverseLerp_mCD2E6F9ADCFFB40EB7D3086E444DF2C702F9C29B
                       (local_8,fVar6,local_14.___y_3,(MethodInfo *)0x0);
        pSVar2 = param_1->___sliderY_15;
        if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0'
            ) && (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->
                  cctor_finished == 0)) {
          il2cpp_runtime_class_init
                    (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
        }
        bVar3 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54
                          ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)param_3,
                           (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pSVar2,
                           (MethodInfo *)0x0);
        if (bVar3) {
          fVar6 = (param_1->___current_17).___x_0;
        }
        else {
          fVar6 = local_14.___x_2;
        }
        (param_1->___start_18).___x_0 = fVar6;
        pSVar2 = param_1->___sliderX_14;
        if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0'
            ) && (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->
                  cctor_finished == 0)) {
          il2cpp_runtime_class_init
                    (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
        }
        bVar3 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54
                          ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)param_3,
                           (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pSVar2,
                           (MethodInfo *)0x0);
        if (bVar3) {
          (param_1->___start_18).___y_1 = (param_1->___current_17).___y_1;
          param_1->___currentSlider_24 = param_3;
          return;
        }
        (param_1->___start_18).___y_1 = local_14.___y_3;
        param_1->___currentSlider_24 = param_3;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
