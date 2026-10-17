// RVA 0x9c6070 | Placemaker.StorageUtils.<MoveAllSaves>d__25$$MoveNext
// PDB: U3CMoveAllSavesU3Ed__25_MoveNext_mAE85D1ED7214C57326D326850BDF1513B21B29A0
// Body: [[109c6070, 109c6544] [109c6582, 109c6586]]
// Direct callees:
// 1003e330 Invoke
// 1003e420 Invoke
// 101280f0 il2cpp_runtime_class_init
// 10128ae0 il2cpp_value_box
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1026bae0 SR_GetString_m9DC7F3962EEB239017A1A4C443F52047B5BC7462
// 102fd630 StorageUtils_GetFileNameFromAbsolutePath_mDEBF08E92545FE87D833C54BA73ADABA4209DB9F
// 102fd980 StorageUtils_RefreshFilesList_mAFBD26546E6E4772E4C82E3945AA5BA22F3F6554
// 102fddd0 StorageUtils_get_files_m03CEF749C61C4F7B09F7917BBFB08163FAAA646C
// 105166a0 ReadOnlyCollection_1_GetEnumerator_m0A5B4DCA0DDC104A8028B72D56D5545C8C114E29_gshared
// 10749050 Platform_get_SDK_m22BFADA660A0C166EE96936AB9A6C23915E6CB3F_inline
// 109c6620 U3CMoveAllSavesU3Ed__25_U3CU3Em__Finally1_m480743FC2CAFFA80E4A598D8AFDDA6EA35839081
// 10a35d20 Application_get_persistentDataPath_mBD9C84D06693A9DEF2D9D2206B59D4BCF8A03463
// 10a3cbf0 Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8
// 10a70740 File_Copy_m0405411AE250222E046657B870C15D9B18D3573C
// 10a70e50 File_Delete_m82FE53535A3911380F7E4C8AD44D77FAB330FD77
// 10b19040 Directory_CreateDirectory_m38040338519C48CE52137CC146372A153D5C6A7A
// 10ed9980 Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF
// 10f02470 String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B
// 10f02d80 String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A
// 10f04a30 String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6
// 10f04bc0 String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66

bool __cdecl
U3CMoveAllSavesU3Ed__25_MoveNext_mAE85D1ED7214C57326D326850BDF1513B21B29A0
          (U3CMoveAllSavesU3Ed__25_t6CA46A6619904EC57B8C55D47A26C884858A8D60 *param_1,
          MethodInfo *param_2)

