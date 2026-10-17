// RVA 0x9c6f00 | Placemaker.StorageUtils.<SaveSettings>d__16$$MoveNext
// PDB: U3CSaveSettingsU3Ed__16_MoveNext_mE5455E8AD7A6A5E9BE85401AAB402B5903420A7F
// Body: [[109c6f00, 109c7140] [109c717e, 109c7182]]
// Direct callees:
// 1003e330 Invoke
// 1003e420 Invoke
// 1003e530 Invoke
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d8380 OnLocalizeCallback_Invoke_m8B28CFE294965737AFDCB15C1BFD40C7B4A43906
// 101f84f0 XplatUIWin32_GetPreviousWindow_m237EE532B2E8B29F9F11AF17B234415BEF946EAD
// 1026bae0 SR_GetString_m9DC7F3962EEB239017A1A4C443F52047B5BC7462
// 103974b0 XmlSerializer_Serialize_m1197823DA2FA8F0BA51719C82AF294B93172BEB6
// 108d37d0 MemoryStream__ctor_mD27B3DF2400D46A4A81EE78B0BD2C29EFCFAA44F

bool __cdecl
U3CSaveSettingsU3Ed__16_MoveNext_mE5455E8AD7A6A5E9BE85401AAB402B5903420A7F
          (U3CSaveSettingsU3Ed__16_t72B654E5E2248FCD7EF0C1D0D1F28BB0AA30C80D *param_1,
          MethodInfo *param_2)

