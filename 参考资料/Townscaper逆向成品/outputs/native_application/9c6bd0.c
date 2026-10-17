// RVA 0x9c6bd0 | Placemaker.StorageUtils.<SaveCurrent>d__19$$MoveNext
// PDB: U3CSaveCurrentU3Ed__19_MoveNext_m7C194706920F446194D880F4F2C1BEF3F2FB2142
// Body: [[109c6bd0, 109c6ec9]]
// Direct callees:
// 1003e420 Invoke
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d8380 OnLocalizeCallback_Invoke_m8B28CFE294965737AFDCB15C1BFD40C7B4A43906
// 102fd6f0 StorageUtils_GetSaveFilePath_m0DB39B9F24B0160CBE4CEE8526905B58A9A70153
// 102fd790 StorageUtils_GetUniqueSaveName_mBCC088C96046C3CD440F04D376EC529115B95F3D
// 102fd7e0 StorageUtils_LastSaveIsEmpty_mB1A73C5A22787235F0E4017361C0482C405308DA
// 102fdaa0 StorageUtils_SaveToPath_m6B7C8E01A7F67A4A7D6D2D4AEC84DCEECE4EBD02
// 103f89b0 WorldMaster_PopulateSaveData_m2141761F55390AC6602D99FE8478CB86D8831F3E
// 103f8ae0 WorldMaster_ResetSaveCurrentTimer_m1F76634B665C7F9B82C84D20189CD479157FCF49
// 109fd740 SaveCardsHandler_SetNewCard_mD92DE25AD880A2C4990CE6B2D8DBD370942B152A
// 109fda40 SaveCardsHandler_UpdateCardLastWriteTime_m0E8A69BD66B3F450781465C806831D8F63401032
// 109fde20 SaveData__ctor_m54D969F11736980DA37FE2AF8CE92BC49FB3E927
// 10a3cbf0 Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8
// 1102ffd0 List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared

bool __cdecl
U3CSaveCurrentU3Ed__19_MoveNext_m7C194706920F446194D880F4F2C1BEF3F2FB2142
          (U3CSaveCurrentU3Ed__19_tB15A864A86E2DB53DE2F9893B5468444FEC7D177 *param_1,
          MethodInfo *param_2)

