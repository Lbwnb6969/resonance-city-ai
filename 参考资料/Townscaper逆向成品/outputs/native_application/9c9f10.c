// RVA 0x9c9f10 | Placemaker.Ui.SunButtonGamepad.<>c__DisplayClass7_0$$<Placemaker.Ui.UiMaster.IUiSetup.OnSetup>b__0
// PDB: U3CU3Ec__DisplayClass7_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__0_mA55E110FB1F481F9E2738522F3E2740B8AF18497
// Body: [[109c9f10, 109ca2b1]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1066f730 Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2
// 1066f810 Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046
// 1066ff00 Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC
// 1066ffc0 Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A
// 10674490 Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB
// 10836f90 ExtraMath_SetA_m5B95B685E9833790822EFD1B8FC45910FB071830
// 10837030 ExtraMath_SetX_m2698FE33F0D90A0F524CBBD50D3928F7A38B97C6
// 108370e0 ExtraMath_SetZ_m5C7C96964B177950B9C7F71BB34774944E12FC7D
// 10a36ea0 Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a43ab0 Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C
// 10a43e90 Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
U3CU3Ec__DisplayClass7_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__0_mA55E110FB1F481F9E2738522F3E2740B8AF18497
          (U3CU3Ec__DisplayClass7_0_tE1B7E85DE1C82BBCE84EA5F9E435D6B8201357E1 *param_1,float param_2
          ,MethodInfo *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 *pGVar5;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar6;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar7;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar8;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar9;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar10;
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *pCVar11;
  float fVar12;
  float fVar13;
  undefined1 local_20 [8];
  float fStack_18;
  float local_14;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_10;

  if (DAT_1151ff4a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
    DAT_1151ff4a = '\x01';
  }
  if (param_1->___U3CU3E4__this_0 !=
      (SunButtonGamepad_tCDC81D6FE61C37B5713FFE96C01FD96152CAFE07 *)0x0) {
    pTVar9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                       ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                        param_1->___U3CU3E4__this_0,(MethodInfo *)0x0);
    pVVar10 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB
                        ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(local_20 + 4),
                         (MethodInfo *)0x0);
    uVar1 = pVVar10->___x_2;
    uVar3 = pVVar10->___y_3;
    local_10.___z_4 = pVVar10->___z_4;
    local_10.___x_2 = (float)uVar1;
    local_10.___y_3 = (float)uVar3;
    fVar12 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(param_2,(MethodInfo *)0x0);
    local_20._4_4_ = (__real_3f828f5c - local_10.___x_2) * fVar12 + local_10.___x_2;
    fStack_18 = (__real_3f828f5c - local_10.___y_3) * fVar12 + local_10.___y_3;
    local_14 = (__real_40400000 - local_10.___z_4) * fVar12 + local_10.___z_4;
    if (pTVar9 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
      VVar7.___y_3 = fStack_18;
      VVar7.___x_2 = (float)local_20._4_4_;
      VVar7.___z_4 = local_14;
      Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A
                (pTVar9,VVar7,(MethodInfo *)0x0);
      if ((param_1->___U3CU3E4__this_0 !=
           (SunButtonGamepad_tCDC81D6FE61C37B5713FFE96C01FD96152CAFE07 *)0x0) &&
         (pTVar9 = param_1->___U3CU3E4__this_0->___sideMenuTransform_6,
         pTVar9 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) {
        pVVar10 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046
                            ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(local_20 + 4),
                             pTVar9,(MethodInfo *)0x0);
        uVar2 = pVVar10->___x_2;
        uVar4 = pVVar10->___y_3;
        fVar12 = pVVar10->___z_4;
        local_10.___y_3 = (float)uVar2;
        local_10.___z_4 = (float)uVar4;
        fVar13 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616
                           (1.0,3.0,param_2,(MethodInfo *)0x0);
        if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->has_cctor !=
             '\0') &&
           (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->cctor_finished
            == 0)) {
          il2cpp_runtime_class_init
                    (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
        }
        VVar6.___y_3 = local_10.___z_4;
        VVar6.___x_2 = local_10.___y_3;
        VVar6.___z_4 = fVar12;
        pVVar10 = ExtraMath_SetZ_m5C7C96964B177950B9C7F71BB34774944E12FC7D
                            ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(local_20 + 4),
                             VVar6,__real_3f800000 / fVar13,(MethodInfo *)0x0);
        Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A
                  (pTVar9,*pVVar10,(MethodInfo *)0x0);
        if ((param_1->___U3CU3E4__this_0 !=
             (SunButtonGamepad_tCDC81D6FE61C37B5713FFE96C01FD96152CAFE07 *)0x0) &&
           (pTVar9 = param_1->___U3CU3E4__this_0->___translateTransform_7,
           pTVar9 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) {
          pVVar10 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2
                              ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(local_20 + 4),
                               pTVar9,(MethodInfo *)0x0);
          pVVar10 = ExtraMath_SetX_m2698FE33F0D90A0F524CBBD50D3928F7A38B97C6
                              ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(local_20 + 4),
                               *pVVar10,param_2 * ___real_c2200000,(MethodInfo *)0x0);
          Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC
                    (pTVar9,*pVVar10,(MethodInfo *)0x0);
          if ((param_1->___U3CU3E4__this_0 !=
               (SunButtonGamepad_tCDC81D6FE61C37B5713FFE96C01FD96152CAFE07 *)0x0) &&
             (pGVar5 = param_1->___U3CU3E4__this_0->___selector_8,
             pGVar5 != (Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 *)0x0)) {
            pCVar11 = (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *)
                      (**(code **)(pGVar5->_padding_ + 0x16c))
                                (local_20,pGVar5,*(undefined4 *)(pGVar5->_padding_ + 0x170));
            pCVar11 = ExtraMath_SetA_m5B95B685E9833790822EFD1B8FC45910FB071830
                                ((Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *)local_20,
                                 *pCVar11,param_2,(MethodInfo *)0x0);
            (**(code **)(pGVar5->_padding_ + 0x174))
                      (pGVar5,pCVar11->___r_0,pCVar11->___g_1,pCVar11->___b_2,pCVar11->___a_3,
                       *(undefined4 *)(pGVar5->_padding_ + 0x178));
            if ((param_1->___U3CU3E4__this_0 !=
                 (SunButtonGamepad_tCDC81D6FE61C37B5713FFE96C01FD96152CAFE07 *)0x0) &&
               (pGVar5 = param_1->___U3CU3E4__this_0->___selector_8,
               pGVar5 != (Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 *)0x0)) {
              pTVar9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                 ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pGVar5,
                                  (MethodInfo *)0x0);
              pVVar10 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB
                                  (&local_10,(MethodInfo *)0x0);
              local_20._4_4_ = pVVar10->___x_2;
              fStack_18 = pVVar10->___y_3;
              local_14 = pVVar10->___z_4;
              fVar12 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C
                                 (param_2,(MethodInfo *)0x0);
              local_10.___x_2 = ((float)local_20._4_4_ - __real_3f666666) * fVar12 + __real_3f666666
              ;
              local_10.___y_3 = (fStack_18 - __real_3f666666) * fVar12 + __real_3f666666;
              local_10.___z_4 = (local_14 - __real_3f800000) * fVar12 + __real_3f800000;
              if (pTVar9 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
                VVar8.___y_3 = local_10.___y_3;
                VVar8.___x_2 = local_10.___x_2;
                VVar8.___z_4 = local_10.___z_4;
                Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A
                          (pTVar9,VVar8,(MethodInfo *)0x0);
                if ((param_1->___U3CU3E4__this_0 !=
                     (SunButtonGamepad_tCDC81D6FE61C37B5713FFE96C01FD96152CAFE07 *)0x0) &&
                   (pGVar5 = param_1->___U3CU3E4__this_0->___selector_8,
                   pGVar5 != (Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 *)0x0)) {
                  Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32
                            ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)pGVar5,
                             ___real_00000000 < param_2,(MethodInfo *)0x0);
                  return;
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
