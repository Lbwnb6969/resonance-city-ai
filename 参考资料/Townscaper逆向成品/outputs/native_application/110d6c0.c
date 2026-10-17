// RVA 0x110d6c0 | FuryStudios.FurySDK.Internal.PlatformPlayerPrefs.PlayerPrefsLoadRequest$$OnStarted
// PDB: PlayerPrefsLoadRequest_OnStarted_m6EF52E6AFE29F63760B8BC94ACD984271441D949
// Body: [[1110d6c0, 1110d87e]]
// Direct callees:
// 1003e330 Invoke
// 10156c40 GetInterfaceInvokeDataFromVTableSlowPath
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d8560 OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
// 101d9d50 U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
// 1110b3a0 AsyncRequest_Fail_mC453143EEAABA8F1FDAA506285CC65EAD51FAD48

void __cdecl
PlayerPrefsLoadRequest_OnStarted_m6EF52E6AFE29F63760B8BC94ACD984271441D949
          (PlayerPrefsLoadRequest_t6616BA8C95AADA3039553787E6DD69235EF81D8F *param_1,
          MethodInfo *param_2)

{
  String_t *pSVar1;
  Il2CppClass *pIVar2;
  U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *pUVar3;
  Il2CppObject *extraout_EAX;
  VirtualInvokeData *pVVar4;
  Il2CppObject *pIVar5;
  OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *pOVar6;
  ushort uVar7;

  if (DAT_11523ea8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IAsyncRequest_t557E678C1B4AA12B82614BBB4162DDDB8B484778_il2cpp_TypeInfo_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IPlatformSDK_t445C2B3B280259FC57B4D89D7580436E90078756_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       IStorageContainer_t65144ABF49C5F5251019FAE254C96036B4D27490_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass3_0_U3COnStartedU3Eb__0_m8F0C32459078EAD2573B3AE35E401E7E4A6D7B8C_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass3_0_t1F2F085EA0D89A778F26BCA29C1EA62349C1768E_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralED24BF0D8068D64770B941285B6CCD07EFFD029E);
    DAT_11523ea8 = '\x01';
  }
  pUVar3 = (U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)
           il2cpp_codegen_object_new
                     (
                     U3CU3Ec__DisplayClass3_0_t1F2F085EA0D89A778F26BCA29C1EA62349C1768E_il2cpp_TypeInfo_var
                     );
  U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
            (pUVar3,(MethodInfo *)0x0);
  if (pUVar3 != (U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)0x0) {
    pUVar3->___U3CU3E2__current_1 = (Il2CppObject *)param_1;
    if (`struct_Il2CppObject*___cdecl_Platform_get_SDK_m22BFADA660A0C166EE96936AB9A6C23915E6CB3F_inline(MethodInfo_const*)'
        ::__l2::s_Il2CppMethodInitialized == false) {
      il2cpp_codegen_initialize_runtime_metadata
                ((uint *)&Platform_tFCB0DECED6100708E85A7495E5F89EFAC65C7072_il2cpp_TypeInfo_var);
      `struct_Il2CppObject*___cdecl_Platform_get_SDK_m22BFADA660A0C166EE96936AB9A6C23915E6CB3F_inline(MethodInfo_const*)'
      ::__l2::s_Il2CppMethodInitialized = true;
    }
    if (*(int *)Platform_tFCB0DECED6100708E85A7495E5F89EFAC65C7072_il2cpp_TypeInfo_var->
                static_fields == 0) {
      AsyncRequest_Fail_mC453143EEAABA8F1FDAA506285CC65EAD51FAD48
                ((AsyncRequest_t7DD8DD6332BB3330D713B40AF56C505FBBA73F12 *)param_1,
                 _stringLiteralED24BF0D8068D64770B941285B6CCD07EFFD029E,(MethodInfo *)0x0);
      return;
    }
    if (`struct_Il2CppObject*___cdecl_Platform_get_SDK_m22BFADA660A0C166EE96936AB9A6C23915E6CB3F_inline(MethodInfo_const*)'
        ::__l2::s_Il2CppMethodInitialized == false) {
      il2cpp_codegen_initialize_runtime_metadata
                ((uint *)&Platform_tFCB0DECED6100708E85A7495E5F89EFAC65C7072_il2cpp_TypeInfo_var);
      `struct_Il2CppObject*___cdecl_Platform_get_SDK_m22BFADA660A0C166EE96936AB9A6C23915E6CB3F_inline(MethodInfo_const*)'
      ::__l2::s_Il2CppMethodInitialized = true;
    }
    if (*(Il2CppObject **)
         Platform_tFCB0DECED6100708E85A7495E5F89EFAC65C7072_il2cpp_TypeInfo_var->static_fields !=
        (Il2CppObject *)0x0) {
      InterfaceActionInvoker1<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_*>::Invoke
                (0xb,IPlatformSDK_t445C2B3B280259FC57B4D89D7580436E90078756_il2cpp_TypeInfo_var,
                 *(Il2CppObject **)
                  Platform_tFCB0DECED6100708E85A7495E5F89EFAC65C7072_il2cpp_TypeInfo_var->
                  static_fields,
                 (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)
                 (param_1->___container_7).___id_0);
      pSVar1 = param_1->___filename_8;
      if (extraout_EAX != (Il2CppObject *)0x0) {
        uVar7 = 0;
        pIVar2 = (extraout_EAX->field0_0x0).klass;
        if (pIVar2->interface_offsets_count != 0) {
          do {
            if (pIVar2->interfaceOffsets[uVar7].interfaceType ==
                IStorageContainer_t65144ABF49C5F5251019FAE254C96036B4D27490_il2cpp_TypeInfo_var) {
              pVVar4 = (VirtualInvokeData *)
                       (&pIVar2[1].gc_desc + pIVar2->interfaceOffsets[uVar7].offset * 2);
              goto LAB_1110d805;
            }
            uVar7 = uVar7 + 1;
          } while (uVar7 < pIVar2->interface_offsets_count);
        }
        pVVar4 = il2cpp::vm::ClassInlines::GetInterfaceInvokeDataFromVTableSlowPath
                           (extraout_EAX,
                            IStorageContainer_t65144ABF49C5F5251019FAE254C96036B4D27490_il2cpp_TypeInfo_var
                            ,1);
LAB_1110d805:
        pIVar5 = (Il2CppObject *)(*pVVar4->methodPtr)(extraout_EAX,pSVar1,pVVar4->method);
        pUVar3->___U3CU3E1__state_0 = (int)pIVar5;
        pOVar6 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
                 il2cpp_codegen_object_new
                           (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
        OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                  (pOVar6,(Il2CppObject *)pUVar3,
                   (int)
                   U3CU3Ec__DisplayClass3_0_U3COnStartedU3Eb__0_m8F0C32459078EAD2573B3AE35E401E7E4A6D7B8C_RuntimeMethod_var
                   ,(MethodInfo *)0x0);
        if (pIVar5 != (Il2CppObject *)0x0) {
          InterfaceActionInvoker1<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_*>::Invoke
                    (2,IAsyncRequest_t557E678C1B4AA12B82614BBB4162DDDB8B484778_il2cpp_TypeInfo_var,
                     pIVar5,(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)pOVar6);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
