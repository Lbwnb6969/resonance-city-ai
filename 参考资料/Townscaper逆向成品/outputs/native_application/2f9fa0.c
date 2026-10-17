// RVA 0x2f9fa0 | Placemaker.Ui.Slider$$UnityEngine.EventSystems.IPointerClickHandler.OnPointerClick
// PDB: Slider_UnityEngine_EventSystems_IPointerClickHandler_OnPointerClick_m7FECC7B81C38097275AE9BC7E4CAA2CEB9360C52
// Body: [[102f9fa0, 102fa32a]]
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
// 1066e5e0 Transform_InverseTransformPoint_m476ABC8F3F14824D7D82FE2C54CEE5A151A669B8
// 10837060 ExtraMath_SetX_m402740C101C2BB68EED4AF98EBA0EF36C99963A2
// 10a3cbf0 Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8
// 10a43af0 Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87
// 10a43d20 Mathf_InverseLerp_mCD2E6F9ADCFFB40EB7D3086E444DF2C702F9C29B
// 10c11740 Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010
// 10f02470 String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B

void __cdecl
Slider_UnityEngine_EventSystems_IPointerClickHandler_OnPointerClick_m7FECC7B81C38097275AE9BC7E4CAA2CEB9360C52
          (Slider_tD8A2D42879D86E2025759D2A26C7F53F08A56B6D *param_1,
          PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *param_2,MethodInfo *param_3)

