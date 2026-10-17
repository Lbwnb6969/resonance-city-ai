// RVA 0x9c9b30 | Placemaker.Ui.StandardButton.<>c__DisplayClass3_0$$<Placemaker.Ui.UiMaster.IUiSetup.OnSetup>b__1
// PDB: U3CU3Ec__DisplayClass3_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__1_m97B8181CC7CC61508E6A7D8AF3DC182556A7C98D
// Body: [[109c9b30, 109c9b80]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103e9560 UpdateState_set_current_m4572798247E29F668F5B2D3BDDFC6BC78D302BE5

void __cdecl
U3CU3Ec__DisplayClass3_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__1_m97B8181CC7CC61508E6A7D8AF3DC182556A7C98D
          (U3CU3Ec__DisplayClass3_0_t2D000AA72DDF89A5E24FDB9F4C159EF4A3E33FB9 *param_1,
          MethodInfo *param_2)

{
  UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *pUVar1;

  if ((param_1->___U3CU3E4__this_0 !=
       (StandardButton_t89F04B0BB4F3A135A70948960E00F79B2AA0B2A3 *)0x0) &&
     (pUVar1 = param_1->___U3CU3E4__this_0->___scaleXY_5,
     pUVar1 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0)) {
    UpdateState_set_current_m4572798247E29F668F5B2D3BDDFC6BC78D302BE5(pUVar1,0.98,(MethodInfo *)0x0)
    ;
    if ((param_1->___U3CU3E4__this_0 !=
         (StandardButton_t89F04B0BB4F3A135A70948960E00F79B2AA0B2A3 *)0x0) &&
       (pUVar1 = param_1->___U3CU3E4__this_0->___scaleZ_4,
       pUVar1 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0)) {
      UpdateState_set_current_m4572798247E29F668F5B2D3BDDFC6BC78D302BE5
                (pUVar1,0.95,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
