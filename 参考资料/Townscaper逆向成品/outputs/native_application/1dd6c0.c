// RVA 0x1dd6c0 | Placemaker.Ui.SideMenu.<>c__DisplayClass17_0$$<Placemaker.Ui.UiMaster.IUiSetup.OnSetup>b__2
// PDB: U3CU3Ec__DisplayClass17_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__2_m7B900A3B12E20AD6BFDE5703CB38784DDD420113
// Body: [[101dd6c0, 101ddb22]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1065f5a0 Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3
// 1066f810 Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046
// 1066ffc0 Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A
// 10670140 Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4
// 10836f90 ExtraMath_SetA_m5B95B685E9833790822EFD1B8FC45910FB071830
// 10a3aa50 Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a3dc10 GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86
// 10a43e90 Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616

void __cdecl
U3CU3Ec__DisplayClass17_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__2_m7B900A3B12E20AD6BFDE5703CB38784DDD420113
          (U3CU3Ec__DisplayClass17_0_t7007DC64C2A37C0828DA7D473B3E75A75BFC657C *param_1,
          float param_2,MethodInfo *param_3)

{
  Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 *pGVar1;
  SideMenu_tD900EEBEF28F284D7567E3D721E0DA61C0F5D1DF *pSVar2;
  Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 *pGVar3;
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 CVar4;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 QVar5;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar6;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar7;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar8;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar9;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar10;
  float *pfVar11;
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *pCVar12;
  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *pGVar13;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *pQVar14;
  float fVar15;
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 local_30;
  undefined1 local_20 [8];
  float fStack_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;

  if (DAT_1151b00b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
    DAT_1151b00b = '\x01';
  }
  local_8 = __real_3f800000 - param_2;
  local_c = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(param_2,1.0,0.5,(MethodInfo *)0x0);
  local_10 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(local_8,1.0,0.5,(MethodInfo *)0x0)
  ;
  if ((param_1->___U3CU3E4__this_0 != (SideMenu_tD900EEBEF28F284D7567E3D721E0DA61C0F5D1DF *)0x0) &&
     (pGVar1 = param_1->___U3CU3E4__this_0->___sideButtonOpen_10,
     pGVar1 != (Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 *)0x0)) {
    pTVar8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                       ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pGVar1,
                        (MethodInfo *)0x0);
    if ((param_1->___U3CU3E4__this_0 != (SideMenu_tD900EEBEF28F284D7567E3D721E0DA61C0F5D1DF *)0x0)
       && (pGVar1 = param_1->___U3CU3E4__this_0->___sideButtonOpen_10,
          pGVar1 != (Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 *)0x0)) {
      pTVar9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                         ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pGVar1,
                          (MethodInfo *)0x0);
      if (pTVar9 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
        pVVar10 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046
                            ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(local_20 + 4),
                             pTVar9,(MethodInfo *)0x0);
        local_30.___g_1 = pVVar10->___x_2;
        local_30.___b_2 = pVVar10->___y_3;
        local_30.___a_3 = pVVar10->___z_4;
        local_20._4_4_ = local_c;
        fStack_18 = local_c;
        local_14 = local_30.___a_3;
        if (pTVar8 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
          VVar6.___y_3 = local_c;
          VVar6.___x_2 = local_c;
          VVar6.___z_4 = local_30.___a_3;
          Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A
                    (pTVar8,VVar6,(MethodInfo *)0x0);
          if ((param_1->___U3CU3E4__this_0 !=
               (SideMenu_tD900EEBEF28F284D7567E3D721E0DA61C0F5D1DF *)0x0) &&
             (pGVar1 = param_1->___U3CU3E4__this_0->___sideButtonClose_11,
             pGVar1 != (Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 *)0x0)) {
            pTVar8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                               ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pGVar1,
                                (MethodInfo *)0x0);
            if ((param_1->___U3CU3E4__this_0 !=
                 (SideMenu_tD900EEBEF28F284D7567E3D721E0DA61C0F5D1DF *)0x0) &&
               (pGVar1 = param_1->___U3CU3E4__this_0->___sideButtonOpen_10,
               pGVar1 != (Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 *)0x0)) {
              pTVar9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                 ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pGVar1,
                                  (MethodInfo *)0x0);
              if (pTVar9 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
                pVVar10 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046
                                    ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)
                                     (local_20 + 4),pTVar9,(MethodInfo *)0x0);
                local_30.___g_1 = pVVar10->___x_2;
                local_30.___b_2 = pVVar10->___y_3;
                local_30.___a_3 = pVVar10->___z_4;
                local_20._4_4_ = local_10;
                fStack_18 = local_10;
                local_14 = local_30.___a_3;
                if (pTVar8 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
                  VVar7.___y_3 = local_10;
                  VVar7.___x_2 = local_10;
                  VVar7.___z_4 = local_30.___a_3;
                  Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A
                            (pTVar8,VVar7,(MethodInfo *)0x0);
                  if ((param_1->___U3CU3E4__this_0 !=
                       (SideMenu_tD900EEBEF28F284D7567E3D721E0DA61C0F5D1DF *)0x0) &&
                     (pGVar1 = param_1->___U3CU3E4__this_0->___sideButtonOpen_10,
                     pGVar1 != (Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 *)0x0)) {
                    pfVar11 = (float *)(**(code **)(pGVar1->_padding_ + 0x16c))
                                                 (&local_30,pGVar1,
                                                  *(undefined4 *)(pGVar1->_padding_ + 0x170));
                    local_30.___r_0 = *pfVar11;
                    local_30.___g_1 = pfVar11[1];
                    local_30.___b_2 = pfVar11[2];
                    local_30.___a_3 = pfVar11[3];
                    if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
                         has_cctor != '\0') &&
                       (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
                        cctor_finished == 0)) {
                      il2cpp_runtime_class_init
                                (
                                ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var
                                );
                    }
                    CVar4.___g_1 = local_30.___g_1;
                    CVar4.___r_0 = local_30.___r_0;
                    CVar4.___b_2 = local_30.___b_2;
                    CVar4.___a_3 = local_30.___a_3;
                    pCVar12 = ExtraMath_SetA_m5B95B685E9833790822EFD1B8FC45910FB071830
                                        (&local_30,CVar4,param_2,(MethodInfo *)0x0);
                    (**(code **)(pGVar1->_padding_ + 0x174))
                              (pGVar1,pCVar12->___r_0,pCVar12->___g_1,pCVar12->___b_2,
                               pCVar12->___a_3,*(undefined4 *)(pGVar1->_padding_ + 0x178));
                    pSVar2 = param_1->___U3CU3E4__this_0;
                    if (pSVar2 != (SideMenu_tD900EEBEF28F284D7567E3D721E0DA61C0F5D1DF *)0x0) {
                      pGVar1 = pSVar2->___sideButtonClose_11;
                      pGVar3 = pSVar2->___sideButtonOpen_10;
                      if (pGVar3 != (Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 *)0x0) {
                        pCVar12 = (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *)
                                  (**(code **)(pGVar3->_padding_ + 0x16c))
                                            (&local_30,pGVar3,
                                             *(undefined4 *)(pGVar3->_padding_ + 0x170));
                        pCVar12 = ExtraMath_SetA_m5B95B685E9833790822EFD1B8FC45910FB071830
                                            (&local_30,*pCVar12,local_8,(MethodInfo *)0x0);
                        if (pGVar1 != (Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 *)0x0) {
                          (**(code **)(pGVar1->_padding_ + 0x174))
                                    (pGVar1,pCVar12->___r_0,pCVar12->___g_1,pCVar12->___b_2,
                                     pCVar12->___a_3,*(undefined4 *)(pGVar1->_padding_ + 0x178));
                          if ((param_1->___U3CU3E4__this_0 !=
                               (SideMenu_tD900EEBEF28F284D7567E3D721E0DA61C0F5D1DF *)0x0) &&
                             (pGVar1 = param_1->___U3CU3E4__this_0->___sideButtonOpen_10,
                             pGVar1 != (Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 *)0x0)) {
                            pGVar13 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
                                                ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
                                                  *)pGVar1,(MethodInfo *)0x0);
                            if (pGVar13 !=
                                (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0) {
                              GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86
                                        (pGVar13,0.0 < param_2,(MethodInfo *)0x0);
                              if ((param_1->___U3CU3E4__this_0 !=
                                   (SideMenu_tD900EEBEF28F284D7567E3D721E0DA61C0F5D1DF *)0x0) &&
                                 (pGVar1 = param_1->___U3CU3E4__this_0->___sideButtonClose_11,
                                 pGVar1 != (Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 *)0x0)
                                 ) {
                                pGVar13 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
                                                    ((
                                                  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
                                                  *)pGVar1,(MethodInfo *)0x0);
                                if (pGVar13 !=
                                    (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0) {
                                  GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86
                                            (pGVar13,0.0 < local_8,(MethodInfo *)0x0);
                                  if ((param_1->___U3CU3E4__this_0 !=
                                       (SideMenu_tD900EEBEF28F284D7567E3D721E0DA61C0F5D1DF *)0x0) &&
                                     (pGVar1 = param_1->___U3CU3E4__this_0->___sideButtonClose_11,
                                     pGVar1 != (Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 *)
                                               0x0)) {
                                    pTVar8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                                       ((
                                                  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
                                                  *)pGVar1,(MethodInfo *)0x0);
                                    if ((param_1->___U3CU3E4__this_0 !=
                                         (SideMenu_tD900EEBEF28F284D7567E3D721E0DA61C0F5D1DF *)0x0)
                                       && (pGVar1 = param_1->___U3CU3E4__this_0->
                                                    ___sideButtonOpen_10,
                                          pGVar1 != (
                                                  Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
                                                  *)0x0)) {
                                      pTVar9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                                         ((
                                                  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
                                                  *)pGVar1,(MethodInfo *)0x0);
                                      fVar15 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616
                                                         (-12.0,45.0,param_2,(MethodInfo *)0x0);
                                      pQVar14 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3
                                                          ((
                                                  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4
                                                  *)local_20,0.0,0.0,fVar15,(MethodInfo *)0x0);
                                      local_30.___r_0 = pQVar14->___x_0;
                                      local_30.___g_1 = pQVar14->___y_1;
                                      local_30.___b_2 = pQVar14->___z_2;
                                      local_30.___a_3 = pQVar14->___w_3;
                                      if (pTVar9 != (
                                                  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1
                                                  *)0x0) {
                                        Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4
                                                  (pTVar9,*pQVar14,(MethodInfo *)0x0);
                                        if (pTVar8 != (
                                                  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1
                                                  *)0x0) {
                                          QVar5.___y_1 = local_30.___g_1;
                                          QVar5.___x_0 = local_30.___r_0;
                                          QVar5.___z_2 = local_30.___b_2;
                                          QVar5.___w_3 = local_30.___a_3;
                                          Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4
                                                    (pTVar8,QVar5,(MethodInfo *)0x0);
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
