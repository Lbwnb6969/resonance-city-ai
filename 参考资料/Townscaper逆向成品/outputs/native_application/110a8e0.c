// RVA 0x110a8e0 | FuryStudios.FurySDK.Internal.AsyncRequestChain$$Continue
// PDB: AsyncRequestChain_Continue_mA1208CDFAE53A664B44708F4DFCEBF88DFE9DBDD
// Body: [[1110a8e0, 1110a926]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10513710 Queue_1_Enqueue_m107E173BF8C3C568A0533F5A5BDF660D554EA8C7_gshared

AsyncRequestChain_tA0F1F24B7A14369AB4C847C2FB00E7093C1771C2 * __cdecl
AsyncRequestChain_Continue_mA1208CDFAE53A664B44708F4DFCEBF88DFE9DBDD
          (AsyncRequestChain_tA0F1F24B7A14369AB4C847C2FB00E7093C1771C2 *param_1,
          Il2CppObject *param_2,MethodInfo *param_3)

{
  if (DAT_11523e78 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Queue_1_Enqueue_mDE98C1ED1792407446B9C66E0645AFFACA62CCF0_RuntimeMethod_var)
    ;
    DAT_11523e78 = '\x01';
  }
  if ((Queue_1_t8E6EF552233A7A5C1A2718F5CC554044887CF616 *)param_1->___childRequests_6 !=
      (Queue_1_t8E6EF552233A7A5C1A2718F5CC554044887CF616 *)0x0) {
    Queue_1_Enqueue_m107E173BF8C3C568A0533F5A5BDF660D554EA8C7_gshared
              ((Queue_1_t8E6EF552233A7A5C1A2718F5CC554044887CF616 *)param_1->___childRequests_6,
               (uint)param_2,
               Queue_1_Enqueue_mDE98C1ED1792407446B9C66E0645AFFACA62CCF0_RuntimeMethod_var);
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
