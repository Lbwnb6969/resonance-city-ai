// RVA 0x2f9c20 | Placemaker.Ui.Slider$$UnityEngine.EventSystems.IDragHandler.OnDrag
// PDB: Slider_UnityEngine_EventSystems_IDragHandler_OnDrag_m357299C11B18CDAD95C4FBBE1A542197C3C47EBA
// Body: [[102f9c20, 102f9f58]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 102c1ff0 TMP_Offset_get_horizontal_m05407E9C4552DC57C8537C492F8411A018D67EDC
// 10328600 UnityEvent_1_Invoke_m1DA4CADD93DA296D31E00A263219A99A9E0AFB0E_gshared
// 10661a80 RectTransform_get_anchorMax_mC1577047A20870209C9A6801B75FE6930AE56F1E
// 10661af0 RectTransform_get_anchorMin_m5CBB2E649A3D4234A7A5A16B1BBAADAC9C033319
// 10661e30 RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2
// 10661fa0 RectTransform_set_anchorMax_m67E04F54B5122804E32019D5FAE50C21CC67651D
// 10662000 RectTransform_set_anchorMin_mD9E6E95890B701A5190C12F5AE42E622246AF798
// 10662d60 Rect_get_xMax_m174FFAACE6F19A59AA793B3D507BE70116E27DE5
// 1066e660 Transform_InverseTransformVector_mAE27324FC01E136CF80D1A414AC10BA7616024C4
// 10837060 ExtraMath_SetX_m402740C101C2BB68EED4AF98EBA0EF36C99963A2
// 10a43af0 Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87
// 10a43d20 Mathf_InverseLerp_mCD2E6F9ADCFFB40EB7D3086E444DF2C702F9C29B
// 10a43e90 Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616

void __cdecl
Slider_UnityEngine_EventSystems_IDragHandler_OnDrag_m357299C11B18CDAD95C4FBBE1A542197C3C47EBA
          (Slider_tD8A2D42879D86E2025759D2A26C7F53F08A56B6D *param_1,
          PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *param_2,MethodInfo *param_3)

