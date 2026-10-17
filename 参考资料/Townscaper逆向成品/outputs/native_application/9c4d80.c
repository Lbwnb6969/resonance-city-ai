// RVA 0x9c4d80 | Placemaker.StorageUtils.<FilesListChanged>d__26$$MoveNext
// PDB: U3CFilesListChangedU3Ed__26_MoveNext_m1C2B862291DC1DD368D4A32FA1D96C65CB7BA767
// Body: [[109c4d80, 109c5026]]
// Direct callees:
// 1003e330 Invoke
// 1003e420 Invoke
// 10156c40 GetInterfaceInvokeDataFromVTableSlowPath
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d8380 OnLocalizeCallback_Invoke_m8B28CFE294965737AFDCB15C1BFD40C7B4A43906
// 1026bae0 SR_GetString_m9DC7F3962EEB239017A1A4C443F52047B5BC7462
// 1066d8c0 Time_get_frameCount_m8601F5FB5B701680076B40D2F31405F304D963F0
// 10749050 Platform_get_SDK_m22BFADA660A0C166EE96936AB9A6C23915E6CB3F_inline
// 10f02d80 String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A

bool __cdecl
U3CFilesListChangedU3Ed__26_MoveNext_m1C2B862291DC1DD368D4A32FA1D96C65CB7BA767
          (U3CFilesListChangedU3Ed__26_t844587706C6C57443B19B63471EE1D9185CBAFD3 *param_1,
          MethodInfo *param_2)

{
  StorageUtils_t6E9DFB789C54B9B5604E6701C1D0E230BB7FAEF3 *pSVar1;
  Il2CppClass *pIVar2;
  bool bVar3;
  ushort uVar4;
  int iVar5;
  Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *pAVar6;
  Il2CppObject *extraout_EAX;
  Il2CppObject *pIVar7;
  VirtualInvokeData *pVVar8;
  String_t *pSVar9;
  int iVar10;
  int local_c;
  int local_8;

  if (DAT_1151ff3c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       IAsyncRequest_1_t6283ED3BBB7202718D29315B3CBB9A2C483A60EF_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ICollection_1_t286AA3BBFF7FCE401FEFF57AEEC4FDAABA9F95B1_il2cpp_TypeInfo_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IList_1_t54B152FB364EC47FC3BD440154FEB50A17503847_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IPlatformSDK_t445C2B3B280259FC57B4D89D7580436E90078756_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       IStorageContainer_t65144ABF49C5F5251019FAE254C96036B4D27490_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralE541D26859D264DEB1E7847324CA9C765F331CF8);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralF9603110CD994850BB7E88E6FC7174E5BDE2D2EC);
    DAT_1151ff3c = '\x01';
  }
  pSVar1 = param_1->___U3CU3E4__this_2;
  switch(param_1->___U3CU3E1__state_0) {
  case 0:
    param_1->___U3CU3E1__state_0 = -1;
    if (pSVar1 == (StorageUtils_t6E9DFB789C54B9B5604E6701C1D0E230BB7FAEF3 *)0x0) goto LAB_109c5022;
    iVar10 = pSVar1->___fileInfoFrame_8;
    iVar5 = Time_get_frameCount_m8601F5FB5B701680076B40D2F31405F304D963F0((MethodInfo *)0x0);
    if (iVar10 != iVar5) {
      if (pSVar1->___loadedFiles_7 == (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)0x0) {
        param_1->___U3CU3E2__current_1 = true;
        param_1->___U3CU3E1__state_0 = 1;
        return true;
      }
      pIVar7 = Platform_get_SDK_m22BFADA660A0C166EE96936AB9A6C23915E6CB3F_inline((MethodInfo *)0x0);
      pAVar6 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)
               SR_GetString_m9DC7F3962EEB239017A1A4C443F52047B5BC7462
                         (_stringLiteralE541D26859D264DEB1E7847324CA9C765F331CF8,(MethodInfo *)0x0);
      if ((pIVar7 == (Il2CppObject *)0x0) ||
         (InterfaceActionInvoker1<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_*>::Invoke
                    (0xb,IPlatformSDK_t445C2B3B280259FC57B4D89D7580436E90078756_il2cpp_TypeInfo_var,
                     pIVar7,pAVar6), extraout_EAX == (Il2CppObject *)0x0)) goto LAB_109c5022;
      pIVar7 = (Il2CppObject *)
               InterfaceFuncInvoker0<int>::Invoke
                         (7,
                          IStorageContainer_t65144ABF49C5F5251019FAE254C96036B4D27490_il2cpp_TypeInfo_var
                          ,extraout_EAX);
      param_1->___U3ClistFilesU3E5__2_4 = pIVar7;
      goto LAB_109c4ea8;
    }
    break;
  case 2:
    param_1->___U3CU3E1__state_0 = -1;