{
  StorageUtils_t6E9DFB789C54B9B5604E6701C1D0E230BB7FAEF3 *pSVar1;
  WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *pWVar2;
  SettingsData_t30CD9D6FCE66CFF6FA25505CC0D4FF98CE403617 *pSVar3;
  bool bVar4;
  String_t *pSVar5;
  SaveData_t108FDD1E782E68BC3B924BE75B58816350034188 *pSVar6;
  String_t *pSVar7;
  Il2CppObject *pIVar8;
  int iVar9;

  if (DAT_1151ff45 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IEnumerator_1_t0DE5AA701B682A891412350E63D3E441F98F205C_il2cpp_TypeInfo_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&SaveData_t108FDD1E782E68BC3B924BE75B58816350034188_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral12F5C3A8319DCA091065BFFBF44AC54F10035AF5);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral554BC482E2E9CF3384781C6560E9FB4C5ED9A3E7);
    DAT_1151ff45 = '\x01';
  }
  iVar9 = param_1->___U3CU3E1__state_0;
  pSVar1 = param_1->___U3CU3E4__this_3;
  if (iVar9 == 0) {
    pWVar2 = param_1->___worldMaster_2;
    param_1->___U3CU3E1__state_0 = -1;
    if (pWVar2 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) goto LAB_109c6ec5;
    if (pWVar2->___anyChange_59 == false) goto LAB_109c6eac;
    pWVar2->___anyChange_59 = false;
    if ((param_1->___worldMaster_2 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)
       || (WorldMaster_ResetSaveCurrentTimer_m1F76634B665C7F9B82C84D20189CD479157FCF49
                     (param_1->___worldMaster_2,(MethodInfo *)0x0),
          pSVar1 == (StorageUtils_t6E9DFB789C54B9B5604E6701C1D0E230BB7FAEF3 *)0x0))
    goto LAB_109c6ec5;
    bVar4 = StorageUtils_LastSaveIsEmpty_mB1A73C5A22787235F0E4017361C0482C405308DA
                      (pSVar1,(MethodInfo *)0x0);
    param_1->___U3CnewSaveU3E5__2_5 = bVar4;
    if (bVar4) {
      if ((Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->has_cctor != '\0')
         && (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->cctor_finished ==
             0)) {
        il2cpp_runtime_class_init
                  (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
      }
      Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8
                ((Il2CppObject *)_stringLiteral12F5C3A8319DCA091065BFFBF44AC54F10035AF5,
                 (MethodInfo *)0x0);
      pIVar8 = StorageUtils_GetUniqueSaveName_mBCC088C96046C3CD440F04D376EC529115B95F3D
                         (pSVar1,(MethodInfo *)0x0);
      param_1->___U3CgetUniqueSaveNameU3E5__5_8 = pIVar8;
      goto LAB_109c6cf5;
    }
LAB_109c6d63:
    if (pSVar1->___settingsData_4 == (SettingsData_t30CD9D6FCE66CFF6FA25505CC0D4FF98CE403617 *)0x0)
    goto LAB_109c6ec5;
    pSVar5 = pSVar1->___settingsData_4->___lastSave_1;
    pSVar6 = (SaveData_t108FDD1E782E68BC3B924BE75B58816350034188 *)
             il2cpp_codegen_object_new
                       (SaveData_t108FDD1E782E68BC3B924BE75B58816350034188_il2cpp_TypeInfo_var);
    SaveData__ctor_m54D969F11736980DA37FE2AF8CE92BC49FB3E927(pSVar6,(MethodInfo *)0x0);
    if (param_1->___worldMaster_2 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)
    goto LAB_109c6ec5;
    WorldMaster_PopulateSaveData_m2141761F55390AC6602D99FE8478CB86D8831F3E
              (param_1->___worldMaster_2,pSVar6,
               (MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *)0x0,(MethodInfo *)0x0);
    pSVar7 = StorageUtils_GetSaveFilePath_m0DB39B9F24B0160CBE4CEE8526905B58A9A70153
                       (pSVar1,pSVar5,(MethodInfo *)0x0);
    param_1->___U3CpathU3E5__3_6 = pSVar7;
    if (param_1->___U3CnewSaveU3E5__2_5 == false) {
      if ((pSVar6 == (SaveData_t108FDD1E782E68BC3B924BE75B58816350034188 *)0x0) ||
         (pSVar1->___saveCardsHandler_6 ==
          (SaveCardsHandler_t61C309C0A96BD6638967B41CAD43013CB215999B *)0x0)) goto LAB_109c6ec5;
      SaveCardsHandler_UpdateCardLastWriteTime_m0E8A69BD66B3F450781465C806831D8F63401032
                (pSVar1->___saveCardsHandler_6,pSVar5,pSVar6->___lastWriteTime_1,(MethodInfo *)0x0);
    }
    else {
      if (pSVar1->___saveCardsHandler_6 ==
          (SaveCardsHandler_t61C309C0A96BD6638967B41CAD43013CB215999B *)0x0) goto LAB_109c6ec5;
      SaveCardsHandler_SetNewCard_mD92DE25AD880A2C4990CE6B2D8DBD370942B152A
                (pSVar1->___saveCardsHandler_6,pSVar6,pSVar5,pSVar7,(MethodInfo *)0x0);
    }
    pIVar8 = StorageUtils_SaveToPath_m6B7C8E01A7F67A4A7D6D2D4AEC84DCEECE4EBD02
                       (pSVar1,param_1->___U3CpathU3E5__3_6,pSVar6,(MethodInfo *)0x0);
    param_1->___U3CsaveToPathU3E5__4_7 = pIVar8;
  }
  else {
    if (iVar9 == 1) {
      param_1->___U3CU3E1__state_0 = -1;
LAB_109c6cf5:
      if (param_1->___U3CgetUniqueSaveNameU3E5__5_8 == (Il2CppObject *)0x0) goto LAB_109c6ec5;
      iVar9 = InterfaceFuncInvoker0<int>::Invoke
                        (0,IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var
                         ,param_1->___U3CgetUniqueSaveNameU3E5__5_8);
      if ((char)iVar9 != '\0') {
        param_1->___U3CU3E2__current_1 = (Il2CppObject *)0x0;
        param_1->___U3CU3E1__state_0 = 1;
        return true;
      }
      if (pSVar1 == (StorageUtils_t6E9DFB789C54B9B5604E6701C1D0E230BB7FAEF3 *)0x0)
      goto LAB_109c6ec5;
      pSVar3 = pSVar1->___settingsData_4;
      if ((param_1->___U3CgetUniqueSaveNameU3E5__5_8 == (Il2CppObject *)0x0) ||
         (pSVar5 = (String_t *)
                   InterfaceFuncInvoker0<int>::Invoke
                             (0,
                              IEnumerator_1_t0DE5AA701B682A891412350E63D3E441F98F205C_il2cpp_TypeInfo_var
                              ,param_1->___U3CgetUniqueSaveNameU3E5__5_8),
         pSVar3 == (SettingsData_t30CD9D6FCE66CFF6FA25505CC0D4FF98CE403617 *)0x0))
      goto LAB_109c6ec5;
      pSVar3->___lastSave_1 = pSVar5;
      param_1->___U3CgetUniqueSaveNameU3E5__5_8 = (Il2CppObject *)0x0;
      goto LAB_109c6d63;
    }
    if (iVar9 != 2) {
      return false;
    }
    param_1->___U3CU3E1__state_0 = -1;
  }
  if (param_1->___U3CsaveToPathU3E5__4_7 != (Il2CppObject *)0x0) {
    iVar9 = InterfaceFuncInvoker0<int>::Invoke
                      (0,IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var,
                       param_1->___U3CsaveToPathU3E5__4_7);
    if ((char)iVar9 != '\0') {
      param_1->___U3CU3E2__current_1 = (Il2CppObject *)0x0;
      param_1->___U3CU3E1__state_0 = 2;
      return true;
    }
    if (param_1->___U3CnewSaveU3E5__2_5 != false) {
      if ((pSVar1 == (StorageUtils_t6E9DFB789C54B9B5604E6701C1D0E230BB7FAEF3 *)0x0) ||
         ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pSVar1->___loadedFiles_7 ==
          (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)0x0)) goto LAB_109c6ec5;
      List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pSVar1->___loadedFiles_7,
                 (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)
                 param_1->___U3CpathU3E5__3_6,
                 List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
    }
    if (pSVar1 != (StorageUtils_t6E9DFB789C54B9B5604E6701C1D0E230BB7FAEF3 *)0x0) {
      pSVar1->___fileInfoFrame_8 = -1;
      if ((Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->has_cctor != '\0')
         && (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->cctor_finished ==
             0)) {
        il2cpp_runtime_class_init
                  (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
      }
      Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8
                ((Il2CppObject *)_stringLiteral554BC482E2E9CF3384781C6560E9FB4C5ED9A3E7,
                 (MethodInfo *)0x0);
      param_1->___U3CpathU3E5__3_6 = (String_t *)0x0;
      param_1->___U3CsaveToPathU3E5__4_7 = (Il2CppObject *)0x0;
LAB_109c6eac:
      if ((OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)param_1->___callback_4 !=
          (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)0x0) {
        OnLocalizeCallback_Invoke_m8B28CFE294965737AFDCB15C1BFD40C7B4A43906
                  ((OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
                   param_1->___callback_4,(MethodInfo *)0x0);
      }
      return false;
    }
  }
LAB_109c6ec5:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
