// RVA 0x10cf930 | FuryStudios.FurySDK.Settings.LeaderboardsDatabase$$OnAfterDeserialize
// PDB: LeaderboardsDatabase_OnAfterDeserialize_m3F4840A5D4307C062DFC4A505452518C21994D16
// Body: [[110cf930, 110cfb79] [110cfb8e, 110cfbcb]]
// Direct callees:
// 1003e420 Invoke
// 101280f0 il2cpp_runtime_class_init
// 10156c40 GetInterfaceInvokeDataFromVTableSlowPath
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eab0 il2cpp_codegen_raise_exception
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d8560 OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
// 1021c780 Dictionary_2_Clear_m03F6E27B9533062BA140D8F18D7B7A24CE042834_gshared
// 10226660 Dictionary_2__ctor_mAA4C8F456AA58EC1FB154441680BCFAA27AD6183_gshared
// 10445cb0 Enumerable_Where_TisRuntimeObject_m51DA29A5CB10D532C42135ADA3270F6E695B9364_gshared
// 10d03c10 Dictionary_2_set_Item_m244FCADEE28000F53A085B3A2D58CE1543A5F80E_gshared

/* WARNING: Removing unreachable block (ram,0x110cfbc4) */

void __cdecl
LeaderboardsDatabase_OnAfterDeserialize_m3F4840A5D4307C062DFC4A505452518C21994D16
          (LeaderboardsDatabase_tBF977EEE70A67A980B80E5D722E1467190CE1FAC *param_1,
          MethodInfo *param_2)

