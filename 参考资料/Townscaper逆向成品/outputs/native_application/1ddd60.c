// RVA 0x1ddd60 | Placemaker.Ui.SideMenu.<>c__DisplayClass17_0$$<Placemaker.Ui.UiMaster.IUiSetup.OnSetup>b__7
// PDB: U3CU3Ec__DisplayClass17_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__7_m1874993B7FD2937871D235FC67EE2B55D1C05DE9
// Body: [[101ddd60, 101dde47]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103e4eb0 UiAudio_GetAudioSource_m52160E21899A434FA48497F071C6A0EBB9C1167D
// 103e9610 UpdateState_set_target_mE17720317B95AD21B3A598B430573508DBB96BE4
// 11134ba0 CanvasGroup_set_blocksRaycasts_m322FC5A1B70A23524463A84CC707BF50FD284B3A
// 11143d40 AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1
// 11143f00 AudioSource_set_clip_mD1F50F7BA6EA3AF25B4922473352C5180CFF7B2B
// 11143f70 AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58

void __cdecl
U3CU3Ec__DisplayClass17_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__7_m1874993B7FD2937871D235FC67EE2B55D1C05DE9
          (U3CU3Ec__DisplayClass17_0_t7007DC64C2A37C0828DA7D473B3E75A75BFC657C *param_1,
          float param_2,MethodInfo *param_3)

{
  CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F *pCVar1;
  SideMenu_tD900EEBEF28F284D7567E3D721E0DA61C0F5D1DF *pSVar2;
  WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *pWVar3;
  UiAudio_t2010907E27F3CE85922CDC22C39D5002EB127976 *pUVar4;
  AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B *pAVar5;
  AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE *pAVar6;

  if ((param_1->___U3CU3E4__this_0 != (SideMenu_tD900EEBEF28F284D7567E3D721E0DA61C0F5D1DF *)0x0) &&
     (pCVar1 = param_1->___U3CU3E4__this_0->___sideCanvasGroup_13,
     pCVar1 != (CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F *)0x0)) {
    CanvasGroup_set_blocksRaycasts_m322FC5A1B70A23524463A84CC707BF50FD284B3A
              (pCVar1,0.0 < param_2,(MethodInfo *)0x0);
    pSVar2 = param_1->___U3CU3E4__this_0;
    if ((pSVar2 != (SideMenu_tD900EEBEF28F284D7567E3D721E0DA61C0F5D1DF *)0x0) &&
       ((pSVar2->___openState_8 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0 &&
        (pSVar2->___sideButtonState_9 !=
         (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0)))) {
      UpdateState_set_target_mE17720317B95AD21B3A598B430573508DBB96BE4
                (pSVar2->___sideButtonState_9,pSVar2->___openState_8->____target_1,(MethodInfo *)0x0
                );
      if ((param_1->___master_1 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
         ((pWVar3 = param_1->___master_1->___worldMaster_5,
          pWVar3 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0 &&
          (pUVar4 = pWVar3->___uiAudioSourcePool_24,
          pUVar4 != (UiAudio_t2010907E27F3CE85922CDC22C39D5002EB127976 *)0x0)))) {
        pAVar5 = UiAudio_GetAudioSource_m52160E21899A434FA48497F071C6A0EBB9C1167D
                           (pUVar4,(MethodInfo *)0x0);
        if (pAVar5 != (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B *)0x0) {
          AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58
                    (pAVar5,1.0,(MethodInfo *)0x0);
          pSVar2 = param_1->___U3CU3E4__this_0;
          if (param_2 <= 0.0) {
            if (pSVar2 == (SideMenu_tD900EEBEF28F284D7567E3D721E0DA61C0F5D1DF *)0x0)
            goto LAB_101dde43;
            pAVar6 = pSVar2->___openClip_14;
          }
          else {
            if (pSVar2 == (SideMenu_tD900EEBEF28F284D7567E3D721E0DA61C0F5D1DF *)0x0)
            goto LAB_101dde43;
            pAVar6 = pSVar2->___closeClip_15;
          }
          AudioSource_set_clip_mD1F50F7BA6EA3AF25B4922473352C5180CFF7B2B
                    (pAVar5,pAVar6,(MethodInfo *)0x0);
          AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(pAVar5,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_101dde43:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
