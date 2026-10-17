// RVA 0x9c5910 | Placemaker.StorageUtils.<LoadSaveToByteArray>d__20$$MoveNext
// PDB: U3CLoadSaveToByteArrayU3Ed__20_MoveNext_mCD1DA2359DB40B8D6DA246CD50DF85953CA54541
// Body: [[109c5910, 109c5b97]]
// Direct callees:
// 1003e330 Invoke
// 1003e420 Invoke
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d8380 OnLocalizeCallback_Invoke_m8B28CFE294965737AFDCB15C1BFD40C7B4A43906
// 1026bae0 SR_GetString_m9DC7F3962EEB239017A1A4C443F52047B5BC7462
// 10749050 Platform_get_SDK_m22BFADA660A0C166EE96936AB9A6C23915E6CB3F_inline
// 10a3c6b0 Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485
// 10f02470 String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B

bool __cdecl
U3CLoadSaveToByteArrayU3Ed__20_MoveNext_mCD1DA2359DB40B8D6DA246CD50DF85953CA54541
          (U3CLoadSaveToByteArrayU3Ed__20_t60847319D5CBA774FB2569173055A77B8382162A *param_1,
          MethodInfo *param_2)

{
  Il2CppObject *extraout_EAX;
  Il2CppObject *extraout_EAX_00;
  String_t *pSVar1;
  Il2CppObject *pIVar2;
  Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *pAVar3;
  Il2CppObject *extraout_EAX_01;
  Il2CppObject *extraout_EAX_02;
  int iVar4;
  ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726 *pBVar5;

  if (DAT_1151ff40 == '\0') {
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
              ((uint *)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IPlatformSDK_t445C2B3B280259FC57B4D89D7580436E90078756_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       IStorageContainer_t65144ABF49C5F5251019FAE254C96036B4D27490_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral438A154F1FB874E0BE9D99DB0393ACF8E5173C5A);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralE541D26859D264DEB1E7847324CA9C765F331CF8);
    DAT_1151ff40 = '\x01';
  }
  switch(param_1->___U3CU3E1__state_0) {
  case 0:
    param_1->___U3CU3E1__state_0 = -1;
    if (`struct_Il2CppObject*___cdecl_Platform_get_SDK_m22BFADA660A0C166EE96936AB9A6C23915E6CB3F_inline(MethodInfo_const*)'
        ::__l2::s_Il2CppMethodInitialized == false) {
      il2cpp_codegen_initialize_runtime_metadata
                ((uint *)&Platform_tFCB0DECED6100708E85A7495E5F89EFAC65C7072_il2cpp_TypeInfo_var);
      `struct_Il2CppObject*___cdecl_Platform_get_SDK_m22BFADA660A0C166EE96936AB9A6C23915E6CB3F_inline(MethodInfo_const*)'
      ::__l2::s_Il2CppMethodInitialized = true;
    }
    pIVar2 = *(Il2CppObject **)
              Platform_tFCB0DECED6100708E85A7495E5F89EFAC65C7072_il2cpp_TypeInfo_var->static_fields;
    pAVar3 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)
             SR_GetString_m9DC7F3962EEB239017A1A4C443F52047B5BC7462
                       (_stringLiteralE541D26859D264DEB1E7847324CA9C765F331CF8,(MethodInfo *)0x0);
    if ((pIVar2 == (Il2CppObject *)0x0) ||
       (InterfaceActionInvoker1<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_*>::Invoke
                  (0xb,IPlatformSDK_t445C2B3B280259FC57B4D89D7580436E90078756_il2cpp_TypeInfo_var,
                   pIVar2,pAVar3), extraout_EAX == (Il2CppObject *)0x0)) goto LAB_109c5b93;
    InterfaceActionInvoker1<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_*>::Invoke
              (6,IStorageContainer_t65144ABF49C5F5251019FAE254C96036B4D27490_il2cpp_TypeInfo_var,
               extraout_EAX,
               (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)param_1->___filePath_2);
    param_1->___U3CfileExistsRequestU3E5__2_4 = extraout_EAX_00;
    break;
  case 1:
    param_1->___U3CU3E1__state_0 = -1;
    break;
  case 2:
    param_1->___U3CU3E1__state_0 = -1;
    goto LAB_109c5b15;
  case 3:
    param_1->___U3CU3E1__state_0 = -1;
    param_1->___U3CloadRequestU3E5__3_5 = (Il2CppObject *)0x0;
    goto LAB_109c5b7b;
  default:
    goto switchD_109c5991_default;
  }
  if (param_1->___U3CfileExistsRequestU3E5__2_4 != (Il2CppObject *)0x0) {
    iVar4 = InterfaceFuncInvoker0<int>::Invoke
                      (0,IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var,
                       param_1->___U3CfileExistsRequestU3E5__2_4);
    if ((char)iVar4 != '\0') {
      param_1->___U3CU3E2__current_1 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726 *)0x0;
      param_1->___U3CU3E1__state_0 = 1;
      return true;
    }
    if (param_1->___U3CfileExistsRequestU3E5__2_4 != (Il2CppObject *)0x0) {
      iVar4 = InterfaceFuncInvoker0<int>::Invoke
                        (0,
                         IAsyncRequest_1_t2300E24B26E92488C4EAC7E4C6D696921CB2830C_il2cpp_TypeInfo_var
                         ,param_1->___U3CfileExistsRequestU3E5__2_4);
      if ((char)iVar4 == '\0') {
        pSVar1 = param_1->___filePath_2;
        if (param_1->___filePath_2 == (String_t *)0x0) {
          pSVar1 = _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
        }
        pSVar1 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B
                           (_stringLiteral438A154F1FB874E0BE9D99DB0393ACF8E5173C5A,pSVar1,
                            (MethodInfo *)0x0);
        if ((Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->has_cctor != '\0')
           && (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->cctor_finished
               == 0)) {
          il2cpp_runtime_class_init
                    (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
        }
        Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485
                  ((Il2CppObject *)pSVar1,(MethodInfo *)0x0);
LAB_109c5b7b:
        if ((OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)param_1->___callback_3
            != (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)0x0) {
          OnLocalizeCallback_Invoke_m8B28CFE294965737AFDCB15C1BFD40C7B4A43906
                    ((OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
                     param_1->___callback_3,(MethodInfo *)0x0);
        }
switchD_109c5991_default:
        return false;
      }
      pIVar2 = Platform_get_SDK_m22BFADA660A0C166EE96936AB9A6C23915E6CB3F_inline((MethodInfo *)0x0);
      pAVar3 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)
               SR_GetString_m9DC7F3962EEB239017A1A4C443F52047B5BC7462
                         (_stringLiteralE541D26859D264DEB1E7847324CA9C765F331CF8,(MethodInfo *)0x0);
      if ((pIVar2 != (Il2CppObject *)0x0) &&
         (InterfaceActionInvoker1<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_*>::Invoke
                    (0xb,IPlatformSDK_t445C2B3B280259FC57B4D89D7580436E90078756_il2cpp_TypeInfo_var,
                     pIVar2,pAVar3), extraout_EAX_01 != (Il2CppObject *)0x0)) {
        InterfaceActionInvoker1<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_*>::Invoke
                  (1,IStorageContainer_t65144ABF49C5F5251019FAE254C96036B4D27490_il2cpp_TypeInfo_var
                   ,extraout_EAX_01,
                   (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)param_1->___filePath_2);
        param_1->___U3CloadRequestU3E5__3_5 = extraout_EAX_02;
LAB_109c5b15:
        if (param_1->___U3CloadRequestU3E5__3_5 != (Il2CppObject *)0x0) {
          iVar4 = InterfaceFuncInvoker0<int>::Invoke
                            (0,
                             IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var
                             ,param_1->___U3CloadRequestU3E5__3_5);
          if ((char)iVar4 != '\0') {
            param_1->___U3CU3E2__current_1 =
                 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726 *)0x0;
            param_1->___U3CU3E1__state_0 = 2;
            return true;
          }
          if (param_1->___U3CloadRequestU3E5__3_5 != (Il2CppObject *)0x0) {
            pBVar5 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726 *)
                     InterfaceFuncInvoker0<int>::Invoke
                               (0,
                                IAsyncRequest_1_t45189C5E4D975901DABD9849B20891E77C79EA51_il2cpp_TypeInfo_var
                                ,param_1->___U3CloadRequestU3E5__3_5);
            param_1->___U3CU3E2__current_1 = pBVar5;
            param_1->___U3CU3E1__state_0 = 3;
            return true;
          }
        }
      }
    }
  }
LAB_109c5b93:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
