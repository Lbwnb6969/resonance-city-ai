// RVA 0x9c46b0 | Placemaker.StorageUtils.<CreateAndSaveSettingsData>d__18$$MoveNext
// PDB: U3CCreateAndSaveSettingsDataU3Ed__18_MoveNext_mF62A8296A9C4F1B62900CC64DEE68421AF645262
// Body: [[109c46b0, 109c4a3c] [109c4a7a, 109c4a7e]]
// Direct callees:
// 1003e330 Invoke
// 1003e420 Invoke
// 1003e530 Invoke
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d8380 OnLocalizeCallback_Invoke_m8B28CFE294965737AFDCB15C1BFD40C7B4A43906
// 101f84f0 XplatUIWin32_GetPreviousWindow_m237EE532B2E8B29F9F11AF17B234415BEF946EAD
// 1026bae0 SR_GetString_m9DC7F3962EEB239017A1A4C443F52047B5BC7462
// 102fd930 StorageUtils_MoveAllSaves_m4D02B375934973CB991DE85D494E8BAA932B881D
// 102fda40 StorageUtils_SaveSettings_mC76427B68F45F8126018626BEFB13E9655611DA7
// 103974b0 XmlSerializer_Serialize_m1197823DA2FA8F0BA51719C82AF294B93172BEB6
// 108d37d0 MemoryStream__ctor_mD27B3DF2400D46A4A81EE78B0BD2C29EFCFAA44F
// 109c4b30 U3CCreateAndSaveSettingsDataU3Ed__18_U3CU3Em__Finally1_m4BAAB52D2416B1BAA947A112343EC45B84273D58
// 10a087c0 SettingsData__ctor_m7070D431438256A84F39CA5F4BA91F6BEBAB9539
// 10a3cbf0 Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8
// 10f02470 String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B

bool __cdecl
U3CCreateAndSaveSettingsDataU3Ed__18_MoveNext_mF62A8296A9C4F1B62900CC64DEE68421AF645262
          (U3CCreateAndSaveSettingsDataU3Ed__18_tFC5746EC37BC59ABC100C24BB2846D581FCAE345 *param_1,
          MethodInfo *param_2)

