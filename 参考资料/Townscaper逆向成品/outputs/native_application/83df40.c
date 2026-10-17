// RVA 0x83df40 | Placemaker.Ui.FullscreenButton$$<Placemaker.Ui.UiMaster.IUiSetup.OnSetup>b__4_0
// PDB: FullscreenButton_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__4_0_m4CA8882545B07D5CB1E674323FFFF6969F7C7E4A
// Body: [[1083df40, 1083e064]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1066f810 Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046
// 1066ffc0 Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A
// 10a3aa50 Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a3dc10 GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86
// 10a43e90 Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616
// 11134b60 CanvasGroup_set_alpha_m522B58BDF64D87252B0D43D254FF3A4D5993DC53

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FullscreenButton_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__4_0_m4CA8882545B07D5CB1E674323FFFF6969F7C7E4A
          (FullscreenButton_t0AAFDBD51779A2F9B36D0D6C8E87A9D26DEBB018 *param_1,float param_2,
          MethodInfo *param_3)

{
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar1;
  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *pGVar2;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar3;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar4;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar5;
  float fVar6;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_10;

  if ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1->___tick_5 !=
      (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) {
    pGVar2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
                       ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1->___tick_5,
                        (MethodInfo *)0x0);
    if (pGVar2 != (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0) {
      GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86
                (pGVar2,___real_00000000 < param_2,(MethodInfo *)0x0);
      fVar6 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616
                        (0.8,1.0,param_2,(MethodInfo *)0x0);
      if ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1->___tick_5 !=
          (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) {
        pTVar3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                           ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                            param_1->___tick_5,(MethodInfo *)0x0);
        if ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1->___tick_5 !=
            (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) {
          pTVar4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                             ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                              param_1->___tick_5,(MethodInfo *)0x0);
          if (pTVar4 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
            pVVar5 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046
                               (&local_10,pTVar4,(MethodInfo *)0x0);
            local_10.___z_4 = pVVar5->___z_4;
            local_10.___x_2 = fVar6;
            local_10.___y_3 = fVar6;
            if (pTVar3 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
              VVar1.___y_3 = fVar6;
              VVar1.___x_2 = fVar6;
              VVar1.___z_4 = local_10.___z_4;
              Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A
                        (pTVar3,VVar1,(MethodInfo *)0x0);
              if (param_1->___tick_5 != (CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F *)0x0
                 ) {
                CanvasGroup_set_alpha_m522B58BDF64D87252B0D43D254FF3A4D5993DC53
                          (param_1->___tick_5,param_2,(MethodInfo *)0x0);
                return;
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
