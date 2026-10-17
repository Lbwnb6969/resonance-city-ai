// RVA 0x4f0a30 | Placemaker.Ui.LanguageButtons$$SetLanguage
// PDB: LanguageButtons_SetLanguage_m07CB1C84470821D24475BEA3C49BB2646008FB66
// Body: [[104f0a30, 104f0b9e]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 105012a0 LocalizationManager_set_CurrentLanguage_m34D4349FF2CF0F39EE376F2AA5B3FB6409FA6B1F
// 10a037d0 SaveSystem_SetSettingsDirty_mD4FFF1F8BED42A5DBE32A3F956E5B0BC9B9F5219
// 10a35dc0 Application_get_systemLanguage_m97271242ECD614FD02DC6BEB912CDDB6DD2BD045
// 10d00a20 Dictionary_2_TryGetValue_m2377E865A8C08B77CE2108585784C9118DAE4E2A_gshared
// 10f044a0 String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D
// 11030e80 List_1_Contains_m99C700668AC6D272188471D2D6B784A2B5636C8E_gshared

void __cdecl
LanguageButtons_SetLanguage_m07CB1C84470821D24475BEA3C49BB2646008FB66
          (LanguageButtons_t9A4ECA21F7C2216092FC318A31A8492996DE2564 *param_1,String_t *param_2,
          MethodInfo *param_3)

{
  Dictionary_2_t05DA59462DB2B73E336E6741454AE4A402C9178B *pDVar1;
  WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *pWVar2;
  SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *pSVar3;
  SettingsData_t30CD9D6FCE66CFF6FA25505CC0D4FF98CE403617 *pSVar4;
  String_t *pSVar5;
  bool bVar6;
  AchievementID_t13562D86FC9C116E950E863A44792F46EBFFE67D AVar7;
  String_t *local_8;

  if (DAT_1151d21d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2_TryGetValue_m09942C057E7748D3524066F937AF601A1FA472DA_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Contains_m2EAD2DADA0478175052301E48FCE772ECD9A6F5F_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       LocalizationManager_tA07F6B18C9937F5CCABD00EF1813A2B0D02BFE2B_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata((uint *)&String_t_il2cpp_TypeInfo_var);
    DAT_1151d21d = '\x01';
  }
  local_8 = (String_t *)0x0;
  if (param_1->___languages_5 != (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)0x0) {
    bVar6 = List_1_Contains_m99C700668AC6D272188471D2D6B784A2B5636C8E_gshared
                      ((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)param_1->___languages_5,
                       (Il2CppObject *)param_2,
                       List_1_Contains_m2EAD2DADA0478175052301E48FCE772ECD9A6F5F_RuntimeMethod_var);
    if (!bVar6) {
      return;
    }
    if ((LocalizationManager_tA07F6B18C9937F5CCABD00EF1813A2B0D02BFE2B_il2cpp_TypeInfo_var->
         has_cctor != '\0') &&
       (LocalizationManager_tA07F6B18C9937F5CCABD00EF1813A2B0D02BFE2B_il2cpp_TypeInfo_var->
        cctor_finished == 0)) {
      il2cpp_runtime_class_init
                (LocalizationManager_tA07F6B18C9937F5CCABD00EF1813A2B0D02BFE2B_il2cpp_TypeInfo_var);
    }
    LocalizationManager_set_CurrentLanguage_m34D4349FF2CF0F39EE376F2AA5B3FB6409FA6B1F
              (param_2,(MethodInfo *)0x0);
    pDVar1 = (Dictionary_2_t05DA59462DB2B73E336E6741454AE4A402C9178B *)param_1->___systemLanguages_8
    ;
    AVar7.___id_0 =
         (String_t *)
         Application_get_systemLanguage_m97271242ECD614FD02DC6BEB912CDDB6DD2BD045((MethodInfo *)0x0)
    ;
    if (pDVar1 != (Dictionary_2_t05DA59462DB2B73E336E6741454AE4A402C9178B *)0x0) {
      bVar6 = Dictionary_2_TryGetValue_m2377E865A8C08B77CE2108585784C9118DAE4E2A_gshared
                        (pDVar1,AVar7,(Il2CppObject **)&local_8,
                         Dictionary_2_TryGetValue_m09942C057E7748D3524066F937AF601A1FA472DA_RuntimeMethod_var
                        );
      if (bVar6) {
        if (param_2 == (String_t *)0x0) goto LAB_104f0b9a;
        bVar6 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D
                          (param_2,local_8,(MethodInfo *)0x0);
        if (bVar6) {
          param_2 = *(String_t **)String_t_il2cpp_TypeInfo_var->static_fields;
        }
      }
      if ((((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
           (pWVar2 = param_1->___master_4->___worldMaster_5,
           pWVar2 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)) &&
          (pSVar3 = pWVar2->___saveSystem_35,
          pSVar3 != (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *)0x0)) &&
         ((pSVar4 = pSVar3->___settingsData_10,
          pSVar4 != (SettingsData_t30CD9D6FCE66CFF6FA25505CC0D4FF98CE403617 *)0x0 &&
          (pSVar5 = pSVar4->___language_8, pSVar5 != (String_t *)0x0)))) {
        bVar6 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D
                          (pSVar5,param_2,(MethodInfo *)0x0);
        if (bVar6) {
          return;
        }
        if (((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
            (pWVar2 = param_1->___master_4->___worldMaster_5,
            pWVar2 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)) &&
           ((pSVar3 = pWVar2->___saveSystem_35,
            pSVar3 != (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *)0x0 &&
            (pSVar4 = pSVar3->___settingsData_10,
            pSVar4 != (SettingsData_t30CD9D6FCE66CFF6FA25505CC0D4FF98CE403617 *)0x0)))) {
          pSVar4->___language_8 = param_2;
          if (((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0)
              && (pWVar2 = param_1->___master_4->___worldMaster_5,
                 pWVar2 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)) &&
             (pSVar3 = pWVar2->___saveSystem_35,
             pSVar3 != (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *)0x0)) {
            SaveSystem_SetSettingsDirty_mD4FFF1F8BED42A5DBE32A3F956E5B0BC9B9F5219
                      (pSVar3,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
LAB_104f0b9a:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
