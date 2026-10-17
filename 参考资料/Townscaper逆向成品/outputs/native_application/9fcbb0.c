// RVA 0x9fcbb0 | Placemaker.SaveCardsHandler$$LoadDataIntoCard
// PDB: SaveCardsHandler_LoadDataIntoCard_m11F3775504710EF66379EBAAE34BCEA3D7A79F65
// Body: [[109fcbb0, 109fcd50] [109fcd54, 109fcdc8] [109fce6e, 109fcea7]]
// Direct callees:
// 1003e420 Invoke
// 101280f0 il2cpp_runtime_class_init
// 1018e500 IsInst
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 102fd630 StorageUtils_GetFileNameFromAbsolutePath_mDEBF08E92545FE87D833C54BA73ADABA4209DB9F
// 102fdb00 StorageUtils_TryDeserilizeSaveData_m4662DB1DADB12F9C32B35C20494D38421DAE1A01
// 109fc700 SaveCardsHandler_CardDataLoadingFailed_m1AC55947FAE94149B0C6009F495E200B64ABE725
// 10a3c6b0 Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485
// 10a4ac90 Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
// 10f027d0 String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44
// 10f044a0 String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D

void __cdecl
SaveCardsHandler_LoadDataIntoCard_m11F3775504710EF66379EBAAE34BCEA3D7A79F65
          (SaveCardsHandler_t61C309C0A96BD6638967B41CAD43013CB215999B *param_1,MethodInfo *param_2)

{
  List_1_tAC14A72F60528BF5F54DEDF03048AEB295D85189 *pLVar1;
  SaveCard_t0D4BB910CDF8BB065BDBE2557107FC323BDAAC67 *pSVar2;
  SettingsData_t30CD9D6FCE66CFF6FA25505CC0D4FF98CE403617 *pSVar3;
  bool bVar4;
  int iVar5;
  Il2CppObject *pIVar6;
  ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726 *pBVar7;
  SaveData_t108FDD1E782E68BC3B924BE75B58816350034188 *pSVar8;
  String_t *pSVar9;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  local_8 = 0xffffffff;
  puStack_c = &
              __ehhandler__SaveCardsHandler_LoadDataIntoCard_m11F3775504710EF66379EBAAE34BCEA3D7A79F65
  ;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (DAT_1152018e == '\0') {
    ExceptionList = &local_10;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m3CF61E21718800106308F17641E859E62B891FFF_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral07E56EA380D423A027AE1719D71D66B541370610);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral4ECDADF46ABBF31DCC59761A74520A93C749BADD);
    DAT_1152018e = '\x01';
  }
  if (param_1->___loadSingleSaveDataState_10 == '\0') {
    param_1->___loadSingleSaveDataState_10 = '\x01';
  }
  else if (param_1->___loadSingleSaveDataState_10 == '\x01') {
    if (param_1->___loadingDataEnumerator_11 != (Il2CppObject *)0x0) {
      iVar5 = InterfaceFuncInvoker0<int>::Invoke
                        (0,IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var
                         ,param_1->___loadingDataEnumerator_11);
      if ((char)iVar5 != '\0') {
        ExceptionList = local_10;
        return;
      }
      local_8 = 0;
      if (param_1->___loadingDataEnumerator_11 != (Il2CppObject *)0x0) {
        pIVar6 = (Il2CppObject *)
                 InterfaceFuncInvoker0<int>::Invoke
                           (1,
                            IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var
                            ,param_1->___loadingDataEnumerator_11);
        pBVar7 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726 *)
                 IsInst(pIVar6,
                        ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
        if (param_1->___storage_16 != (StorageUtils_t6E9DFB789C54B9B5604E6701C1D0E230BB7FAEF3 *)0x0)
        {
          pSVar8 = StorageUtils_TryDeserilizeSaveData_m4662DB1DADB12F9C32B35C20494D38421DAE1A01
                             (param_1->___storage_16,pBVar7,(MethodInfo *)0x0);
          if (pSVar8 == (SaveData_t108FDD1E782E68BC3B924BE75B58816350034188 *)0x0) {
            SaveCardsHandler_CardDataLoadingFailed_m1AC55947FAE94149B0C6009F495E200B64ABE725
                      (param_1,(MethodInfo *)0x0);
            pSVar9 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44
                               (_stringLiteral07E56EA380D423A027AE1719D71D66B541370610,
                                param_1->___currentFilePath_14,
                                _stringLiteral4ECDADF46ABBF31DCC59761A74520A93C749BADD,
                                (MethodInfo *)0x0);
            if ((Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->has_cctor !=
                 '\0') &&
               (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->cctor_finished
                == 0)) {
              il2cpp_runtime_class_init
                        (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
              Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485
                        ((Il2CppObject *)pSVar9,(MethodInfo *)0x0);
              param_1->___loadSingleSaveDataState_10 =
                   param_1->___loadSingleSaveDataState_10 + '\x01';
              ExceptionList = local_10;
              return;
            }
            Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485
                      ((Il2CppObject *)pSVar9,(MethodInfo *)0x0);
LAB_109fce79:
            param_1->___loadSingleSaveDataState_10 = param_1->___loadSingleSaveDataState_10 + '\x01'
            ;
            ExceptionList = local_10;
            return;
          }
          if (param_1->___storage_16 !=
              (StorageUtils_t6E9DFB789C54B9B5604E6701C1D0E230BB7FAEF3 *)0x0) {
            pSVar9 = StorageUtils_GetFileNameFromAbsolutePath_mDEBF08E92545FE87D833C54BA73ADABA4209DB9F
                               (param_1->___storage_16,param_1->___currentFilePath_14,
                                (MethodInfo *)0x0);
            pLVar1 = param_1->___activeCards_8;
            if (pLVar1 != (List_1_tAC14A72F60528BF5F54DEDF03048AEB295D85189 *)0x0) {
              if ((uint)pLVar1->____size_2 <= (uint)param_1->___currentCardIndex_13) {
                    /* WARNING: Subroutine does not return */
                ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                          ((MethodInfo *)0x0);
              }
              pSVar2 = *(SaveCard_t0D4BB910CDF8BB065BDBE2557107FC323BDAAC67 **)
                        (pLVar1->____items_1 + param_1->___currentCardIndex_13 * 4 + 0x10);
              if (pSVar2 != (SaveCard_t0D4BB910CDF8BB065BDBE2557107FC323BDAAC67 *)0x0) {
                Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781
                          ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pSVar2,pSVar9,
                           (MethodInfo *)0x0);
                pSVar2->___filePath_10 = param_1->___currentFilePath_14;
                pSVar2->___saveData_8 = pSVar8;
                if (((param_1->___storage_16 !=
                      (StorageUtils_t6E9DFB789C54B9B5604E6701C1D0E230BB7FAEF3 *)0x0) &&
                    (pSVar3 = param_1->___storage_16->___settingsData_4,
                    pSVar3 != (SettingsData_t30CD9D6FCE66CFF6FA25505CC0D4FF98CE403617 *)0x0)) &&
                   (pSVar9 != (String_t *)0x0)) {
                  bVar4 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D
                                    (pSVar9,pSVar3->___lastSave_1,(MethodInfo *)0x0);
                  if (bVar4) {
                    param_1->___lastSaveCard_15 = pSVar2;
                    param_1->___loadSingleSaveDataState_10 =
                         param_1->___loadSingleSaveDataState_10 + '\x01';
                    ExceptionList = local_10;
                    return;
                  }
                  goto LAB_109fce79;
                }
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_null_reference_exception();
  }
  ExceptionList = local_10;
  return;
}
