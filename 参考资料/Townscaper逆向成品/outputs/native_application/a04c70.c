// RVA 0xa04c70 | Placemaker.Ui.ScreenshotButtons$$Button_PathUpdated
// PDB: ScreenshotButtons_Button_PathUpdated_mD4ADCF234786C803842AEA42090D843AC824215C
// Body: [[10a04c70, 10a04e20]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103e5930 UiMaster_DefaultPath_m7B34E896C34419876ED19C2CC57601B1122E11F8
// 103e9560 UpdateState_set_current_m4572798247E29F668F5B2D3BDDFC6BC78D302BE5
// 1066da00 Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258
// 10858820 TMP_InputField_set_text_m52BC8546DFA3BD649C2EBD1C9548C8DBFC4A87BB
// 10b198a0 Directory_Exists_m17E38B91F6D9A0064D614FF2237BBFC0127468FE
// 10f04510 String_Equals_mAFC6038D294F341434D9D67D7EADC7F97C556C9B
// 10f0a070 String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2

void __cdecl
ScreenshotButtons_Button_PathUpdated_mD4ADCF234786C803842AEA42090D843AC824215C
          (ScreenshotButtons_t36FF37FF4142755CD948572FF8DFA7B3E9E67307 *param_1,MethodInfo *param_2)

{
  TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 *pTVar1;
  WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *pWVar2;
  SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *pSVar3;
  SettingsData_t30CD9D6FCE66CFF6FA25505CC0D4FF98CE403617 *pSVar4;
  bool bVar5;
  String_t *pSVar6;
  String_t *pSVar7;
  float fVar8;

  if (DAT_115201c4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralA86C0DCC60E932791FC077C3431D7EDAD7535093);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
    DAT_115201c4 = '\x01';
  }
  if (param_1->___pathInput_18 == (TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 *)0x0)
  goto LAB_10a04e1c;
  pSVar7 = param_1->___pathInput_18->___m_Text_59;
  if (((pSVar7 == (String_t *)0x0) ||
      (bVar5 = String_Equals_mAFC6038D294F341434D9D67D7EADC7F97C556C9B
                         (pSVar7,_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709,
                          (MethodInfo *)0x0), bVar5)) ||
     (bVar5 = Directory_Exists_m17E38B91F6D9A0064D614FF2237BBFC0127468FE(pSVar7,(MethodInfo *)0x0),
     !bVar5)) {
    if (param_1->___errorPath_14 == (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0)
    goto LAB_10a04e1c;
    UpdateState_set_current_m4572798247E29F668F5B2D3BDDFC6BC78D302BE5
              (param_1->___errorPath_14,1.0,(MethodInfo *)0x0);
    if (DAT_115201c7 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                ((uint *)&_stringLiteralA86C0DCC60E932791FC077C3431D7EDAD7535093);
      DAT_115201c7 = '\x01';
    }
    pTVar1 = param_1->___pathInput_18;
    if ((param_1->___master_4 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) ||
       (pSVar7 = UiMaster_DefaultPath_m7B34E896C34419876ED19C2CC57601B1122E11F8
                           (param_1->___master_4,
                            _stringLiteralA86C0DCC60E932791FC077C3431D7EDAD7535093,(MethodInfo *)0x0
                           ),
       pTVar1 == (TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 *)0x0))
    goto LAB_10a04e1c;
    TMP_InputField_set_text_m52BC8546DFA3BD649C2EBD1C9548C8DBFC4A87BB
              (pTVar1,pSVar7,(MethodInfo *)0x0);
    pSVar6 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
  }
  else {
    if (param_1->___master_4 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0)
    goto LAB_10a04e1c;
    pSVar6 = UiMaster_DefaultPath_m7B34E896C34419876ED19C2CC57601B1122E11F8
                       (param_1->___master_4,_stringLiteralA86C0DCC60E932791FC077C3431D7EDAD7535093,
                        (MethodInfo *)0x0);
    bVar5 = String_Equals_mAFC6038D294F341434D9D67D7EADC7F97C556C9B(pSVar7,pSVar6,(MethodInfo *)0x0)
    ;
    pSVar6 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
    if (!bVar5) {
      pSVar6 = pSVar7;
    }
  }
  if (((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
      (pWVar2 = param_1->___master_4->___worldMaster_5,
      pWVar2 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)) &&
     ((pSVar3 = pWVar2->___saveSystem_35,
      pSVar3 != (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *)0x0 &&
      (pSVar4 = pSVar3->___settingsData_10,
      pSVar4 != (SettingsData_t30CD9D6FCE66CFF6FA25505CC0D4FF98CE403617 *)0x0)))) {
    bVar5 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2
                      (pSVar6,(pSVar4->___screenshot_9).___path_0,(MethodInfo *)0x0);
    if (!bVar5) {
      return;
    }
    if ((((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
         (pWVar2 = param_1->___master_4->___worldMaster_5,
         pWVar2 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)) &&
        (pSVar3 = pWVar2->___saveSystem_35,
        pSVar3 != (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *)0x0)) &&
       (pSVar4 = pSVar3->___settingsData_10,
       pSVar4 != (SettingsData_t30CD9D6FCE66CFF6FA25505CC0D4FF98CE403617 *)0x0)) {
      (pSVar4->___screenshot_9).___path_0 = pSVar6;
      if (((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
          (pWVar2 = param_1->___master_4->___worldMaster_5,
          pWVar2 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)) &&
         (pSVar3 = pWVar2->___saveSystem_35,
         pSVar3 != (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *)0x0)) {
        if (pSVar3->___settingsChangeTime_11 <= pSVar3->___settingsSaveTime_12) {
          fVar8 = Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258((MethodInfo *)0x0)
          ;
          pSVar3->___settingsStartChangeTime_13 = fVar8;
        }
        fVar8 = Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258((MethodInfo *)0x0);
        pSVar3->___settingsChangeTime_11 = fVar8;
        return;
      }
    }
  }
LAB_10a04e1c:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