{
  StorageUtils_t6E9DFB789C54B9B5604E6701C1D0E230BB7FAEF3 *pSVar1;
  undefined1 *puVar2;
  bool bVar3;
  ReadOnlyCollection_1_t4348A40742B97AA544A2F3845FA1C60512811C28 *pRVar4;
  Il2CppObject *pIVar5;
  Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *pAVar6;
  Il2CppObject *extraout_EAX;
  Il2CppObject *extraout_EAX_00;
  int iVar7;
  String_t *pSVar8;
  String_t *pSVar9;
  uint local_1c;
  undefined1 local_15;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  local_8 = 0xffffffff;
  puStack_c = &
              __ehhandler__U3CMoveAllSavesU3Ed__25_MoveNext_mAE85D1ED7214C57326D326850BDF1513B21B29A0
  ;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd0;
  ExceptionList = &local_10;
  puVar2 = &stack0xffffffd0;
  if (DAT_1151ff42 == '\0') {
    ExceptionList = &local_10;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       IAsyncRequest_1_t2300E24B26E92488C4EAC7E4C6D696921CB2830C_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IEnumerator_1_t0DE5AA701B682A891412350E63D3E441F98F205C_il2cpp_TypeInfo_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IPlatformSDK_t445C2B3B280259FC57B4D89D7580436E90078756_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       IStorageContainer_t65144ABF49C5F5251019FAE254C96036B4D27490_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       ReadOnlyCollection_1_GetEnumerator_m1FA681403E2FD9C041CFF53EFCCDFD217B46ED55_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral1FB9018D8BFC0FACF068B1067EF9E96C35FED1FE);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral2703934E990F4D74F9E97D5985CDF284A870C0E0);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral80AB2963811892DCF8FB24965C20B3C692C9275C);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral8C8CD13FA87E816D73FDBFEC04A33379D1012917);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral919FBC713DA3D137E06A974504E1D16C00FD51F2);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralE541D26859D264DEB1E7847324CA9C765F331CF8);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralF9603110CD994850BB7E88E6FC7174E5BDE2D2EC);
    DAT_1151ff42 = '\x01';
    puVar2 = local_14;
  }
  local_14 = puVar2;
  local_15 = 0;
  iVar7 = param_1->___U3CU3E1__state_0;
  pSVar1 = param_1->___U3CU3E4__this_2;
  local_8 = 0;
  if (iVar7 == 0) {
    param_1->___U3CU3E1__state_0 = -1;
    if (pSVar1 == (StorageUtils_t6E9DFB789C54B9B5604E6701C1D0E230BB7FAEF3 *)0x0) goto LAB_109c6582;
    pIVar5 = StorageUtils_RefreshFilesList_mAFBD26546E6E4772E4C82E3945AA5BA22F3F6554
                       (pSVar1,(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)0x0,
                        (MethodInfo *)0x0);
    param_1->___U3CrefreshFilesListU3E5__2_3 = pIVar5;
  }
  else {
    if (iVar7 != 1) {
      if (iVar7 == 2) {
        pIVar5 = param_1->___U3CfileExistsRequestU3E5__7_8;
        param_1->___U3CU3E1__state_0 = -3;
        goto LAB_109c63bf;
      }
      ExceptionList = local_10;
      return false;
    }
    pIVar5 = param_1->___U3CrefreshFilesListU3E5__2_3;
    param_1->___U3CU3E1__state_0 = -1;
  }
  if (pIVar5 != (Il2CppObject *)0x0) {
    iVar7 = InterfaceFuncInvoker0<int>::Invoke
                      (0,IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var,
                       pIVar5);
    if ((char)iVar7 != '\0') {
      param_1->___U3CU3E2__current_1 = (Il2CppObject *)0x0;
      param_1->___U3CU3E1__state_0 = 1;
      ExceptionList = local_10;
      return true;
    }
    pSVar8 = Application_get_persistentDataPath_mBD9C84D06693A9DEF2D9D2206B59D4BCF8A03463
                       ((MethodInfo *)0x0);
    if ((Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var->has_cctor != '\0') &&
       (Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var->cctor_finished == 0)) {
      il2cpp_runtime_class_init(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
    }
    local_1c = (uint)*(ushort *)
                      ((int)Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var->
                            static_fields + 6);
    pIVar5 = il2cpp_value_box(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var,
                              &local_1c);
    pSVar8 = String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6
                       (_stringLiteral2703934E990F4D74F9E97D5985CDF284A870C0E0,
                        (Il2CppObject *)pSVar8,pIVar5,
                        (Il2CppObject *)_stringLiteral919FBC713DA3D137E06A974504E1D16C00FD51F2,
                        (MethodInfo *)0x0);
    param_1->___U3CsaveDirectoryPathU3E5__3_4 = pSVar8;
    Directory_CreateDirectory_m38040338519C48CE52137CC146372A153D5C6A7A(pSVar8,(MethodInfo *)0x0);
    if ((pSVar1 != (StorageUtils_t6E9DFB789C54B9B5604E6701C1D0E230BB7FAEF3 *)0x0) &&
       (pRVar4 = StorageUtils_get_files_m03CEF749C61C4F7B09F7917BBFB08163FAAA646C
                           (pSVar1,(MethodInfo *)0x0),
       pRVar4 != (ReadOnlyCollection_1_t4348A40742B97AA544A2F3845FA1C60512811C28 *)0x0)) {
      pIVar5 = ReadOnlyCollection_1_GetEnumerator_m0A5B4DCA0DDC104A8028B72D56D5545C8C114E29_gshared
                         ((ReadOnlyCollection_1_t2AE9A3943142F0664B3BA18957B2FACE0806AA7A *)pRVar4,
                          ReadOnlyCollection_1_GetEnumerator_m1FA681403E2FD9C041CFF53EFCCDFD217B46ED55_RuntimeMethod_var
                         );
      param_1->___U3CU3E7__wrap3_5 = pIVar5;
      param_1->___U3CU3E1__state_0 = -3;
      while (param_1->___U3CU3E7__wrap3_5 != (Il2CppObject *)0x0) {
        iVar7 = InterfaceFuncInvoker0<int>::Invoke
                          (0,
                           IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var
                           ,param_1->___U3CU3E7__wrap3_5);
        if ((char)iVar7 == '\0') {
          U3CMoveAllSavesU3Ed__25_U3CU3Em__Finally1_m480743FC2CAFFA80E4A598D8AFDDA6EA35839081
                    (param_1,(MethodInfo *)0x0);
          param_1->___U3CU3E7__wrap3_5 = (Il2CppObject *)0x0;
          ExceptionList = local_10;
          return false;
        }
        if (param_1->___U3CU3E7__wrap3_5 == (Il2CppObject *)0x0) break;
        pSVar8 = (String_t *)
                 InterfaceFuncInvoker0<int>::Invoke
                           (0,
                            IEnumerator_1_t0DE5AA701B682A891412350E63D3E441F98F205C_il2cpp_TypeInfo_var
                            ,param_1->___U3CU3E7__wrap3_5);
        param_1->___U3CfileU3E5__5_6 = pSVar8;
        if ((pSVar1 == (StorageUtils_t6E9DFB789C54B9B5604E6701C1D0E230BB7FAEF3 *)0x0) ||
           (pSVar8 = StorageUtils_GetFileNameFromAbsolutePath_mDEBF08E92545FE87D833C54BA73ADABA4209DB9F
                               (pSVar1,pSVar8,(MethodInfo *)0x0), pSVar8 == (String_t *)0x0)) break;
        bVar3 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A
                          (pSVar8,_stringLiteralF9603110CD994850BB7E88E6FC7174E5BDE2D2EC,
                           (MethodInfo *)0x0);
        if (bVar3) {
          pSVar9 = param_1->___U3CsaveDirectoryPathU3E5__3_4;
          if ((Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var->has_cctor != '\0'
              ) && (Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var->
                    cctor_finished == 0)) {
            il2cpp_runtime_class_init
                      (Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
          }
          local_1c = (uint)*(ushort *)
                            ((int)Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var
                                  ->static_fields + 6);
          pIVar5 = il2cpp_value_box(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var
                                    ,&local_1c);
          pSVar8 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66
                             (_stringLiteral1FB9018D8BFC0FACF068B1067EF9E96C35FED1FE,pIVar5,
                              (Il2CppObject *)pSVar8,(MethodInfo *)0x0);
          pSVar8 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B
                             (pSVar9,pSVar8,(MethodInfo *)0x0);
          param_1->___U3CnewPathU3E5__6_7 = pSVar8;
          pIVar5 = Platform_get_SDK_m22BFADA660A0C166EE96936AB9A6C23915E6CB3F_inline
                             ((MethodInfo *)0x0);
          pAVar6 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)
                   SR_GetString_m9DC7F3962EEB239017A1A4C443F52047B5BC7462
                             (_stringLiteralE541D26859D264DEB1E7847324CA9C765F331CF8,
                              (MethodInfo *)0x0);
          if ((pIVar5 == (Il2CppObject *)0x0) ||
             (InterfaceActionInvoker1<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_*>::Invoke
                        (0xb,
                         IPlatformSDK_t445C2B3B280259FC57B4D89D7580436E90078756_il2cpp_TypeInfo_var,
                         pIVar5,pAVar6), extraout_EAX == (Il2CppObject *)0x0)) break;
          InterfaceActionInvoker1<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_*>::Invoke
                    (6,
                     IStorageContainer_t65144ABF49C5F5251019FAE254C96036B4D27490_il2cpp_TypeInfo_var
                     ,extraout_EAX,
                     (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)
                     param_1->___U3CnewPathU3E5__6_7);
          param_1->___U3CfileExistsRequestU3E5__7_8 = extraout_EAX_00;
          pIVar5 = extraout_EAX_00;
LAB_109c63bf:
          if (pIVar5 == (Il2CppObject *)0x0) break;
          iVar7 = InterfaceFuncInvoker0<int>::Invoke
                            (0,
                             IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var
                             ,pIVar5);
          if ((char)iVar7 != '\0') {
            param_1->___U3CU3E2__current_1 = (Il2CppObject *)0x0;
            param_1->___U3CU3E1__state_0 = 2;
            ExceptionList = local_10;
            return true;
          }
          if (param_1->___U3CfileExistsRequestU3E5__7_8 == (Il2CppObject *)0x0) break;
          iVar7 = InterfaceFuncInvoker0<int>::Invoke
                            (0,
                             IAsyncRequest_1_t2300E24B26E92488C4EAC7E4C6D696921CB2830C_il2cpp_TypeInfo_var
                             ,param_1->___U3CfileExistsRequestU3E5__7_8);
          if ((char)iVar7 == '\0') {
            pSVar8 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B
                               (_stringLiteral80AB2963811892DCF8FB24965C20B3C692C9275C,
                                param_1->___U3CnewPathU3E5__6_7,(MethodInfo *)0x0);
            if ((Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->has_cctor !=
                 '\0') &&
               (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->cctor_finished
                == 0)) {
              il2cpp_runtime_class_init
                        (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
            }
            Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8
                      ((Il2CppObject *)pSVar8,(MethodInfo *)0x0);
            pSVar9 = Application_get_persistentDataPath_mBD9C84D06693A9DEF2D9D2206B59D4BCF8A03463
                               ((MethodInfo *)0x0);
            pSVar8 = param_1->___U3CfileU3E5__5_6;
            if ((Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var->has_cctor !=
                 '\0') &&
               (Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var->cctor_finished
                == 0)) {
              il2cpp_runtime_class_init
                        (Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
            }
            pSVar8 = Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF
                               (pSVar9,pSVar8,(MethodInfo *)0x0);
            File_Copy_m0405411AE250222E046657B870C15D9B18D3573C
                      (pSVar8,param_1->___U3CnewPathU3E5__6_7,(MethodInfo *)0x0);
            pSVar8 = Application_get_persistentDataPath_mBD9C84D06693A9DEF2D9D2206B59D4BCF8A03463
                               ((MethodInfo *)0x0);
            pSVar8 = Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF
                               (pSVar8,param_1->___U3CfileU3E5__5_6,(MethodInfo *)0x0);
            File_Delete_m82FE53535A3911380F7E4C8AD44D77FAB330FD77(pSVar8,(MethodInfo *)0x0);
          }
          else {
            pSVar8 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B
                               (param_1->___U3CnewPathU3E5__6_7,
                                _stringLiteral8C8CD13FA87E816D73FDBFEC04A33379D1012917,
                                (MethodInfo *)0x0);
            if ((Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->has_cctor !=
                 '\0') &&
               (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->cctor_finished
                == 0)) {
              il2cpp_runtime_class_init
                        (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
            }
            Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8
                      ((Il2CppObject *)pSVar8,(MethodInfo *)0x0);
          }
          param_1->___U3CnewPathU3E5__6_7 = (String_t *)0x0;
          param_1->___U3CfileExistsRequestU3E5__7_8 = (Il2CppObject *)0x0;
        }
        param_1->___U3CfileU3E5__5_6 = (String_t *)0x0;
      }
    }
  }
LAB_109c6582:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
