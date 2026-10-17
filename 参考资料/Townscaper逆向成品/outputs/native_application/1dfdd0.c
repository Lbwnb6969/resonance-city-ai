// RVA 0x1dfdd0 | Placemaker.SaveSystem.<>c__DisplayClass53_1$$<SaveMetaSaveToDisk>b__2
// PDB: U3CU3Ec__DisplayClass53_1_U3CSaveMetaSaveToDiskU3Eb__2_m451F6DEC218FF594541DD5A122B5E8907836A97E
// Body: [[101dfdd0, 101e007c]]
// Direct callees:
// 1003e420 Invoke
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10325c60 UnityAction_1_Invoke_m34CD3B09DF7371CBA265F13CD7255906D697232D_gshared
// 107426b0 Action_2_Invoke_m559D51ED807DC96F41CB2A2812DBD8BAA5BB05D9_gshared
// 10a00fa0 SaveSystem_ChangeState_m9CEF27747C53226925145C52040950CB19866597
// 10a037d0 SaveSystem_SetSettingsDirty_mD4FFF1F8BED42A5DBE32A3F956E5B0BC9B9F5219
// 10a3cbf0 Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8
// 10a4a920 Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54
// 10f02470 String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B
// 10f0a070 String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2

void __cdecl
U3CU3Ec__DisplayClass53_1_U3CSaveMetaSaveToDiskU3Eb__2_m451F6DEC218FF594541DD5A122B5E8907836A97E
          (U3CU3Ec__DisplayClass53_1_t7F21B1554E4212CF0FB688CA4336970F24FFB632 *param_1,
          MethodInfo *param_2)

