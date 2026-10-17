// RVA 0x10d0630 | FuryStudios.FurySDK.PlatformFeatureNotSupportedException$$.ctor
// PDB: PlatformFeatureNotSupportedException__ctor_m1F5519539F100B51312B49E56A867204F1EDF2D0
// Body: [[110d0630, 110d0684]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 10a6be20 Exception__ctor_m0E9BEC861F6DBED197960E5BA23149543B1D7F5B

void __cdecl
PlatformFeatureNotSupportedException__ctor_m1F5519539F100B51312B49E56A867204F1EDF2D0
          (PlatformFeatureNotSupportedException_tA70444F739DAF000CC7C3E5F24A3DF19C6115177 *param_1,
          uint param_2,MethodInfo *param_3)

{
  if (DAT_11523a98 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata((uint *)&Exception_t_il2cpp_TypeInfo_var);
    DAT_11523a98 = '\x01';
  }
  if ((Exception_t_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (Exception_t_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(Exception_t_il2cpp_TypeInfo_var);
  }
  Exception__ctor_m0E9BEC861F6DBED197960E5BA23149543B1D7F5B
            ((Exception_t *)param_1,(MethodInfo *)0x0);
  param_1->___unsupportedFeature_17 = param_2;
  return;
}
