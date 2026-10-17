// RVA 0x9c6840 | Placemaker.StorageUtils.<RefreshFilesList>d__27$$MoveNext
// PDB: U3CRefreshFilesListU3Ed__27_MoveNext_mC66FB8A52C7E1ADE062D4F11CC6C7CAB30497F90
// Body: [[109c6840, 109c6b8f]]
// Direct callees:
// 1003e330 Invoke
// 1003e420 Invoke
// 10156c40 GetInterfaceInvokeDataFromVTableSlowPath
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d8380 OnLocalizeCallback_Invoke_m8B28CFE294965737AFDCB15C1BFD40C7B4A43906
// 1026bae0 SR_GetString_m9DC7F3962EEB239017A1A4C443F52047B5BC7462
// 105d1420 List_1_Clear_m4335002B0D1AECDD647452579DC34E13BD1B83CD_gshared
// 105d32b0 List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
// 1066d8c0 Time_get_frameCount_m8601F5FB5B701680076B40D2F31405F304D963F0
// 10f02d80 String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A
// 1102ffd0 List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared

bool __cdecl
U3CRefreshFilesListU3Ed__27_MoveNext_mC66FB8A52C7E1ADE062D4F11CC6C7CAB30497F90
          (U3CRefreshFilesListU3Ed__27_t40B9F2B5E0FE198B1052DE8755437BD92C271EFB *param_1,
          MethodInfo *param_2)

