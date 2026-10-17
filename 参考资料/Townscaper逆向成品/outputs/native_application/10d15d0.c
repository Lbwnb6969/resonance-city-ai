// RVA 0x10d15d0 | FuryStudios.FurySDK.Platform$$RegisterFallbackPlatformSDK
// PDB: Platform_RegisterFallbackPlatformSDK_m19092009F6D545E794C838FF93BFC9AE4B87539D
// Body: [[110d15d0, 110d1651]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 10a3cbf0 Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8
// 10f04d40 String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17

void __cdecl
Platform_RegisterFallbackPlatformSDK_m19092009F6D545E794C838FF93BFC9AE4B87539D
          (Type_t *param_1,MethodInfo *param_2)

{
  String_t *pSVar1;

  if (DAT_11523a95 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Platform_tFCB0DECED6100708E85A7495E5F89EFAC65C7072_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral58E6872DF5563A94D016A2A5B3DFC4F046A5DD20);
    DAT_11523a95 = '\x01';
  }
  *(Type_t **)
   ((int)Platform_tFCB0DECED6100708E85A7495E5F89EFAC65C7072_il2cpp_TypeInfo_var->static_fields +
   0x10) = param_1;
  pSVar1 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17
                     (_stringLiteral58E6872DF5563A94D016A2A5B3DFC4F046A5DD20,(Il2CppObject *)param_1
                      ,(MethodInfo *)0x0);
  if ((Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
  }
  Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8((Il2CppObject *)pSVar1,(MethodInfo *)0x0);
  return;
}
