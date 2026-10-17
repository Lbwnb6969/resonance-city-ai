// RVA 0x110b140 | FuryStudios.FurySDK.Internal.AsyncRequestTimedOutException$$.ctor
// PDB: AsyncRequestTimedOutException__ctor_m19E96794BA904EEBA09A338C510FB725532C0F09
// Body: [[1110b140, 1110b189]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 10a6be20 Exception__ctor_m0E9BEC861F6DBED197960E5BA23149543B1D7F5B

void __cdecl
AsyncRequestTimedOutException__ctor_m19E96794BA904EEBA09A338C510FB725532C0F09
          (AsyncRequestTimedOutException_t7ED30167764125239135470BCEB0323931EE4558 *param_1,
          MethodInfo *param_2)

{
  if (DAT_11523e7f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata((uint *)&Exception_t_il2cpp_TypeInfo_var);
    DAT_11523e7f = '\x01';
  }
  if ((Exception_t_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (Exception_t_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(Exception_t_il2cpp_TypeInfo_var);
  }
  Exception__ctor_m0E9BEC861F6DBED197960E5BA23149543B1D7F5B
            ((Exception_t *)param_1,(MethodInfo *)0x0);
  return;
}
