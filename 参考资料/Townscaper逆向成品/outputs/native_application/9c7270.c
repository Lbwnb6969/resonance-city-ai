// RVA 0x9c7270 | Placemaker.StorageUtils.<SaveToPath>d__23$$MoveNext
// PDB: U3CSaveToPathU3Ed__23_MoveNext_m99AED381FF59B810C9B3F82A860258AAABF8C0B2
// Body: [[109c7270, 109c758b] [109c75c9, 109c75cd]]
// Direct callees:
// 1003e330 Invoke
// 1003e420 Invoke
// 1003e530 Invoke
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1026bae0 SR_GetString_m9DC7F3962EEB239017A1A4C443F52047B5BC7462
// 103974b0 XmlSerializer_Serialize_m1197823DA2FA8F0BA51719C82AF294B93172BEB6
// 108d37d0 MemoryStream__ctor_mD27B3DF2400D46A4A81EE78B0BD2C29EFCFAA44F
// 109c7670 U3CSaveToPathU3Ed__23_U3CU3Em__Finally1_m9A7816A4C60213825BC05299C1D5ADFA496F4076
// 10a3cbf0 Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8
// 10f02470 String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B

bool __cdecl
U3CSaveToPathU3Ed__23_MoveNext_m99AED381FF59B810C9B3F82A860258AAABF8C0B2
          (U3CSaveToPathU3Ed__23_t11F7B785B626EF11BF8E7674654FEB20D8E0F6CF *param_1,
          MethodInfo *param_2)

{
  StorageUtils_t6E9DFB789C54B9B5604E6701C1D0E230BB7FAEF3 *pSVar1;
  XmlSerializer_t2960FF2C2C062704541774440D09CA3DAFFCB01B *pXVar2;
  Il2CppObject *extraout_EAX;
  Il2CppObject *extraout_EAX_00;
  String_t *pSVar3;
  MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C *pMVar4;
  ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726 *pBVar5;
  Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *pAVar6;
  Il2CppObject *extraout_EAX_01;
  Il2CppObject *pIVar7;
  int iVar8;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  local_8 = 0xffffffff;
  puStack_c = &__ehhandler__U3CSaveToPathU3Ed__23_MoveNext_m99AED381FF59B810C9B3F82A860258AAABF8C0B2
  ;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (DAT_1151ff48 == '\0') {
    ExceptionList = &local_10;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       IAsyncRequest_1_t2300E24B26E92488C4EAC7E4C6D696921CB2830C_il2cpp_TypeInfo_var
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
              ((uint *)&MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral1A107A8C20A878C51E3CA4C697DEFB22FA5412BE);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralE541D26859D264DEB1E7847324CA9C765F331CF8);
    DAT_1151ff48 = '\x01';
  }
  local_8 = 0;
  iVar8 = param_1->___U3CU3E1__state_0;
  pSVar1 = param_1->___U3CU3E4__this_3;
  if (iVar8 == 0) {
    param_1->___U3CU3E1__state_0 = -1;
    if (`struct_Il2CppObject*___cdecl_Platform_get_SDK_m22BFADA660A0C166EE96936AB9A6C23915E6CB3F_inline(MethodInfo_const*)'
        ::__l2::s_Il2CppMethodInitialized == false) {
      il2cpp_codegen_initialize_runtime_metadata
                ((uint *)&Platform_tFCB0DECED6100708E85A7495E5F89EFAC65C7072_il2cpp_TypeInfo_var);
      `struct_Il2CppObject*___cdecl_Platform_get_SDK_m22BFADA660A0C166EE96936AB9A6C23915E6CB3F_inline(MethodInfo_const*)'
      ::__l2::s_Il2CppMethodInitialized = true;
    }
    pIVar7 = *(Il2CppObject **)
              Platform_tFCB0DECED6100708E85A7495E5F89EFAC65C7072_il2cpp_TypeInfo_var->static_fields;
    pAVar6 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)
             SR_GetString_m9DC7F3962EEB239017A1A4C443F52047B5BC7462
                       (_stringLiteralE541D26859D264DEB1E7847324CA9C765F331CF8,(MethodInfo *)0x0);
    if ((pIVar7 == (Il2CppObject *)0x0) ||
       (InterfaceActionInvoker1<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_*>::Invoke
                  (0xb,IPlatformSDK_t445C2B3B280259FC57B4D89D7580436E90078756_il2cpp_TypeInfo_var,
                   pIVar7,pAVar6), extraout_EAX == (Il2CppObject *)0x0)) goto LAB_109c75c9;
    InterfaceActionInvoker1<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_*>::Invoke
              (6,IStorageContainer_t65144ABF49C5F5251019FAE254C96036B4D27490_il2cpp_TypeInfo_var,
               extraout_EAX,(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)param_1->___path_2);
    param_1->___U3CfileExistsRequestU3E5__2_5 = extraout_EAX_00;
    pIVar7 = extraout_EAX_00;
