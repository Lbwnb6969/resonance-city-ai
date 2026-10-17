// RVA 0x9fd110 | Placemaker.SaveCardsHandler$$ResetActiveCards
// PDB: SaveCardsHandler_ResetActiveCards_m065FD1E85827E51350D308A6860AE091B66AB3FB
// Body: [[109fd110, 109fd1c0] [109fd1c4, 109fd1f3]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 102fddd0 StorageUtils_get_files_m03CEF749C61C4F7B09F7917BBFB08163FAAA646C
// 1051de10 ReadOnlyCollection_1_get_Count_m0805C269CD31A1FA097F51D4BBCCE7EFAA5D541D_gshared
// 105d1420 List_1_Clear_m4335002B0D1AECDD647452579DC34E13BD1B83CD_gshared
// 109fc520 SaveCardsHandler_AddCardToActiveCardsList_mE3A45B648F8F1C4D01DBB260E1531623B671F7B8
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929

void __cdecl
SaveCardsHandler_ResetActiveCards_m065FD1E85827E51350D308A6860AE091B66AB3FB
          (SaveCardsHandler_t61C309C0A96BD6638967B41CAD43013CB215999B *param_1,MethodInfo *param_2)

{
  SaveCardsHandler_t61C309C0A96BD6638967B41CAD43013CB215999B *pSVar1;
  List_1_tAC14A72F60528BF5F54DEDF03048AEB295D85189 *pLVar2;
  ReadOnlyCollection_1_t4348A40742B97AA544A2F3845FA1C60512811C28 *pRVar3;
  int iVar4;
  uint uVar5;

  pSVar1 = param_1;
  if (DAT_11520187 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Clear_m5D471B16A4E22C7C0D70A4242E8FD1265BA63804_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_m3CCF0BBABB9195D0C8702E9581A57472A1738B93_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m3CF61E21718800106308F17641E859E62B891FFF_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       ReadOnlyCollection_1_get_Count_m0305A3E9E3584B020FC61CD5605898C600D69AE7_RuntimeMethod_var
              );
    DAT_11520187 = '\x01';
  }
  if ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)param_1->___activeCards_8 !=
      (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)0x0) {
    List_1_Clear_m4335002B0D1AECDD647452579DC34E13BD1B83CD_gshared
              ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)param_1->___activeCards_8,
               List_1_Clear_m5D471B16A4E22C7C0D70A4242E8FD1265BA63804_RuntimeMethod_var);
    pLVar2 = param_1->___cardPool_7;
    uVar5 = 0;
    if (pLVar2 != (List_1_tAC14A72F60528BF5F54DEDF03048AEB295D85189 *)0x0) {
      param_1 = (SaveCardsHandler_t61C309C0A96BD6638967B41CAD43013CB215999B *)0x10;
      do {
        if (pLVar2->____size_2 <= (int)uVar5) {
          return;
        }
        if ((pSVar1->___storage_16 == (StorageUtils_t6E9DFB789C54B9B5604E6701C1D0E230BB7FAEF3 *)0x0)
           || (pRVar3 = StorageUtils_get_files_m03CEF749C61C4F7B09F7917BBFB08163FAAA646C
                                  (pSVar1->___storage_16,(MethodInfo *)0x0),
              pRVar3 == (ReadOnlyCollection_1_t4348A40742B97AA544A2F3845FA1C60512811C28 *)0x0))
        break;
        iVar4 = ReadOnlyCollection_1_get_Count_m0805C269CD31A1FA097F51D4BBCCE7EFAA5D541D_gshared
                          ((ReadOnlyCollection_1_tBAE27CF7002C9073AFF2F350E44DD1944C893A7D *)pRVar3,
                           ReadOnlyCollection_1_get_Count_m0305A3E9E3584B020FC61CD5605898C600D69AE7_RuntimeMethod_var
                          );
        if (iVar4 <= (int)uVar5) {
          return;
        }
        pLVar2 = pSVar1->___cardPool_7;
        if (pLVar2 == (List_1_tAC14A72F60528BF5F54DEDF03048AEB295D85189 *)0x0) break;
        if ((uint)pLVar2->____size_2 <= uVar5) {
                    /* WARNING: Subroutine does not return */
          ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                    ((MethodInfo *)0x0);
        }
        SaveCardsHandler_AddCardToActiveCardsList_mE3A45B648F8F1C4D01DBB260E1531623B671F7B8
                  (pSVar1,*(SaveCard_t0D4BB910CDF8BB065BDBE2557107FC323BDAAC67 **)
                           (pLVar2->____items_1 + (int)param_1),(MethodInfo *)0x0);
        pLVar2 = pSVar1->___cardPool_7;
        uVar5 = uVar5 + 1;
        param_1 = (SaveCardsHandler_t61C309C0A96BD6638967B41CAD43013CB215999B *)&param_1->_padding_;
      } while (pLVar2 != (List_1_tAC14A72F60528BF5F54DEDF03048AEB295D85189 *)0x0);
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
