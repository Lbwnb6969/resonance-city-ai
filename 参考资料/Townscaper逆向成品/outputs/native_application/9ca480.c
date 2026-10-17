// RVA 0x9ca480 | Placemaker.Ui.SoundButton.<>c__DisplayClass8_0$$<Placemaker.Ui.UiMaster.IUiSetup.OnSetup>b__0
// PDB: U3CU3Ec__DisplayClass8_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__0_m446FE7A1E5B4932339A717DCB1AA695BC19BE739
// Body: [[109ca480, 109ca87b]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 104c5370 DistanceFieldSettings_set_cutoff_mCCA6827FE1F9FF80FBEF75D31B1A0C7BB0F00F69
// 104c53c0 DistanceFieldSettings_set_fill_mDDC01D75567CBAB18C73055C4F52AA3BA8A3BE82
// 104c5410 DistanceFieldSettings_set_outline_mB211677067FD7474DDAA57978D86EEA201FE3940
// 1066f810 Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046
// 1066ffc0 Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A
// 108370e0 ExtraMath_SetZ_m5C7C96964B177950B9C7F71BB34774944E12FC7D
// 10a3aa50 Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a3dc10 GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86
// 10a43e90 Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616

void __cdecl
U3CU3Ec__DisplayClass8_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__0_m446FE7A1E5B4932339A717DCB1AA695BC19BE739
          (U3CU3Ec__DisplayClass8_0_tA679BCD3A12CB562D9F61334788E5D22912A406D *param_1,float param_2
          ,MethodInfo *param_3)

