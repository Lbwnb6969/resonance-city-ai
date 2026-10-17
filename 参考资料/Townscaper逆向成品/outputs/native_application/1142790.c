// RVA 0x1142790 | FuryStudios.FurySDK.StandalonePC.StandalonePCPlatformSDK$$RegisterSelf
// PDB: StandalonePCPlatformSDK_RegisterSelf_m5F52D439AD12865A5C62FFB9C204BEB63573EF6F
// Body: [[11142790, 111427ef]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 10827ef0 Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E
// 110d1660 Platform_RegisterPlatformSDK_mEA1B3F519716E179E53B281C74A6254D130D82C6

void __cdecl
StandalonePCPlatformSDK_RegisterSelf_m5F52D439AD12865A5C62FFB9C204BEB63573EF6F(MethodInfo *param_1)

{
  Il2CppType *pIVar1;
  Type_t *pTVar2;

  if (DAT_11524613 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&StandalonePCPlatformSDK_t24871025FAC7FBBC11D1170D0FC553FC113E3754_0_0_0_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata((uint *)&Type_t_il2cpp_TypeInfo_var);
    DAT_11524613 = '\x01';
  }
  pIVar1 = StandalonePCPlatformSDK_t24871025FAC7FBBC11D1170D0FC553FC113E3754_0_0_0_var;
  if ((Type_t_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (Type_t_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(Type_t_il2cpp_TypeInfo_var);
  }
  pTVar2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E
                     ((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9)pIVar1,
                      (MethodInfo *)0x0);
  Platform_RegisterPlatformSDK_mEA1B3F519716E179E53B281C74A6254D130D82C6(pTVar2,(MethodInfo *)0x0);
  return;
}