{
  RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *pRVar1;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar2;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar3;
  Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *pRVar4;
  float fVar5;
  float fVar6;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar7;
  TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 local_4c;
  TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 local_3c;
  undefined1 local_2c [16];
  undefined8 local_1c;
  undefined4 local_14;
  RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *local_10;
  float local_c;
  float local_8;

  if (DAT_1151c1bd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       UnityEvent_1_Invoke_m1DA4CADD93DA296D31E00A263219A99A9E0AFB0E_RuntimeMethod_var
              );
    DAT_1151c1bd = '\x01';
  }
  if (param_2 != (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *)0x0) {
    fVar5 = (param_2->___U3CpositionU3Ek__BackingField_13).___x_0 -
            (param_2->___U3CpressPositionU3Ek__BackingField_15).___x_0;
    fVar6 = (param_2->___U3CpositionU3Ek__BackingField_13).___y_1 -
            (param_2->___U3CpressPositionU3Ek__BackingField_15).___y_1;
    local_1c = CONCAT44(fVar6,fVar5);
    local_14 = 0;
    if ((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)param_1->___sliderContainer_8 !=
        (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
      VVar2.___y_3 = fVar6;
      VVar2.___x_2 = fVar5;
      VVar2.___z_4 = 0.0;
      pVVar3 = Transform_InverseTransformVector_mAE27324FC01E136CF80D1A414AC10BA7616024C4
                         ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(local_2c + 4),
                          (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)
                          param_1->___sliderContainer_8,VVar2,(MethodInfo *)0x0);
      local_1c._0_4_ = pVVar3->___x_2;
      local_1c._4_4_ = pVVar3->___y_3;
      if (param_1->___sliderContainer_8 !=
          (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)0x0) {
        pRVar4 = RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2
                           ((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)local_2c,
                            param_1->___sliderContainer_8,(MethodInfo *)0x0);
        local_3c.___m_Left_0 = pRVar4->___m_XMin_0;
        local_3c.___m_Right_1 = pRVar4->___m_YMin_1;
        local_3c.___m_Top_2 = pRVar4->___m_Width_2;
        local_3c.___m_Bottom_3 = pRVar4->___m_Height_3;
        if (param_1->___sliderHandle_9 !=
            (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)0x0) {
          pRVar4 = RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2
                             ((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)local_2c,
                              param_1->___sliderHandle_9,(MethodInfo *)0x0);
          local_4c.___m_Left_0 = pRVar4->___m_XMin_0;
          local_4c.___m_Right_1 = pRVar4->___m_YMin_1;
          local_4c.___m_Top_2 = pRVar4->___m_Width_2;
          local_4c.___m_Bottom_3 = pRVar4->___m_Height_3;
          fVar5 = TMP_Offset_get_horizontal_m05407E9C4552DC57C8537C492F8411A018D67EDC
                            (&local_3c,(MethodInfo *)0x0);
          local_8 = TMP_Offset_get_horizontal_m05407E9C4552DC57C8537C492F8411A018D67EDC
                              (&local_4c,(MethodInfo *)0x0);
          local_8 = fVar5 - local_8;
          fVar5 = Rect_get_xMax_m174FFAACE6F19A59AA793B3D507BE70116E27DE5
                            ((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)&local_3c,
                             (MethodInfo *)0x0);
          fVar6 = Rect_get_xMax_m174FFAACE6F19A59AA793B3D507BE70116E27DE5
                            ((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)&local_4c,
                             (MethodInfo *)0x0);
          fVar5 = fVar5 - fVar6;
          fVar6 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616
                            (local_8,fVar5,param_1->___oldValue_12,(MethodInfo *)0x0);
          local_c = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87
                              (fVar6 + (float)local_1c,local_8,fVar5,(MethodInfo *)0x0);
          local_10 = (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)
                     TMP_Offset_get_horizontal_m05407E9C4552DC57C8537C492F8411A018D67EDC
                               (&local_3c,(MethodInfo *)0x0);
          fVar6 = Rect_get_xMax_m174FFAACE6F19A59AA793B3D507BE70116E27DE5
                            ((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)&local_3c,
                             (MethodInfo *)0x0);
          fVar6 = Mathf_InverseLerp_mCD2E6F9ADCFFB40EB7D3086E444DF2C702F9C29B
                            ((float)local_10,fVar6,local_c,(MethodInfo *)0x0);
          local_10 = param_1->___sliderBackground0_10;
          if (local_10 != (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)0x0) {
            VVar7 = RectTransform_get_anchorMax_mC1577047A20870209C9A6801B75FE6930AE56F1E
                              (local_10,(MethodInfo *)0x0);
            if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->has_cctor
                 != '\0') &&
               (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
                cctor_finished == 0)) {
              il2cpp_runtime_class_init
                        (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
            }
            VVar7 = ExtraMath_SetX_m402740C101C2BB68EED4AF98EBA0EF36C99963A2
                              (VVar7,fVar6,(MethodInfo *)0x0);
            RectTransform_set_anchorMax_m67E04F54B5122804E32019D5FAE50C21CC67651D
                      (local_10,VVar7,(MethodInfo *)0x0);
            pRVar1 = param_1->___sliderBackground1_11;
            if (pRVar1 != (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)0x0) {
              VVar7 = RectTransform_get_anchorMin_m5CBB2E649A3D4234A7A5A16B1BBAADAC9C033319
                                (pRVar1,(MethodInfo *)0x0);
              VVar7 = ExtraMath_SetX_m402740C101C2BB68EED4AF98EBA0EF36C99963A2
                                (VVar7,fVar6,(MethodInfo *)0x0);
              RectTransform_set_anchorMin_mD9E6E95890B701A5190C12F5AE42E622246AF798
                        (pRVar1,VVar7,(MethodInfo *)0x0);
              pRVar1 = param_1->___sliderHandle_9;
              if (pRVar1 != (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)0x0) {
                VVar7 = RectTransform_get_anchorMax_mC1577047A20870209C9A6801B75FE6930AE56F1E
                                  (pRVar1,(MethodInfo *)0x0);
                VVar7 = ExtraMath_SetX_m402740C101C2BB68EED4AF98EBA0EF36C99963A2
                                  (VVar7,fVar6,(MethodInfo *)0x0);
                RectTransform_set_anchorMax_m67E04F54B5122804E32019D5FAE50C21CC67651D
                          (pRVar1,VVar7,(MethodInfo *)0x0);
                pRVar1 = param_1->___sliderHandle_9;
                if (pRVar1 != (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)0x0) {
                  VVar7 = RectTransform_get_anchorMin_m5CBB2E649A3D4234A7A5A16B1BBAADAC9C033319
                                    (pRVar1,(MethodInfo *)0x0);
                  VVar7 = ExtraMath_SetX_m402740C101C2BB68EED4AF98EBA0EF36C99963A2
                                    (VVar7,fVar6,(MethodInfo *)0x0);
                  RectTransform_set_anchorMin_mD9E6E95890B701A5190C12F5AE42E622246AF798
                            (pRVar1,VVar7,(MethodInfo *)0x0);
                  fVar5 = Mathf_InverseLerp_mCD2E6F9ADCFFB40EB7D3086E444DF2C702F9C29B
                                    (local_8,fVar5,local_c,(MethodInfo *)0x0);
                  param_1->___newValue_13 = fVar5;
                  if ((UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC *)
                      param_1->___onValueChange_4 !=
                      (UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC *)0x0) {
                    UnityEvent_1_Invoke_m1DA4CADD93DA296D31E00A263219A99A9E0AFB0E_gshared
                              ((UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC *)
                               param_1->___onValueChange_4,fVar5,
                               UnityEvent_1_Invoke_m1DA4CADD93DA296D31E00A263219A99A9E0AFB0E_RuntimeMethod_var
                              );
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
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
