// RVA 0x1df270 | Placemaker.Ui.SaveMenu.<>c__DisplayClass44_0$$<Placemaker.Ui.UiMaster.IUiSetup.OnSetup>b__7
// PDB: U3CU3Ec__DisplayClass44_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__7_m9FFB54C0AE57355F0E5E30276F0E2A8EC9030149
// Body: [[101df270, 101df32b]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103e9500 UpdateState_get_targetBool_m46A8B6EC49CDAA67B6301431418CB0F23E1F915F
// 10a3aa50 Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
// 10a3dc10 GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
U3CU3Ec__DisplayClass44_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__7_m9FFB54C0AE57355F0E5E30276F0E2A8EC9030149
          (U3CU3Ec__DisplayClass44_0_tE7C4E51611B4F53D9BAB77C326867432E712C0BC *param_1,
          float param_2,MethodInfo *param_3)

{
  SaveMenu_t5FABF5FD9F5391352EFA4B985C68F0D9E2D9E2E8 *pSVar1;
  UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *pUVar2;
  bool bVar3;
  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *pGVar4;
  int iVar5;

  pSVar1 = param_1->___U3CU3E4__this_0;
  if (pSVar1 != (SaveMenu_t5FABF5FD9F5391352EFA4B985C68F0D9E2D9E2E8 *)0x0) {
    pUVar2 = pSVar1->___visibleState_28;
    if (pSVar1->___openState_29 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
      bVar3 = UpdateState_get_targetBool_m46A8B6EC49CDAA67B6301431418CB0F23E1F915F
                        (pSVar1->___openState_29,(MethodInfo *)0x0);
      iVar5 = 0x18;
      if (bVar3) {
        iVar5 = 0xc;
      }
      if (pUVar2 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
        pUVar2->___speed_7 = (float)iVar5;
        pSVar1 = param_1->___U3CU3E4__this_0;
        if ((pSVar1 != (SaveMenu_t5FABF5FD9F5391352EFA4B985C68F0D9E2D9E2E8 *)0x0) &&
           (pSVar1->___visibleState_28 !=
            (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0)) {
          if ((pSVar1->___visibleState_28->____current_0 != ___real_00000000) ||
             (param_2 != __real_3f800000)) {
            return;
          }
          if ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pSVar1->___canvasGroup_7 !=
              (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) {
            pGVar4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
                               ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                pSVar1->___canvasGroup_7,(MethodInfo *)0x0);
            if (pGVar4 != (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0) {
              GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86
                        (pGVar4,true,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
