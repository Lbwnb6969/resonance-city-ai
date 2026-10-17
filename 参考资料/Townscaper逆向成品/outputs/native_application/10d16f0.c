// RVA 0x10d16f0 | FuryStudios.FurySDK.Platform$$RegisterPlayerPrefsType
// PDB: Platform_RegisterPlayerPrefsType_mF237113465AB742CCB295B1CC814DF7C2FDDB0CF
// Body: [[110d16f0, 110d1771]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 10a3cbf0 Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8
// 10f04d40 String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17

void __cdecl
Platform_RegisterPlayerPrefsType_mF237113465AB742CCB295B1CC814DF7C2FDDB0CF
          (Type_t *param_1,MethodInfo *param_2)

{
  String_t *pSVar1;

  if (DAT_11523a96 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Platform_tFCB0DECED6100708E85A7495E5F89EFAC65C7072_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralFF64033725FE651374AD256C2DE46A60982CFD8A);
    DAT_11523a96 = '\x01';
  }
  *(Type_t **)
   ((int)Platform_tFCB0DECED6100708E85A7495E5F89EFAC65C7072_il2cpp_TypeInfo_var->static_fields +
   0x18) = param_1;
  pSVar1 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17
                     (_stringLiteralFF64033725FE651374AD256C2DE46A60982CFD8A,(Il2CppObject *)param_1
                      ,(MethodInfo *)0x0);
  if ((Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
  }
  Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8((Il2CppObject *)pSVar1,(MethodInfo *)0x0);
  return;
}
