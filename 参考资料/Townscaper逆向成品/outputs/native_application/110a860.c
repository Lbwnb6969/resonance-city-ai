// RVA 0x110a860 | FuryStudios.FurySDK.Internal.AsyncRequestAbortException$$.ctor
// PDB: AsyncRequestAbortException__ctor_m5C33DBF2D804BFC04BA0A608997DF75FD2A7741E
// Body: [[1110a860, 1110a8a9]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 10a6be20 Exception__ctor_m0E9BEC861F6DBED197960E5BA23149543B1D7F5B

void __cdecl
AsyncRequestAbortException__ctor_m5C33DBF2D804BFC04BA0A608997DF75FD2A7741E
          (AsyncRequestAbortException_t30367006BF25A2DC85C8F213C5A66F5571F32DFC *param_1,
          MethodInfo *param_2)

{
  if (DAT_11523e76 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata((uint *)&Exception_t_il2cpp_TypeInfo_var);
    DAT_11523e76 = '\x01';
  }
  if ((Exception_t_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (Exception_t_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(Exception_t_il2cpp_TypeInfo_var);
  }
  Exception__ctor_m0E9BEC861F6DBED197960E5BA23149543B1D7F5B
            ((Exception_t *)param_1,(MethodInfo *)0x0);
  return;
}
