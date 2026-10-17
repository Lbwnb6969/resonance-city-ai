// RVA 0x9c5be0 | Placemaker.StorageUtils.<LoadSettingsData>d__17$$MoveNext
// PDB: U3CLoadSettingsDataU3Ed__17_MoveNext_m58B94E27B78BD8254E1790B98D634039D20C6E45
// Body: [[109c5be0, 109c5ee4]]
// Direct callees:
// 1003e330 Invoke
// 1003e420 Invoke
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 101f84f0 XplatUIWin32_GetPreviousWindow_m237EE532B2E8B29F9F11AF17B234415BEF946EAD
// 1026bae0 SR_GetString_m9DC7F3962EEB239017A1A4C443F52047B5BC7462
// 102fd4b0 StorageUtils_CreateAndSaveSettingsData_m0C5FAB62422621B09E63F0555A9E72B22C834205
// 10396d40 XmlSerializer_Deserialize_m25B138EB9DFEAC76221ED87D8FDFBE31A7136AD5
// 10749050 Platform_get_SDK_m22BFADA660A0C166EE96936AB9A6C23915E6CB3F_inline
// 108d3410 MemoryStream__ctor_m3E041ADD3DB7EA42E7DB56FE862097819C02B9C2
// 109c5f02 FUN_109c5f02

/* WARNING: Removing unreachable block (ram,0x109c5edd) */

bool __cdecl
U3CLoadSettingsDataU3Ed__17_MoveNext_m58B94E27B78BD8254E1790B98D634039D20C6E45
          (U3CLoadSettingsDataU3Ed__17_t92707D1CF9B35696A697C47012680F400CBDFA48 *param_1,
          MethodInfo *param_2)

