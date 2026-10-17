// RVA 0x9c9260 | Placemaker.Ui.Slider.<>c__DisplayClass23_0$$<Placemaker.Ui.UiMaster.IUiSetup.OnSetup>b__0
// PDB: U3CU3Ec__DisplayClass23_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__0_m3F4B0A14E3AC1FC4E228EB3F8F3861757FA9BF85
// Body: [[109c9260, 109c9332]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1066ffc0 Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a43e90 Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616

void __cdecl
U3CU3Ec__DisplayClass23_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__0_m3F4B0A14E3AC1FC4E228EB3F8F3861757FA9BF85
          (U3CU3Ec__DisplayClass23_0_t1D664A30B2BD8F6F9F556E73E7837D1C62034EAA *param_1,
          float param_2,MethodInfo *param_3)

{
  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *pCVar1;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar2;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar3;
  float fVar4;
  float fVar5;

  fVar4 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(1.0,0.95,param_2,(MethodInfo *)0x0);
  fVar5 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(1.0,0.95,param_2,(MethodInfo *)0x0);
  if ((param_1->___U3CU3E4__this_0 != (Slider_tD8A2D42879D86E2025759D2A26C7F53F08A56B6D *)0x0) &&
     (pCVar1 = (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
               param_1->___U3CU3E4__this_0->___sliderHandle_9,
     pCVar1 != (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0)) {
    pTVar3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                       (pCVar1,(MethodInfo *)0x0);
    if (pTVar3 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
      VVar2.___y_3 = (param_1->___scale_1).___y_3 * fVar4;
      VVar2.___x_2 = (param_1->___scale_1).___x_2 * fVar4;
      VVar2.___z_4 = (param_1->___scale_1).___z_4 * fVar5;
      Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A
                (pTVar3,VVar2,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
