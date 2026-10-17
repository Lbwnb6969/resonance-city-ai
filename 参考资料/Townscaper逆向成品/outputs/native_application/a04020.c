// RVA 0xa04020 | Placemaker.SaveSystem$$get_storageContainer
// PDB: SaveSystem_get_storageContainer_mED5F478B1B99CE01EE6AD829DAE146705411F68E
// Body: [[10a04020, 10a04108]]
// Direct callees:
// 10156c40 GetInterfaceInvokeDataFromVTableSlowPath
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1026bae0 SR_GetString_m9DC7F3962EEB239017A1A4C443F52047B5BC7462

Il2CppObject * __cdecl
SaveSystem_get_storageContainer_mED5F478B1B99CE01EE6AD829DAE146705411F68E
          (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *param_1,MethodInfo *param_2)

{
  Il2CppClass *pIVar1;
  ushort uVar2;
  String_t *pSVar3;
  VirtualInvokeData *pVVar4;
  Il2CppObject *pIVar5;

  if (DAT_115201a4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IPlatformSDK_t445C2B3B280259FC57B4D89D7580436E90078756_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralE541D26859D264DEB1E7847324CA9C765F331CF8);
    DAT_115201a4 = '\x01';
  }
  if (`struct_Il2CppObject*___cdecl_Platform_get_SDK_m22BFADA660A0C166EE96936AB9A6C23915E6CB3F_inline(MethodInfo_const*)'
      ::__l2::s_Il2CppMethodInitialized == false) {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Platform_tFCB0DECED6100708E85A7495E5F89EFAC65C7072_il2cpp_TypeInfo_var);
    `struct_Il2CppObject*___cdecl_Platform_get_SDK_m22BFADA660A0C166EE96936AB9A6C23915E6CB3F_inline(MethodInfo_const*)'
    ::__l2::s_Il2CppMethodInitialized = true;
  }
  pIVar5 = *(Il2CppObject **)
            Platform_tFCB0DECED6100708E85A7495E5F89EFAC65C7072_il2cpp_TypeInfo_var->static_fields;
  pSVar3 = SR_GetString_m9DC7F3962EEB239017A1A4C443F52047B5BC7462
                     (_stringLiteralE541D26859D264DEB1E7847324CA9C765F331CF8,(MethodInfo *)0x0);
  if (pIVar5 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_null_reference_exception();
  }
  pIVar1 = (pIVar5->field0_0x0).klass;
  uVar2 = 0;
  if (pIVar1->interface_offsets_count != 0) {
    do {
      if (pIVar1->interfaceOffsets[uVar2].interfaceType ==
          IPlatformSDK_t445C2B3B280259FC57B4D89D7580436E90078756_il2cpp_TypeInfo_var) {
        pIVar5 = (Il2CppObject *)
                 (*(code *)(&pIVar1[1].implementedInterfaces)
                           [pIVar1->interfaceOffsets[uVar2].offset * 2])
                           (pIVar5,pSVar3,
                            (Il2CppRuntimeInterfaceOffsetPair *)
                            (&pIVar1[1].implementedInterfaces +
                            pIVar1->interfaceOffsets[uVar2].offset * 2)[1]);
        return pIVar5;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < pIVar1->interface_offsets_count);
  }
  pVVar4 = il2cpp::vm::ClassInlines::GetInterfaceInvokeDataFromVTableSlowPath
                     (pIVar5,
                      IPlatformSDK_t445C2B3B280259FC57B4D89D7580436E90078756_il2cpp_TypeInfo_var,0xb
                     );
  pIVar5 = (Il2CppObject *)(*pVVar4->methodPtr)(pIVar5,pSVar3,pVVar4->method);
  return pIVar5;
}
