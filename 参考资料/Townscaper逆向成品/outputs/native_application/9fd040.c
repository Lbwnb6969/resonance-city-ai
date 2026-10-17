// RVA 0x9fd040 | Placemaker.SaveCardsHandler$$OnSetup
// PDB: SaveCardsHandler_OnSetup_mFE0CFE1829843D3251FD5CC67CFA2648084463AA
// Body: [[109fd040, 109fd101]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 105d32b0 List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
// 1066e440 Transform_GetParent_mA53F6AE810935DDED00A9FEEE1830F4EF797F73B
// 10a3aa50 Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a3dc10 GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86

void __cdecl
SaveCardsHandler_OnSetup_mFE0CFE1829843D3251FD5CC67CFA2648084463AA
          (SaveCardsHandler_t61C309C0A96BD6638967B41CAD43013CB215999B *param_1,
          UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *param_2,MethodInfo *param_3)

{
  SaveCard_t0D4BB910CDF8BB065BDBE2557107FC323BDAAC67 *pSVar1;
  List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *pLVar2;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar3;
  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *pGVar4;

  if (DAT_11520183 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1__ctor_m98BF889E4F0A072C652588750E83050ADA21498A_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_tAC14A72F60528BF5F54DEDF03048AEB295D85189_il2cpp_TypeInfo_var);
    DAT_11520183 = '\x01';
  }
  pLVar2 = (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)
           il2cpp_codegen_object_new
                     (List_1_tAC14A72F60528BF5F54DEDF03048AEB295D85189_il2cpp_TypeInfo_var);
  List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
            (pLVar2,List_1__ctor_m98BF889E4F0A072C652588750E83050ADA21498A_RuntimeMethod_var);
  param_1->___cardPool_7 = (List_1_tAC14A72F60528BF5F54DEDF03048AEB295D85189 *)pLVar2;
  pLVar2 = (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)
           il2cpp_codegen_object_new
                     (List_1_tAC14A72F60528BF5F54DEDF03048AEB295D85189_il2cpp_TypeInfo_var);
  List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
            (pLVar2,List_1__ctor_m98BF889E4F0A072C652588750E83050ADA21498A_RuntimeMethod_var);
  pSVar1 = param_1->___srcSaveCard_5;
  param_1->___activeCards_8 = (List_1_tAC14A72F60528BF5F54DEDF03048AEB295D85189 *)pLVar2;
  param_1->___loadingAllSaveCardsState_9 = '\x04';
  param_1->___loadSingleSaveDataState_10 = '\x02';
  if (pSVar1 != (SaveCard_t0D4BB910CDF8BB065BDBE2557107FC323BDAAC67 *)0x0) {
    pTVar3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                       ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pSVar1,
                        (MethodInfo *)0x0);
    if (pTVar3 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
      pTVar3 = Transform_GetParent_mA53F6AE810935DDED00A9FEEE1830F4EF797F73B
                         (pTVar3,(MethodInfo *)0x0);
      if (pTVar3 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
        pGVar4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
                           ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar3,
                            (MethodInfo *)0x0);
        if (pGVar4 != (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0) {
          GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86
                    (pGVar4,false,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
