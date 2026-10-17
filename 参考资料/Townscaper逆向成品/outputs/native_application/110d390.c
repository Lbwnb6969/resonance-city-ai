// RVA 0x110d390 | FuryStudios.FurySDK.Internal.PlatformPlayerPrefs$$RegisterSelf
// PDB: PlatformPlayerPrefs_RegisterSelf_mC49B95CC5B648835481476570CED9E1BF56588AB
// Body: [[1110d390, 1110d3ef]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 10827ef0 Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E
// 110d16f0 Platform_RegisterPlayerPrefsType_mF237113465AB742CCB295B1CC814DF7C2FDDB0CF

void __cdecl
PlatformPlayerPrefs_RegisterSelf_mC49B95CC5B648835481476570CED9E1BF56588AB(MethodInfo *param_1)

{
  Il2CppType *pIVar1;
  Type_t *pTVar2;

  if (DAT_11523e99 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&PlatformPlayerPrefs_t9473F0F596FC2C6200FD273286475145A0EF282E_0_0_0_var);
    il2cpp_codegen_initialize_runtime_metadata((uint *)&Type_t_il2cpp_TypeInfo_var);
    DAT_11523e99 = '\x01';
  }
  pIVar1 = PlatformPlayerPrefs_t9473F0F596FC2C6200FD273286475145A0EF282E_0_0_0_var;
  if ((Type_t_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (Type_t_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(Type_t_il2cpp_TypeInfo_var);
  }
  pTVar2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E
                     ((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9)pIVar1,
                      (MethodInfo *)0x0);
  Platform_RegisterPlayerPrefsType_mF237113465AB742CCB295B1CC814DF7C2FDDB0CF
            (pTVar2,(MethodInfo *)0x0);
  return;
}
