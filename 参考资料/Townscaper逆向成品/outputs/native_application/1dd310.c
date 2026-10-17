// RVA 0x1dd310 | Placemaker.Ui.SideMenu.<>c__DisplayClass17_0$$<Placemaker.Ui.UiMaster.IUiSetup.OnSetup>b__0
// PDB: U3CU3Ec__DisplayClass17_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__0_m073029061323A8E914B2D197D8D8A3B4C86DF6A3
// Body: [[101dd310, 101dd69c]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10661ba0 RectTransform_get_offsetMax_m27465B00CD222399CC8B3BB53A4A68CF342319C6
// 10661e30 RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2
// 10661ea0 RectTransform_get_sizeDelta_mCFAE8C916280C173AB79BE32B910376E310D1C50
// 106625b0 RectTransform_set_sizeDelta_m61943618442E31C6FF0556CDFC70940AE7AD04D0
// 10662d60 Rect_get_xMax_m174FFAACE6F19A59AA793B3D507BE70116E27DE5
// 10667850 Screen_get_safeArea_m47E3A61627ECEAC2336C1FBFBF67A6C7503569F5
// 10667890 Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C
// 1066e440 Transform_GetParent_mA53F6AE810935DDED00A9FEEE1830F4EF797F73B
// 1066f730 Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2
// 1066f8f0 Transform_get_lossyScale_m469A16F93F135C1E4D5955C7EBDB893D1892A331
// 1066ff00 Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC
// 10837030 ExtraMath_SetX_m2698FE33F0D90A0F524CBBD50D3928F7A38B97C6
// 10837060 ExtraMath_SetX_m402740C101C2BB68EED4AF98EBA0EF36C99963A2
// 1083e420 GameViewRect_set_right_mAE07A366FE52643C38D7D0ECA99A1E325AB00496
// 10a3aa50 Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a3dc10 GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86
// 10a43e90 Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
U3CU3Ec__DisplayClass17_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__0_m073029061323A8E914B2D197D8D8A3B4C86DF6A3
          (U3CU3Ec__DisplayClass17_0_t7007DC64C2A37C0828DA7D473B3E75A75BFC657C *param_1,
          MethodInfo *param_2)

