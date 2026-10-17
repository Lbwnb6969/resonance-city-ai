// RVA 0x110b0e0 | FuryStudios.FurySDK.Internal.AsyncRequestScheduler$$.ctor
// PDB: AsyncRequestScheduler__ctor_mF42B9955507A73C2CA60A0C617E90B72C16F816D
// Body: [[1110b0e0, 1110b139]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 101d9d50 U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
// 10514ce0 Queue_1__ctor_m065613451660A1479E4D6D00878FB7630AFE4E11_gshared

void __cdecl
AsyncRequestScheduler__ctor_mF42B9955507A73C2CA60A0C617E90B72C16F816D
          (AsyncRequestScheduler_t37E3CF1505F2FE7B383133466504E503DDDE9F80 *param_1,
          MethodInfo *param_2)

{
  Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *pQVar1;

  if (DAT_11523e7a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Queue_1__ctor_m2AB7AC5CFAEFD29532259FC8768B2601963DEE38_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Queue_1_tD352657B8F159773BF493CD423C42D6C0D116A22_il2cpp_TypeInfo_var);
    DAT_11523e7a = '\x01';
  }
  U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
            ((U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)param_1,
             (MethodInfo *)0x0);
  pQVar1 = (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)
           il2cpp_codegen_object_new
                     (Queue_1_tD352657B8F159773BF493CD423C42D6C0D116A22_il2cpp_TypeInfo_var);
  Queue_1__ctor_m065613451660A1479E4D6D00878FB7630AFE4E11_gshared
            (pQVar1,Queue_1__ctor_m2AB7AC5CFAEFD29532259FC8768B2601963DEE38_RuntimeMethod_var);
  param_1->___requestQueue_0 = (Queue_1_tD352657B8F159773BF493CD423C42D6C0D116A22 *)pQVar1;
  return;
}
