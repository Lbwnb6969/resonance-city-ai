// RVA 0x2fa450 | Placemaker.Ui.SoundButton$$Button_Slider
// PDB: SoundButton_Button_Slider_mAB90E833A4725A9DC6DAC5A98DC762AFB90F20BA
// Body: [[102fa450, 102fa516]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 102fa910 SoundButton_UpdateVolume_m0C2E6ADA265D869020AB7838773BECB03BF2BB61
// 103e9500 UpdateState_get_targetBool_m46A8B6EC49CDAA67B6301431418CB0F23E1F915F
// 10880610 Bitwise_SetBit_mE96C3FEEF70EF527A878D4AD14F8042E808E6C1B
// 10a037d0 SaveSystem_SetSettingsDirty_mD4FFF1F8BED42A5DBE32A3F956E5B0BC9B9F5219
// 10a43ab0 Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C
// 10a44370 Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
SoundButton_Button_Slider_mAB90E833A4725A9DC6DAC5A98DC762AFB90F20BA
          (SoundButton_t3A64E30E13D6F873DC4C0619867A0944C9AA7000 *param_1,float param_2,
          MethodInfo *param_3)

{
  WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *pWVar1;
  SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *pSVar2;
  SettingsData_t30CD9D6FCE66CFF6FA25505CC0D4FF98CE403617 *pSVar3;
  bool bVar4;
  int iVar5;
  float fVar6;

  fVar6 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(param_2,(MethodInfo *)0x0);
  iVar5 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD
                    (fVar6 * ___real_42fe0000,(MethodInfo *)0x0);
  param_2 = (float)CONCAT13((char)iVar5,param_2._0_3_);
  if (param_1->___soundState_7 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
    bVar4 = UpdateState_get_targetBool_m46A8B6EC49CDAA67B6301431418CB0F23E1F915F
                      (param_1->___soundState_7,(MethodInfo *)0x0);
    Bitwise_SetBit_mE96C3FEEF70EF527A878D4AD14F8042E808E6C1B
              ((uchar *)((int)&param_2 + 3),7,bVar4,(MethodInfo *)0x0);
    if ((((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
         (pWVar1 = param_1->___master_4->___worldMaster_5,
         pWVar1 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)) &&
        (pSVar2 = pWVar1->___saveSystem_35,
        pSVar2 != (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *)0x0)) &&
       (pSVar3 = pSVar2->___settingsData_10,
       pSVar3 != (SettingsData_t30CD9D6FCE66CFF6FA25505CC0D4FF98CE403617 *)0x0)) {
      if (param_2._3_1_ != pSVar3->___audioVolume_3) {
        pSVar3->___audioVolume_3 = param_2._3_1_;
        if (((param_1->___master_4 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) ||
            (pWVar1 = param_1->___master_4->___worldMaster_5,
            pWVar1 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)) ||
           (pSVar2 = pWVar1->___saveSystem_35,
           pSVar2 == (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *)0x0))
        goto LAB_102fa512;
        SaveSystem_SetSettingsDirty_mD4FFF1F8BED42A5DBE32A3F956E5B0BC9B9F5219
                  (pSVar2,(MethodInfo *)0x0);
      }
      SoundButton_UpdateVolume_m0C2E6ADA265D869020AB7838773BECB03BF2BB61(param_1,(MethodInfo *)0x0);
      return;
    }
  }
LAB_102fa512:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
