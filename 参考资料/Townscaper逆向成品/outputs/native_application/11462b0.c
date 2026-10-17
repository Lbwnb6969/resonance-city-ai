// RVA 0x11462b0 | FuryStudios.FurySDK.Noop.NoopPlatformSDK$$RegisterSelf
// PDB: NoopPlatformSDK_RegisterSelf_m788BABEDC52B5C4A9B3738FACFAE5D71EF586BCE
// Body: [[111462b0, 1114630f]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 10827ef0 Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E
// 110d15d0 Platform_RegisterFallbackPlatformSDK_m19092009F6D545E794C838FF93BFC9AE4B87539D

void __cdecl
NoopPlatformSDK_RegisterSelf_m788BABEDC52B5C4A9B3738FACFAE5D71EF586BCE(MethodInfo *param_1)

{
  Il2CppType *pIVar1;
  Type_t *pTVar2;

  if (DAT_115246f8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&NoopPlatformSDK_tA104E858FC242EF96C85577FCDBCD109DE2D4EF4_0_0_0_var);
    il2cpp_codegen_initialize_runtime_metadata((uint *)&Type_t_il2cpp_TypeInfo_var);
    DAT_115246f8 = '\x01';
  }
  pIVar1 = NoopPlatformSDK_tA104E858FC242EF96C85577FCDBCD109DE2D4EF4_0_0_0_var;
  if ((Type_t_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (Type_t_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(Type_t_il2cpp_TypeInfo_var);
  }
  pTVar2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E
                     ((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9)pIVar1,
                      (MethodInfo *)0x0);
  Platform_RegisterFallbackPlatformSDK_m19092009F6D545E794C838FF93BFC9AE4B87539D
            (pTVar2,(MethodInfo *)0x0);
  return;
}
