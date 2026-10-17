// RVA 0x9c9460 | Placemaker.Ui.SunButton.<>c__DisplayClass23_0$$<Placemaker.Ui.UiMaster.IUiSetup.OnSetup>b__1
// PDB: U3CU3Ec__DisplayClass23_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__1_m9E0DFBE7A10C99640E973551972C9CA1798AC75D
// Body: [[109c9460, 109c9555]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1066f810 Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046
// 1066ffc0 Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A
// 11134b60 CanvasGroup_set_alpha_m522B58BDF64D87252B0D43D254FF3A4D5993DC53

void __cdecl
U3CU3Ec__DisplayClass23_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__1_m9E0DFBE7A10C99640E973551972C9CA1798AC75D
          (U3CU3Ec__DisplayClass23_0_t78CAB84E3D664D538DBF8A1ECB2EE82DC7CE0630 *param_1,
          float param_2,MethodInfo *param_3)

{
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar1;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar2;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar3;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar4;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_1c;
  undefined8 local_10;
  float local_8;

  if ((param_1->___U3CU3E4__this_0 != (SunButton_t215E5C834FF2974681639E044A8C9F4D225EAE67 *)0x0) &&
     (pTVar1 = (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)
               param_1->___U3CU3E4__this_0->___handleBoth1_9,
     pTVar1 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) {
    pVVar4 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046
                       (&local_1c,pTVar1,(MethodInfo *)0x0);
    local_10._0_4_ = pVVar4->___x_2;
    local_10._4_4_ = pVVar4->___y_3;
    local_8 = pVVar4->___z_4;
    VVar2.___y_3 = param_2;
    VVar2.___x_2 = param_2;
    VVar2.___z_4 = local_8;
    Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A
              (pTVar1,VVar2,(MethodInfo *)0x0);
    if ((param_1->___U3CU3E4__this_0 != (SunButton_t215E5C834FF2974681639E044A8C9F4D225EAE67 *)0x0)
       && (pTVar1 = (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)
                    param_1->___U3CU3E4__this_0->___handleX1_6,
          pTVar1 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) {
      pVVar4 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046
                         (&local_1c,pTVar1,(MethodInfo *)0x0);
      local_10._0_4_ = pVVar4->___x_2;
      local_10._4_4_ = pVVar4->___y_3;
      local_8 = pVVar4->___z_4;
      VVar3.___y_3 = (float)__real_3f800000;
      VVar3.___x_2 = param_2;
      VVar3.___z_4 = local_8;
      Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A
                (pTVar1,VVar3,(MethodInfo *)0x0);
      if (param_1->___circle1Canvas_2 !=
          (CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F *)0x0) {
        CanvasGroup_set_alpha_m522B58BDF64D87252B0D43D254FF3A4D5993DC53
                  (param_1->___circle1Canvas_2,param_2,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
