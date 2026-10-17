// RVA 0x9fcec0 | Placemaker.SaveCardsHandler$$LoadingAllSaveCards
// PDB: SaveCardsHandler_LoadingAllSaveCards_m21B05FA9C4AB6334398030858F0AE2C7E43FBAFE
// Body: [[109fcec0, 109fd021]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 102fd870 StorageUtils_LoadSaveToByteArray_mBE7F76FE3F9179AEE47062F6FDDB89A0E7D9292C
// 102fddd0 StorageUtils_get_files_m03CEF749C61C4F7B09F7917BBFB08163FAAA646C
// 10517110 ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m44C8439B4A89FF822C735C0FDBA90316A866730E_gshared
// 1051de10 ReadOnlyCollection_1_get_Count_m0805C269CD31A1FA097F51D4BBCCE7EFAA5D541D_gshared
// 109fcbb0 SaveCardsHandler_LoadDataIntoCard_m11F3775504710EF66379EBAAE34BCEA3D7A79F65

void __cdecl
SaveCardsHandler_LoadingAllSaveCards_m21B05FA9C4AB6334398030858F0AE2C7E43FBAFE
          (SaveCardsHandler_t61C309C0A96BD6638967B41CAD43013CB215999B *param_1,MethodInfo *param_2)

{
  uchar uVar1;
  undefined3 extraout_var;
  Il2CppObject *pIVar2;
  ReadOnlyCollection_1_t4348A40742B97AA544A2F3845FA1C60512811C28 *pRVar3;
  int iVar4;
  int iVar5;

  if (DAT_1152018c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       ReadOnlyCollection_1_get_Count_m0305A3E9E3584B020FC61CD5605898C600D69AE7_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       ReadOnlyCollection_1_get_Item_m2CA4EA69200FE3AD332DA97E648783A810E9CA9C_RuntimeMethod_var
              );
    DAT_1152018c = '\x01';
  }
  switch(param_1->___loadingAllSaveCardsState_9) {
  case '\0':
    if (param_1->___storage_16 != (StorageUtils_t6E9DFB789C54B9B5604E6701C1D0E230BB7FAEF3 *)0x0) {
      pRVar3 = StorageUtils_get_files_m03CEF749C61C4F7B09F7917BBFB08163FAAA646C
                         (param_1->___storage_16,(MethodInfo *)0x0);
      if (pRVar3 != (ReadOnlyCollection_1_t4348A40742B97AA544A2F3845FA1C60512811C28 *)0x0) {
        if ((param_1->___storage_16 == (StorageUtils_t6E9DFB789C54B9B5604E6701C1D0E230BB7FAEF3 *)0x0
            ) || (pRVar3 = StorageUtils_get_files_m03CEF749C61C4F7B09F7917BBFB08163FAAA646C
                                     (param_1->___storage_16,(MethodInfo *)0x0),
                 pRVar3 == (ReadOnlyCollection_1_t4348A40742B97AA544A2F3845FA1C60512811C28 *)0x0))
        break;
        iVar5 = ReadOnlyCollection_1_get_Count_m0805C269CD31A1FA097F51D4BBCCE7EFAA5D541D_gshared
                          ((ReadOnlyCollection_1_tBAE27CF7002C9073AFF2F350E44DD1944C893A7D *)pRVar3,
                           ReadOnlyCollection_1_get_Count_m0305A3E9E3584B020FC61CD5605898C600D69AE7_RuntimeMethod_var
                          );
        if (iVar5 != 0) {
          param_1->___loadingAllSaveCardsState_9 = param_1->___loadingAllSaveCardsState_9 + '\x01';
          param_1->___storageFilesIndex_12 = 0;
          param_1->___currentCardIndex_13 = 0;
          param_1->___currentFilePath_14 = (String_t *)0x0;
          return;
        }
      }
      param_1->___loadingAllSaveCardsState_9 = '\x04';
      return;
    }
    break;
  case '\x01':
    if ((param_1->___storage_16 != (StorageUtils_t6E9DFB789C54B9B5604E6701C1D0E230BB7FAEF3 *)0x0) &&
       (pRVar3 = StorageUtils_get_files_m03CEF749C61C4F7B09F7917BBFB08163FAAA646C
                           (param_1->___storage_16,(MethodInfo *)0x0),
       pRVar3 != (ReadOnlyCollection_1_t4348A40742B97AA544A2F3845FA1C60512811C28 *)0x0)) {
      uVar1 = ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m44C8439B4A89FF822C735C0FDBA90316A866730E_gshared
                        ((ReadOnlyCollection_1_t88367D6A0A0435F3B7F5A180EAE18DC0323A14E7 *)pRVar3,
                         param_1->___storageFilesIndex_12,
                         ReadOnlyCollection_1_get_Item_m2CA4EA69200FE3AD332DA97E648783A810E9CA9C_RuntimeMethod_var
                        );
      param_1->___currentFilePath_14 = (String_t *)CONCAT31(extraout_var,uVar1);
      if (param_1->___storage_16 != (StorageUtils_t6E9DFB789C54B9B5604E6701C1D0E230BB7FAEF3 *)0x0) {
        pIVar2 = StorageUtils_LoadSaveToByteArray_mBE7F76FE3F9179AEE47062F6FDDB89A0E7D9292C
                           (param_1->___storage_16,(String_t *)CONCAT31(extraout_var,uVar1),
                            (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)0x0,
                            (MethodInfo *)0x0);
        param_1->___loadingDataEnumerator_11 = pIVar2;
        param_1->___loadingAllSaveCardsState_9 = param_1->___loadingAllSaveCardsState_9 + '\x01';
        param_1->___loadSingleSaveDataState_10 = '\0';
        return;
      }
    }
    break;
  case '\x02':
    SaveCardsHandler_LoadDataIntoCard_m11F3775504710EF66379EBAAE34BCEA3D7A79F65
              (param_1,(MethodInfo *)0x0);
    if (param_1->___loadSingleSaveDataState_10 != '\x02') {
      return;
    }
    param_1->___loadingAllSaveCardsState_9 = param_1->___loadingAllSaveCardsState_9 + '\x01';
    return;
  case '\x03':
    param_1->___currentCardIndex_13 = param_1->___currentCardIndex_13 + 1;
    iVar5 = param_1->___storageFilesIndex_12 + 1;
    param_1->___storageFilesIndex_12 = iVar5;
    if ((param_1->___storage_16 != (StorageUtils_t6E9DFB789C54B9B5604E6701C1D0E230BB7FAEF3 *)0x0) &&
       (pRVar3 = StorageUtils_get_files_m03CEF749C61C4F7B09F7917BBFB08163FAAA646C
                           (param_1->___storage_16,(MethodInfo *)0x0),
       pRVar3 != (ReadOnlyCollection_1_t4348A40742B97AA544A2F3845FA1C60512811C28 *)0x0)) {
      iVar4 = ReadOnlyCollection_1_get_Count_m0805C269CD31A1FA097F51D4BBCCE7EFAA5D541D_gshared
                        ((ReadOnlyCollection_1_tBAE27CF7002C9073AFF2F350E44DD1944C893A7D *)pRVar3,
                         ReadOnlyCollection_1_get_Count_m0305A3E9E3584B020FC61CD5605898C600D69AE7_RuntimeMethod_var
                        );
      uVar1 = '\x01';
      if (iVar4 <= iVar5) {
        uVar1 = '\x04';
      }
      param_1->___loadingAllSaveCardsState_9 = uVar1;
      return;
    }
    break;
  default:
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