LAB_109c4ea8:
    if (param_1->___U3ClistFilesU3E5__2_4 != (Il2CppObject *)0x0) {
      iVar10 = InterfaceFuncInvoker0<int>::Invoke
                         (0,
                          IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var,
                          param_1->___U3ClistFilesU3E5__2_4);
      if ((char)iVar10 != '\0') {
        param_1->___U3CU3E2__current_1 = false;
        param_1->___U3CU3E1__state_0 = 2;
        return true;
      }
      if (param_1->___U3ClistFilesU3E5__2_4 != (Il2CppObject *)0x0) {
        pIVar7 = (Il2CppObject *)
                 InterfaceFuncInvoker0<int>::Invoke
                           (0,
                            IAsyncRequest_1_t6283ED3BBB7202718D29315B3CBB9A2C483A60EF_il2cpp_TypeInfo_var
                            ,param_1->___U3ClistFilesU3E5__2_4);
        local_c = 0;
        local_8 = 0;
        if (pIVar7 != (Il2CppObject *)0x0) {
          for (; iVar10 = InterfaceFuncInvoker0<int>::Invoke
                                    (0,
                                     ICollection_1_t286AA3BBFF7FCE401FEFF57AEEC4FDAABA9F95B1_il2cpp_TypeInfo_var
                                     ,pIVar7), local_8 < iVar10; local_8 = local_8 + 1) {
            pIVar2 = (pIVar7->field0_0x0).klass;
            uVar4 = 0;
            if (pIVar2->interface_offsets_count != 0) {
              do {
                if (pIVar2->interfaceOffsets[uVar4].interfaceType ==
                    IList_1_t54B152FB364EC47FC3BD440154FEB50A17503847_il2cpp_TypeInfo_var) {
                  pVVar8 = (VirtualInvokeData *)
                           (&pIVar2->field_0xbc + pIVar2->interfaceOffsets[uVar4].offset * 8);
                  goto LAB_109c4f6f;
                }
                uVar4 = uVar4 + 1;
              } while (uVar4 < pIVar2->interface_offsets_count);
            }
            pVVar8 = il2cpp::vm::ClassInlines::GetInterfaceInvokeDataFromVTableSlowPath
                               (pIVar7,
                                IList_1_t54B152FB364EC47FC3BD440154FEB50A17503847_il2cpp_TypeInfo_var
                                ,0);
LAB_109c4f6f:
            pSVar9 = (String_t *)(*pVVar8->methodPtr)(pIVar7,local_8,pVVar8->method);
            if (pSVar9 == (String_t *)0x0) goto LAB_109c5022;
            bVar3 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A
                              (pSVar9,_stringLiteralF9603110CD994850BB7E88E6FC7174E5BDE2D2EC,
                               (MethodInfo *)0x0);
            if (bVar3) {
              local_c = local_c + 1;
            }
          }
          if ((pSVar1 != (StorageUtils_t6E9DFB789C54B9B5604E6701C1D0E230BB7FAEF3 *)0x0) &&
             (pSVar1->___loadedFiles_7 != (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)0x0))
          {
            iVar10 = pSVar1->___loadedFiles_7->____size_2;
            param_1->___U3CU3E1__state_0 = 3;
            param_1->___U3CU3E2__current_1 = local_c != iVar10;
            return true;
          }
        }
      }
    }
    goto LAB_109c5022;
  case 3:
    param_1->___U3ClistFilesU3E5__2_4 = (Il2CppObject *)0x0;
  case 1:
    param_1->___U3CU3E1__state_0 = -1;
    iVar10 = Time_get_frameCount_m8601F5FB5B701680076B40D2F31405F304D963F0((MethodInfo *)0x0);
    if (pSVar1 == (StorageUtils_t6E9DFB789C54B9B5604E6701C1D0E230BB7FAEF3 *)0x0) {
LAB_109c5022:
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_null_reference_exception();
    }
    pSVar1->___fileInfoFrame_8 = iVar10;
    break;
  default:
    goto switchD_109c4e0b_default;
  }
  if ((OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)param_1->___callback_3 !=
      (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)0x0) {
    OnLocalizeCallback_Invoke_m8B28CFE294965737AFDCB15C1BFD40C7B4A43906
              ((OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
               param_1->___callback_3,(MethodInfo *)0x0);
  }
switchD_109c4e0b_default:
  return false;
}
