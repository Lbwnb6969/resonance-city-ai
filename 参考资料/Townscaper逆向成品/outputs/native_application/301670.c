// RVA 0x301670 | Placemaker.Ui.TextSaveButtons$$Button_CopyToClipboard
// PDB: TextSaveButtons_Button_CopyToClipboard_mF8E1FCF5427E60B142A38DE7A463211945861C01
// Body: [[10301670, 10301828]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 102e3fb0 TMP_Text_get_transform_m81019C9C243967EF69E113D8E2DC0C65275C9C0A
// 102f85f0 SimpleMessage_SetBackgroundColor_m3F99E0B54E1B7E4E203E7AB2C51E2B61488BB85E
// 103e9590 UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
// 103f7a90 WorldMaster_GetSaveString_mFFA10380F14E182DBD8BCD5E871B1F6EB441BD45
// 10661ea0 RectTransform_get_sizeDelta_mCFAE8C916280C173AB79BE32B910376E310D1C50
// 106625b0 RectTransform_set_sizeDelta_m61943618442E31C6FF0556CDFC70940AE7AD04D0
// 1066ff00 Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC
// 10a36ea0 Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10f02470 String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B
// 10f08b90 String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B
// 110e2aa0 GUIUtility_set_systemCopyBuffer_m1C5EAC38441C94C430AA13DF9942E1786CFCAC95

void __cdecl
TextSaveButtons_Button_CopyToClipboard_mF8E1FCF5427E60B142A38DE7A463211945861C01
          (TextSaveButtons_t9FE31FB1A9C1B1AF839ACDABD89B0FDCC449A463 *param_1,MethodInfo *param_2)

{
  WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *pWVar1;
  SimpleMessage_t9F2B162AE3E95AE6F3559BBA44801038293C7A3A *pSVar2;
  TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 *pTVar3;
  String_t *pSVar4;
  String_t *pSVar5;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar6;
  RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *pRVar7;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar8;
  float local_c;
  float local_8;

  if (DAT_1151c21c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralFFEF3DBE279EE1F92E1E2E46F45BC18EBBF55A1A);
    DAT_1151c21c = '\x01';
  }
  if ((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
     (pWVar1 = param_1->___master_4->___worldMaster_5,
     pWVar1 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)) {
    pSVar4 = WorldMaster_GetSaveString_mFFA10380F14E182DBD8BCD5E871B1F6EB441BD45
                       (pWVar1,(MethodInfo *)0x0);
    param_1->___lastSaveString_5 = pSVar4;
    if (pSVar4 != (String_t *)0x0) {
      pSVar5 = pSVar4;
      if (0x14 < pSVar4->___m_stringLength_0) {
        pSVar5 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B
                           (pSVar4,0,0x14,(MethodInfo *)0x0);
        pSVar5 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B
                           (pSVar5,_stringLiteralFFEF3DBE279EE1F92E1E2E46F45BC18EBBF55A1A,
                            (MethodInfo *)0x0);
      }
      pSVar2 = param_1->___copyMessage_6;
      if (pSVar2 != (SimpleMessage_t9F2B162AE3E95AE6F3559BBA44801038293C7A3A *)0x0) {
        if (DAT_1151c18e == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    ((uint *)&
                             RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_il2cpp_TypeInfo_var
                    );
          DAT_1151c18e = '\x01';
        }
        pTVar3 = pSVar2->___text_4;
        if (pTVar3 != (TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 *)0x0) {
          (**(code **)(pTVar3->_padding_ + 0x2cc))
                    (pTVar3,pSVar5,*(undefined4 *)(pTVar3->_padding_ + 0x2d0));
          if (pSVar2->___openState_5 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0
             ) {
            UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
                      (pSVar2->___openState_5,true,(MethodInfo *)0x0);
            Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32
                      ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)pSVar2,true,
                       (MethodInfo *)0x0);
            pSVar2->___timer_6 = 1.0;
            SimpleMessage_SetBackgroundColor_m3F99E0B54E1B7E4E203E7AB2C51E2B61488BB85E
                      (pSVar2,pSVar2->___defaultColor_8,(MethodInfo *)0x0);
            if (pSVar2->___text_4 != (TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 *)0x0) {
              pTVar6 = TMP_Text_get_transform_m81019C9C243967EF69E113D8E2DC0C65275C9C0A
                                 (pSVar2->___text_4,(MethodInfo *)0x0);
              if (pTVar6 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
                pRVar7 = (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)0x0;
                if (*(Il2CppClass **)pTVar6 ==
                    RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_il2cpp_TypeInfo_var) {
                  pRVar7 = (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)pTVar6;
                }
                if (pRVar7 != (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)0x0) {
                  VVar8 = RectTransform_get_sizeDelta_mCFAE8C916280C173AB79BE32B910376E310D1C50
                                    (pRVar7,(MethodInfo *)0x0);
                  local_8 = VVar8.___y_1;
                  VVar8.___y_1 = local_8 + __real_3f800000;
                  VVar8.___x_0 = local_c + __real_3f800000;
                  RectTransform_set_sizeDelta_m61943618442E31C6FF0556CDFC70940AE7AD04D0
                            (pRVar7,VVar8,(MethodInfo *)0x0);
                  pTVar6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                     ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pSVar2,
                                      (MethodInfo *)0x0);
                  if (pTVar6 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
                    Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC
                              (pTVar6,pSVar2->___startPos_7,(MethodInfo *)0x0);
                    GUIUtility_set_systemCopyBuffer_m1C5EAC38441C94C430AA13DF9942E1786CFCAC95
                              (pSVar4,(MethodInfo *)0x0);
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
