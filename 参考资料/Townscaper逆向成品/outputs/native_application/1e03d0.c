// RVA 0x1e03d0 | Placemaker.Ui.DisableableButton.<>c__DisplayClass7_0$$<Placemaker.Ui.UiMaster.IUiSetup.OnSetup>b__0
// PDB: U3CU3Ec__DisplayClass7_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__0_mB855A5CB9F1EF96AFDED5A955EB3B732A5B05A18
// Body: [[101e03d0, 101e048b]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 104c53c0 DistanceFieldSettings_set_fill_mDDC01D75567CBAB18C73055C4F52AA3BA8A3BE82
// 104c5410 DistanceFieldSettings_set_outline_mB211677067FD7474DDAA57978D86EEA201FE3940
// 104c5460 DistanceFieldSettings_set_shadow_m5E0A499B1BE4151A9FC2829ABC2D3B60DCCFD455
// 10a43e90 Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616

void __cdecl
U3CU3Ec__DisplayClass7_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__0_mB855A5CB9F1EF96AFDED5A955EB3B732A5B05A18
          (U3CU3Ec__DisplayClass7_0_t2D2D5F44546698252BBD5E1151B6BEC677BE60FF *param_1,float param_2
          ,MethodInfo *param_3)

{
  DistanceFieldSettings_t32A1F46960279189113D2CB327EF91E0A25D1CC0 *pDVar1;
  float fVar2;
  float fVar3;

  fVar2 = __real_3f800000 - param_2;
  if ((param_1->___U3CU3E4__this_0 !=
       (DisableableButton_t1FFBF591208239F608B0F9F3FADEFF79EA469513 *)0x0) &&
     (pDVar1 = param_1->___U3CU3E4__this_0->___icon_4,
     pDVar1 != (DistanceFieldSettings_t32A1F46960279189113D2CB327EF91E0A25D1CC0 *)0x0)) {
    DistanceFieldSettings_set_fill_mDDC01D75567CBAB18C73055C4F52AA3BA8A3BE82
              (pDVar1,fVar2,(MethodInfo *)0x0);
    if (param_1->___U3CU3E4__this_0 !=
        (DisableableButton_t1FFBF591208239F608B0F9F3FADEFF79EA469513 *)0x0) {
      pDVar1 = param_1->___U3CU3E4__this_0->___icon_4;
      fVar3 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(0.3,1.0,fVar2,(MethodInfo *)0x0);
      if (pDVar1 != (DistanceFieldSettings_t32A1F46960279189113D2CB327EF91E0A25D1CC0 *)0x0) {
        DistanceFieldSettings_set_outline_mB211677067FD7474DDAA57978D86EEA201FE3940
                  (pDVar1,fVar3,(MethodInfo *)0x0);
        if ((param_1->___U3CU3E4__this_0 !=
             (DisableableButton_t1FFBF591208239F608B0F9F3FADEFF79EA469513 *)0x0) &&
           (pDVar1 = param_1->___U3CU3E4__this_0->___icon_4,
           pDVar1 != (DistanceFieldSettings_t32A1F46960279189113D2CB327EF91E0A25D1CC0 *)0x0)) {
          DistanceFieldSettings_set_shadow_m5E0A499B1BE4151A9FC2829ABC2D3B60DCCFD455
                    (pDVar1,fVar2,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
