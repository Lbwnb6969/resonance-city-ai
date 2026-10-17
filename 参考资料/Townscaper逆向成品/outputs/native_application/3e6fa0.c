// RVA 0x3e6fa0 | Placemaker.Ui.UiMaster$$UpdateVSync
// PDB: UiMaster_UpdateVSync_mC68841C90B1119DA7D6C4D8DA53FDBB6164DBEB7
// Body: [[103e6fa0, 103e6fdb]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1065f390 QualitySettings_set_vSyncCount_mE91593C022E003EC0028C9F86751FDF160F32A9E

void __cdecl
UiMaster_UpdateVSync_mC68841C90B1119DA7D6C4D8DA53FDBB6164DBEB7
          (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *param_1,MethodInfo *param_2)

{
  SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *pSVar1;
  SettingsData_t30CD9D6FCE66CFF6FA25505CC0D4FF98CE403617 *pSVar2;

  if (((param_1->___worldMaster_5 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)
      && (pSVar1 = param_1->___worldMaster_5->___saveSystem_35,
         pSVar1 != (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *)0x0)) &&
     (pSVar2 = pSVar1->___settingsData_10,
     pSVar2 != (SettingsData_t30CD9D6FCE66CFF6FA25505CC0D4FF98CE403617 *)0x0)) {
    QualitySettings_set_vSyncCount_mE91593C022E003EC0028C9F86751FDF160F32A9E
              ((pSVar2->___vSync_6 != false) + 1,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
