// RVA 0x9fc6d0 | Placemaker.SaveCardsHandler$$BeginLoadingDataIntoCard
// PDB: SaveCardsHandler_BeginLoadingDataIntoCard_m43117BD06DB696C5FCEFDB585CCCA8651DC241C2
// Body: [[109fc6d0, 109fc6fc]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 102fd870 StorageUtils_LoadSaveToByteArray_mBE7F76FE3F9179AEE47062F6FDDB89A0E7D9292C

void __cdecl
SaveCardsHandler_BeginLoadingDataIntoCard_m43117BD06DB696C5FCEFDB585CCCA8651DC241C2
          (SaveCardsHandler_t61C309C0A96BD6638967B41CAD43013CB215999B *param_1,MethodInfo *param_2)

{
  Il2CppObject *pIVar1;

  if (param_1->___storage_16 != (StorageUtils_t6E9DFB789C54B9B5604E6701C1D0E230BB7FAEF3 *)0x0) {
    pIVar1 = StorageUtils_LoadSaveToByteArray_mBE7F76FE3F9179AEE47062F6FDDB89A0E7D9292C
                       (param_1->___storage_16,param_1->___currentFilePath_14,
                        (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)0x0,(MethodInfo *)0x0);
    param_1->___loadingDataEnumerator_11 = pIVar1;
    param_1->___loadSingleSaveDataState_10 = '\0';
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