{
  ushort uVar1;
  StorageUtils_t6E9DFB789C54B9B5604E6701C1D0E230BB7FAEF3 *pSVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  List_1_tAC387D40AA794C98425777894B362093CF4E78AC *pLVar4;
  bool bVar5;
  ushort uVar6;
  int iVar7;
  List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *pLVar8;
  Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *pAVar9;
  Il2CppObject *extraout_EAX;
  Il2CppObject *pIVar10;
  int iVar11;
  VirtualInvokeData *pVVar12;
  String_t *pSVar13;
  OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 extraout_EAX_00;
  Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *local_8;

  if (DAT_1151ff44 == '\0') {
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
              ((uint *)&List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Clear_m1E4AF39A1050CD8394AA202B04F2B07267435640_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralE541D26859D264DEB1E7847324CA9C765F331CF8);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralF9603110CD994850BB7E88E6FC7174E5BDE2D2EC);
    DAT_1151ff44 = '\x01';
  }
  pSVar2 = param_1->___U3CU3E4__this_2;
  if (param_1->___U3CU3E1__state_0 == 0) {
    param_1->___U3CU3E1__state_0 = -1;
    if (pSVar2 == (StorageUtils_t6E9DFB789C54B9B5604E6701C1D0E230BB7FAEF3 *)0x0) goto LAB_109c6b8b;
    iVar11 = pSVar2->___fileInfoFrame_8;
    iVar7 = Time_get_frameCount_m8601F5FB5B701680076B40D2F31405F304D963F0((MethodInfo *)0x0);
    if (iVar11 == iVar7) goto LAB_109c6b70;
    if (pSVar2->___loadedFiles_7 == (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)0x0) {
      pLVar8 = (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)
               il2cpp_codegen_object_new
                         (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
      List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
                (pLVar8,List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
      pSVar2->___loadedFiles_7 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)pLVar8;
    }
    if (`struct_Il2CppObject*___cdecl_Platform_get_SDK_m22BFADA660A0C166EE96936AB9A6C23915E6CB3F_inline(MethodInfo_const*)'
        ::__l2::s_Il2CppMethodInitialized == false) {
      il2cpp_codegen_initialize_runtime_metadata
                ((uint *)&Platform_tFCB0DECED6100708E85A7495E5F89EFAC65C7072_il2cpp_TypeInfo_var);
      `struct_Il2CppObject*___cdecl_Platform_get_SDK_m22BFADA660A0C166EE96936AB9A6C23915E6CB3F_inline(MethodInfo_const*)'
      ::__l2::s_Il2CppMethodInitialized = true;
    }
    pIVar10 = *(Il2CppObject **)
               Platform_tFCB0DECED6100708E85A7495E5F89EFAC65C7072_il2cpp_TypeInfo_var->static_fields
    ;
    pAVar9 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)
             SR_GetString_m9DC7F3962EEB239017A1A4C443F52047B5BC7462
                       (_stringLiteralE541D26859D264DEB1E7847324CA9C765F331CF8,(MethodInfo *)0x0);
    if ((pIVar10 == (Il2CppObject *)0x0) ||
       (InterfaceActionInvoker1<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_*>::Invoke
                  (0xb,IPlatformSDK_t445C2B3B280259FC57B4D89D7580436E90078756_il2cpp_TypeInfo_var,
                   pIVar10,pAVar9), extraout_EAX == (Il2CppObject *)0x0)) goto LAB_109c6b8b;
    pIVar10 = (Il2CppObject *)
              InterfaceFuncInvoker0<int>::Invoke
                        (7,
                         IStorageContainer_t65144ABF49C5F5251019FAE254C96036B4D27490_il2cpp_TypeInfo_var
                         ,extraout_EAX);
    param_1->___U3ClistFilesU3E5__2_4 = pIVar10;
  }
  else {
    if (param_1->___U3CU3E1__state_0 != 1) {
      return false;
    }
    param_1->___U3CU3E1__state_0 = -1;
  }
  if (param_1->___U3ClistFilesU3E5__2_4 != (Il2CppObject *)0x0) {
    iVar11 = InterfaceFuncInvoker0<int>::Invoke
                       (0,IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var,
                        param_1->___U3ClistFilesU3E5__2_4);
    if ((char)iVar11 != '\0') {
      param_1->___U3CU3E2__current_1 = (Il2CppObject *)0x0;
      param_1->___U3CU3E1__state_0 = 1;
      return true;
    }
    if ((pSVar2 != (StorageUtils_t6E9DFB789C54B9B5604E6701C1D0E230BB7FAEF3 *)0x0) &&
       ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)pSVar2->___loadedFiles_7 !=
        (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)0x0)) {
      List_1_Clear_m4335002B0D1AECDD647452579DC34E13BD1B83CD_gshared
                ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)pSVar2->___loadedFiles_7,
                 List_1_Clear_m1E4AF39A1050CD8394AA202B04F2B07267435640_RuntimeMethod_var);
      if (param_1->___U3ClistFilesU3E5__2_4 != (Il2CppObject *)0x0) {
        pIVar10 = (Il2CppObject *)
                  InterfaceFuncInvoker0<int>::Invoke
                            (0,
                             IAsyncRequest_1_t6283ED3BBB7202718D29315B3CBB9A2C483A60EF_il2cpp_TypeInfo_var
                             ,param_1->___U3ClistFilesU3E5__2_4);
        if (pIVar10 != (Il2CppObject *)0x0) {
          local_8 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)0x0;
          do {
            uVar6 = 0;
            uVar1 = ((pIVar10->field0_0x0).klass)->interface_offsets_count;
            if (uVar1 != 0) {
              pIVar3 = ((pIVar10->field0_0x0).klass)->interfaceOffsets;
              do {
                if (pIVar3[uVar6].interfaceType ==
                    ICollection_1_t286AA3BBFF7FCE401FEFF57AEEC4FDAABA9F95B1_il2cpp_TypeInfo_var) {
                  pVVar12 = (VirtualInvokeData *)
                            (&((pIVar10->field0_0x0).klass)->field_0xbc + pIVar3[uVar6].offset * 8);
                  goto LAB_109c6a7e;
                }
                uVar6 = uVar6 + 1;
              } while (uVar6 < uVar1);
            }
            pVVar12 = il2cpp::vm::ClassInlines::GetInterfaceInvokeDataFromVTableSlowPath
                                (pIVar10,
                                 ICollection_1_t286AA3BBFF7FCE401FEFF57AEEC4FDAABA9F95B1_il2cpp_TypeInfo_var
                                 ,0);
LAB_109c6a7e:
            iVar11 = (*pVVar12->methodPtr)(pIVar10,pVVar12->method);
            if (iVar11 <= (int)local_8) break;
            uVar6 = 0;
            uVar1 = ((pIVar10->field0_0x0).klass)->interface_offsets_count;
            if (uVar1 != 0) {
              pIVar3 = ((pIVar10->field0_0x0).klass)->interfaceOffsets;
              do {
                if (pIVar3[uVar6].interfaceType ==
                    IList_1_t54B152FB364EC47FC3BD440154FEB50A17503847_il2cpp_TypeInfo_var) {
                  pVVar12 = (VirtualInvokeData *)
                            (&((pIVar10->field0_0x0).klass)->field_0xbc + pIVar3[uVar6].offset * 8);
                  goto LAB_109c6ace;
                }
                uVar6 = uVar6 + 1;
              } while (uVar6 < uVar1);
            }
            pVVar12 = il2cpp::vm::ClassInlines::GetInterfaceInvokeDataFromVTableSlowPath
                                (pIVar10,
                                 IList_1_t54B152FB364EC47FC3BD440154FEB50A17503847_il2cpp_TypeInfo_var
                                 ,0);
LAB_109c6ace:
            pSVar13 = (String_t *)(*pVVar12->methodPtr)(pIVar10,local_8,pVVar12->method);
            if (pSVar13 == (String_t *)0x0) goto LAB_109c6b8b;
            bVar5 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A
                              (pSVar13,_stringLiteralF9603110CD994850BB7E88E6FC7174E5BDE2D2EC,
                               (MethodInfo *)0x0);
            if (bVar5) {
              pLVar4 = (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pSVar2->___loadedFiles_7;
              InterfaceActionInvoker1<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_*>::Invoke
                        (0,IList_1_t54B152FB364EC47FC3BD440154FEB50A17503847_il2cpp_TypeInfo_var,
                         pIVar10,local_8);
              if (pLVar4 == (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)0x0)
              goto LAB_109c6b8b;
              List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                        (pLVar4,extraout_EAX_00,
                         List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
            }
            local_8 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)&local_8->field_0x1;
          } while( true );
        }
        iVar11 = Time_get_frameCount_m8601F5FB5B701680076B40D2F31405F304D963F0((MethodInfo *)0x0);
        pSVar2->___fileInfoFrame_8 = iVar11;
        param_1->___U3ClistFilesU3E5__2_4 = (Il2CppObject *)0x0;
LAB_109c6b70:
        if ((OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)param_1->___callback_3
            != (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)0x0) {
          OnLocalizeCallback_Invoke_m8B28CFE294965737AFDCB15C1BFD40C7B4A43906
                    ((OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
                     param_1->___callback_3,(MethodInfo *)0x0);
        }
        return false;
      }
    }
  }
LAB_109c6b8b:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
