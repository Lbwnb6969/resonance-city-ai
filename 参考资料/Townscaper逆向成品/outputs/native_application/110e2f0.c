// RVA 0x110e2f0 | FuryStudios.FurySDK.Internal.PlatformPlayerPrefs.PlayerPrefsSaveRequest$$OnStarted
// PDB: PlayerPrefsSaveRequest_OnStarted_m7FA61B8DEB6D920A14F9B95F5D612CE8E084E103
// Body: [[1110e2f0, 1110e4e8]]
// Direct callees:
// 1003e330 Invoke
// 10156c40 GetInterfaceInvokeDataFromVTableSlowPath
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d8560 OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
// 101d9d50 U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
// 1110b3a0 AsyncRequest_Fail_mC453143EEAABA8F1FDAA506285CC65EAD51FAD48
// 1110dc00 PlayerPrefsSaveData_Serialize_mBC2520BFDA671917EB5024227F23426B33F5EF19

void __cdecl
PlayerPrefsSaveRequest_OnStarted_m7FA61B8DEB6D920A14F9B95F5D612CE8E084E103
          (PlayerPrefsSaveRequest_tBE2D8FDE2CF83C1F020FE6E1A543E5146118B9BB *param_1,
          MethodInfo *param_2)

{
  ushort uVar1;
  String_t *pSVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *pUVar4;
  Il2CppObject *extraout_EAX;
  ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726 *pBVar5;
  VirtualInvokeData *pVVar6;
  Il2CppObject *pIVar7;
  OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *pOVar8;
  ushort uVar9;

  if (DAT_11523eac == '\0') {
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
                       U3CU3Ec__DisplayClass4_0_U3COnStartedU3Eb__0_m940F9D4B62C38391FD5632EDB480833CFEBBEBA7_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass4_0_tF72B5697059955914FE0235DDBBE767E89433600_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralED24BF0D8068D64770B941285B6CCD07EFFD029E);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralFA07200B82F10F4DE67CAFF8D0CF31E8D450BF00);
    DAT_11523eac = '\x01';
  }
  pUVar4 = (U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)
           il2cpp_codegen_object_new
                     (
                     U3CU3Ec__DisplayClass4_0_tF72B5697059955914FE0235DDBBE767E89433600_il2cpp_TypeInfo_var
                     );
  U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
            (pUVar4,(MethodInfo *)0x0);
  if (pUVar4 != (U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)0x0) {
    pUVar4->___U3CU3E2__current_1 = (Il2CppObject *)param_1;
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
    if (param_1->___data_8 == (PlayerPrefsSaveData_t8B8AAC39C8A51CE7EA2AF47E8F5D075A00613ADB *)0x0)
    {
      AsyncRequest_Fail_mC453143EEAABA8F1FDAA506285CC65EAD51FAD48
                ((AsyncRequest_t7DD8DD6332BB3330D713B40AF56C505FBBA73F12 *)param_1,
                 _stringLiteralFA07200B82F10F4DE67CAFF8D0CF31E8D450BF00,(MethodInfo *)0x0);
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
                 (param_1->___container_6).___id_0);
      pSVar2 = param_1->___filename_7;
      pBVar5 = PlayerPrefsSaveData_Serialize_mBC2520BFDA671917EB5024227F23426B33F5EF19
                         (param_1->___data_8,(MethodInfo *)0x0);
      if (extraout_EAX != (Il2CppObject *)0x0) {
        uVar9 = 0;
        uVar1 = ((extraout_EAX->field0_0x0).klass)->interface_offsets_count;
        if (uVar1 != 0) {
          pIVar3 = ((extraout_EAX->field0_0x0).klass)->interfaceOffsets;
          do {
            if (pIVar3[uVar9].interfaceType ==
                IStorageContainer_t65144ABF49C5F5251019FAE254C96036B4D27490_il2cpp_TypeInfo_var) {
              pVVar6 = (VirtualInvokeData *)
                       &(&(extraout_EAX->field0_0x0).klass[1].byval_arg)[pIVar3[uVar9].offset].attrs
              ;
              goto LAB_1110e455;
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 < uVar1);
        }
        pVVar6 = il2cpp::vm::ClassInlines::GetInterfaceInvokeDataFromVTableSlowPath
                           (extraout_EAX,
                            IStorageContainer_t65144ABF49C5F5251019FAE254C96036B4D27490_il2cpp_TypeInfo_var
                            ,3);
LAB_1110e455:
        pIVar7 = (Il2CppObject *)(*pVVar6->methodPtr)(extraout_EAX,pSVar2,pBVar5,pVVar6->method);
        pUVar4->___U3CU3E1__state_0 = (int)pIVar7;
        pOVar8 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
                 il2cpp_codegen_object_new
                           (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
        OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                  (pOVar8,(Il2CppObject *)pUVar4,
                   (int)
                   U3CU3Ec__DisplayClass4_0_U3COnStartedU3Eb__0_m940F9D4B62C38391FD5632EDB480833CFEBBEBA7_RuntimeMethod_var
                   ,(MethodInfo *)0x0);
        if (pIVar7 != (Il2CppObject *)0x0) {
          InterfaceActionInvoker1<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_*>::Invoke
                    (2,IAsyncRequest_t557E678C1B4AA12B82614BBB4162DDDB8B484778_il2cpp_TypeInfo_var,
                     pIVar7,(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)pOVar8);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
