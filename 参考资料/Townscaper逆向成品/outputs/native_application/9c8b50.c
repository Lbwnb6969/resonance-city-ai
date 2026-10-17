// RVA 0x9c8b50 | Placemaker.Ui.SideMenuNavigator.<>c__DisplayClass11_0$$<Placemaker.Ui.UiMaster.IUiSetup.OnSetup>b__2
// PDB: U3CU3Ec__DisplayClass11_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__2_m1A84EF38112A7027DF18EFE52B5AAC7EB421605C
// Body: [[109c8b50, 109c8bd5]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103e9560 UpdateState_set_current_m4572798247E29F668F5B2D3BDDFC6BC78D302BE5
// 10a36ea0 Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32

void __cdecl
U3CU3Ec__DisplayClass11_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__2_m1A84EF38112A7027DF18EFE52B5AAC7EB421605C
          (U3CU3Ec__DisplayClass11_0_t669A9CAEA708B389127A93B5FCEA239A36B16224 *param_1,
          float param_2,MethodInfo *param_3)

{
  float *pfVar1;
  SideMenuNavigator_t9DFC84A605D0E07F19F44B68113C049C20755F72 *pSVar2;

  if (param_1->___U3CU3E4__this_0 !=
      (SideMenuNavigator_t9DFC84A605D0E07F19F44B68113C049C20755F72 *)0x0) {
    Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32
              ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)param_1->___U3CU3E4__this_0,
               param_2 == __real_3f800000,(MethodInfo *)0x0);
    if (param_2 == __real_3f800000) {
      pSVar2 = param_1->___U3CU3E4__this_0;
      if ((pSVar2 == (SideMenuNavigator_t9DFC84A605D0E07F19F44B68113C049C20755F72 *)0x0) ||
         (pSVar2->___openState_10 == (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0))
      goto LAB_109c8bd1;
      pfVar1 = &pSVar2->___openState_10->____current_0;
      if (*pfVar1 <= __real_3f666666 && __real_3f666666 != *pfVar1) {
        if (pSVar2->___targetArrowX_9 ==
            (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) goto LAB_109c8bd1;
        UpdateState_set_current_m4572798247E29F668F5B2D3BDDFC6BC78D302BE5
                  (pSVar2->___targetArrowX_9,1.0,(MethodInfo *)0x0);
      }
    }
    return;
  }
LAB_109c8bd1:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
