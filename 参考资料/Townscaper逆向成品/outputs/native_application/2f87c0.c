// RVA 0x2f87c0 | Placemaker.Ui.SimpleMessage$$ShowMessage
// PDB: SimpleMessage_ShowMessage_mCCB1CBC3AFB60B83A131A27D3AD7BD55B12789A7
// Body: [[102f87c0, 102f88f6]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 102e3fb0 TMP_Text_get_transform_m81019C9C243967EF69E113D8E2DC0C65275C9C0A
// 102f85f0 SimpleMessage_SetBackgroundColor_m3F99E0B54E1B7E4E203E7AB2C51E2B61488BB85E
// 103e9590 UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
// 10661ea0 RectTransform_get_sizeDelta_mCFAE8C916280C173AB79BE32B910376E310D1C50
// 106625b0 RectTransform_set_sizeDelta_m61943618442E31C6FF0556CDFC70940AE7AD04D0
// 1066ff00 Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC
// 10a36ea0 Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F

void __cdecl
SimpleMessage_ShowMessage_mCCB1CBC3AFB60B83A131A27D3AD7BD55B12789A7
          (SimpleMessage_t9F2B162AE3E95AE6F3559BBA44801038293C7A3A *param_1,String_t *param_2,
          float param_3,MethodInfo *param_4)

{
  TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 *pTVar1;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar2;
  RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *pRVar3;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar4;
  float local_c;
  float local_8;

  if (DAT_1151c18e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_il2cpp_TypeInfo_var)
    ;
    DAT_1151c18e = '\x01';
  }
  pTVar1 = param_1->___text_4;
  if (pTVar1 != (TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 *)0x0) {
    (**(code **)(pTVar1->_padding_ + 0x2cc))
              (pTVar1,param_2,*(undefined4 *)(pTVar1->_padding_ + 0x2d0));
    if (param_1->___openState_5 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
      UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
                (param_1->___openState_5,true,(MethodInfo *)0x0);
      Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32
                ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)param_1,true,
                 (MethodInfo *)0x0);
      param_1->___timer_6 = param_3;
      SimpleMessage_SetBackgroundColor_m3F99E0B54E1B7E4E203E7AB2C51E2B61488BB85E
                (param_1,param_1->___defaultColor_8,(MethodInfo *)0x0);
      if (param_1->___text_4 != (TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 *)0x0) {
        pTVar2 = TMP_Text_get_transform_m81019C9C243967EF69E113D8E2DC0C65275C9C0A
                           (param_1->___text_4,(MethodInfo *)0x0);
        if (pTVar2 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
          pRVar3 = (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)0x0;
          if (*(Il2CppClass **)pTVar2 ==
              RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_il2cpp_TypeInfo_var) {
            pRVar3 = (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)pTVar2;
          }
          if (pRVar3 != (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)0x0) {
            VVar4 = RectTransform_get_sizeDelta_mCFAE8C916280C173AB79BE32B910376E310D1C50
                              (pRVar3,(MethodInfo *)0x0);
            local_8 = VVar4.___y_1;
            VVar4.___y_1 = local_8 + __real_3f800000;
            VVar4.___x_0 = local_c + __real_3f800000;
            RectTransform_set_sizeDelta_m61943618442E31C6FF0556CDFC70940AE7AD04D0
                      (pRVar3,VVar4,(MethodInfo *)0x0);
            pTVar2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                               ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                                (MethodInfo *)0x0);
            if (pTVar2 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
              Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC
                        (pTVar2,param_1->___startPos_7,(MethodInfo *)0x0);
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
