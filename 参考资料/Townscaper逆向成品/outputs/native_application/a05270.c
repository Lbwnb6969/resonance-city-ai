// RVA 0xa05270 | Placemaker.Ui.ScreenshotButtons$$Button_SetPath
// PDB: ScreenshotButtons_Button_SetPath_m03358773F7AA14ABFF4311DD4FB8AEF905827C3B
// Body: [[10a05270, 10a05350]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103e5930 UiMaster_DefaultPath_m7B34E896C34419876ED19C2CC57601B1122E11F8
// 10ac53c0 FileBrowser_OpenSingleFolder_mF229ECA339F12FE4C30B8EE8BAB18034AAA59FF5
// 10b198a0 Directory_Exists_m17E38B91F6D9A0064D614FF2237BBFC0127468FE
// 10c1d150 Singleton_1_get_Instance_m4E8C37BD2935D7C403E1FC595DD35897728836B4_gshared

void __cdecl
ScreenshotButtons_Button_SetPath_m03358773F7AA14ABFF4311DD4FB8AEF905827C3B
          (ScreenshotButtons_t36FF37FF4142755CD948572FF8DFA7B3E9E67307 *param_1,MethodInfo *param_2)

{
  WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *pWVar1;
  SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *pSVar2;
  SettingsData_t30CD9D6FCE66CFF6FA25505CC0D4FF98CE403617 *pSVar3;
  bool bVar4;
  String_t *pSVar5;
  FileBrowser_t31868B98C085AF75757CAD6D10A9911254D0028E *pFVar6;

  if (DAT_115201c5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Singleton_1_get_Instance_mCED330DE853BBDFBF90FDB47109C277CC35E9E3C_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Singleton_1_t887DC8229FBD4CC71E760D8D1CF1867EDCBA6673_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralA86C0DCC60E932791FC077C3431D7EDAD7535093);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralB515F5AA27A7DBCC0927822B5747D555E7298133);
    DAT_115201c5 = '\x01';
  }
  if ((((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
       (pWVar1 = param_1->___master_4->___worldMaster_5,
       pWVar1 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)) &&
      (pSVar2 = pWVar1->___saveSystem_35,
      pSVar2 != (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *)0x0)) &&
     (pSVar3 = pSVar2->___settingsData_10,
     pSVar3 != (SettingsData_t30CD9D6FCE66CFF6FA25505CC0D4FF98CE403617 *)0x0)) {
    pSVar5 = (pSVar3->___screenshot_9).___path_0;
    bVar4 = Directory_Exists_m17E38B91F6D9A0064D614FF2237BBFC0127468FE(pSVar5,(MethodInfo *)0x0);
    if (!bVar4) {
      if (param_1->___master_4 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0)
      goto LAB_10a0534c;
      pSVar5 = UiMaster_DefaultPath_m7B34E896C34419876ED19C2CC57601B1122E11F8
                         (param_1->___master_4,
                          _stringLiteralA86C0DCC60E932791FC077C3431D7EDAD7535093,(MethodInfo *)0x0);
    }
    if ((Singleton_1_t887DC8229FBD4CC71E760D8D1CF1867EDCBA6673_il2cpp_TypeInfo_var->has_cctor !=
         '\0') &&
       (Singleton_1_t887DC8229FBD4CC71E760D8D1CF1867EDCBA6673_il2cpp_TypeInfo_var->cctor_finished ==
        0)) {
      il2cpp_runtime_class_init
                (Singleton_1_t887DC8229FBD4CC71E760D8D1CF1867EDCBA6673_il2cpp_TypeInfo_var);
    }
    pFVar6 = (FileBrowser_t31868B98C085AF75757CAD6D10A9911254D0028E *)
             Singleton_1_get_Instance_m4E8C37BD2935D7C403E1FC595DD35897728836B4_gshared
                       (
                       Singleton_1_get_Instance_mCED330DE853BBDFBF90FDB47109C277CC35E9E3C_RuntimeMethod_var
                       );
    if (pFVar6 != (FileBrowser_t31868B98C085AF75757CAD6D10A9911254D0028E *)0x0) {
      FileBrowser_OpenSingleFolder_mF229ECA339F12FE4C30B8EE8BAB18034AAA59FF5
                (pFVar6,_stringLiteralB515F5AA27A7DBCC0927822B5747D555E7298133,pSVar5,
                 (MethodInfo *)0x0);
      return;
    }
  }
LAB_10a0534c:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
