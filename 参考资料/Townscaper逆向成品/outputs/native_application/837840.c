// RVA 0x837840 | Placemaker.FastCoroutineUpdater$$Update
// PDB: FastCoroutineUpdater_Update_mB9F772DBB6C4E173112C5F179D5B7FB88EA20301
// Body: [[10837840, 10837886]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 108378f0 FastCoroutines_FastIterate_m69AE3367AF5EF60CB968CB174DADEA58CC46BA60

void __cdecl
FastCoroutineUpdater_Update_mB9F772DBB6C4E173112C5F179D5B7FB88EA20301
          (FastCoroutineUpdater_tB6C2BBC2A368E46D5FB16E705684358595F71D4F *param_1,
          MethodInfo *param_2)

{
  if (DAT_1151f3cc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&FastCoroutines_t3ABB2BDAC5D7EC1B904E8CDCDB49D749D153C60F_il2cpp_TypeInfo_var
              );
    DAT_1151f3cc = '\x01';
  }
  if ((FastCoroutines_t3ABB2BDAC5D7EC1B904E8CDCDB49D749D153C60F_il2cpp_TypeInfo_var->has_cctor !=
       '\0') &&
     (FastCoroutines_t3ABB2BDAC5D7EC1B904E8CDCDB49D749D153C60F_il2cpp_TypeInfo_var->cctor_finished
      == 0)) {
    il2cpp_runtime_class_init
              (FastCoroutines_t3ABB2BDAC5D7EC1B904E8CDCDB49D749D153C60F_il2cpp_TypeInfo_var);
  }
  FastCoroutines_FastIterate_m69AE3367AF5EF60CB968CB174DADEA58CC46BA60(0x10,(MethodInfo *)0x0);
  return;
}
