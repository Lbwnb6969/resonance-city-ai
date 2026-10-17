// RVA 0xa00400 | Placemaker.Ui.SaveMenu$$SetFocusFrameScale
// PDB: SaveMenu_SetFocusFrameScale_m3810E2D2527FE36E2B0AF4CF5D254BC8C1023788
// Body: [[10a00400, 10a004d3]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103e7720 UiScaler_GetScale_m37007E390C6AB42B25FD765FC112D15BE2D84DB9
// 1066ffc0 Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F

void __cdecl
SaveMenu_SetFocusFrameScale_m3810E2D2527FE36E2B0AF4CF5D254BC8C1023788
          (SaveMenu_t5FABF5FD9F5391352EFA4B985C68F0D9E2D9E2E8 *param_1,MethodInfo *param_2)

{
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar1;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar2;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar3;
  float fVar4;

  fVar4 = UiScaler_GetScale_m37007E390C6AB42B25FD765FC112D15BE2D84DB9((MethodInfo *)0x0);
  fVar4 = 1.0 / fVar4;
  if ((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)param_1->___focusFrame_10 !=
      (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
    VVar1.___y_3 = fVar4;
    VVar1.___x_2 = fVar4;
    VVar1.___z_4 = 1.0;
    Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A
              ((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)param_1->___focusFrame_10,
               VVar1,(MethodInfo *)0x0);
    fVar4 = (__real_3f800000 - fVar4) / fVar4 + __real_3f800000;
    if (param_1->___focusedCardDuplicateMessage_36 !=
        (SimpleMessage_t9F2B162AE3E95AE6F3559BBA44801038293C7A3A *)0x0) {
      pTVar3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                         ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                          param_1->___focusedCardDuplicateMessage_36,(MethodInfo *)0x0);
      if (pTVar3 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
        VVar2.___y_3 = fVar4;
        VVar2.___x_2 = fVar4;
        VVar2.___z_4 = 1.0;
        Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A
                  (pTVar3,VVar2,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
