// RVA 0x750d50 | PlatformManager$$SignIn
// PDB: PlatformManager_SignIn_mE26F154797E23EBF70F47F9884E959DDFAC166AC
// Body: [[10750d50, 10750e03]]
// Direct callees:
// 10156c40 GetInterfaceInvokeDataFromVTableSlowPath
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception

void __cdecl
PlatformManager_SignIn_mE26F154797E23EBF70F47F9884E959DDFAC166AC
          (PlatformManager_t72D067A839374E201E59AD37D3E764FEABE052E3 *param_1,MethodInfo *param_2)

{
  ushort uVar1;
  Il2CppObject *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  ushort uVar4;
  VirtualInvokeData *pVVar5;
  EventInfo **ppEVar6;

  if (DAT_1151ec04 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IPlatformSDK_t445C2B3B280259FC57B4D89D7580436E90078756_il2cpp_TypeInfo_var);
    DAT_1151ec04 = '\x01';
  }
  if (`struct_Il2CppObject*___cdecl_Platform_get_SDK_m22BFADA660A0C166EE96936AB9A6C23915E6CB3F_inline(MethodInfo_const*)'
      ::__l2::s_Il2CppMethodInitialized == false) {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Platform_tFCB0DECED6100708E85A7495E5F89EFAC65C7072_il2cpp_TypeInfo_var);
    `struct_Il2CppObject*___cdecl_Platform_get_SDK_m22BFADA660A0C166EE96936AB9A6C23915E6CB3F_inline(MethodInfo_const*)'
    ::__l2::s_Il2CppMethodInitialized = true;
  }
  pIVar2 = *(Il2CppObject **)
            Platform_tFCB0DECED6100708E85A7495E5F89EFAC65C7072_il2cpp_TypeInfo_var->static_fields;
  if (pIVar2 != (Il2CppObject *)0x0) {
    uVar4 = 0;
    uVar1 = ((pIVar2->field0_0x0).klass)->interface_offsets_count;
    if (uVar1 != 0) {
      pIVar3 = ((pIVar2->field0_0x0).klass)->interfaceOffsets;
      do {
        if (pIVar3[uVar4].interfaceType ==
            IPlatformSDK_t445C2B3B280259FC57B4D89D7580436E90078756_il2cpp_TypeInfo_var) {
          ppEVar6 = &(pIVar2->field0_0x0).klass[1].events + pIVar3[uVar4].offset * 2;
          (*(code *)*ppEVar6)(pIVar2,3,(PropertyInfo *)ppEVar6[1]);
          return;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar1);
    }
    pVVar5 = il2cpp::vm::ClassInlines::GetInterfaceInvokeDataFromVTableSlowPath
                       (pIVar2,
                        IPlatformSDK_t445C2B3B280259FC57B4D89D7580436E90078756_il2cpp_TypeInfo_var,9
                       );
    (*pVVar5->methodPtr)(pIVar2,3,pVVar5->method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
