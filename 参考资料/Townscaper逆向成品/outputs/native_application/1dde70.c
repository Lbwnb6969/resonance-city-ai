// RVA 0x1dde70 | Placemaker.Ui.ScreenshotButtons.<>c__DisplayClass20_0$$<Placemaker.Ui.UiMaster.IUiSetup.OnSetup>b__4
// PDB: U3CU3Ec__DisplayClass20_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__4_mE19E0B157369B9E74BA53FA6D97ADB07CFCE5500
// Body: [[101dde70, 101de0ac]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103e5930 UiMaster_DefaultPath_m7B34E896C34419876ED19C2CC57601B1122E11F8
// 10858820 TMP_InputField_set_text_m52BC8546DFA3BD649C2EBD1C9548C8DBFC4A87BB
// 10906300 Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411
// 10a06eb0 ScreenshotFrame_SetSize_mC7389117778175AA7BF5552EDAE1E0F6825D9394
// 10a43b20 Mathf_Clamp_mAD0781EB7470594CD4482DD64A0D739E4E539C3C
// 10a4aa60 Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
// 10b19040 Directory_CreateDirectory_m38040338519C48CE52137CC146372A153D5C6A7A
// 10b198a0 Directory_Exists_m17E38B91F6D9A0064D614FF2237BBFC0127468FE
// 10f0a070 String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2