{
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *pVVar1;
  RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *pRVar2;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar3;
  char cVar4;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar5;
  Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *pRVar6;
  String_t *pSVar7;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar8;
  float fVar9;
  TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 local_44;
  TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 local_34;
  undefined1 local_24 [8];
  float fStack_1c;
  float local_18;
  RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *local_14;
  float local_10;
  float local_c;
  float local_8;

  if (DAT_1151c1bc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       UnityEvent_1_Invoke_m1DA4CADD93DA296D31E00A263219A99A9E0AFB0E_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral48816CBDF8F13E35408CBC9DB260DCB66EDF7FD4);
    DAT_1151c1bc = '\x01';
  }
  if (param_2 != (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *)0x0) {
    cVar4 = (**(code **)(param_2->_padding_ + 0xec))
                      (param_2,*(undefined4 *)(param_2->_padding_ + 0xf0));
    if ((cVar4 != '\0') || (param_1->___dragging_7 != false)) {
      return;
    }
    (**(code **)(param_2->_padding_ + 0xe4))(param_2,*(undefined4 *)(param_2->_padding_ + 0xe8));
    pVVar1 = &param_2->___U3CpositionU3Ek__BackingField_13;
    local_24._4_4_ = pVVar1->___x_0;
    fStack_1c = (param_2->___U3CpositionU3Ek__BackingField_13).___y_1;
    local_18 = 0.0;
    if ((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)param_1->___sliderContainer_8 !=
        (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
      VVar3.___z_4 = 0.0;
      VVar3.___x_2 = pVVar1->___x_0;
      VVar3.___y_3 = pVVar1->___y_1;
      pVVar5 = Transform_InverseTransformPoint_m476ABC8F3F14824D7D82FE2C54CEE5A151A669B8
                         ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(local_24 + 4),
                          (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)
                          param_1->___sliderContainer_8,VVar3,(MethodInfo *)0x0);
      local_8 = pVVar5->___x_2;
      if (param_1->___sliderContainer_8 !=
          (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)0x0) {
        pRVar6 = RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2
                           ((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)local_24,
                            param_1->___sliderContainer_8,(MethodInfo *)0x0);
        local_34.___m_Left_0 = pRVar6->___m_XMin_0;
        local_34.___m_Right_1 = pRVar6->___m_YMin_1;
        local_34.___m_Top_2 = pRVar6->___m_Width_2;
        local_34.___m_Bottom_3 = pRVar6->___m_Height_3;
        if (param_1->___sliderHandle_9 !=
            (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)0x0) {
          pRVar6 = RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2
                             ((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)local_24,
                              param_1->___sliderHandle_9,(MethodInfo *)0x0);
          local_44.___m_Left_0 = pRVar6->___m_XMin_0;
          local_44.___m_Right_1 = pRVar6->___m_YMin_1;
          local_44.___m_Top_2 = pRVar6->___m_Width_2;
          local_44.___m_Bottom_3 = pRVar6->___m_Height_3;
          fVar9 = TMP_Offset_get_horizontal_m05407E9C4552DC57C8537C492F8411A018D67EDC
                            (&local_34,(MethodInfo *)0x0);
          local_10 = TMP_Offset_get_horizontal_m05407E9C4552DC57C8537C492F8411A018D67EDC
                               (&local_44,(MethodInfo *)0x0);
          local_10 = fVar9 - local_10;
          fVar9 = Rect_get_xMax_m174FFAACE6F19A59AA793B3D507BE70116E27DE5
                            ((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)&local_34,
                             (MethodInfo *)0x0);
          local_c = Rect_get_xMax_m174FFAACE6F19A59AA793B3D507BE70116E27DE5
                              ((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)&local_44,
                               (MethodInfo *)0x0);
          local_c = fVar9 - local_c;
          local_8 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87
                              (local_8,local_10,local_c,(MethodInfo *)0x0);
          local_14 = (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)
                     TMP_Offset_get_horizontal_m05407E9C4552DC57C8537C492F8411A018D67EDC
                               (&local_34,(MethodInfo *)0x0);
          fVar9 = Rect_get_xMax_m174FFAACE6F19A59AA793B3D507BE70116E27DE5
                            ((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)&local_34,
                             (MethodInfo *)0x0);
          fVar9 = Mathf_InverseLerp_mCD2E6F9ADCFFB40EB7D3086E444DF2C702F9C29B
                            ((float)local_14,fVar9,local_8,(MethodInfo *)0x0);
          local_14 = param_1->___sliderBackground0_10;
          if (local_14 != (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)0x0) {
            VVar8 = RectTransform_get_anchorMax_mC1577047A20870209C9A6801B75FE6930AE56F1E
                              (local_14,(MethodInfo *)0x0);
            if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->has_cctor
                 != '\0') &&
               (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
                cctor_finished == 0)) {
              il2cpp_runtime_class_init
                        (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
            }
            VVar8 = ExtraMath_SetX_m402740C101C2BB68EED4AF98EBA0EF36C99963A2
                              (VVar8,fVar9,(MethodInfo *)0x0);
            RectTransform_set_anchorMax_m67E04F54B5122804E32019D5FAE50C21CC67651D
                      (local_14,VVar8,(MethodInfo *)0x0);
            pRVar2 = param_1->___sliderBackground1_11;
            if (pRVar2 != (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)0x0) {
              VVar8 = RectTransform_get_anchorMin_m5CBB2E649A3D4234A7A5A16B1BBAADAC9C033319
                                (pRVar2,(MethodInfo *)0x0);
              VVar8 = ExtraMath_SetX_m402740C101C2BB68EED4AF98EBA0EF36C99963A2
                                (VVar8,fVar9,(MethodInfo *)0x0);
              RectTransform_set_anchorMin_mD9E6E95890B701A5190C12F5AE42E622246AF798
                        (pRVar2,VVar8,(MethodInfo *)0x0);
              pRVar2 = param_1->___sliderHandle_9;
              if (pRVar2 != (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)0x0) {
                VVar8 = RectTransform_get_anchorMax_mC1577047A20870209C9A6801B75FE6930AE56F1E
                                  (pRVar2,(MethodInfo *)0x0);
                VVar8 = ExtraMath_SetX_m402740C101C2BB68EED4AF98EBA0EF36C99963A2
                                  (VVar8,fVar9,(MethodInfo *)0x0);
                RectTransform_set_anchorMax_m67E04F54B5122804E32019D5FAE50C21CC67651D
                          (pRVar2,VVar8,(MethodInfo *)0x0);
                pRVar2 = param_1->___sliderHandle_9;
                if (pRVar2 != (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)0x0) {
                  VVar8 = RectTransform_get_anchorMin_m5CBB2E649A3D4234A7A5A16B1BBAADAC9C033319
                                    (pRVar2,(MethodInfo *)0x0);
                  VVar8 = ExtraMath_SetX_m402740C101C2BB68EED4AF98EBA0EF36C99963A2
                                    (VVar8,fVar9,(MethodInfo *)0x0);
                  RectTransform_set_anchorMin_mD9E6E95890B701A5190C12F5AE42E622246AF798
                            (pRVar2,VVar8,(MethodInfo *)0x0);
                  fVar9 = Mathf_InverseLerp_mCD2E6F9ADCFFB40EB7D3086E444DF2C702F9C29B
                                    (local_10,local_c,local_8,(MethodInfo *)0x0);
                  param_1->___newValue_13 = fVar9;
                  param_1->___oldValue_12 = fVar9;
                  if ((UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC *)
                      param_1->___onValueChange_4 !=
                      (UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC *)0x0) {
                    UnityEvent_1_Invoke_m1DA4CADD93DA296D31E00A263219A99A9E0AFB0E_gshared
                              ((UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC *)
                               param_1->___onValueChange_4,fVar9,
                               UnityEvent_1_Invoke_m1DA4CADD93DA296D31E00A263219A99A9E0AFB0E_RuntimeMethod_var
                              );
                    pSVar7 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010
                                       (&param_1->___newValue_13,(MethodInfo *)0x0);
                    pSVar7 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B
                                       (_stringLiteral48816CBDF8F13E35408CBC9DB260DCB66EDF7FD4,
                                        pSVar7,(MethodInfo *)0x0);
                    if ((Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->
                         has_cctor != '\0') &&
                       (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->
                        cctor_finished == 0)) {
                      il2cpp_runtime_class_init
                                (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var
                                );
                    }
                    Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8
                              ((Il2CppObject *)pSVar7,(MethodInfo *)0x0);
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
