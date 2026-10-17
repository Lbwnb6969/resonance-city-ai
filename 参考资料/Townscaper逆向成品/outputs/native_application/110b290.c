// RVA 0x110b290 | FuryStudios.FurySDK.Internal.AsyncRequest$$Continue
// PDB: AsyncRequest_Continue_mE2306605D9D9A1310DCA3671C85B624718298A14
// Body: [[1110b290, 1110b348]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 101d9d50 U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
// 10514ce0 Queue_1__ctor_m065613451660A1479E4D6D00878FB7630AFE4E11_gshared

AsyncRequestChain_tA0F1F24B7A14369AB4C847C2FB00E7093C1771C2 * __cdecl
AsyncRequest_Continue_mE2306605D9D9A1310DCA3671C85B624718298A14
          (AsyncRequest_t7DD8DD6332BB3330D713B40AF56C505FBBA73F12 *param_1,Il2CppObject *param_2,
          MethodInfo *param_3)

{
  AsyncRequestChain_tA0F1F24B7A14369AB4C847C2FB00E7093C1771C2 *pAVar1;
  Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *pQVar2;

  if (DAT_11523e72 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       AsyncRequestChain_tA0F1F24B7A14369AB4C847C2FB00E7093C1771C2_il2cpp_TypeInfo_var
              );
    DAT_11523e72 = '\x01';
  }
  pAVar1 = (AsyncRequestChain_tA0F1F24B7A14369AB4C847C2FB00E7093C1771C2 *)
           il2cpp_codegen_object_new
                     (
                     AsyncRequestChain_tA0F1F24B7A14369AB4C847C2FB00E7093C1771C2_il2cpp_TypeInfo_var
                     );
  if (DAT_11523e77 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Queue_1__ctor_m2AB7AC5CFAEFD29532259FC8768B2601963DEE38_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Queue_1_tD352657B8F159773BF493CD423C42D6C0D116A22_il2cpp_TypeInfo_var);
    DAT_11523e77 = '\x01';
  }
  U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
            ((U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)pAVar1,
             (MethodInfo *)0x0);
  pAVar1->_padding_ = 0;
  pQVar2 = (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)
           il2cpp_codegen_object_new
                     (Queue_1_tD352657B8F159773BF493CD423C42D6C0D116A22_il2cpp_TypeInfo_var);
  Queue_1__ctor_m065613451660A1479E4D6D00878FB7630AFE4E11_gshared
            (pQVar2,Queue_1__ctor_m2AB7AC5CFAEFD29532259FC8768B2601963DEE38_RuntimeMethod_var);
  pAVar1->___childRequests_6 = (Queue_1_tD352657B8F159773BF493CD423C42D6C0D116A22 *)pQVar2;
  pAVar1->___failed_7 = false;
  (**(code **)(pAVar1->_padding_ + 0x11c))
            (pAVar1,param_1,*(undefined4 *)(pAVar1->_padding_ + 0x120));
  (**(code **)(pAVar1->_padding_ + 0x11c))
            (pAVar1,param_2,*(undefined4 *)(pAVar1->_padding_ + 0x120));
  return pAVar1;
}
