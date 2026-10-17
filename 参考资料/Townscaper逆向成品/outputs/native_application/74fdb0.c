// RVA 0x74fdb0 | Placemaker.Ui.PalettePicker$$<Placemaker.Ui.PaletteMenu.IPaletteSetup.OnSetup>b__4_0
// PDB: PalettePicker_U3CPlacemaker_Ui_PaletteMenu_IPaletteSetup_OnSetupU3Eb__4_0_m28B1D5A26EB6A3E3C6D2F4B50174E6E81AFBEB5A
// Body: [[1074fdb0, 1074ff77]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1065f5a0 Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3
// 1066ff60 Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C
// 1066ffc0 Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A
// 10a3aa50 Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a3dc10 GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86
// 10a43ab0 Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
PalettePicker_U3CPlacemaker_Ui_PaletteMenu_IPaletteSetup_OnSetupU3Eb__4_0_m28B1D5A26EB6A3E3C6D2F4B50174E6E81AFBEB5A
          (PalettePicker_t7DE72AF9D552804578E6E75218808113F2153103 *param_1,float param_2,
          MethodInfo *param_3)

{
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar1;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar2;
  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *pGVar3;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar4;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *pQVar5;
  float fVar6;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 local_14;

  if (param_1->___bg_5 != (Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 *)0x0) {
    pGVar3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
                       ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1->___bg_5,
                        (MethodInfo *)0x0);
    if (pGVar3 != (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0) {
      GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86
                (pGVar3,0.0 < param_2,(MethodInfo *)0x0);
      if (param_1->___bg_5 != (Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 *)0x0) {
        pTVar4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                           ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1->___bg_5,
                            (MethodInfo *)0x0);
        fVar6 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(param_2,(MethodInfo *)0x0);
        local_14.___y_1 = fVar6 * ___real_3e99999c + __real_3f666666;
        local_14.___w_3 = fVar6 * 0.0 + __real_3f800000;
        local_14.___z_2 = local_14.___y_1;
        if (pTVar4 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
          VVar1.___y_3 = local_14.___y_1;
          VVar1.___x_2 = local_14.___y_1;
          VVar1.___z_4 = local_14.___w_3;
          Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A
                    (pTVar4,VVar1,(MethodInfo *)0x0);
          if (param_1->___fg_4 != (Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 *)0x0) {
            pTVar4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                               ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                param_1->___fg_4,(MethodInfo *)0x0);
            fVar6 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C
                              (param_2,(MethodInfo *)0x0);
            local_14.___y_1 = fVar6 * ___real_be4ccccc + __real_3f800000;
            local_14.___w_3 = fVar6 * 0.0 + __real_3f800000;
            local_14.___z_2 = local_14.___y_1;
            if (pTVar4 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
              VVar2.___y_3 = local_14.___y_1;
              VVar2.___x_2 = local_14.___y_1;
              VVar2.___z_4 = local_14.___w_3;
              Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A
                        (pTVar4,VVar2,(MethodInfo *)0x0);
              pTVar4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                 ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                                  (MethodInfo *)0x0);
              pQVar5 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3
                                 (&local_14,0.0,0.0,
                                  (__real_3f800000 - param_2) + (__real_3f800000 - param_2),
                                  (MethodInfo *)0x0);
              if (pTVar4 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
                Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C
                          (pTVar4,*pQVar5,(MethodInfo *)0x0);
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