{
  ushort uVar1;
  LeaderboardInfoU5BU5D_t184C99583402D5D36217BCF53993DAD1214DCC4B *pLVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  ushort uVar4;
  Dictionary_2_tBF9E2338C61ABCF5ED32053F509AFB44385F774C *pDVar5;
  Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *pFVar6;
  Il2CppObject *pIVar7;
  int iVar8;
  VirtualInvokeData *pVVar9;
  Il2CppObject *pIVar10;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  local_8 = 0xffffffff;
  puStack_c = &
              __ehhandler__LeaderboardsDatabase_OnAfterDeserialize_m3F4840A5D4307C062DFC4A505452518C21994D16
  ;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (DAT_11523a86 == '\0') {
    ExceptionList = &local_10;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2_Clear_mB8B1B02D2A548FDD3E21285024D4DAEFB9FD3FBA_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2__ctor_m4F5B29D0B7AD1E5B29A648DFE54961AE7CC24C66_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2_set_Item_m34C65DD0EDDEA01640026B76A95F27EE7B51324D_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Dictionary_2_t0689204FBD978AF83FC8CB10826B5983A6EDB6A9_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Enumerable_Where_TisLeaderboardInfo_t632A2A655F9700EA767A7E3E2B348B07B431A9FF_mB1C07F4D06DA39EA368FAEB3116B86E16F430BD9_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Func_2__ctor_m9B04A664CDE26025CF6CB0C8C125B0263FC92D02_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Func_2_t4F732D3A9FDEF26CBACC0B4F632360B788C0DBB0_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IEnumerable_1_tCC9527C8EF6F74AA5B8C882226DB0105496824A3_il2cpp_TypeInfo_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IEnumerator_1_tEABF1AFE9115D47708FC793F45087FF5B070AF29_il2cpp_TypeInfo_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec_U3COnAfterDeserializeU3Eb__8_0_m5691AC38104ECEB619DDABC9BA30F7DF785A1476_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&U3CU3Ec_t7C81DB15BCF5EF6A7EEE22F652EC62E229CD0385_il2cpp_TypeInfo_var);
    DAT_11523a86 = '\x01';
  }
  if ((Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)param_1->___database_5 ==
      (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)0x0) {
    pDVar5 = (Dictionary_2_tBF9E2338C61ABCF5ED32053F509AFB44385F774C *)
             il2cpp_codegen_object_new
                       (Dictionary_2_t0689204FBD978AF83FC8CB10826B5983A6EDB6A9_il2cpp_TypeInfo_var);
    Dictionary_2__ctor_mAA4C8F456AA58EC1FB154441680BCFAA27AD6183_gshared
              (pDVar5,Dictionary_2__ctor_m4F5B29D0B7AD1E5B29A648DFE54961AE7CC24C66_RuntimeMethod_var
              );
    param_1->___database_5 = (Dictionary_2_t0689204FBD978AF83FC8CB10826B5983A6EDB6A9 *)pDVar5;
  }
  else {
    Dictionary_2_Clear_m03F6E27B9533062BA140D8F18D7B7A24CE042834_gshared
              ((Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)param_1->___database_5,
               Dictionary_2_Clear_mB8B1B02D2A548FDD3E21285024D4DAEFB9FD3FBA_RuntimeMethod_var);
  }
  pLVar2 = param_1->___leaderboards_4;
  if ((U3CU3Ec_t7C81DB15BCF5EF6A7EEE22F652EC62E229CD0385_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (U3CU3Ec_t7C81DB15BCF5EF6A7EEE22F652EC62E229CD0385_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(U3CU3Ec_t7C81DB15BCF5EF6A7EEE22F652EC62E229CD0385_il2cpp_TypeInfo_var)
    ;
  }
  pFVar6 = *(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 **)
            ((int)U3CU3Ec_t7C81DB15BCF5EF6A7EEE22F652EC62E229CD0385_il2cpp_TypeInfo_var->
                  static_fields + 4);
  if (pFVar6 == (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)0x0) {
    if ((U3CU3Ec_t7C81DB15BCF5EF6A7EEE22F652EC62E229CD0385_il2cpp_TypeInfo_var->has_cctor != '\0')
       && (U3CU3Ec_t7C81DB15BCF5EF6A7EEE22F652EC62E229CD0385_il2cpp_TypeInfo_var->cctor_finished ==
           0)) {
      il2cpp_runtime_class_init
                (U3CU3Ec_t7C81DB15BCF5EF6A7EEE22F652EC62E229CD0385_il2cpp_TypeInfo_var);
    }
    pIVar7 = *(Il2CppObject **)
              U3CU3Ec_t7C81DB15BCF5EF6A7EEE22F652EC62E229CD0385_il2cpp_TypeInfo_var->static_fields;
    pFVar6 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)
             il2cpp_codegen_object_new
                       (Func_2_t4F732D3A9FDEF26CBACC0B4F632360B788C0DBB0_il2cpp_TypeInfo_var);
    OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
              ((OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)pFVar6,pIVar7,
               (int)
               U3CU3Ec_U3COnAfterDeserializeU3Eb__8_0_m5691AC38104ECEB619DDABC9BA30F7DF785A1476_RuntimeMethod_var
               ,Func_2__ctor_m9B04A664CDE26025CF6CB0C8C125B0263FC92D02_RuntimeMethod_var);
    *(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 **)
     ((int)U3CU3Ec_t7C81DB15BCF5EF6A7EEE22F652EC62E229CD0385_il2cpp_TypeInfo_var->static_fields + 4)
         = pFVar6;
  }
  pIVar7 = Enumerable_Where_TisRuntimeObject_m51DA29A5CB10D532C42135ADA3270F6E695B9364_gshared
                     ((Il2CppObject *)pLVar2,pFVar6,
                      Enumerable_Where_TisLeaderboardInfo_t632A2A655F9700EA767A7E3E2B348B07B431A9FF_mB1C07F4D06DA39EA368FAEB3116B86E16F430BD9_RuntimeMethod_var
                     );
  if (pIVar7 != (Il2CppObject *)0x0) {
    pIVar7 = (Il2CppObject *)
             InterfaceFuncInvoker0<int>::Invoke
                       (0,
                        IEnumerable_1_tCC9527C8EF6F74AA5B8C882226DB0105496824A3_il2cpp_TypeInfo_var,
                        pIVar7);
    local_8 = 0;
    while (pIVar7 != (Il2CppObject *)0x0) {
      iVar8 = InterfaceFuncInvoker0<int>::Invoke
                        (0,IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var
                         ,pIVar7);
      if ((char)iVar8 == '\0') {
        local_8 = 0xffffffff;
        if (pIVar7 != (Il2CppObject *)0x0) {
          InterfaceFuncInvoker0<int>::Invoke
                    (0,IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var,
                     pIVar7);
        }
        ExceptionList = local_10;
        return;
      }
      uVar4 = 0;
      uVar1 = ((pIVar7->field0_0x0).klass)->interface_offsets_count;
      if (uVar1 != 0) {
        pIVar3 = ((pIVar7->field0_0x0).klass)->interfaceOffsets;
        do {
          if (pIVar3[uVar4].interfaceType ==
              IEnumerator_1_tEABF1AFE9115D47708FC793F45087FF5B070AF29_il2cpp_TypeInfo_var) {
            pVVar9 = (VirtualInvokeData *)
                     (&((pIVar7->field0_0x0).klass)->field_0xbc + pIVar3[uVar4].offset * 8);
            goto LAB_110cfb3a;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar1);
      }
      pVVar9 = il2cpp::vm::ClassInlines::GetInterfaceInvokeDataFromVTableSlowPath
                         (pIVar7,
                          IEnumerator_1_tEABF1AFE9115D47708FC793F45087FF5B070AF29_il2cpp_TypeInfo_var
                          ,0);
LAB_110cfb3a:
      pIVar10 = (Il2CppObject *)(*pVVar9->methodPtr)(pIVar7,pVVar9->method);
      if ((pIVar10 == (Il2CppObject *)0x0) ||
         ((Dictionary_2_t05DA59462DB2B73E336E6741454AE4A402C9178B *)param_1->___database_5 ==
          (Dictionary_2_t05DA59462DB2B73E336E6741454AE4A402C9178B *)0x0)) break;
      Dictionary_2_set_Item_m244FCADEE28000F53A085B3A2D58CE1543A5F80E_gshared
                ((Dictionary_2_t05DA59462DB2B73E336E6741454AE4A402C9178B *)param_1->___database_5,
                 (AchievementID_t13562D86FC9C116E950E863A44792F46EBFFE67D)pIVar10[1].field0_0x0,
                 pIVar10,
                 Dictionary_2_set_Item_m34C65DD0EDDEA01640026B76A95F27EE7B51324D_RuntimeMethod_var);
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
