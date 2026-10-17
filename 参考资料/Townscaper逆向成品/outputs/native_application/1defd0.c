// RVA 0x1defd0 | Placemaker.Ui.SaveMenu.<>c__DisplayClass44_0$$<Placemaker.Ui.UiMaster.IUiSetup.OnSetup>b__1
// PDB: U3CU3Ec__DisplayClass44_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__1_mF0B68220D8975D066E4E8B7602C94EFC212EE034
// Body: [[101defd0, 101df0d0]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1066ffc0 Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A
// 10a3aa50 Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a3dc10 GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86
// 10a43e90 Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616
// 11134b60 CanvasGroup_set_alpha_m522B58BDF64D87252B0D43D254FF3A4D5993DC53

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
U3CU3Ec__DisplayClass44_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__1_mF0B68220D8975D066E4E8B7602C94EFC212EE034
          (U3CU3Ec__DisplayClass44_0_tE7C4E51611B4F53D9BAB77C326867432E712C0BC *param_1,
          float param_2,MethodInfo *param_3)

{
  CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F *pCVar1;
  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *pCVar2;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar3;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar4;
  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *pGVar5;
  float fVar6;

  if ((param_1->___U3CU3E4__this_0 != (SaveMenu_t5FABF5FD9F5391352EFA4B985C68F0D9E2D9E2E8 *)0x0) &&
     (pCVar1 = param_1->___U3CU3E4__this_0->___gamepadCursor_23,
     pCVar1 != (CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F *)0x0)) {
    CanvasGroup_set_alpha_m522B58BDF64D87252B0D43D254FF3A4D5993DC53
              (pCVar1,param_2,(MethodInfo *)0x0);
    fVar6 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(1.1,1.0,param_2,(MethodInfo *)0x0);
    if ((param_1->___U3CU3E4__this_0 != (SaveMenu_t5FABF5FD9F5391352EFA4B985C68F0D9E2D9E2E8 *)0x0)
       && (pCVar2 = (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                    param_1->___U3CU3E4__this_0->___gamepadCursor_23,
          pCVar2 != (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0)) {
      pTVar4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                         (pCVar2,(MethodInfo *)0x0);
      if (pTVar4 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
        VVar3.___y_3 = fVar6;
        VVar3.___x_2 = fVar6;
        VVar3.___z_4 = 1.0;
        Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A
                  (pTVar4,VVar3,(MethodInfo *)0x0);
        if ((param_1->___U3CU3E4__this_0 !=
             (SaveMenu_t5FABF5FD9F5391352EFA4B985C68F0D9E2D9E2E8 *)0x0) &&
           (pCVar2 = (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                     param_1->___U3CU3E4__this_0->___gamepadCursor_23,
           pCVar2 != (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0)) {
          pGVar5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
                             (pCVar2,(MethodInfo *)0x0);
          if (pGVar5 != (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0) {
            GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86
                      (pGVar5,___real_00000000 < param_2,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
