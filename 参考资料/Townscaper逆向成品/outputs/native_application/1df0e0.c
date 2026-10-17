// RVA 0x1df0e0 | Placemaker.Ui.SaveMenu.<>c__DisplayClass44_0$$<Placemaker.Ui.UiMaster.IUiSetup.OnSetup>b__4
// PDB: U3CU3Ec__DisplayClass44_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__4_m5A560FCD611E73817C20C7D9B87B4EBA8C8B6579
// Body: [[101df0e0, 101df1ba]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103d5630 MaxSavesCounter_UpdateCountText_m04F92FB2C93CC35FF67D394E48DB0BD389F9D564
// 10906300 Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411
// 10a3aa50 Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
// 10a3dc10 GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86

void __cdecl
U3CU3Ec__DisplayClass44_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__4_m5A560FCD611E73817C20C7D9B87B4EBA8C8B6579
          (U3CU3Ec__DisplayClass44_0_tE7C4E51611B4F53D9BAB77C326867432E712C0BC *param_1,int param_2,
          MethodInfo *param_3)

{
  MaxSavesCounter_t2334DAABC68899583264380C9F9C6637980D2DF2 *pMVar1;
  WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *pWVar2;
  SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *pSVar3;
  U3CU3Ec__DisplayClass44_0_tE7C4E51611B4F53D9BAB77C326867432E712C0BC *pUVar4;
  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *pGVar5;
  String_t *pSVar6;
  String_t *pSVar7;

  pUVar4 = param_1;
  if ((param_1->___U3CU3E4__this_0 != (SaveMenu_t5FABF5FD9F5391352EFA4B985C68F0D9E2D9E2E8 *)0x0) &&
     (pMVar1 = param_1->___U3CU3E4__this_0->___maxSavesCounter_39,
     pMVar1 != (MaxSavesCounter_t2334DAABC68899583264380C9F9C6637980D2DF2 *)0x0)) {
    pGVar5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
                       ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pMVar1,
                        (MethodInfo *)0x0);
    if ((pUVar4->___master_1 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
       (((pWVar2 = pUVar4->___master_1->___worldMaster_5,
         pWVar2 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0 &&
         (pSVar3 = pWVar2->___saveSystem_35,
         pSVar3 != (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *)0x0)) &&
        (pGVar5 != (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0)))) {
      GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86
                (pGVar5,pSVar3->___maxSaveGameCount_40 * 5 <= param_2 * 4,(MethodInfo *)0x0);
      if (pUVar4->___U3CU3E4__this_0 != (SaveMenu_t5FABF5FD9F5391352EFA4B985C68F0D9E2D9E2E8 *)0x0) {
        pMVar1 = pUVar4->___U3CU3E4__this_0->___maxSavesCounter_39;
        pSVar6 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411
                           (&param_2,(MethodInfo *)0x0);
        if (((pUVar4->___master_1 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
            (pWVar2 = pUVar4->___master_1->___worldMaster_5,
            pWVar2 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)) &&
           (pSVar3 = pWVar2->___saveSystem_35,
           pSVar3 != (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *)0x0)) {
          param_1 = (U3CU3Ec__DisplayClass44_0_tE7C4E51611B4F53D9BAB77C326867432E712C0BC *)
                    pSVar3->___maxSaveGameCount_40;
          pSVar7 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411
                             ((int *)&param_1,(MethodInfo *)0x0);
          if (pMVar1 != (MaxSavesCounter_t2334DAABC68899583264380C9F9C6637980D2DF2 *)0x0) {
            MaxSavesCounter_UpdateCountText_m04F92FB2C93CC35FF67D394E48DB0BD389F9D564
                      (pMVar1,pSVar6,pSVar7,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
