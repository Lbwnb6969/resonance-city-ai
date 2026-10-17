// RVA 0x9ca2c0 | Placemaker.Ui.SunButtonGamepad.<>c__DisplayClass7_0$$<Placemaker.Ui.UiMaster.IUiSetup.OnSetup>b__1
// PDB: U3CU3Ec__DisplayClass7_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__1_mD73757BB78E7E124D010D1856C5DDE11CFE5763A
// Body: [[109ca2c0, 109ca379]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 102ffd20 SunButton_SetGamepad_m3A686B11E1F42057001AD2CAC1501FC26C33128E
// 103e4f40 UiAudio_Play_m3D5C03177FFA38B7D523DB459D115A8854A50AC9
// 10a36e40 Behaviour_get_enabled_m08077AB79934634E1EAE909C2B482BEF4C15A800
// 10a36ea0 Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32

void __cdecl
U3CU3Ec__DisplayClass7_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__1_mD73757BB78E7E124D010D1856C5DDE11CFE5763A
          (U3CU3Ec__DisplayClass7_0_tE1B7E85DE1C82BBCE84EA5F9E435D6B8201357E1 *param_1,float param_2
          ,MethodInfo *param_3)

{
  SunButton_t215E5C834FF2974681639E044A8C9F4D225EAE67 *pSVar1;
  WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *pWVar2;
  UiAudio_t2010907E27F3CE85922CDC22C39D5002EB127976 *pUVar3;
  SunButtonGamepad_tCDC81D6FE61C37B5713FFE96C01FD96152CAFE07 *pSVar4;
  bool bVar5;
  AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE *pAVar6;

  if (param_1->___U3CU3E4__this_0 !=
      (SunButtonGamepad_tCDC81D6FE61C37B5713FFE96C01FD96152CAFE07 *)0x0) {
    Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32
              ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)param_1->___U3CU3E4__this_0,
               param_2 == __real_3f800000,(MethodInfo *)0x0);
    pSVar1 = param_1->___sunButton_1;
    if ((param_1->___U3CU3E4__this_0 !=
         (SunButtonGamepad_tCDC81D6FE61C37B5713FFE96C01FD96152CAFE07 *)0x0) &&
       (bVar5 = Behaviour_get_enabled_m08077AB79934634E1EAE909C2B482BEF4C15A800
                          ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)
                           param_1->___U3CU3E4__this_0,(MethodInfo *)0x0),
       pSVar1 != (SunButton_t215E5C834FF2974681639E044A8C9F4D225EAE67 *)0x0)) {
      SunButton_SetGamepad_m3A686B11E1F42057001AD2CAC1501FC26C33128E(pSVar1,bVar5,(MethodInfo *)0x0)
      ;
      if ((param_1->___master_2 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
         (pWVar2 = param_1->___master_2->___worldMaster_5,
         pWVar2 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)) {
        pUVar3 = pWVar2->___uiAudioSourcePool_24;
        if (param_1->___U3CU3E4__this_0 !=
            (SunButtonGamepad_tCDC81D6FE61C37B5713FFE96C01FD96152CAFE07 *)0x0) {
          bVar5 = Behaviour_get_enabled_m08077AB79934634E1EAE909C2B482BEF4C15A800
                            ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)
                             param_1->___U3CU3E4__this_0,(MethodInfo *)0x0);
          pSVar4 = param_1->___U3CU3E4__this_0;
          if (bVar5) {
            if (pSVar4 == (SunButtonGamepad_tCDC81D6FE61C37B5713FFE96C01FD96152CAFE07 *)0x0)
            goto LAB_109ca375;
            pAVar6 = pSVar4->___openClip_9;
          }
          else {
            if (pSVar4 == (SunButtonGamepad_tCDC81D6FE61C37B5713FFE96C01FD96152CAFE07 *)0x0)
            goto LAB_109ca375;
            pAVar6 = pSVar4->___closeClip_10;
          }
          if (pUVar3 != (UiAudio_t2010907E27F3CE85922CDC22C39D5002EB127976 *)0x0) {
            UiAudio_Play_m3D5C03177FFA38B7D523DB459D115A8854A50AC9
                      (pUVar3,pAVar6,true,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
LAB_109ca375:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
