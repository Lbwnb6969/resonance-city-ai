// RVA 0x9c9340 | Placemaker.Ui.SunButton.<>c__DisplayClass23_0$$<Placemaker.Ui.UiMaster.IUiSetup.OnSetup>b__0
// PDB: U3CU3Ec__DisplayClass23_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__0_mDD1D8A90B2FE184091A94E1C700DACAC6E8209FB
// Body: [[109c9340, 109c945a]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1066f810 Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046
// 1066ffc0 Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A
// 11134b60 CanvasGroup_set_alpha_m522B58BDF64D87252B0D43D254FF3A4D5993DC53

void __cdecl
U3CU3Ec__DisplayClass23_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__0_mDD1D8A90B2FE184091A94E1C700DACAC6E8209FB
          (U3CU3Ec__DisplayClass23_0_t78CAB84E3D664D538DBF8A1ECB2EE82DC7CE0630 *param_1,
          float param_2,MethodInfo *param_3)

{
  SunButton_t215E5C834FF2974681639E044A8C9F4D225EAE67 *pSVar1;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar2;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar3;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar4;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar5;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_10;

  pSVar1 = param_1->___U3CU3E4__this_0;
  if (pSVar1 != (SunButton_t215E5C834FF2974681639E044A8C9F4D225EAE67 *)0x0) {
    pTVar2 = (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)pSVar1->___handleBoth_8;
    if ((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)pSVar1->___handleBoth1_9 !=
        (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
      pVVar5 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046
                         (&local_10,
                          (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)
                          pSVar1->___handleBoth1_9,(MethodInfo *)0x0);
      local_10.___z_4 = pVVar5->___z_4;
      local_10.___x_2 = param_2;
      local_10.___y_3 = param_2;
      if (pTVar2 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
        VVar3.___y_3 = param_2;
        VVar3.___x_2 = param_2;
        VVar3.___z_4 = local_10.___z_4;
        Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A
                  (pTVar2,VVar3,(MethodInfo *)0x0);
        pSVar1 = param_1->___U3CU3E4__this_0;
        if (pSVar1 != (SunButton_t215E5C834FF2974681639E044A8C9F4D225EAE67 *)0x0) {
          pTVar2 = (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)pSVar1->___handleX_5;
          if ((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)pSVar1->___handleX1_6 !=
              (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
            pVVar5 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046
                               (&local_10,
                                (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)
                                pSVar1->___handleX1_6,(MethodInfo *)0x0);
            local_10.___z_4 = pVVar5->___z_4;
            local_10.___x_2 = param_2;
            local_10.___y_3 = 1.0;
            if (pTVar2 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
              VVar4.___y_3 = 1.0;
              VVar4.___x_2 = param_2;
              VVar4.___z_4 = local_10.___z_4;
              Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A
                        (pTVar2,VVar4,(MethodInfo *)0x0);
              if (param_1->___circle0Canvas_1 !=
                  (CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F *)0x0) {
                CanvasGroup_set_alpha_m522B58BDF64D87252B0D43D254FF3A4D5993DC53
                          (param_1->___circle0Canvas_1,param_2,(MethodInfo *)0x0);
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
