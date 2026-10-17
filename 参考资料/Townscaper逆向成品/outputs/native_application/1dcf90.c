// RVA 0x1dcf90 | Placemaker.Ui.GamepadScreenCursor.<>c__DisplayClass12_0$$<Placemaker.Ui.UiMaster.IUiSetup.OnSetup>b__3
// PDB: U3CU3Ec__DisplayClass12_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__3_m4E8C5C1C42D136EB1FF96D0BDB863447FA84BD5D
// Body: [[101dcf90, 101dd095]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1066f810 Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046
// 1066ffc0 Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A
// 10a3aa50 Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
// 10a3dc10 GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86
// 10a43e90 Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616
// 11134b60 CanvasGroup_set_alpha_m522B58BDF64D87252B0D43D254FF3A4D5993DC53

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
U3CU3Ec__DisplayClass12_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__3_m4E8C5C1C42D136EB1FF96D0BDB863447FA84BD5D
          (U3CU3Ec__DisplayClass12_0_tA9DDB437CFE98734E80FEB07874355C2B3DBDE1D *param_1,
          float param_2,MethodInfo *param_3)

{
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar1;
  float fVar2;
  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *pCVar3;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar4;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar5;
  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *pGVar6;
  float fVar7;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_1c;
  undefined8 local_10;

  if ((param_1->___U3CU3E4__this_0 !=
       (GamepadScreenCursor_t16442AD23130B50028C8F87084D1AC48DB3F8DB0 *)0x0) &&
     (pTVar1 = (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)
               param_1->___U3CU3E4__this_0->___arrowScale_8,
     pTVar1 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) {
    pVVar5 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046
                       (&local_1c,pTVar1,(MethodInfo *)0x0);
    local_10._0_4_ = pVVar5->___x_2;
    local_10._4_4_ = pVVar5->___y_3;
    fVar2 = pVVar5->___z_4;
    fVar7 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(0.5,1.0,param_2,(MethodInfo *)0x0);
    local_10 = CONCAT44(fVar7,fVar7);
    if ((param_1->___U3CU3E4__this_0 !=
         (GamepadScreenCursor_t16442AD23130B50028C8F87084D1AC48DB3F8DB0 *)0x0) &&
       (pTVar1 = (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)
                 param_1->___U3CU3E4__this_0->___arrowScale_8,
       pTVar1 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) {
      VVar4.___y_3 = fVar7;
      VVar4.___x_2 = fVar7;
      VVar4.___z_4 = fVar2;
      Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A
                (pTVar1,VVar4,(MethodInfo *)0x0);
      if (param_1->___arrowCanvas_3 != (CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F *)0x0)
      {
        CanvasGroup_set_alpha_m522B58BDF64D87252B0D43D254FF3A4D5993DC53
                  (param_1->___arrowCanvas_3,param_2,(MethodInfo *)0x0);
        if ((param_1->___U3CU3E4__this_0 !=
             (GamepadScreenCursor_t16442AD23130B50028C8F87084D1AC48DB3F8DB0 *)0x0) &&
           (pCVar3 = (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                     param_1->___U3CU3E4__this_0->___arrow_7,
           pCVar3 != (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0)) {
          pGVar6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
                             (pCVar3,(MethodInfo *)0x0);
          if (pGVar6 != (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0) {
            GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86
                      (pGVar6,___real_00000000 < param_2,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
