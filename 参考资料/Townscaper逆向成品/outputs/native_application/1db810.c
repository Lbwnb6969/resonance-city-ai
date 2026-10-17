// RVA 0x1db810 | Placemaker.FastCoroutines.<FastCoroutine>d__9$$System.Collections.IEnumerator.Reset
// PDB: U3CFastCoroutineU3Ed__9_System_Collections_IEnumerator_Reset_m61694DCF8F16912276B48585961B3E20622C0EB2
// Body: [[101db810, 101db83e]]
// Direct callees:
// 1018e960 il2cpp_codegen_initialize_runtime_metadata_inline
// 1018ea90 il2cpp_codegen_object_new
// 1018eab0 il2cpp_codegen_raise_exception
// 10d7a440 NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE

void __cdecl
U3CFastCoroutineU3Ed__9_System_Collections_IEnumerator_Reset_m61694DCF8F16912276B48585961B3E20622C0EB2
          (U3CFastCoroutineU3Ed__9_tBC25476FF1A321395E01428E559C83413AFC0B5C *param_1,
          MethodInfo *param_2)

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
                              U3CFastCoroutineU3Ed__9_System_Collections_IEnumerator_Reset_m61694DCF8F16912276B48585961B3E20622C0EB2_RuntimeMethod_var
                     );
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_exception(pEVar2,pMVar3);
}