{
  StorageUtils_t6E9DFB789C54B9B5604E6701C1D0E230BB7FAEF3 *pSVar1;
  undefined1 uVar2;
  String_t *pSVar3;
  Il2CppObject *extraout_EAX;
  Il2CppObject *extraout_EAX_00;
  Il2CppObject *pIVar4;
  Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *pAVar5;
  Il2CppObject *extraout_EAX_01;
  Il2CppObject *extraout_EAX_02;
  ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726 *pBVar6;
  MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C *pMVar7;
  SettingsData_t30CD9D6FCE66CFF6FA25505CC0D4FF98CE403617 *pSVar8;
  int iVar9;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  local_8 = 0xffffffff;
  puStack_c = &
              __ehhandler__U3CLoadSettingsDataU3Ed__17_MoveNext_m58B94E27B78BD8254E1790B98D634039D20C6E45
  ;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (DAT_1151ff41 == '\0') {
    ExceptionList = &local_10;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       IAsyncRequest_1_t2300E24B26E92488C4EAC7E4C6D696921CB2830C_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       IAsyncRequest_1_t45189C5E4D975901DABD9849B20891E77C79EA51_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IPlatformSDK_t445C2B3B280259FC57B4D89D7580436E90078756_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       IStorageContainer_t65144ABF49C5F5251019FAE254C96036B4D27490_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&SettingsData_t30CD9D6FCE66CFF6FA25505CC0D4FF98CE403617_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral7549391F4BE511FC68ABE6390C5584C1FDF72601);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralE541D26859D264DEB1E7847324CA9C765F331CF8);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralECCEF6640EFE004FEAD77E3917F0A856C6BFE14B);
    DAT_1151ff41 = '\x01';
  }
  pSVar1 = param_1->___U3CU3E4__this_2;
  switch(param_1->___U3CU3E1__state_0) {
  case 0:
    param_1->___U3CU3E1__state_0 = -1;
    if (pSVar1 != (StorageUtils_t6E9DFB789C54B9B5604E6701C1D0E230BB7FAEF3 *)0x0) {
      pSVar3 = (String_t *)
               XplatUIWin32_GetPreviousWindow_m237EE532B2E8B29F9F11AF17B234415BEF946EAD
                         ((XplatUIWin32_tC9AC40758D2C6FC5FDB252A3788B5D09620B8DAC *)pSVar1,
                          (int)_stringLiteralECCEF6640EFE004FEAD77E3917F0A856C6BFE14B,
                          (MethodInfo *)0x0);
      param_1->___U3CsettingsPathU3E5__2_4 = pSVar3;
      pIVar4 = Platform_get_SDK_m22BFADA660A0C166EE96936AB9A6C23915E6CB3F_inline((MethodInfo *)0x0);
      pAVar5 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)
               SR_GetString_m9DC7F3962EEB239017A1A4C443F52047B5BC7462
                         (_stringLiteralE541D26859D264DEB1E7847324CA9C765F331CF8,(MethodInfo *)0x0);
      if ((pIVar4 != (Il2CppObject *)0x0) &&
         (InterfaceActionInvoker1<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_*>::Invoke
                    (0xb,IPlatformSDK_t445C2B3B280259FC57B4D89D7580436E90078756_il2cpp_TypeInfo_var,
                     pIVar4,pAVar5), extraout_EAX != (Il2CppObject *)0x0)) {
        InterfaceActionInvoker1<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_*>::Invoke
                  (6,IStorageContainer_t65144ABF49C5F5251019FAE254C96036B4D27490_il2cpp_TypeInfo_var
                   ,extraout_EAX,
                   (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)
                   param_1->___U3CsettingsPathU3E5__2_4);
        param_1->___U3CsettingsFileExistsU3E5__3_5 = extraout_EAX_00;
        param_1->___U3CU3E2__current_1 = extraout_EAX_00;
        param_1->___U3CU3E1__state_0 = 1;
        ExceptionList = local_10;
        return true;
      }
    }
    goto LAB_109c6016;
  case 1:
    param_1->___U3CU3E1__state_0 = -1;
    if (param_1->___U3CsettingsFileExistsU3E5__3_5 == (Il2CppObject *)0x0) goto LAB_109c6016;
    iVar9 = InterfaceFuncInvoker0<int>::Invoke
                      (0,
                       IAsyncRequest_1_t2300E24B26E92488C4EAC7E4C6D696921CB2830C_il2cpp_TypeInfo_var
                       ,param_1->___U3CsettingsFileExistsU3E5__3_5);
    if ((char)iVar9 == '\0') {
      if (pSVar1 != (StorageUtils_t6E9DFB789C54B9B5604E6701C1D0E230BB7FAEF3 *)0x0) {
        pIVar4 = StorageUtils_CreateAndSaveSettingsData_m0C5FAB62422621B09E63F0555A9E72B22C834205
                           (pSVar1,(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)0x0,
                            (MethodInfo *)0x0);
        param_1->___U3CU3E2__current_1 = pIVar4;
        param_1->___U3CU3E1__state_0 = 4;
        ExceptionList = local_10;
        return true;
      }
      goto LAB_109c6016;
    }
    pIVar4 = Platform_get_SDK_m22BFADA660A0C166EE96936AB9A6C23915E6CB3F_inline((MethodInfo *)0x0);
    pAVar5 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)
             SR_GetString_m9DC7F3962EEB239017A1A4C443F52047B5BC7462
                       (_stringLiteralE541D26859D264DEB1E7847324CA9C765F331CF8,(MethodInfo *)0x0);
    if ((pIVar4 == (Il2CppObject *)0x0) ||
       (InterfaceActionInvoker1<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_*>::Invoke
                  (0xb,IPlatformSDK_t445C2B3B280259FC57B4D89D7580436E90078756_il2cpp_TypeInfo_var,
                   pIVar4,pAVar5), extraout_EAX_01 == (Il2CppObject *)0x0)) goto LAB_109c6016;
    InterfaceActionInvoker1<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_*>::Invoke
              (1,IStorageContainer_t65144ABF49C5F5251019FAE254C96036B4D27490_il2cpp_TypeInfo_var,
               extraout_EAX_01,
               (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)
               param_1->___U3CsettingsPathU3E5__2_4);
    param_1->___U3CloadRequestU3E5__4_6 = extraout_EAX_02;
    pIVar4 = extraout_EAX_02;
    break;
  case 2:
    pIVar4 = param_1->___U3CloadRequestU3E5__4_6;
    param_1->___U3CU3E1__state_0 = -1;
    break;
  case 3:
    param_1->___U3CU3E1__state_0 = -1;
    if (param_1->___U3CmoveAllSavesU3E5__5_7 == (Il2CppObject *)0x0) goto LAB_109c6016;
    iVar9 = InterfaceFuncInvoker0<int>::Invoke
                      (0,IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var,
                       param_1->___U3CmoveAllSavesU3E5__5_7);
    if ((char)iVar9 != '\0') {
      param_1->___U3CU3E2__current_1 = (Il2CppObject *)0x0;
      param_1->___U3CU3E1__state_0 = 3;
      ExceptionList = local_10;
      return true;
    }
    param_1->___U3CmoveAllSavesU3E5__5_7 = (Il2CppObject *)0x0;
    if ((pSVar1 == (StorageUtils_t6E9DFB789C54B9B5604E6701C1D0E230BB7FAEF3 *)0x0) ||
       (pSVar1->___settingsData_4 == (SettingsData_t30CD9D6FCE66CFF6FA25505CC0D4FF98CE403617 *)0x0))
    goto LAB_109c6016;
    pSVar1->___settingsData_4->___version_0 = 1;
    param_1->___U3CloadRequestU3E5__4_6 = (Il2CppObject *)0x0;
    goto LAB_109c5ff1;
  case 4:
    param_1->___U3CU3E1__state_0 = -1;
