// RVA 0x1ddb30 | Placemaker.Ui.SideMenu.<>c__DisplayClass17_0$$<Placemaker.Ui.UiMaster.IUiSetup.OnSetup>b__3
// PDB: U3CU3Ec__DisplayClass17_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__3_mF467B02BA65C18E53DE29B473E4EE31CC8ECA5AA
// Body: [[101ddb30, 101ddba0]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10a3aa50 Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
// 10a3dc10 GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86
// 11134b60 CanvasGroup_set_alpha_m522B58BDF64D87252B0D43D254FF3A4D5993DC53

void __cdecl
U3CU3Ec__DisplayClass17_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__3_mF467B02BA65C18E53DE29B473E4EE31CC8ECA5AA
          (U3CU3Ec__DisplayClass17_0_t7007DC64C2A37C0828DA7D473B3E75A75BFC657C *param_1,
          float param_2,MethodInfo *param_3)

{
  CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F *pCVar1;
  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *pGVar2;

  if ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1->___rootCanvasGroup_3 !=
      (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) {
    pGVar2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
                       ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                        param_1->___rootCanvasGroup_3,(MethodInfo *)0x0);
    if (pGVar2 != (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0) {
      GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86
                (pGVar2,param_2 < __real_3f800000,(MethodInfo *)0x0);
      if ((param_1->___U3CU3E4__this_0 != (SideMenu_tD900EEBEF28F284D7567E3D721E0DA61C0F5D1DF *)0x0)
         && (pCVar1 = param_1->___U3CU3E4__this_0->___tabCanvasGroup_12,
            pCVar1 != (CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F *)0x0)) {
        CanvasGroup_set_alpha_m522B58BDF64D87252B0D43D254FF3A4D5993DC53
                  (pCVar1,__real_3f800000 - param_2,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
