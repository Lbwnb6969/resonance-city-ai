// RVA 0x9fd630 | Placemaker.SaveCardsHandler$$SetLastSaveCard
// PDB: SaveCardsHandler_SetLastSaveCard_mECC71EE06B9382457E44F9A42C585E2D46979E2F
// Body: [[109fd630, 109fd69e] [109fd6a8, 109fd6c3] [109fd6c7, 109fd739]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10a4a8b0 Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
// 10f044a0 String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D

bool __cdecl
SaveCardsHandler_SetLastSaveCard_mECC71EE06B9382457E44F9A42C585E2D46979E2F
          (SaveCardsHandler_t61C309C0A96BD6638967B41CAD43013CB215999B *param_1,MethodInfo *param_2)

{
  SaveCard_t0D4BB910CDF8BB065BDBE2557107FC323BDAAC67 *pSVar1;
  SettingsData_t30CD9D6FCE66CFF6FA25505CC0D4FF98CE403617 *pSVar2;
  bool bVar3;
  List_1_tAC14A72F60528BF5F54DEDF03048AEB295D85189 *pLVar4;
  String_t *pSVar5;
  uint uVar6;
  int local_8;

  if (DAT_11520189 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_m3CCF0BBABB9195D0C8702E9581A57472A1738B93_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m3CF61E21718800106308F17641E859E62B891FFF_RuntimeMethod_var)
    ;
    DAT_11520189 = '\x01';
  }
  uVar6 = 0;
  pLVar4 = param_1->___activeCards_8;
  if (pLVar4 != (List_1_tAC14A72F60528BF5F54DEDF03048AEB295D85189 *)0x0) {
    local_8 = 0x10;
    while( true ) {
      if (pLVar4->____size_2 <= (int)uVar6) {
        return false;
      }
      if (pLVar4 == (List_1_tAC14A72F60528BF5F54DEDF03048AEB295D85189 *)0x0) break;
      if ((uint)pLVar4->____size_2 <= uVar6) {
                    /* WARNING: Subroutine does not return */
        ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                  ((MethodInfo *)0x0);
      }
      pSVar1 = *(SaveCard_t0D4BB910CDF8BB065BDBE2557107FC323BDAAC67 **)
                (pLVar4->____items_1 + local_8);
      if (pLVar4 == (List_1_tAC14A72F60528BF5F54DEDF03048AEB295D85189 *)0x0) break;
      if ((uint)pLVar4->____size_2 <= uVar6) {
                    /* WARNING: Subroutine does not return */
        ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                  ((MethodInfo *)0x0);
      }
      if (*(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A **)(pLVar4->____items_1 + local_8) ==
          (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)0x0) break;
      pSVar5 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB
                         (*(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A **)
                           (pLVar4->____items_1 + local_8),(MethodInfo *)0x0);
      if (((param_1->___storage_16 == (StorageUtils_t6E9DFB789C54B9B5604E6701C1D0E230BB7FAEF3 *)0x0)
          || (pSVar2 = param_1->___storage_16->___settingsData_4,
             pSVar2 == (SettingsData_t30CD9D6FCE66CFF6FA25505CC0D4FF98CE403617 *)0x0)) ||
         (pSVar5 == (String_t *)0x0)) break;
      bVar3 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D
                        (pSVar5,pSVar2->___lastSave_1,(MethodInfo *)0x0);
      if (bVar3) {
        param_1->___lastSaveCard_15 = pSVar1;
        return true;
      }
      pLVar4 = param_1->___activeCards_8;
      uVar6 = uVar6 + 1;
      local_8 = local_8 + 4;
      if (pLVar4 == (List_1_tAC14A72F60528BF5F54DEDF03048AEB295D85189 *)0x0) break;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
