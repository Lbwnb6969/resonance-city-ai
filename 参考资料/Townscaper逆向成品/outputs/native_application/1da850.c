// RVA 0x1da850 | Placemaker.SaveCardsHandler.<DeleteCard>d__36$$MoveNext
// PDB: U3CDeleteCardU3Ed__36_MoveNext_m3B0E2817741BC45D736456CB5256CC177E1286CE
// Body: [[101da850, 101daa4b]]
// Direct callees:
// 1003e420 Invoke
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d8380 OnLocalizeCallback_Invoke_m8B28CFE294965737AFDCB15C1BFD40C7B4A43906
// 102fd510 StorageUtils_DeleteCard_mE22299A820DC833A74E1A25EB19FB91803796420
// 103f84d0 WorldMaster_New_m285406F3466084E0F9D01707DBE9ED07DF2F0416
// 10a3aa50 Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
// 10a3c6b0 Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485
// 10a3dc10 GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86
// 10a4a8b0 Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB
// 10f027d0 String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44
// 10f04510 String_Equals_mAFC6038D294F341434D9D67D7EADC7F97C556C9B
// 11036ff0 List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared

bool __cdecl
U3CDeleteCardU3Ed__36_MoveNext_m3B0E2817741BC45D736456CB5256CC177E1286CE
          (U3CDeleteCardU3Ed__36_t50B6A85E9050E18BBE4C76ECA818069684A60F97 *param_1,
          MethodInfo *param_2)

{
  SaveCardsHandler_t61C309C0A96BD6638967B41CAD43013CB215999B *pSVar1;
  SettingsData_t30CD9D6FCE66CFF6FA25505CC0D4FF98CE403617 *pSVar2;
  WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *pWVar3;
  bool bVar4;
  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *pGVar5;
  String_t *pSVar6;
  Il2CppObject *pIVar7;
  int iVar8;

  if (DAT_1151affa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Remove_m168A04931F66CD51B64BCBE2B61C9C2195755A42_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral753386048A7C769BDE77127BF31182947DFC7D53);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral7D5D3CCA43AE7EC695689C4F09FB82EEEB846C68);
    DAT_1151affa = '\x01';
  }
  pSVar1 = param_1->___U3CU3E4__this_3;
  if (param_1->___U3CU3E1__state_0 == 0) {
    param_1->___U3CU3E1__state_0 = -1;
    if ((param_1->___card_2 == (SaveCard_t0D4BB910CDF8BB065BDBE2557107FC323BDAAC67 *)0x0) ||
       (pGVar5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
                           ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                            param_1->___card_2,(MethodInfo *)0x0),
       pGVar5 == (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0)) goto LAB_101daa47;
    GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(pGVar5,false,(MethodInfo *)0x0);
    if ((param_1->___card_2 == (SaveCard_t0D4BB910CDF8BB065BDBE2557107FC323BDAAC67 *)0x0) ||
       (((pSVar6 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB
                             ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)param_1->___card_2
                              ,(MethodInfo *)0x0),
         pSVar1 == (SaveCardsHandler_t61C309C0A96BD6638967B41CAD43013CB215999B *)0x0 ||
         (pSVar1->___storage_16 == (StorageUtils_t6E9DFB789C54B9B5604E6701C1D0E230BB7FAEF3 *)0x0))
        || (pSVar2 = pSVar1->___storage_16->___settingsData_4,
           pSVar2 == (SettingsData_t30CD9D6FCE66CFF6FA25505CC0D4FF98CE403617 *)0x0))))
    goto LAB_101daa47;
    bVar4 = String_Equals_mAFC6038D294F341434D9D67D7EADC7F97C556C9B
                      (pSVar6,pSVar2->___lastSave_1,(MethodInfo *)0x0);
    if (bVar4) {
      if ((pSVar1->___master_4 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) ||
         (pWVar3 = pSVar1->___master_4->___worldMaster_5,
         pWVar3 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)) goto LAB_101daa47;
      WorldMaster_New_m285406F3466084E0F9D01707DBE9ED07DF2F0416(pWVar3,(MethodInfo *)0x0);
      if ((pSVar1->___storage_16 == (StorageUtils_t6E9DFB789C54B9B5604E6701C1D0E230BB7FAEF3 *)0x0)
         || (pSVar2 = pSVar1->___storage_16->___settingsData_4,
            pSVar2 == (SettingsData_t30CD9D6FCE66CFF6FA25505CC0D4FF98CE403617 *)0x0))
      goto LAB_101daa47;
      pSVar2->___lastSave_1 = (String_t *)0x0;
    }
    if ((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)pSVar1->___activeCards_8 ==
        (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)0x0) goto LAB_101daa47;
    bVar4 = List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared
                      ((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)pSVar1->___activeCards_8,
                       (Il2CppObject *)param_1->___card_2,
                       List_1_Remove_m168A04931F66CD51B64BCBE2B61C9C2195755A42_RuntimeMethod_var);
    if (!bVar4) {
      if (param_1->___card_2 == (SaveCard_t0D4BB910CDF8BB065BDBE2557107FC323BDAAC67 *)0x0)
      goto LAB_101daa47;
      pSVar6 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB
                         ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)param_1->___card_2,
                          (MethodInfo *)0x0);
      pSVar6 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44
                         (_stringLiteral7D5D3CCA43AE7EC695689C4F09FB82EEEB846C68,pSVar6,
                          _stringLiteral753386048A7C769BDE77127BF31182947DFC7D53,(MethodInfo *)0x0);
      if ((Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->has_cctor != '\0')
         && (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->cctor_finished ==
             0)) {
        il2cpp_runtime_class_init
                  (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
      }
      Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485
                ((Il2CppObject *)pSVar6,(MethodInfo *)0x0);
    }
    if (pSVar1->___storage_16 == (StorageUtils_t6E9DFB789C54B9B5604E6701C1D0E230BB7FAEF3 *)0x0)
    goto LAB_101daa47;
    pIVar7 = StorageUtils_DeleteCard_mE22299A820DC833A74E1A25EB19FB91803796420
                       (pSVar1->___storage_16,param_1->___card_2,(MethodInfo *)0x0);
    param_1->___U3CdeleteCardU3E5__2_5 = pIVar7;
  }
  else {
    if (param_1->___U3CU3E1__state_0 != 1) {
      return false;
    }
    param_1->___U3CU3E1__state_0 = -1;
  }
  if (param_1->___U3CdeleteCardU3E5__2_5 != (Il2CppObject *)0x0) {
    iVar8 = InterfaceFuncInvoker0<int>::Invoke
                      (0,IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var,
                       param_1->___U3CdeleteCardU3E5__2_5);
    if ((char)iVar8 == '\0') {
      if ((OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)param_1->___callback_4 !=
          (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)0x0) {
        OnLocalizeCallback_Invoke_m8B28CFE294965737AFDCB15C1BFD40C7B4A43906
                  ((OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
                   param_1->___callback_4,(MethodInfo *)0x0);
      }
      return false;
    }
    param_1->___U3CU3E2__current_1 = (Il2CppObject *)0x0;
    param_1->___U3CU3E1__state_0 = 1;
    return true;
  }
LAB_101daa47:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