{
  StorageUtils_t6E9DFB789C54B9B5604E6701C1D0E230BB7FAEF3 *pSVar1;
  String_t *pSVar2;
  MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C *pMVar3;
  ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726 *pBVar4;
  Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *pAVar5;
  Il2CppObject *extraout_EAX;
  Il2CppObject *pIVar6;
  int iVar7;
  bool bVar8;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  local_8 = 0xffffffff;
  puStack_c = &
              __ehhandler__U3CSaveSettingsU3Ed__16_MoveNext_mE5455E8AD7A6A5E9BE85401AAB402B5903420A7F
  ;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (DAT_1151ff46 == '\0') {
    ExceptionList = &local_10;
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
              ((uint *)&_stringLiteralE541D26859D264DEB1E7847324CA9C765F331CF8);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralECCEF6640EFE004FEAD77E3917F0A856C6BFE14B);
    DAT_1151ff46 = '\x01';
  }
  local_8 = 0;
  pSVar1 = param_1->___U3CU3E4__this_2;
  if (param_1->___U3CU3E1__state_0 == 0) {
    param_1->___U3CU3E1__state_0 = -1;
    if (pSVar1 == (StorageUtils_t6E9DFB789C54B9B5604E6701C1D0E230BB7FAEF3 *)0x0) goto LAB_109c717e;
    pSVar2 = (String_t *)
             XplatUIWin32_GetPreviousWindow_m237EE532B2E8B29F9F11AF17B234415BEF946EAD
                       ((XplatUIWin32_tC9AC40758D2C6FC5FDB252A3788B5D09620B8DAC *)pSVar1,
                        (int)_stringLiteralECCEF6640EFE004FEAD77E3917F0A856C6BFE14B,
                        (MethodInfo *)0x0);
    pMVar3 = (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C *)
             il2cpp_codegen_object_new
                       (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var);
    MemoryStream__ctor_mD27B3DF2400D46A4A81EE78B0BD2C29EFCFAA44F(pMVar3,(MethodInfo *)0x0);
    param_1->___U3CstreamU3E5__2_4 = pMVar3;
    param_1->___U3CU3E1__state_0 = -3;
    if (pSVar1->___settingsXmlSerializer_13 ==
        (XmlSerializer_t2960FF2C2C062704541774440D09CA3DAFFCB01B *)0x0) goto LAB_109c717e;
    XmlSerializer_Serialize_m1197823DA2FA8F0BA51719C82AF294B93172BEB6
              (pSVar1->___settingsXmlSerializer_13,
               (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB *)pMVar3,
               (Il2CppObject *)pSVar1->___settingsData_4,(MethodInfo *)0x0);
    pMVar3 = param_1->___U3CstreamU3E5__2_4;
    if (pMVar3 == (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C *)0x0) goto LAB_109c717e;
    pBVar4 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726 *)
             (**(code **)(pMVar3->_padding_ + 0x1cc))
                       (pMVar3,*(undefined4 *)(pMVar3->_padding_ + 0x1d0));
    if (`struct_Il2CppObject*___cdecl_Platform_get_SDK_m22BFADA660A0C166EE96936AB9A6C23915E6CB3F_inline(MethodInfo_const*)'
        ::__l2::s_Il2CppMethodInitialized == false) {
      il2cpp_codegen_initialize_runtime_metadata
                ((uint *)&Platform_tFCB0DECED6100708E85A7495E5F89EFAC65C7072_il2cpp_TypeInfo_var);
      `struct_Il2CppObject*___cdecl_Platform_get_SDK_m22BFADA660A0C166EE96936AB9A6C23915E6CB3F_inline(MethodInfo_const*)'
      ::__l2::s_Il2CppMethodInitialized = true;
    }
    pIVar6 = *(Il2CppObject **)
              Platform_tFCB0DECED6100708E85A7495E5F89EFAC65C7072_il2cpp_TypeInfo_var->static_fields;
    pAVar5 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)
             SR_GetString_m9DC7F3962EEB239017A1A4C443F52047B5BC7462
                       (_stringLiteralE541D26859D264DEB1E7847324CA9C765F331CF8,(MethodInfo *)0x0);
    if ((pIVar6 == (Il2CppObject *)0x0) ||
       (InterfaceActionInvoker1<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_*>::Invoke
                  (0xb,IPlatformSDK_t445C2B3B280259FC57B4D89D7580436E90078756_il2cpp_TypeInfo_var,
                   pIVar6,pAVar5), extraout_EAX == (Il2CppObject *)0x0)) goto LAB_109c717e;
    pIVar6 = InterfaceFuncInvoker2<Il2CppObject_*,String_t_*,ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_*>
             ::Invoke(3,
                      IStorageContainer_t65144ABF49C5F5251019FAE254C96036B4D27490_il2cpp_TypeInfo_var
                      ,extraout_EAX,pSVar2,pBVar4);
    param_1->___U3CrequestU3E5__3_5 = pIVar6;
  }
  else {
    if (param_1->___U3CU3E1__state_0 != 1) {
      ExceptionList = local_10;
      return false;
    }
    pIVar6 = param_1->___U3CrequestU3E5__3_5;
    param_1->___U3CU3E1__state_0 = -3;
  }
  if (pIVar6 != (Il2CppObject *)0x0) {
    iVar7 = InterfaceFuncInvoker0<int>::Invoke
                      (0,IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var,
                       pIVar6);
    if ((char)iVar7 == '\0') {
      bVar8 = DAT_1151ff47 == '\0';
      param_1->___U3CrequestU3E5__3_5 = (Il2CppObject *)0x0;
      if (bVar8) {
        il2cpp_codegen_initialize_runtime_metadata
                  ((uint *)&
                           IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var
                  );
        DAT_1151ff47 = '\x01';
      }
      param_1->___U3CU3E1__state_0 = -1;
      if (param_1->___U3CstreamU3E5__2_4 !=
          (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C *)0x0) {
        InterfaceFuncInvoker0<int>::Invoke
                  (0,IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var,
                   (Il2CppObject *)param_1->___U3CstreamU3E5__2_4);
      }
      param_1->___U3CstreamU3E5__2_4 = (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C *)0x0
      ;
      if ((OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)param_1->___callback_3 !=
          (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)0x0) {
        OnLocalizeCallback_Invoke_m8B28CFE294965737AFDCB15C1BFD40C7B4A43906
                  ((OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
                   param_1->___callback_3,(MethodInfo *)0x0);
      }
      ExceptionList = local_10;
      return false;
    }
    param_1->___U3CU3E2__current_1 = (Il2CppObject *)0x0;
    param_1->___U3CU3E1__state_0 = 1;
    ExceptionList = local_10;
    return true;
  }
LAB_109c717e:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