{
  MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *pMVar1;
  SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *pSVar2;
  UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *pUVar3;
  SaveMenu_t5FABF5FD9F5391352EFA4B985C68F0D9E2D9E2E8 *pSVar4;
  UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 *pUVar5;
  SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *pSVar6;
  U3CU3Ec__DisplayClass53_0_tA404E1D2C349CD6D736063A0EECC54877C1B2CBA *pUVar7;
  MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *pMVar8;
  SettingsData_t30CD9D6FCE66CFF6FA25505CC0D4FF98CE403617 *pSVar9;
  bool bVar10;
  String_t *pSVar11;
  int iVar12;

  if (DAT_1151b004 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_2_Invoke_mBC46D443D51E9B6EFF8735B5586E955DE28F8670_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IAsyncRequest_t557E678C1B4AA12B82614BBB4162DDDB8B484778_il2cpp_TypeInfo_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral99B1CA2B66D7003A991F2BD982BF290D13337C41);
    DAT_1151b004 = '\x01';
  }
  if ((param_1->___CSU24U3CU3E8__locals1_2 !=
       (U3CU3Ec__DisplayClass53_0_tA404E1D2C349CD6D736063A0EECC54877C1B2CBA *)0x0) &&
     (pMVar1 = param_1->___CSU24U3CU3E8__locals1_2->___metaSave_0,
     pMVar1 != (MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *)0x0)) {
    pSVar11 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B
                        (_stringLiteral99B1CA2B66D7003A991F2BD982BF290D13337C41,pMVar1->___path_4,
                         (MethodInfo *)0x0);
    if ((Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->has_cctor != '\0') &&
       (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->cctor_finished == 0)) {
      il2cpp_runtime_class_init(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)
      ;
    }
    Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8((Il2CppObject *)pSVar11,(MethodInfo *)0x0);
    if (param_1->___request_1 != (Il2CppObject *)0x0) {
      iVar12 = InterfaceFuncInvoker0<int>::Invoke
                         (0,
                          IAsyncRequest_t557E678C1B4AA12B82614BBB4162DDDB8B484778_il2cpp_TypeInfo_var
                          ,param_1->___request_1);
      if ((param_1->___isNewSave_0 & iVar12 == 2) != 0) {
        if ((((param_1->___CSU24U3CU3E8__locals1_2 ==
               (U3CU3Ec__DisplayClass53_0_tA404E1D2C349CD6D736063A0EECC54877C1B2CBA *)0x0) ||
             (pSVar2 = param_1->___CSU24U3CU3E8__locals1_2->___U3CU3E4__this_1,
             pSVar2 == (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *)0x0)) ||
            (pSVar2->___worldMaster_4 ==
             (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)) ||
           ((pUVar3 = pSVar2->___worldMaster_4->___uiMaster_4,
            pUVar3 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0 ||
            (pSVar4 = pUVar3->___saveMenu_6,
            pSVar4 == (SaveMenu_t5FABF5FD9F5391352EFA4B985C68F0D9E2D9E2E8 *)0x0))))
        goto LAB_101e0078;
        pUVar5 = (UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 *)
                 pSVar4->___onTotalSaveGameCountUpdate_40;
        iVar12 = pSVar2->___totalSaveGameCount_41 + 1;
        pSVar2->___totalSaveGameCount_41 = iVar12;
        if (pUVar5 == (UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 *)0x0)
        goto LAB_101e0078;
        UnityAction_1_Invoke_m34CD3B09DF7371CBA265F13CD7255906D697232D_gshared
                  (pUVar5,iVar12,
                   Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301_RuntimeMethod_var);
      }
      if ((param_1->___CSU24U3CU3E8__locals1_2 !=
           (U3CU3Ec__DisplayClass53_0_tA404E1D2C349CD6D736063A0EECC54877C1B2CBA *)0x0) &&
         (pMVar1 = param_1->___CSU24U3CU3E8__locals1_2->___metaSave_0,
         pMVar1 != (MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *)0x0)) {
        pMVar1->___existsOnDisk_13 = true;
        if ((param_1->___CSU24U3CU3E8__locals1_2 !=
             (U3CU3Ec__DisplayClass53_0_tA404E1D2C349CD6D736063A0EECC54877C1B2CBA *)0x0) &&
           (pMVar1 = param_1->___CSU24U3CU3E8__locals1_2->___metaSave_0,
           pMVar1 != (MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *)0x0)) {
          pMVar1->___saveRequest_15 = (Il2CppObject *)0x0;
          if ((param_1->___CSU24U3CU3E8__locals1_2 !=
               (U3CU3Ec__DisplayClass53_0_tA404E1D2C349CD6D736063A0EECC54877C1B2CBA *)0x0) &&
             (pSVar2 = param_1->___CSU24U3CU3E8__locals1_2->___U3CU3E4__this_1,
             pSVar2 != (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *)0x0)) {
            iVar12 = pSVar2->___activeRequestsCounter_39;
            pSVar2->___activeRequestsCounter_39 = iVar12 + -1;
            if ((param_1->___CSU24U3CU3E8__locals1_2 !=
                 (U3CU3Ec__DisplayClass53_0_tA404E1D2C349CD6D736063A0EECC54877C1B2CBA *)0x0) &&
               ((pSVar6 = param_1->___CSU24U3CU3E8__locals1_2->___U3CU3E4__this_1,
                pSVar6 != (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *)0x0 &&
                ((Action_2_tD74D55DD49962060A2B8FEC37411262210893E81 *)
                 pSVar2->___onSaveRequestCountChange_38 !=
                 (Action_2_tD74D55DD49962060A2B8FEC37411262210893E81 *)0x0)))) {
              Action_2_Invoke_m559D51ED807DC96F41CB2A2812DBD8BAA5BB05D9_gshared
                        ((Action_2_tD74D55DD49962060A2B8FEC37411262210893E81 *)
                         pSVar2->___onSaveRequestCountChange_38,iVar12,
                         pSVar6->___activeRequestsCounter_39,
                         Action_2_Invoke_mBC46D443D51E9B6EFF8735B5586E955DE28F8670_RuntimeMethod_var
                        );
              pUVar7 = param_1->___CSU24U3CU3E8__locals1_2;
              if ((pUVar7 != (U3CU3Ec__DisplayClass53_0_tA404E1D2C349CD6D736063A0EECC54877C1B2CBA *)
                             0x0) &&
                 (pUVar7->___U3CU3E4__this_1 !=
                  (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *)0x0)) {
                SaveSystem_ChangeState_m9CEF27747C53226925145C52040950CB19866597
                          (pUVar7->___U3CU3E4__this_1,pUVar7->___metaSave_0,4,(MethodInfo *)0x0);
                pUVar7 = param_1->___CSU24U3CU3E8__locals1_2;
                if (pUVar7 != (U3CU3Ec__DisplayClass53_0_tA404E1D2C349CD6D736063A0EECC54877C1B2CBA *
                              )0x0) {
                  if (pUVar7->___setAsLastSave_2 == false) {
                    return;
                  }
                  pMVar1 = pUVar7->___metaSave_0;
                  if (pUVar7->___U3CU3E4__this_1 !=
                      (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *)0x0) {
                    pMVar8 = pUVar7->___U3CU3E4__this_1->___currentMetaSave_14;
                    if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->
                         has_cctor != '\0') &&
                       (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->
                        cctor_finished == 0)) {
                      il2cpp_runtime_class_init
                                (
                                Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var
                                );
                    }
                    bVar10 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54
                                       ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pMVar1,
                                        (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pMVar8,
                                        (MethodInfo *)0x0);
                    if (!bVar10) {
                      return;
                    }
                    pUVar7 = param_1->___CSU24U3CU3E8__locals1_2;
                    if ((((pUVar7 != (U3CU3Ec__DisplayClass53_0_tA404E1D2C349CD6D736063A0EECC54877C1B2CBA
                                      *)0x0) &&
                         (pUVar7->___metaSave_0 !=
                          (MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *)0x0)) &&
                        (pUVar7->___U3CU3E4__this_1 !=
                         (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *)0x0)) &&
                       (pSVar9 = pUVar7->___U3CU3E4__this_1->___settingsData_10,
                       pSVar9 != (SettingsData_t30CD9D6FCE66CFF6FA25505CC0D4FF98CE403617 *)0x0)) {
                      pSVar11 = pUVar7->___metaSave_0->___fileName_5;
                      bVar10 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2
                                         (pSVar11,pSVar9->___lastSave_1,(MethodInfo *)0x0);
                      if (!bVar10) {
                        return;
                      }
                      if (((param_1->___CSU24U3CU3E8__locals1_2 !=
                            (U3CU3Ec__DisplayClass53_0_tA404E1D2C349CD6D736063A0EECC54877C1B2CBA *)
                            0x0) && (pSVar2 = param_1->___CSU24U3CU3E8__locals1_2->
                                              ___U3CU3E4__this_1,
                                    pSVar2 != (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92
                                               *)0x0)) &&
                         (pSVar9 = pSVar2->___settingsData_10,
                         pSVar9 != (SettingsData_t30CD9D6FCE66CFF6FA25505CC0D4FF98CE403617 *)0x0)) {
                        pSVar9->___lastSave_1 = pSVar11;
                        if ((param_1->___CSU24U3CU3E8__locals1_2 !=
                             (U3CU3Ec__DisplayClass53_0_tA404E1D2C349CD6D736063A0EECC54877C1B2CBA *)
                             0x0) && (pSVar2 = param_1->___CSU24U3CU3E8__locals1_2->
                                               ___U3CU3E4__this_1,
                                     pSVar2 != (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92
                                                *)0x0)) {
                          SaveSystem_SetSettingsDirty_mD4FFF1F8BED42A5DBE32A3F956E5B0BC9B9F5219
                                    (pSVar2,(MethodInfo *)0x0);
                          return;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_101e0078:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
