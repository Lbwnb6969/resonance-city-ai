// RVA 0xa04aa0 | Placemaker.Ui.ScreenshotButtons$$Button_InputUpdated
// PDB: ScreenshotButtons_Button_InputUpdated_mA9A5706AA9A3E35CA14AD821032369679243A748
// Body: [[10a04aa0, 10a04c6c]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103e9560 UpdateState_set_current_m4572798247E29F668F5B2D3BDDFC6BC78D302BE5
// 1066da00 Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258
// 10858820 TMP_InputField_set_text_m52BC8546DFA3BD649C2EBD1C9548C8DBFC4A87BB
// 10905cb0 Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C
// 10906300 Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411
// 10a06ed0 ScreenshotFrame_UpdateSize_mF4ACB817AA882E83291BBE90B00198474B59A5EA
// 10a43b20 Mathf_Clamp_mAD0781EB7470594CD4482DD64A0D739E4E539C3C

void __cdecl
ScreenshotButtons_Button_InputUpdated_mA9A5706AA9A3E35CA14AD821032369679243A748
          (ScreenshotButtons_t36FF37FF4142755CD948572FF8DFA7B3E9E67307 *param_1,MethodInfo *param_2)

{
  int *piVar1;
  int *piVar2;
  TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 *pTVar3;
  WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *pWVar4;
  SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *pSVar5;
  SettingsData_t30CD9D6FCE66CFF6FA25505CC0D4FF98CE403617 *pSVar6;
  ScreenshotFrame_t8DAC4269F3A291128EB54EA2741416DBF9981E45 *pSVar7;
  int iVar8;
  String_t *pSVar9;
  float fVar10;

  if (param_1->___widthInput_16 != (TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 *)0x0)
  {
    piVar1 = &param_1->___width_19;
    iVar8 = Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C
                      (param_1->___widthInput_16->___m_Text_59,(MethodInfo *)0x0);
    *piVar1 = iVar8;
    if (param_1->___heightInput_17 !=
        (TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 *)0x0) {
      piVar2 = &param_1->___height_20;
      iVar8 = Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C
                        (param_1->___heightInput_17->___m_Text_59,(MethodInfo *)0x0);
      *piVar2 = iVar8;
      iVar8 = Mathf_Clamp_mAD0781EB7470594CD4482DD64A0D739E4E539C3C
                        (*piVar1,0x10,0x1000,(MethodInfo *)0x0);
      if (*piVar1 != iVar8) {
        if (param_1->___errorWidth_12 ==
            (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) goto LAB_10a04c68;
        UpdateState_set_current_m4572798247E29F668F5B2D3BDDFC6BC78D302BE5
                  (param_1->___errorWidth_12,1.0,(MethodInfo *)0x0);
        *piVar1 = iVar8;
        pTVar3 = param_1->___widthInput_16;
        pSVar9 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411(piVar1,(MethodInfo *)0x0);
        if (pTVar3 == (TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 *)0x0)
        goto LAB_10a04c68;
        TMP_InputField_set_text_m52BC8546DFA3BD649C2EBD1C9548C8DBFC4A87BB
                  (pTVar3,pSVar9,(MethodInfo *)0x0);
      }
      iVar8 = Mathf_Clamp_mAD0781EB7470594CD4482DD64A0D739E4E539C3C
                        (*piVar2,0x10,0x1000,(MethodInfo *)0x0);
      if (*piVar2 != iVar8) {
        if (param_1->___errorHeight_13 ==
            (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) goto LAB_10a04c68;
        UpdateState_set_current_m4572798247E29F668F5B2D3BDDFC6BC78D302BE5
                  (param_1->___errorHeight_13,1.0,(MethodInfo *)0x0);
        *piVar2 = iVar8;
        pTVar3 = param_1->___heightInput_17;
        pSVar9 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411(piVar2,(MethodInfo *)0x0);
        if (pTVar3 == (TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 *)0x0)
        goto LAB_10a04c68;
        TMP_InputField_set_text_m52BC8546DFA3BD649C2EBD1C9548C8DBFC4A87BB
                  (pTVar3,pSVar9,(MethodInfo *)0x0);
      }
      if ((((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
           (pWVar4 = param_1->___master_4->___worldMaster_5,
           pWVar4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)) &&
          (pSVar5 = pWVar4->___saveSystem_35,
          pSVar5 != (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *)0x0)) &&
         (pSVar6 = pSVar5->___settingsData_10,
         pSVar6 != (SettingsData_t30CD9D6FCE66CFF6FA25505CC0D4FF98CE403617 *)0x0)) {
        (pSVar6->___screenshot_9).___x_1 = *piVar1;
        if (((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
            (pWVar4 = param_1->___master_4->___worldMaster_5,
            pWVar4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)) &&
           ((pSVar5 = pWVar4->___saveSystem_35,
            pSVar5 != (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *)0x0 &&
            (pSVar6 = pSVar5->___settingsData_10,
            pSVar6 != (SettingsData_t30CD9D6FCE66CFF6FA25505CC0D4FF98CE403617 *)0x0)))) {
          (pSVar6->___screenshot_9).___y_2 = *piVar2;
          if (((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0)
              && (pWVar4 = param_1->___master_4->___worldMaster_5,
                 pWVar4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)) &&
             (pSVar5 = pWVar4->___saveSystem_35,
             pSVar5 != (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *)0x0)) {
            if (pSVar5->___settingsChangeTime_11 <= pSVar5->___settingsSaveTime_12) {
              fVar10 = Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258
                                 ((MethodInfo *)0x0);
              pSVar5->___settingsStartChangeTime_13 = fVar10;
            }
            fVar10 = Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258
                               ((MethodInfo *)0x0);
            pSVar5->___settingsChangeTime_11 = fVar10;
            pSVar7 = param_1->___frame_9;
            iVar8 = *piVar2;
            if (pSVar7 != (ScreenshotFrame_t8DAC4269F3A291128EB54EA2741416DBF9981E45 *)0x0) {
              pSVar7->___width_11 = param_1->___width_19;
              pSVar7->___height_12 = iVar8;
              ScreenshotFrame_UpdateSize_mF4ACB817AA882E83291BBE90B00198474B59A5EA
                        (pSVar7,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
LAB_10a04c68:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
