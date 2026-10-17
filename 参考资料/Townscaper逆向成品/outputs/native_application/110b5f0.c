// RVA 0x110b5f0 | FuryStudios.FurySDK.Internal.AsyncRequest$$Reset
// PDB: AsyncRequest_Reset_mCB52B16350392B3AE1626F2B583C06A79E6A7F1D
// Body: [[1110b5f0, 1110b61e]]
// Direct callees:
// 1018e960 il2cpp_codegen_initialize_runtime_metadata_inline
// 1018ea90 il2cpp_codegen_object_new
// 1018eab0 il2cpp_codegen_raise_exception
// 10d7a440 NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE

void __cdecl
AsyncRequest_Reset_mCB52B16350392B3AE1626F2B583C06A79E6A7F1D
          (AsyncRequest_t7DD8DD6332BB3330D713B40AF56C505FBBA73F12 *param_1,MethodInfo *param_2)

{
  Il2CppClass *pIVar1;
  Exception_t *pEVar2;
  MethodInfo *pMVar3;

  pIVar1 = il2cpp_codegen_initialize_runtime_metadata_inline
                     ((uint *)&
                              NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var
                     );
  pEVar2 = (Exception_t *)il2cpp_codegen_object_new(pIVar1);
  NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE
            ((NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)pEVar2,
             (MethodInfo *)0x0);
  pMVar3 = il2cpp_codegen_initialize_runtime_metadata_inline
                     ((uint *)&
                              AsyncRequest_Reset_mCB52B16350392B3AE1626F2B583C06A79E6A7F1D_RuntimeMethod_var
                     );
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_exception(pEVar2,pMVar3);
}
