// RVA 0xa05360 | Placemaker.Ui.ScreenshotButtons$$OnFolderBrowsingComplete
// PDB: ScreenshotButtons_OnFolderBrowsingComplete_mDB3F455ECEB7A8692369268C3D634F959E628673
// Body: [[10a05360, 10a054d9]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103e5930 UiMaster_DefaultPath_m7B34E896C34419876ED19C2CC57601B1122E11F8
// 1066da00 Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258
// 10b198a0 Directory_Exists_m17E38B91F6D9A0064D614FF2237BBFC0127468FE
// 10f04510 String_Equals_mAFC6038D294F341434D9D67D7EADC7F97C556C9B
// 10f0a070 String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2

void __cdecl
ScreenshotButtons_OnFolderBrowsingComplete_mDB3F455ECEB7A8692369268C3D634F959E628673
          (ScreenshotButtons_t36FF37FF4142755CD948572FF8DFA7B3E9E67307 *param_1,bool param_2,
          String_t *param_3,StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A *param_4,
          MethodInfo *param_5)

{
  undefined4 uVar1;
  UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *pUVar2;
  SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *pSVar3;
  SettingsData_t30CD9D6FCE66CFF6FA25505CC0D4FF98CE403617 *pSVar4;
  int iVar5;
  WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *pWVar6;
  bool bVar7;
  String_t *pSVar8;
  float fVar9;
  undefined8 local_10;

  if (DAT_115201c6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralA86C0DCC60E932791FC077C3431D7EDAD7535093);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
    DAT_115201c6 = '\x01';
  }
  if (!param_2) {
    return;
  }
  if (param_3 != (String_t *)0x0) {
    if (param_3->___m_stringLength_0 < 1) {
      return;
    }
    pUVar2 = param_1->___master_4;
    if ((((pUVar2 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
         (pUVar2->___worldMaster_5 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0))
        && (pSVar3 = pUVar2->___worldMaster_5->___saveSystem_35,
           pSVar3 != (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *)0x0)) &&
       (pSVar4 = pSVar3->___settingsData_10,
       pSVar4 != (SettingsData_t30CD9D6FCE66CFF6FA25505CC0D4FF98CE403617 *)0x0)) {
      uVar1 = (pSVar4->___screenshot_9).___x_1;
      iVar5 = (pSVar4->___screenshot_9).___y_2;
      pSVar8 = UiMaster_DefaultPath_m7B34E896C34419876ED19C2CC57601B1122E11F8
                         (pUVar2,_stringLiteralA86C0DCC60E932791FC077C3431D7EDAD7535093,
                          (MethodInfo *)0x0);
      bVar7 = String_Equals_mAFC6038D294F341434D9D67D7EADC7F97C556C9B
                        (param_3,pSVar8,(MethodInfo *)0x0);
      if ((bVar7) ||
         (bVar7 = Directory_Exists_m17E38B91F6D9A0064D614FF2237BBFC0127468FE
                            (param_3,(MethodInfo *)0x0), !bVar7)) {
        param_3 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
      }
      if (((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
          (pWVar6 = param_1->___master_4->___worldMaster_5,
          pWVar6 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)) &&
         ((pSVar3 = pWVar6->___saveSystem_35,
          pSVar3 != (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *)0x0 &&
          (pSVar4 = pSVar3->___settingsData_10,
          pSVar4 != (SettingsData_t30CD9D6FCE66CFF6FA25505CC0D4FF98CE403617 *)0x0)))) {
        bVar7 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2
                          (param_3,(pSVar4->___screenshot_9).___path_0,(MethodInfo *)0x0);
        if (!bVar7) {
          return;
        }
        if ((((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
             (pWVar6 = param_1->___master_4->___worldMaster_5,
             pWVar6 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)) &&
            (pSVar3 = pWVar6->___saveSystem_35,
            pSVar3 != (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *)0x0)) &&
           (pSVar4 = pSVar3->___settingsData_10,
           pSVar4 != (SettingsData_t30CD9D6FCE66CFF6FA25505CC0D4FF98CE403617 *)0x0)) {
          (pSVar4->___screenshot_9).___path_0 = param_3;
          (pSVar4->___screenshot_9).___x_1 = uVar1;
          (pSVar4->___screenshot_9).___y_2 = iVar5;
          if (((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0)
              && (pWVar6 = param_1->___master_4->___worldMaster_5,
                 pWVar6 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)) &&
             (pSVar3 = pWVar6->___saveSystem_35,
             pSVar3 != (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *)0x0)) {
            if (pSVar3->___settingsChangeTime_11 <= pSVar3->___settingsSaveTime_12) {
              fVar9 = Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258
                                ((MethodInfo *)0x0);
              pSVar3->___settingsStartChangeTime_13 = fVar9;
            }
            fVar9 = Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258
                              ((MethodInfo *)0x0);
            pSVar3->___settingsChangeTime_11 = fVar9;
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
