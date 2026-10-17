// RVA 0x2f8aa0 | Placemaker.Ui.SimpleMessage$$ShowTerm
// PDB: SimpleMessage_ShowTerm_m4A0E7F3B6B6068C801F050318E29C4EDBFD84790
// Body: [[102f8aa0, 102f8c3c]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 102e3fb0 TMP_Text_get_transform_m81019C9C243967EF69E113D8E2DC0C65275C9C0A
// 102f85f0 SimpleMessage_SetBackgroundColor_m3F99E0B54E1B7E4E203E7AB2C51E2B61488BB85E
// 103e9590 UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
// 1043f1d0 Component_GetComponentsInChildren_TisRuntimeObject_m1D678E828943F6A8613DC24926420EDA6EBFBF7E_gshared
// 10448940 GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared
// 105040e0 Localize_SetTerm_m1E79C9D83AC0C1C282115F6F1D3BE5C4035D6445
// 10661ea0 RectTransform_get_sizeDelta_mCFAE8C916280C173AB79BE32B910376E310D1C50
// 106625b0 RectTransform_set_sizeDelta_m61943618442E31C6FF0556CDFC70940AE7AD04D0
// 1066ff00 Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC
// 10a36ea0 Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32
// 10a3aa50 Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F

void __cdecl
SimpleMessage_ShowTerm_m4A0E7F3B6B6068C801F050318E29C4EDBFD84790
          (SimpleMessage_t9F2B162AE3E95AE6F3559BBA44801038293C7A3A *param_1,String_t *param_2,
          float param_3,MethodInfo *param_4)

{
  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE *pOVar1;
  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *pGVar2;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar3;
  RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *pRVar4;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar5;
  float local_10;
  float local_c;
  Localize_t7BFA4E2A8B445A9E2F49DEA4F4C1D5399C42E088 *local_8;

  if (DAT_1151c18f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_TryGetComponent_TisLocalize_t7BFA4E2A8B445A9E2F49DEA4F4C1D5399C42E088_mE6A00B7D9943AA4D3DA63868EDB4E05A999B0CCD_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       GameObject_AddComponent_TisLocalize_t7BFA4E2A8B445A9E2F49DEA4F4C1D5399C42E088_mE69E9D356734E9A8EF0ABE73E610CB99F732B636_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_il2cpp_TypeInfo_var)
    ;
    DAT_1151c18f = '\x01';
  }
  local_8 = (Localize_t7BFA4E2A8B445A9E2F49DEA4F4C1D5399C42E088 *)0x0;
  if (param_1->___text_4 != (TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 *)0x0) {
    pOVar1 = Component_GetComponentsInChildren_TisRuntimeObject_m1D678E828943F6A8613DC24926420EDA6EBFBF7E_gshared
                       ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1->___text_4,
                        true,
                        Component_TryGetComponent_TisLocalize_t7BFA4E2A8B445A9E2F49DEA4F4C1D5399C42E088_mE6A00B7D9943AA4D3DA63868EDB4E05A999B0CCD_RuntimeMethod_var
                       );
    if ((char)pOVar1 == '\0') {
      if ((param_1->___text_4 == (TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 *)0x0) ||
         (pGVar2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
                             ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                              param_1->___text_4,(MethodInfo *)0x0),
         pGVar2 == (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0)) goto LAB_102f8c38;
      local_8 = (Localize_t7BFA4E2A8B445A9E2F49DEA4F4C1D5399C42E088 *)
                GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared
                          (pGVar2,
                           GameObject_AddComponent_TisLocalize_t7BFA4E2A8B445A9E2F49DEA4F4C1D5399C42E088_mE69E9D356734E9A8EF0ABE73E610CB99F732B636_RuntimeMethod_var
                          );
    }
    if (local_8 != (Localize_t7BFA4E2A8B445A9E2F49DEA4F4C1D5399C42E088 *)0x0) {
      Localize_SetTerm_m1E79C9D83AC0C1C282115F6F1D3BE5C4035D6445(local_8,param_2,(MethodInfo *)0x0);
      if (param_1->___openState_5 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
        UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
                  (param_1->___openState_5,true,(MethodInfo *)0x0);
        Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32
                  ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)param_1,true,
                   (MethodInfo *)0x0);
        param_1->___timer_6 = param_3;
        SimpleMessage_SetBackgroundColor_m3F99E0B54E1B7E4E203E7AB2C51E2B61488BB85E
                  (param_1,param_1->___defaultColor_8,(MethodInfo *)0x0);
        if ((param_1->___text_4 != (TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 *)0x0) &&
           (pTVar3 = TMP_Text_get_transform_m81019C9C243967EF69E113D8E2DC0C65275C9C0A
                               (param_1->___text_4,(MethodInfo *)0x0),
           pTVar3 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) {
          pRVar4 = (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)0x0;
          if (*(Il2CppClass **)pTVar3 ==
              RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_il2cpp_TypeInfo_var) {
            pRVar4 = (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)pTVar3;
          }
          if (pRVar4 != (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)0x0) {
            VVar5 = RectTransform_get_sizeDelta_mCFAE8C916280C173AB79BE32B910376E310D1C50
                              (pRVar4,(MethodInfo *)0x0);
            local_c = VVar5.___y_1;
            VVar5.___y_1 = local_c + __real_3f800000;
            VVar5.___x_0 = local_10 + __real_3f800000;
            RectTransform_set_sizeDelta_m61943618442E31C6FF0556CDFC70940AE7AD04D0
                      (pRVar4,VVar5,(MethodInfo *)0x0);
            pTVar3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                               ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                                (MethodInfo *)0x0);
            if (pTVar3 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
              Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC
                        (pTVar3,param_1->___startPos_7,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
LAB_102f8c38:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