LAB_109c73ad:
    if (pIVar7 == (Il2CppObject *)0x0) goto LAB_109c75c9;
    iVar8 = InterfaceFuncInvoker0<int>::Invoke
                      (0,IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var,
                       pIVar7);
    if ((char)iVar8 != '\0') {
      param_1->___U3CU3E2__current_1 = (Il2CppObject *)0x0;
      param_1->___U3CU3E1__state_0 = 1;
      ExceptionList = local_10;
      return true;
    }
    if (param_1->___U3CfileExistsRequestU3E5__2_5 == (Il2CppObject *)0x0) goto LAB_109c75c9;
    iVar8 = InterfaceFuncInvoker0<int>::Invoke
                      (0,
                       IAsyncRequest_1_t2300E24B26E92488C4EAC7E4C6D696921CB2830C_il2cpp_TypeInfo_var
                       ,param_1->___U3CfileExistsRequestU3E5__2_5);
    if ((char)iVar8 == '\0') {
      pSVar3 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B
                         (param_1->___path_2,_stringLiteral1A107A8C20A878C51E3CA4C697DEFB22FA5412BE,
                          (MethodInfo *)0x0);
      if ((Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->has_cctor != '\0')
         && (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->cctor_finished ==
             0)) {
        il2cpp_runtime_class_init
                  (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
      }
      Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8((Il2CppObject *)pSVar3,(MethodInfo *)0x0);
    }
    pMVar4 = (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C *)
             il2cpp_codegen_object_new
                       (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var);
    MemoryStream__ctor_mD27B3DF2400D46A4A81EE78B0BD2C29EFCFAA44F(pMVar4,(MethodInfo *)0x0);
    param_1->___U3CstreamU3E5__3_6 = pMVar4;
    param_1->___U3CU3E1__state_0 = -3;
    if ((pSVar1 == (StorageUtils_t6E9DFB789C54B9B5604E6701C1D0E230BB7FAEF3 *)0x0) ||
       (pXVar2 = pSVar1->___saveXmlSerializer_14,
       pXVar2 == (XmlSerializer_t2960FF2C2C062704541774440D09CA3DAFFCB01B *)0x0)) goto LAB_109c75c9;
    XmlSerializer_Serialize_m1197823DA2FA8F0BA51719C82AF294B93172BEB6
              (pXVar2,(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB *)pMVar4,
               (Il2CppObject *)param_1->___data_4,(MethodInfo *)0x0);
    pMVar4 = param_1->___U3CstreamU3E5__3_6;
    if (pMVar4 == (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C *)0x0) goto LAB_109c75c9;
    pBVar5 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726 *)
             (**(code **)(pMVar4->_padding_ + 0x1cc))
                       (pMVar4,*(undefined4 *)(pMVar4->_padding_ + 0x1d0));
    if (`struct_Il2CppObject*___cdecl_Platform_get_SDK_m22BFADA660A0C166EE96936AB9A6C23915E6CB3F_inline(MethodInfo_const*)'
        ::__l2::s_Il2CppMethodInitialized == false) {
      il2cpp_codegen_initialize_runtime_metadata
                ((uint *)&Platform_tFCB0DECED6100708E85A7495E5F89EFAC65C7072_il2cpp_TypeInfo_var);
      `struct_Il2CppObject*___cdecl_Platform_get_SDK_m22BFADA660A0C166EE96936AB9A6C23915E6CB3F_inline(MethodInfo_const*)'
      ::__l2::s_Il2CppMethodInitialized = true;
    }
    pIVar7 = *(Il2CppObject **)
              Platform_tFCB0DECED6100708E85A7495E5F89EFAC65C7072_il2cpp_TypeInfo_var->static_fields;
    pAVar6 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)
             SR_GetString_m9DC7F3962EEB239017A1A4C443F52047B5BC7462
                       (_stringLiteralE541D26859D264DEB1E7847324CA9C765F331CF8,(MethodInfo *)0x0);
    if ((pIVar7 == (Il2CppObject *)0x0) ||
       (InterfaceActionInvoker1<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_*>::Invoke
                  (0xb,IPlatformSDK_t445C2B3B280259FC57B4D89D7580436E90078756_il2cpp_TypeInfo_var,
                   pIVar7,pAVar6), extraout_EAX_01 == (Il2CppObject *)0x0)) goto LAB_109c75c9;
    pIVar7 = InterfaceFuncInvoker2<Il2CppObject_*,String_t_*,ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_*>
             ::Invoke(3,
                      IStorageContainer_t65144ABF49C5F5251019FAE254C96036B4D27490_il2cpp_TypeInfo_var
                      ,extraout_EAX_01,param_1->___path_2,pBVar5);
    param_1->___U3CrequestU3E5__4_7 = pIVar7;
  }
  else {
    if (iVar8 == 1) {
      pIVar7 = param_1->___U3CfileExistsRequestU3E5__2_5;
      param_1->___U3CU3E1__state_0 = -1;
      goto LAB_109c73ad;
    }
    if (iVar8 != 2) {
      ExceptionList = local_10;
      return false;
    }
    pIVar7 = param_1->___U3CrequestU3E5__4_7;
    param_1->___U3CU3E1__state_0 = -3;
  }
  if (pIVar7 != (Il2CppObject *)0x0) {
    iVar8 = InterfaceFuncInvoker0<int>::Invoke
                      (0,IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var,
                       pIVar7);
    if ((char)iVar8 == '\0') {
      param_1->___U3CrequestU3E5__4_7 = (Il2CppObject *)0x0;
      U3CSaveToPathU3Ed__23_U3CU3Em__Finally1_m9A7816A4C60213825BC05299C1D5ADFA496F4076
                (param_1,(MethodInfo *)0x0);
      param_1->___U3CstreamU3E5__3_6 = (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C *)0x0
      ;
      ExceptionList = local_10;
      return false;
    }
    param_1->___U3CU3E2__current_1 = (Il2CppObject *)0x0;
    param_1->___U3CU3E1__state_0 = 2;
    ExceptionList = local_10;
    return true;
  }
LAB_109c75c9:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