{
  DistanceFieldSettings_t32A1F46960279189113D2CB327EF91E0A25D1CC0 *pDVar1;
  DistanceFieldSettings_t32A1F46960279189113D2CB327EF91E0A25D1CC0 *pDVar2;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar3;
  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *pGVar4;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar5;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar6;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar7;
  float fVar8;
  float fVar9;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_18;
  undefined8 local_c;

  if (DAT_1151ff35 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
    DAT_1151ff35 = '\x01';
  }
  if (param_1->___U3CU3E4__this_0 != (SoundButton_t3A64E30E13D6F873DC4C0619867A0944C9AA7000 *)0x0) {
    pDVar1 = param_1->___U3CU3E4__this_0->___distanceField0_5;
    fVar8 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(0.6,0.0,param_2,(MethodInfo *)0x0);
    if (pDVar1 != (DistanceFieldSettings_t32A1F46960279189113D2CB327EF91E0A25D1CC0 *)0x0) {
      DistanceFieldSettings_set_cutoff_mCCA6827FE1F9FF80FBEF75D31B1A0C7BB0F00F69
                (pDVar1,fVar8,(MethodInfo *)0x0);
      if (param_1->___U3CU3E4__this_0 !=
          (SoundButton_t3A64E30E13D6F873DC4C0619867A0944C9AA7000 *)0x0) {
        pDVar1 = param_1->___U3CU3E4__this_0->___distanceField1_6;
        fVar8 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616
                          (0.0,0.6,param_2,(MethodInfo *)0x0);
        if (pDVar1 != (DistanceFieldSettings_t32A1F46960279189113D2CB327EF91E0A25D1CC0 *)0x0) {
          DistanceFieldSettings_set_cutoff_mCCA6827FE1F9FF80FBEF75D31B1A0C7BB0F00F69
                    (pDVar1,fVar8,(MethodInfo *)0x0);
          if (param_1->___U3CU3E4__this_0 !=
              (SoundButton_t3A64E30E13D6F873DC4C0619867A0944C9AA7000 *)0x0) {
            pDVar1 = param_1->___U3CU3E4__this_0->___distanceField0_5;
            fVar8 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616
                              (1.0,0.0,param_2,(MethodInfo *)0x0);
            if (pDVar1 != (DistanceFieldSettings_t32A1F46960279189113D2CB327EF91E0A25D1CC0 *)0x0) {
              DistanceFieldSettings_set_outline_mB211677067FD7474DDAA57978D86EEA201FE3940
                        (pDVar1,fVar8,(MethodInfo *)0x0);
              if (param_1->___U3CU3E4__this_0 !=
                  (SoundButton_t3A64E30E13D6F873DC4C0619867A0944C9AA7000 *)0x0) {
                pDVar1 = param_1->___U3CU3E4__this_0->___distanceField1_6;
                fVar8 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616
                                  (0.0,1.0,param_2,(MethodInfo *)0x0);
                if (pDVar1 != (DistanceFieldSettings_t32A1F46960279189113D2CB327EF91E0A25D1CC0 *)0x0
                   ) {
                  DistanceFieldSettings_set_outline_mB211677067FD7474DDAA57978D86EEA201FE3940
                            (pDVar1,fVar8,(MethodInfo *)0x0);
                  if ((param_1->___U3CU3E4__this_0 !=
                       (SoundButton_t3A64E30E13D6F873DC4C0619867A0944C9AA7000 *)0x0) &&
                     (pDVar1 = param_1->___U3CU3E4__this_0->___distanceField0_5,
                     pDVar1 != (DistanceFieldSettings_t32A1F46960279189113D2CB327EF91E0A25D1CC0 *)
                               0x0)) {
                    pGVar4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
                                       ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                        pDVar1,(MethodInfo *)0x0);
                    if (pGVar4 != (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0) {
                      GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86
                                (pGVar4,param_2 < __real_3f800000,(MethodInfo *)0x0);
                      if ((param_1->___U3CU3E4__this_0 !=
                           (SoundButton_t3A64E30E13D6F873DC4C0619867A0944C9AA7000 *)0x0) &&
                         (pDVar1 = param_1->___U3CU3E4__this_0->___distanceField1_6,
                         pDVar1 != (DistanceFieldSettings_t32A1F46960279189113D2CB327EF91E0A25D1CC0
                                    *)0x0)) {
                        pGVar4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
                                           ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                            pDVar1,(MethodInfo *)0x0);
                        if (pGVar4 != (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0) {
                          GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86
                                    (pGVar4,0.0 < param_2,(MethodInfo *)0x0);
                          if (param_1->___slider_1 !=
                              (Slider_tD8A2D42879D86E2025759D2A26C7F53F08A56B6D *)0x0) {
                            pTVar5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                               ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
                                                 *)param_1->___slider_1,(MethodInfo *)0x0);
                            if (param_1->___slider_1 !=
                                (Slider_tD8A2D42879D86E2025759D2A26C7F53F08A56B6D *)0x0) {
                              pTVar6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                                 ((
                                                  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
                                                  *)param_1->___slider_1,(MethodInfo *)0x0);
                              if (pTVar6 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)
                                            0x0) {
                                pVVar7 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046
                                                   (&local_18,pTVar6,(MethodInfo *)0x0);
                                local_c._0_4_ = pVVar7->___x_2;
                                local_c._4_4_ = pVVar7->___y_3;
                                fVar8 = pVVar7->___z_4;
                                fVar9 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616
                                                  (0.9,1.0,param_2,(MethodInfo *)0x0);
                                if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var
                                     ->has_cctor != '\0') &&
                                   (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var
                                    ->cctor_finished == 0)) {
                                  il2cpp_runtime_class_init
                                            (
                                            ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var
                                            );
                                }
                                VVar3.___z_4 = fVar8;
                                VVar3.___x_2 = (float)(undefined4)local_c;
                                VVar3.___y_3 = (float)local_c._4_4_;
                                pVVar7 = ExtraMath_SetZ_m5C7C96964B177950B9C7F71BB34774944E12FC7D
                                                   (&local_18,VVar3,fVar9,(MethodInfo *)0x0);
                                if (pTVar5 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *
                                              )0x0) {
                                  Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A
                                            (pTVar5,*pVVar7,(MethodInfo *)0x0);
                                  pDVar1 = param_1->___bg0_2;
                                  fVar8 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616
                                                    (0.7,1.0,param_2,(MethodInfo *)0x0);
                                  if (pDVar1 != (DistanceFieldSettings_t32A1F46960279189113D2CB327EF91E0A25D1CC0
                                                 *)0x0) {
                                    DistanceFieldSettings_set_fill_mDDC01D75567CBAB18C73055C4F52AA3BA8A3BE82
                                              (pDVar1,fVar8,(MethodInfo *)0x0);
                                    pDVar1 = param_1->___bg1_3;
                                    fVar8 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616
                                                      (0.3,0.6,param_2,(MethodInfo *)0x0);
                                    if (pDVar1 != (
                                                  DistanceFieldSettings_t32A1F46960279189113D2CB327EF91E0A25D1CC0
                                                  *)0x0) {
                                      DistanceFieldSettings_set_fill_mDDC01D75567CBAB18C73055C4F52AA3BA8A3BE82
                                                (pDVar1,fVar8,(MethodInfo *)0x0);
                                      pDVar1 = param_1->___bg0_2;
                                      pDVar2 = param_1->___bg1_3;
                                      fVar8 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616
                                                        (0.4,1.0,param_2,(MethodInfo *)0x0);
                                      if (pDVar2 != (
                                                  DistanceFieldSettings_t32A1F46960279189113D2CB327EF91E0A25D1CC0
                                                  *)0x0) {
                                        DistanceFieldSettings_set_outline_mB211677067FD7474DDAA57978D86EEA201FE3940
                                                  (pDVar2,fVar8,(MethodInfo *)0x0);
                                        if (pDVar1 != (
                                                  DistanceFieldSettings_t32A1F46960279189113D2CB327EF91E0A25D1CC0
                                                  *)0x0) {
                                          DistanceFieldSettings_set_outline_mB211677067FD7474DDAA57978D86EEA201FE3940
                                                    (pDVar1,fVar8,(MethodInfo *)0x0);
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
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