void __cdecl
U3CU3Ec__DisplayClass20_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__4_mE19E0B157369B9E74BA53FA6D97ADB07CFCE5500
          (U3CU3Ec__DisplayClass20_0_t7B4BB739803156022C6247A2D79724DD8FB9530D *param_1,
          MethodInfo *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *pUVar3;
  SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *pSVar4;
  SettingsData_t30CD9D6FCE66CFF6FA25505CC0D4FF98CE403617 *pSVar5;
  ScreenshotButtons_t36FF37FF4142755CD948572FF8DFA7B3E9E67307 *pSVar6;
  TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 *pTVar7;
  bool bVar8;
  String_t *pSVar9;
  int iVar10;
  int iVar11;
  String_t *pSVar12;
  String_t *local_10;
  int iStack_c;

  if (DAT_1151b006 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralA86C0DCC60E932791FC077C3431D7EDAD7535093);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
    DAT_1151b006 = '\x01';
  }
  pUVar3 = param_1->___master_1;
  if ((((pUVar3 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) ||
       (pUVar3->___worldMaster_5 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0))
      || (pSVar4 = pUVar3->___worldMaster_5->___saveSystem_35,
         pSVar4 == (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *)0x0)) ||
     (pSVar5 = pSVar4->___settingsData_10,
     pSVar5 == (SettingsData_t30CD9D6FCE66CFF6FA25505CC0D4FF98CE403617 *)0x0)) goto LAB_101de0a8;
  uVar1 = (pSVar5->___screenshot_9).___path_0;
  uVar2 = (pSVar5->___screenshot_9).___x_1;
  iVar11 = (pSVar5->___screenshot_9).___y_2;
  pSVar9 = UiMaster_DefaultPath_m7B34E896C34419876ED19C2CC57601B1122E11F8
                     (pUVar3,_stringLiteralA86C0DCC60E932791FC077C3431D7EDAD7535093,
                      (MethodInfo *)0x0);
  bVar8 = Directory_Exists_m17E38B91F6D9A0064D614FF2237BBFC0127468FE(pSVar9,(MethodInfo *)0x0);
  if (!bVar8) {
    bVar8 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2
                      (pSVar9,_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709,
                       (MethodInfo *)0x0);
    if (bVar8) {
      Directory_CreateDirectory_m38040338519C48CE52137CC146372A153D5C6A7A(pSVar9,(MethodInfo *)0x0);
    }
  }
  if ((String_t *)uVar1 == (String_t *)0x0) {
LAB_101ddf56:
    pSVar12 = pSVar9;
  }
  else {
    bVar8 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2
                      ((String_t *)uVar1,_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709,
                       (MethodInfo *)0x0);
    if (!bVar8) goto LAB_101ddf56;
    bVar8 = Directory_Exists_m17E38B91F6D9A0064D614FF2237BBFC0127468FE
                      ((String_t *)uVar1,(MethodInfo *)0x0);
    pSVar12 = (String_t *)uVar1;
    if (!bVar8) goto LAB_101ddf56;
  }
  pSVar6 = param_1->___U3CU3E4__this_0;
  iVar10 = Mathf_Clamp_mAD0781EB7470594CD4482DD64A0D739E4E539C3C
                     (uVar2,0x10,0x1000,(MethodInfo *)0x0);
  if (pSVar6 != (ScreenshotButtons_t36FF37FF4142755CD948572FF8DFA7B3E9E67307 *)0x0) {
    pSVar6->___width_19 = iVar10;
    pSVar6 = param_1->___U3CU3E4__this_0;
    iVar11 = Mathf_Clamp_mAD0781EB7470594CD4482DD64A0D739E4E539C3C
                       (iVar11,0x10,0x1000,(MethodInfo *)0x0);
    if (pSVar6 != (ScreenshotButtons_t36FF37FF4142755CD948572FF8DFA7B3E9E67307 *)0x0) {
      pSVar6->___height_20 = iVar11;
      if (param_1->___U3CU3E4__this_0 !=
          (ScreenshotButtons_t36FF37FF4142755CD948572FF8DFA7B3E9E67307 *)0x0) {
        pTVar7 = param_1->___U3CU3E4__this_0->___pathInput_18;
        if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0'
            ) && (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->
                  cctor_finished == 0)) {
          il2cpp_runtime_class_init
                    (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
        }
        bVar8 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                          ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pTVar7,
                           (MethodInfo *)0x0);
        if (bVar8) {
          if ((param_1->___U3CU3E4__this_0 ==
               (ScreenshotButtons_t36FF37FF4142755CD948572FF8DFA7B3E9E67307 *)0x0) ||
             (pTVar7 = param_1->___U3CU3E4__this_0->___pathInput_18,
             pTVar7 == (TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 *)0x0))
          goto LAB_101de0a8;
          TMP_InputField_set_text_m52BC8546DFA3BD649C2EBD1C9548C8DBFC4A87BB
                    (pTVar7,pSVar12,(MethodInfo *)0x0);
        }
        if (param_1->___U3CU3E4__this_0 !=
            (ScreenshotButtons_t36FF37FF4142755CD948572FF8DFA7B3E9E67307 *)0x0) {
          pTVar7 = param_1->___U3CU3E4__this_0->___widthInput_16;
          if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor !=
               '\0') &&
             (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished
              == 0)) {
            il2cpp_runtime_class_init
                      (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
          }
          bVar8 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                            ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pTVar7,
                             (MethodInfo *)0x0);
          if (bVar8) {
            pSVar6 = param_1->___U3CU3E4__this_0;
            if (pSVar6 == (ScreenshotButtons_t36FF37FF4142755CD948572FF8DFA7B3E9E67307 *)0x0)
            goto LAB_101de0a8;
            pTVar7 = pSVar6->___widthInput_16;
            pSVar9 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411
                               (&pSVar6->___width_19,(MethodInfo *)0x0);
            if (pTVar7 == (TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 *)0x0)
            goto LAB_101de0a8;
            TMP_InputField_set_text_m52BC8546DFA3BD649C2EBD1C9548C8DBFC4A87BB
                      (pTVar7,pSVar9,(MethodInfo *)0x0);
            pSVar6 = param_1->___U3CU3E4__this_0;
            if (pSVar6 == (ScreenshotButtons_t36FF37FF4142755CD948572FF8DFA7B3E9E67307 *)0x0)
            goto LAB_101de0a8;
            pTVar7 = pSVar6->___heightInput_17;
            pSVar9 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411
                               (&pSVar6->___height_20,(MethodInfo *)0x0);
            if (pTVar7 == (TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 *)0x0)
            goto LAB_101de0a8;
            TMP_InputField_set_text_m52BC8546DFA3BD649C2EBD1C9548C8DBFC4A87BB
                      (pTVar7,pSVar9,(MethodInfo *)0x0);
          }
          pSVar6 = param_1->___U3CU3E4__this_0;
          if ((pSVar6 != (ScreenshotButtons_t36FF37FF4142755CD948572FF8DFA7B3E9E67307 *)0x0) &&
             (pSVar6->___frame_9 != (ScreenshotFrame_t8DAC4269F3A291128EB54EA2741416DBF9981E45 *)0x0
             )) {
            ScreenshotFrame_SetSize_mC7389117778175AA7BF5552EDAE1E0F6825D9394
                      (pSVar6->___frame_9,pSVar6->___width_19,pSVar6->___height_20,(MethodInfo *)0x0
                      );
            return;
          }
        }
      }
    }
  }
LAB_101de0a8:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