{
  SideMenu_tD900EEBEF28F284D7567E3D721E0DA61C0F5D1DF *pSVar1;
  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *pCVar2;
  GameViewRect_t46BA7BAF98A4C179A873F7F4EC271EAEBF06B045 *pGVar3;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar4;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar5;
  Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *pRVar6;
  int iVar7;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar8;
  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *pGVar9;
  RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *pRVar10;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar11;
  float fVar12;
  Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 local_60;
  Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 local_50;
  undefined1 local_40 [16];
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_30;
  float local_24;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;

  if (DAT_1151b00a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_il2cpp_TypeInfo_var)
    ;
    DAT_1151b00a = '\x01';
  }
  pSVar1 = param_1->___U3CU3E4__this_0;
  if ((pSVar1 != (SideMenu_tD900EEBEF28F284D7567E3D721E0DA61C0F5D1DF *)0x0) &&
     (pSVar1->___openState_8 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0)) {
    fVar12 = pSVar1->___openState_8->____current_0;
    local_1c = __real_3f800000 - fVar12;
    if (pSVar1->___sideTransform_5 != (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)0x0
       ) {
      VVar11 = RectTransform_get_sizeDelta_mCFAE8C916280C173AB79BE32B910376E310D1C50
                         (pSVar1->___sideTransform_5,(MethodInfo *)0x0);
      local_24 = VVar11.___x_0;
      if ((param_1->___U3CU3E4__this_0 != (SideMenu_tD900EEBEF28F284D7567E3D721E0DA61C0F5D1DF *)0x0)
         && (pTVar5 = (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)
                      param_1->___U3CU3E4__this_0->___sideTransform_5,
            pTVar5 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) {
        pTVar5 = Transform_GetParent_mA53F6AE810935DDED00A9FEEE1830F4EF797F73B
                           (pTVar5,(MethodInfo *)0x0);
        if (pTVar5 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
          pRVar10 = (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)0x0;
          if (*(Il2CppClass **)pTVar5 ==
              RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_il2cpp_TypeInfo_var) {
            pRVar10 = (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)pTVar5;
          }
          if (pRVar10 != (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)0x0) {
            pRVar6 = RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2
                               ((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)local_40,pRVar10,
                                (MethodInfo *)0x0);
            local_50.___m_XMin_0 = pRVar6->___m_XMin_0;
            local_50.___m_YMin_1 = pRVar6->___m_YMin_1;
            local_50.___m_Width_2 = pRVar6->___m_Width_2;
            local_50.___m_Height_3 = pRVar6->___m_Height_3;
            iVar7 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C((MethodInfo *)0x0);
            pRVar6 = Screen_get_safeArea_m47E3A61627ECEAC2336C1FBFBF67A6C7503569F5
                               ((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)local_40,
                                (MethodInfo *)0x0);
            local_60.___m_XMin_0 = pRVar6->___m_XMin_0;
            local_60.___m_YMin_1 = pRVar6->___m_YMin_1;
            local_60.___m_Width_2 = pRVar6->___m_Width_2;
            local_60.___m_Height_3 = pRVar6->___m_Height_3;
            local_8 = Rect_get_xMax_m174FFAACE6F19A59AA793B3D507BE70116E27DE5
                                (&local_60,(MethodInfo *)0x0);
            local_c = (float)iVar7;
            local_8 = local_c - local_8;
            if (param_1->___U3CU3E4__this_0 !=
                (SideMenu_tD900EEBEF28F284D7567E3D721E0DA61C0F5D1DF *)0x0) {
              pTVar5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                 ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                  param_1->___U3CU3E4__this_0,(MethodInfo *)0x0);
              if (pTVar5 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
                pVVar8 = Transform_get_lossyScale_m469A16F93F135C1E4D5955C7EBDB893D1892A331
                                   (&local_30,pTVar5,(MethodInfo *)0x0);
                local_c = __real_3f800000 / pVVar8->___x_2;
                local_10 = Rect_get_xMax_m174FFAACE6F19A59AA793B3D507BE70116E27DE5
                                     (&local_50,(MethodInfo *)0x0);
                local_14 = Rect_get_xMax_m174FFAACE6F19A59AA793B3D507BE70116E27DE5
                                     (&local_50,(MethodInfo *)0x0);
                if ((param_1->___U3CU3E4__this_0 !=
                     (SideMenu_tD900EEBEF28F284D7567E3D721E0DA61C0F5D1DF *)0x0) &&
                   (pTVar5 = (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)
                             param_1->___U3CU3E4__this_0->___sideTransform_5,
                   pTVar5 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) {
                  pVVar8 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2
                                     ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)
                                      (local_40 + 4),pTVar5,(MethodInfo *)0x0);
                  local_30.___y_3 = pVVar8->___x_2;
                  local_30.___z_4 = pVVar8->___y_3;
                  local_18 = pVVar8->___z_4;
                  local_14 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616
                                       (local_24 + local_14 + local_c * local_8,local_10,fVar12,
                                        (MethodInfo *)0x0);
                  if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
                       has_cctor != '\0') &&
                     (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
                      cctor_finished == 0)) {
                    il2cpp_runtime_class_init
                              (
                              ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var
                              );
                  }
                  VVar4.___z_4 = local_18;
                  VVar4.___x_2 = local_30.___y_3;
                  VVar4.___y_3 = local_30.___z_4;
                  pVVar8 = ExtraMath_SetX_m2698FE33F0D90A0F524CBBD50D3928F7A38B97C6
                                     ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)
                                      (local_40 + 4),VVar4,local_14,(MethodInfo *)0x0);
                  Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC
                            (pTVar5,*pVVar8,(MethodInfo *)0x0);
                  if ((param_1->___U3CU3E4__this_0 !=
                       (SideMenu_tD900EEBEF28F284D7567E3D721E0DA61C0F5D1DF *)0x0) &&
                     (pCVar2 = (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                               param_1->___U3CU3E4__this_0->___sideCanvasGroup_13,
                     pCVar2 != (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0)) {
                    pGVar9 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
                                       (pCVar2,(MethodInfo *)0x0);
                    if (pGVar9 != (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0) {
                      GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86
                                (pGVar9,___real_00000000 < fVar12,(MethodInfo *)0x0);
                      if (param_1->___master_1 !=
                          (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) {
                        pGVar3 = param_1->___master_1->___gameViewRect_11;
                        fVar12 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616
                                           ((float)((uint)local_8 ^
                                                   __xmm_80000000800000008000000080000000) * local_c
                                            ,local_24,fVar12,(MethodInfo *)0x0);
                        if (param_1->___U3CU3E4__this_0 !=
                            (SideMenu_tD900EEBEF28F284D7567E3D721E0DA61C0F5D1DF *)0x0) {
                          pTVar5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                             ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *
                                              )param_1->___U3CU3E4__this_0,(MethodInfo *)0x0);
                          if (pTVar5 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)
                          {
                            pRVar10 = (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)0x0
                            ;
                            if (*(Il2CppClass **)pTVar5 ==
                                RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_il2cpp_TypeInfo_var
                               ) {
                              pRVar10 = (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)
                                        pTVar5;
                            }
                            if (pRVar10 !=
                                (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)0x0) {
                              VVar11 = RectTransform_get_offsetMax_m27465B00CD222399CC8B3BB53A4A68CF342319C6
                                                 (pRVar10,(MethodInfo *)0x0);
                              local_24 = VVar11.___x_0;
                              if (pGVar3 != (GameViewRect_t46BA7BAF98A4C179A873F7F4EC271EAEBF06B045
                                             *)0x0) {
                                GameViewRect_set_right_mAE07A366FE52643C38D7D0ECA99A1E325AB00496
                                          (pGVar3,fVar12 - local_24,(MethodInfo *)0x0);
                                if ((param_1->___U3CU3E4__this_0 !=
                                     (SideMenu_tD900EEBEF28F284D7567E3D721E0DA61C0F5D1DF *)0x0) &&
                                   (pRVar10 = param_1->___U3CU3E4__this_0->___iconNotch_6,
                                   pRVar10 !=
                                   (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)0x0))
                                {
                                  VVar11 = RectTransform_get_sizeDelta_mCFAE8C916280C173AB79BE32B910376E310D1C50
                                                     (pRVar10,(MethodInfo *)0x0);
                                  if (param_1->___U3CU3E4__this_0 !=
                                      (SideMenu_tD900EEBEF28F284D7567E3D721E0DA61C0F5D1DF *)0x0) {
                                    VVar11 = ExtraMath_SetX_m402740C101C2BB68EED4AF98EBA0EF36C99963A2
                                                       (VVar11,local_8 * local_1c * local_c +
                                                               param_1->___U3CU3E4__this_0->
                                                               ___iconNotchDefaultSize_19,
                                                        (MethodInfo *)0x0);
                                    RectTransform_set_sizeDelta_m61943618442E31C6FF0556CDFC70940AE7AD04D0
                                              (pRVar10,VVar11,(MethodInfo *)0x0);
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
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
