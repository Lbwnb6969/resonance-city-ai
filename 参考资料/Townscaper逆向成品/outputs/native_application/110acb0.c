// RVA 0x110acb0 | FuryStudios.FurySDK.Internal.AsyncRequestChain$$.ctor
// PDB: AsyncRequestChain__ctor_m551FBB3ACEA0A051A3C5F46A041CB366B6BF1B29
// Body: [[1110acb0, 1110ad14]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 101d9d50 U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
// 10514ce0 Queue_1__ctor_m065613451660A1479E4D6D00878FB7630AFE4E11_gshared

void __cdecl
AsyncRequestChain__ctor_m551FBB3ACEA0A051A3C5F46A041CB366B6BF1B29
          (AsyncRequestChain_tA0F1F24B7A14369AB4C847C2FB00E7093C1771C2 *param_1,MethodInfo *param_2)

{
  Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *pQVar1;

  if (DAT_11523e77 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Queue_1__ctor_m2AB7AC5CFAEFD29532259FC8768B2601963DEE38_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Queue_1_tD352657B8F159773BF493CD423C42D6C0D116A22_il2cpp_TypeInfo_var);
    DAT_11523e77 = '\x01';
  }
  U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
            ((U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)param_1,
             (MethodInfo *)0x0);
  param_1->_padding_ = 0;
  pQVar1 = (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)
           il2cpp_codegen_object_new
                     (Queue_1_tD352657B8F159773BF493CD423C42D6C0D116A22_il2cpp_TypeInfo_var);
  Queue_1__ctor_m065613451660A1479E4D6D00878FB7630AFE4E11_gshared
            (pQVar1,Queue_1__ctor_m2AB7AC5CFAEFD29532259FC8768B2601963DEE38_RuntimeMethod_var);
  param_1->___childRequests_6 = (Queue_1_tD352657B8F159773BF493CD423C42D6C0D116A22 *)pQVar1;
  param_1->___failed_7 = false;
  return;
}
