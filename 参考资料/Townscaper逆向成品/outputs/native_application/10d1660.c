// RVA 0x10d1660 | FuryStudios.FurySDK.Platform$$RegisterPlatformSDK
// PDB: Platform_RegisterPlatformSDK_mEA1B3F519716E179E53B281C74A6254D130D82C6
// Body: [[110d1660, 110d16e1]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 10a3cbf0 Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8
// 10f04d40 String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17

void __cdecl
Platform_RegisterPlatformSDK_mEA1B3F519716E179E53B281C74A6254D130D82C6
          (Type_t *param_1,MethodInfo *param_2)

{
  String_t *pSVar1;

  if (DAT_11523a94 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Platform_tFCB0DECED6100708E85A7495E5F89EFAC65C7072_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralAA301C293B4EE875B58A38DAC7F1D32E0208236F);
    DAT_11523a94 = '\x01';
  }
  *(Type_t **)
   ((int)Platform_tFCB0DECED6100708E85A7495E5F89EFAC65C7072_il2cpp_TypeInfo_var->static_fields +
   0x14) = param_1;
  pSVar1 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17
                     (_stringLiteralAA301C293B4EE875B58A38DAC7F1D32E0208236F,(Il2CppObject *)param_1
                      ,(MethodInfo *)0x0);
  if ((Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
  }
  Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8((Il2CppObject *)pSVar1,(MethodInfo *)0x0);
  return;
}
