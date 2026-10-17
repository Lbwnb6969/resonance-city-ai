// RVA 0x1e0380 | Placemaker.Ui.LanguageButtons.<>c__DisplayClass6_0$$<Placemaker.Ui.UiMaster.IUiSetup.OnSetup>b__2
// PDB: U3CU3Ec__DisplayClass6_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__2_mEF61BF8129D71A450828583AE1A02D4AD831A070
// Body: [[101e0380, 101e03c0]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 104f0a30 LanguageButtons_SetLanguage_m07CB1C84470821D24475BEA3C49BB2646008FB66

void __cdecl
U3CU3Ec__DisplayClass6_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__2_mEF61BF8129D71A450828583AE1A02D4AD831A070
          (U3CU3Ec__DisplayClass6_0_t38BC4FC546AE22FDBE61EC02CDEE324CD34B775B *param_1,
          MethodInfo *param_2)

{
  WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *pWVar1;
  SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *pSVar2;
  SettingsData_t30CD9D6FCE66CFF6FA25505CC0D4FF98CE403617 *pSVar3;

  if ((((param_1->___master_3 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
       (pWVar1 = param_1->___master_3->___worldMaster_5,
       pWVar1 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)) &&
      (pSVar2 = pWVar1->___saveSystem_35,
      pSVar2 != (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *)0x0)) &&
     ((pSVar3 = pSVar2->___settingsData_10,
      pSVar3 != (SettingsData_t30CD9D6FCE66CFF6FA25505CC0D4FF98CE403617 *)0x0 &&
      (param_1->___U3CU3E4__this_0 !=
       (LanguageButtons_t9A4ECA21F7C2216092FC318A31A8492996DE2564 *)0x0)))) {
    LanguageButtons_SetLanguage_m07CB1C84470821D24475BEA3C49BB2646008FB66
              (param_1->___U3CU3E4__this_0,pSVar3->___language_8,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
