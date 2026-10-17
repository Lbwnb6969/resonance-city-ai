// RVA 0xa087c0 | Placemaker.SettingsData$$.ctor
// PDB: SettingsData__ctor_m7070D431438256A84F39CA5F4BA91F6BEBAB9539
// Body: [[10a087c0, 10a0883d]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 101d9d50 U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43

void __cdecl
SettingsData__ctor_m7070D431438256A84F39CA5F4BA91F6BEBAB9539
          (SettingsData_t30CD9D6FCE66CFF6FA25505CC0D4FF98CE403617 *param_1,MethodInfo *param_2)

{
  if (DAT_115201d9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata((uint *)&String_t_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
    DAT_115201d9 = '\x01';
  }
  param_1->___audioVolume_3 = 0xff;
  param_1->___antiAliasing_4 = true;
  param_1->___fullscreen_7 = true;
  param_1->___language_8 = *(String_t **)String_t_il2cpp_TypeInfo_var->static_fields;
  (param_1->___screenshot_9).___path_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
  (param_1->___screenshot_9).___x_1 = 0x800;
  (param_1->___screenshot_9).___y_2 = 0x800;
  (param_1->___objExport_10).___path_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
  U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
            ((U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)param_1,
             (MethodInfo *)0x0);
  return;
}
