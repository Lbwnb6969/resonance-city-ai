// RVA 0xa00900 | Placemaker.Ui.SaveMenu$$SnapScrolls
// PDB: SaveMenu_SnapScrolls_m2CA091FF84C226CEF8EF08B460C4D74750EF2E40
// Body: [[10a00900, 10a00928]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception

void __cdecl
SaveMenu_SnapScrolls_m2CA091FF84C226CEF8EF08B460C4D74750EF2E40
          (SaveMenu_t5FABF5FD9F5391352EFA4B985C68F0D9E2D9E2E8 *param_1,MethodInfo *param_2)

{
  if (param_1->___cardsListScrollRect_5 !=
      (BetterScrollRect_t4A98E5323F5BAE8BFBA9E54B1E4DD8F45CBA46B5 *)0x0) {
    (param_1->___cardsListScrollRect_5->___normPosTarget_8).___y_1 = 1.0;
    if (param_1->___cardsListScrollRect_5 !=
        (BetterScrollRect_t4A98E5323F5BAE8BFBA9E54B1E4DD8F45CBA46B5 *)0x0) {
      (param_1->___cardsListScrollRect_5->___normPosCurrent_7).___y_1 = 1.0;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
