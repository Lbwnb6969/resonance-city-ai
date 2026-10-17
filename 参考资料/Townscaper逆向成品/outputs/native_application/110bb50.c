// RVA 0x110bb50 | FuryStudios.FurySDK.Internal.BasePlatformSDK$$Update
// PDB: BasePlatformSDK_Update_mD15ADB6F5A4BE6B0534C52C50BE5503842928551
// Body: [[1110bb50, 1110bbaa]]
// Direct callees:
// 1003e420 Invoke
// 1018e950 il2cpp_codegen_initialize_runtime_metadata

void __cdecl
BasePlatformSDK_Update_mD15ADB6F5A4BE6B0534C52C50BE5503842928551
          (BasePlatformSDK_t289E609F49DAF94E98CCB795ECEAA157F2437731 *param_1,MethodInfo *param_2)

{
  Il2CppObject *pIVar1;

  if (DAT_11523e89 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       IPlatformPlayerPrefs_t3DE5D731EA9504184EF7D2FD2D2BA1E0D4AABC84_il2cpp_TypeInfo_var
              );
    DAT_11523e89 = '\x01';
  }
  if (`struct_Il2CppObject*___cdecl_Platform_get_PlayerPrefs_m23FD15021E26390AC55989378A4ACA143892C4E1_inline(MethodInfo_const*)'
      ::__l2::s_Il2CppMethodInitialized == false) {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Platform_tFCB0DECED6100708E85A7495E5F89EFAC65C7072_il2cpp_TypeInfo_var);
    `struct_Il2CppObject*___cdecl_Platform_get_PlayerPrefs_m23FD15021E26390AC55989378A4ACA143892C4E1_inline(MethodInfo_const*)'
    ::__l2::s_Il2CppMethodInitialized = true;
  }
  pIVar1 = *(Il2CppObject **)
            ((int)Platform_tFCB0DECED6100708E85A7495E5F89EFAC65C7072_il2cpp_TypeInfo_var->
                  static_fields + 0xc);
  if (pIVar1 != (Il2CppObject *)0x0) {
    InterfaceFuncInvoker0<int>::Invoke
              (3,IPlatformPlayerPrefs_t3DE5D731EA9504184EF7D2FD2D2BA1E0D4AABC84_il2cpp_TypeInfo_var,
               pIVar1);
  }
  return;
}