LAB_109c5ff1:
    if ((OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)param_1->___callback_3 !=
        (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)0x0) {
      OnLocalizeCallback_Invoke_m8B28CFE294965737AFDCB15C1BFD40C7B4A43906
                ((OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
                 param_1->___callback_3,(MethodInfo *)0x0);
    }
switchD_109c5caa_default:
    ExceptionList = local_10;
    return false;
  default:
    goto switchD_109c5caa_default;
  }
  if (pIVar4 != (Il2CppObject *)0x0) {
    iVar9 = InterfaceFuncInvoker0<int>::Invoke
                      (0,IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var,
                       pIVar4);
    if ((char)iVar9 != '\0') {
      param_1->___U3CU3E2__current_1 = (Il2CppObject *)0x0;
      param_1->___U3CU3E1__state_0 = 2;
      ExceptionList = local_10;
      return true;
    }
    if (param_1->___U3CloadRequestU3E5__4_6 != (Il2CppObject *)0x0) {
      pBVar6 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726 *)
               InterfaceFuncInvoker0<int>::Invoke
                         (0,
                          IAsyncRequest_1_t45189C5E4D975901DABD9849B20891E77C79EA51_il2cpp_TypeInfo_var
                          ,param_1->___U3CloadRequestU3E5__4_6);
      pMVar7 = (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C *)
               il2cpp_codegen_object_new
                         (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var
                         );
      MemoryStream__ctor_m3E041ADD3DB7EA42E7DB56FE862097819C02B9C2(pMVar7,pBVar6,(MethodInfo *)0x0);
      local_8 = 0;
      if ((pSVar1 != (StorageUtils_t6E9DFB789C54B9B5604E6701C1D0E230BB7FAEF3 *)0x0) &&
         (pSVar1->___settingsXmlSerializer_13 !=
          (XmlSerializer_t2960FF2C2C062704541774440D09CA3DAFFCB01B *)0x0)) {
        pSVar8 = (SettingsData_t30CD9D6FCE66CFF6FA25505CC0D4FF98CE403617 *)
                 XmlSerializer_Deserialize_m25B138EB9DFEAC76221ED87D8FDFBE31A7136AD5
                           (pSVar1->___settingsXmlSerializer_13,
                            (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB *)pMVar7,
                            (MethodInfo *)0x0);
        if (pSVar8 == (SettingsData_t30CD9D6FCE66CFF6FA25505CC0D4FF98CE403617 *)0x0) {
          pSVar1->___settingsData_4 = (SettingsData_t30CD9D6FCE66CFF6FA25505CC0D4FF98CE403617 *)0x0;
          uVar2 = FUN_109c5f02();
          return (bool)uVar2;
        }
        if ((SettingsData_t30CD9D6FCE66CFF6FA25505CC0D4FF98CE403617_il2cpp_TypeInfo_var->
             typeHierarchyDepth <= *(byte *)(pSVar8->_padding_ + 0xb4)) &&
           (*(Il2CppClass **)
             (*(int *)(pSVar8->_padding_ + 100) + -4 +
             (uint)SettingsData_t30CD9D6FCE66CFF6FA25505CC0D4FF98CE403617_il2cpp_TypeInfo_var->
                   typeHierarchyDepth * 4) ==
            SettingsData_t30CD9D6FCE66CFF6FA25505CC0D4FF98CE403617_il2cpp_TypeInfo_var)) {
          pSVar1->___settingsData_4 = pSVar8;
          uVar2 = FUN_109c5f02();
          return (bool)uVar2;
        }
        pSVar1->___settingsData_4 = (SettingsData_t30CD9D6FCE66CFF6FA25505CC0D4FF98CE403617 *)0x0;
        uVar2 = FUN_109c5f02();
        return (bool)uVar2;
      }
    }
  }
LAB_109c6016:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
