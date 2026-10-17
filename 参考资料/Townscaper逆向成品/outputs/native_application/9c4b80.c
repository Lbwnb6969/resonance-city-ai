// RVA 0x9c4b80 | Placemaker.StorageUtils.<DeleteCard>d__24$$MoveNext
// PDB: U3CDeleteCardU3Ed__24_MoveNext_m8D34D932F466473623DD51FEDF08F5011E364B45
// Body: [[109c4b80, 109c4ce8] [109c4cef, 109c4d42]]
// Direct callees:
// 1003e330 Invoke
// 1003e420 Invoke
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1026bae0 SR_GetString_m9DC7F3962EEB239017A1A4C443F52047B5BC7462
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
// 10f04510 String_Equals_mAFC6038D294F341434D9D67D7EADC7F97C556C9B
// 11036bc0 List_1_RemoveAt_m66148860899ECCAE9B323372032BFC1C255393D2_gshared

bool __cdecl
U3CDeleteCardU3Ed__24_MoveNext_m8D34D932F466473623DD51FEDF08F5011E364B45
          (U3CDeleteCardU3Ed__24_t3AAE947FBE3A6E60E8E50534C7210007E2DE217E *param_1,
          MethodInfo *param_2)

{
  StorageUtils_t6E9DFB789C54B9B5604E6701C1D0E230BB7FAEF3 *pSVar1;
  Il2CppObject *pIVar2;
  List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *pLVar3;
  bool bVar4;
  Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *pAVar5;
  Il2CppObject *extraout_EAX;
  Il2CppObject *extraout_EAX_00;
  int iVar6;
  uint uVar7;

  if (DAT_1151ff3b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IPlatformSDK_t445C2B3B280259FC57B4D89D7580436E90078756_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       IStorageContainer_t65144ABF49C5F5251019FAE254C96036B4D27490_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_RemoveAt_mF6A5472156C6CDBD7737FB15168FD637ED470C73_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralE541D26859D264DEB1E7847324CA9C765F331CF8);
    DAT_1151ff3b = '\x01';
  }
  pSVar1 = param_1->___U3CU3E4__this_3;
  if (param_1->___U3CU3E1__state_0 == 0) {
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
    pAVar5 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)
             SR_GetString_m9DC7F3962EEB239017A1A4C443F52047B5BC7462
                       (_stringLiteralE541D26859D264DEB1E7847324CA9C765F331CF8,(MethodInfo *)0x0);
    if (pIVar2 == (Il2CppObject *)0x0) goto LAB_109c4d3e;
    InterfaceActionInvoker1<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_*>::Invoke
              (0xb,IPlatformSDK_t445C2B3B280259FC57B4D89D7580436E90078756_il2cpp_TypeInfo_var,pIVar2
               ,pAVar5);
    if ((param_1->___card_2 == (SaveCard_t0D4BB910CDF8BB065BDBE2557107FC323BDAAC67 *)0x0) ||
       (extraout_EAX == (Il2CppObject *)0x0)) goto LAB_109c4d3e;
    InterfaceActionInvoker1<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_*>::Invoke
              (5,IStorageContainer_t65144ABF49C5F5251019FAE254C96036B4D27490_il2cpp_TypeInfo_var,
               extraout_EAX,
               (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)
               param_1->___card_2->___filePath_10);
    param_1->___U3CrequestU3E5__2_4 = extraout_EAX_00;
  }
  else {
    if (param_1->___U3CU3E1__state_0 != 1) {
      return false;
    }
    param_1->___U3CU3E1__state_0 = -1;
  }
  if (param_1->___U3CrequestU3E5__2_4 != (Il2CppObject *)0x0) {
    iVar6 = InterfaceFuncInvoker0<int>::Invoke
                      (0,IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var,
                       param_1->___U3CrequestU3E5__2_4);
    if ((char)iVar6 != '\0') {
      param_1->___U3CU3E2__current_1 = (Il2CppObject *)0x0;
      param_1->___U3CU3E1__state_0 = 1;
      return true;
    }
    uVar7 = 0;
    if (pSVar1 != (StorageUtils_t6E9DFB789C54B9B5604E6701C1D0E230BB7FAEF3 *)0x0) {
      iVar6 = 0x10;
      while (pLVar3 = pSVar1->___loadedFiles_7,
            pLVar3 != (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)0x0) {
        if (pLVar3->____size_2 <= (int)uVar7) {
          return false;
        }
        if ((uint)pLVar3->____size_2 <= uVar7) {
                    /* WARNING: Subroutine does not return */
          ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                    ((MethodInfo *)0x0);
        }
        if (param_1->___card_2 == (SaveCard_t0D4BB910CDF8BB065BDBE2557107FC323BDAAC67 *)0x0) break;
        bVar4 = String_Equals_mAFC6038D294F341434D9D67D7EADC7F97C556C9B
                          (*(String_t **)((int)pLVar3->____items_1->m_Items + iVar6 + -0x10),
                           param_1->___card_2->___filePath_10,(MethodInfo *)0x0);
        if (bVar4) {
          if (pSVar1->___loadedFiles_7 != (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)0x0) {
            List_1_RemoveAt_m66148860899ECCAE9B323372032BFC1C255393D2_gshared
                      ((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)pSVar1->___loadedFiles_7,
                       uVar7,
                       List_1_RemoveAt_mF6A5472156C6CDBD7737FB15168FD637ED470C73_RuntimeMethod_var);
            return false;
          }
          break;
        }
        uVar7 = uVar7 + 1;
        iVar6 = iVar6 + 4;
      }
    }
  }
LAB_109c4d3e:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