{
  StorageUtils_t6E9DFB789C54B9B5604E6701C1D0E230BB7FAEF3 *pSVar1;
  String_t *pSVar2;
  String_t *pSVar3;
  SettingsData_t30CD9D6FCE66CFF6FA25505CC0D4FF98CE403617 *pSVar4;
  MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C *pMVar5;
  ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726 *pBVar6;
  Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *pAVar7;
  Il2CppObject *extraout_EAX;
  int iVar8;
  Il2CppObject *pIVar9;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  local_8 = 0xffffffff;
  puStack_c = &
              __ehhandler__U3CCreateAndSaveSettingsDataU3Ed__18_MoveNext_mF62A8296A9C4F1B62900CC64DEE68421AF645262
  ;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (DAT_1151ff39 == '\0') {
    ExceptionList = &local_10;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
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
              ((uint *)&_stringLiteral27723CD1158377E84336AE22EDF14825663D3AF7);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral7549391F4BE511FC68ABE6390C5584C1FDF72601);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralBF2A01821BC9F7139F3BB290B3C4E41292A7F6B8);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralE541D26859D264DEB1E7847324CA9C765F331CF8);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralECCEF6640EFE004FEAD77E3917F0A856C6BFE14B);
    DAT_1151ff39 = '\x01';
  }
  local_8 = 0;
  pSVar1 = param_1->___U3CU3E4__this_2;
  switch(param_1->___U3CU3E1__state_0) {
  case 0:
    param_1->___U3CU3E1__state_0 = -1;
    if (pSVar1 != (StorageUtils_t6E9DFB789C54B9B5604E6701C1D0E230BB7FAEF3 *)0x0) {
      pSVar2 = (String_t *)
               XplatUIWin32_GetPreviousWindow_m237EE532B2E8B29F9F11AF17B234415BEF946EAD
                         ((XplatUIWin32_tC9AC40758D2C6FC5FDB252A3788B5D09620B8DAC *)pSVar1,
                          (int)_stringLiteralECCEF6640EFE004FEAD77E3917F0A856C6BFE14B,
                          (MethodInfo *)0x0);
      pSVar3 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B
                         (_stringLiteralBF2A01821BC9F7139F3BB290B3C4E41292A7F6B8,pSVar2,
                          (MethodInfo *)0x0);
      if ((Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->has_cctor != '\0')
         && (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->cctor_finished ==
             0)) {
        il2cpp_runtime_class_init
                  (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
      }
      Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8((Il2CppObject *)pSVar3,(MethodInfo *)0x0);
      pSVar4 = (SettingsData_t30CD9D6FCE66CFF6FA25505CC0D4FF98CE403617 *)
               il2cpp_codegen_object_new
                         (SettingsData_t30CD9D6FCE66CFF6FA25505CC0D4FF98CE403617_il2cpp_TypeInfo_var
                         );
      SettingsData__ctor_m7070D431438256A84F39CA5F4BA91F6BEBAB9539(pSVar4,(MethodInfo *)0x0);
      pSVar1->___settingsData_4 = pSVar4;
      pMVar5 = (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C *)
               il2cpp_codegen_object_new
                         (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var
                         );
      MemoryStream__ctor_mD27B3DF2400D46A4A81EE78B0BD2C29EFCFAA44F(pMVar5,(MethodInfo *)0x0);
      param_1->___U3CstreamU3E5__2_4 = pMVar5;
      param_1->___U3CU3E1__state_0 = -3;
      if (pSVar1->___settingsXmlSerializer_13 !=
          (XmlSerializer_t2960FF2C2C062704541774440D09CA3DAFFCB01B *)0x0) {
        XmlSerializer_Serialize_m1197823DA2FA8F0BA51719C82AF294B93172BEB6
                  (pSVar1->___settingsXmlSerializer_13,
                   (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB *)pMVar5,
                   (Il2CppObject *)pSVar1->___settingsData_4,(MethodInfo *)0x0);
        pMVar5 = param_1->___U3CstreamU3E5__2_4;
        if (pMVar5 != (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C *)0x0) {
          pBVar6 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726 *)
                   (**(code **)(pMVar5->_padding_ + 0x1cc))
                             (pMVar5,*(undefined4 *)(pMVar5->_padding_ + 0x1d0));
          if (`struct_Il2CppObject*___cdecl_Platform_get_SDK_m22BFADA660A0C166EE96936AB9A6C23915E6CB3F_inline(MethodInfo_const*)'
              ::__l2::s_Il2CppMethodInitialized == false) {
            il2cpp_codegen_initialize_runtime_metadata
                      ((uint *)&
                               Platform_tFCB0DECED6100708E85A7495E5F89EFAC65C7072_il2cpp_TypeInfo_var
                      );
            `struct_Il2CppObject*___cdecl_Platform_get_SDK_m22BFADA660A0C166EE96936AB9A6C23915E6CB3F_inline(MethodInfo_const*)'
            ::__l2::s_Il2CppMethodInitialized = true;
          }
          pIVar9 = *(Il2CppObject **)
                    Platform_tFCB0DECED6100708E85A7495E5F89EFAC65C7072_il2cpp_TypeInfo_var->
                    static_fields;
          pAVar7 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)
                   SR_GetString_m9DC7F3962EEB239017A1A4C443F52047B5BC7462
                             (_stringLiteralE541D26859D264DEB1E7847324CA9C765F331CF8,
                              (MethodInfo *)0x0);
          if ((pIVar9 != (Il2CppObject *)0x0) &&
             (InterfaceActionInvoker1<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_*>::Invoke
                        (0xb,
                         IPlatformSDK_t445C2B3B280259FC57B4D89D7580436E90078756_il2cpp_TypeInfo_var,
                         pIVar9,pAVar7), extraout_EAX != (Il2CppObject *)0x0)) {
            pIVar9 = InterfaceFuncInvoker2<Il2CppObject_*,String_t_*,ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_*>
                     ::Invoke(3,
                              IStorageContainer_t65144ABF49C5F5251019FAE254C96036B4D27490_il2cpp_TypeInfo_var
                              ,extraout_EAX,pSVar2,pBVar6);
            param_1->___U3CU3E2__current_1 = pIVar9;
            param_1->___U3CU3E1__state_0 = 1;
            ExceptionList = local_10;
            return true;
          }
        }
      }
    }
    goto LAB_109c4a7a;
  case 1:
    param_1->___U3CU3E1__state_0 = -3;
    U3CCreateAndSaveSettingsDataU3Ed__18_U3CU3Em__Finally1_m4BAAB52D2416B1BAA947A112343EC45B84273D58
              (param_1,(MethodInfo *)0x0);
    param_1->___U3CstreamU3E5__2_4 = (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C *)0x0;
    if ((Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->has_cctor != '\0') &&
       (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->cctor_finished == 0)) {
      il2cpp_runtime_class_init(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)
      ;
    }
    Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8
              ((Il2CppObject *)_stringLiteral27723CD1158377E84336AE22EDF14825663D3AF7,
               (MethodInfo *)0x0);
    if ((pSVar1 == (StorageUtils_t6E9DFB789C54B9B5604E6701C1D0E230BB7FAEF3 *)0x0) ||
       (pSVar1->___settingsData_4 == (SettingsData_t30CD9D6FCE66CFF6FA25505CC0D4FF98CE403617 *)0x0))
    goto LAB_109c4a7a;
    if (pSVar1->___settingsData_4->___version_0 == 0) {
      if ((Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->has_cctor != '\0')
         && (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->cctor_finished ==
             0)) {
        il2cpp_runtime_class_init
                  (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
      }
      Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8
                ((Il2CppObject *)_stringLiteral7549391F4BE511FC68ABE6390C5584C1FDF72601,
                 (MethodInfo *)0x0);
      pIVar9 = StorageUtils_MoveAllSaves_m4D02B375934973CB991DE85D494E8BAA932B881D
                         (pSVar1,(MethodInfo *)0x0);
      param_1->___U3CmoveAllSavesU3E5__3_5 = pIVar9;
      goto LAB_109c4988;
    }
    break;
  case 2:
    pIVar9 = param_1->___U3CmoveAllSavesU3E5__3_5;
    param_1->___U3CU3E1__state_0 = -1;
LAB_109c4988:
    if (pIVar9 == (Il2CppObject *)0x0) goto LAB_109c4a7a;
    iVar8 = InterfaceFuncInvoker0<int>::Invoke
                      (0,IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var,
                       pIVar9);
    if ((char)iVar8 != '\0') {
      param_1->___U3CU3E2__current_1 = (Il2CppObject *)0x0;
      param_1->___U3CU3E1__state_0 = 2;
      ExceptionList = local_10;
      return true;
    }
    param_1->___U3CmoveAllSavesU3E5__3_5 = (Il2CppObject *)0x0;
    break;
  case 3:
    param_1->___U3CU3E1__state_0 = -1;
    if ((OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)param_1->___callback_3 !=
        (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)0x0) {
      OnLocalizeCallback_Invoke_m8B28CFE294965737AFDCB15C1BFD40C7B4A43906
                ((OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
                 param_1->___callback_3,(MethodInfo *)0x0);
    }
  default:
    ExceptionList = local_10;
    return false;
  }
  if ((pSVar1 != (StorageUtils_t6E9DFB789C54B9B5604E6701C1D0E230BB7FAEF3 *)0x0) &&
     (pSVar1->___settingsData_4 != (SettingsData_t30CD9D6FCE66CFF6FA25505CC0D4FF98CE403617 *)0x0)) {
    pSVar1->___settingsData_4->___version_0 = 1;
    pIVar9 = StorageUtils_SaveSettings_mC76427B68F45F8126018626BEFB13E9655611DA7
                       (pSVar1,(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)0x0,
                        (MethodInfo *)0x0);
    param_1->___U3CU3E2__current_1 = pIVar9;
    param_1->___U3CU3E1__state_0 = 3;
    ExceptionList = local_10;
    return true;
  }
LAB_109c4a7a:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
