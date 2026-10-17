// RVA 0x2fa520 | Placemaker.Ui.SoundButton$$Button_Toggle
// PDB: SoundButton_Button_Toggle_mC24696C65AE30D17A8EDB1AF8813F06B0690B433
// Body: [[102fa520, 102fa59f]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 102fa910 SoundButton_UpdateVolume_m0C2E6ADA265D869020AB7838773BECB03BF2BB61
// 103e9500 UpdateState_get_targetBool_m46A8B6EC49CDAA67B6301431418CB0F23E1F915F
// 103e9590 UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
// 10880610 Bitwise_SetBit_mE96C3FEEF70EF527A878D4AD14F8042E808E6C1B

void __cdecl
SoundButton_Button_Toggle_mC24696C65AE30D17A8EDB1AF8813F06B0690B433
          (SoundButton_t3A64E30E13D6F873DC4C0619867A0944C9AA7000 *param_1,MethodInfo *param_2)

{
  UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *pUVar1;
  WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *pWVar2;
  SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *pSVar3;
  SettingsData_t30CD9D6FCE66CFF6FA25505CC0D4FF98CE403617 *pSVar4;
  bool bVar5;

  pUVar1 = param_1->___soundState_7;
  if (pUVar1 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
    bVar5 = UpdateState_get_targetBool_m46A8B6EC49CDAA67B6301431418CB0F23E1F915F
                      (pUVar1,(MethodInfo *)0x0);
    UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
              (pUVar1,!bVar5,(MethodInfo *)0x0);
    if ((((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
         (pWVar2 = param_1->___master_4->___worldMaster_5,
         pWVar2 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)) &&
        (pSVar3 = pWVar2->___saveSystem_35,
        pSVar3 != (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *)0x0)) &&
       ((pSVar4 = pSVar3->___settingsData_10,
        pSVar4 != (SettingsData_t30CD9D6FCE66CFF6FA25505CC0D4FF98CE403617 *)0x0 &&
        (param_1->___soundState_7 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0)))
       ) {
      bVar5 = UpdateState_get_targetBool_m46A8B6EC49CDAA67B6301431418CB0F23E1F915F
                        (param_1->___soundState_7,(MethodInfo *)0x0);
      Bitwise_SetBit_mE96C3FEEF70EF527A878D4AD14F8042E808E6C1B
                (&pSVar4->___audioVolume_3,7,bVar5,(MethodInfo *)0x0);
      SoundButton_UpdateVolume_m0C2E6ADA265D869020AB7838773BECB03BF2BB61(param_1,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
