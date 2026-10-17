// RVA 0x3dce90 | Placemaker.Quads.GridGeneration.MotivationCounter$$GetEnumerator
// PDB: MotivationCounter_GetEnumerator_m6DCFEA1D9451943B9321484096A612F2B54D754A
// Body: [[103dce90, 103dcee0]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d9d60 U3CBlockingU3Ed__3__ctor_mA08CA85A410A10DCD75D8FDB012AB6E42BB045C8

Il2CppObject * __cdecl
MotivationCounter_GetEnumerator_m6DCFEA1D9451943B9321484096A612F2B54D754A
          (MotivationCounter_t0A263E14534ECFAB9C180D71127E5C3713804F1E *param_1,MethodInfo *param_2)

{
  U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *pUVar1;

  if (DAT_1151c88d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CGetEnumeratorU3Ed__3_t3EDECD654172E620175BA3C08C30B00ABF62FEC3_il2cpp_TypeInfo_var
              );
    DAT_1151c88d = '\x01';
  }
  pUVar1 = (U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)
           il2cpp_codegen_object_new
                     (
                     U3CGetEnumeratorU3Ed__3_t3EDECD654172E620175BA3C08C30B00ABF62FEC3_il2cpp_TypeInfo_var
                     );
  U3CBlockingU3Ed__3__ctor_mA08CA85A410A10DCD75D8FDB012AB6E42BB045C8(pUVar1,0,(MethodInfo *)0x0);
  if (pUVar1 != (U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)0x0) {
    *(uchar *)&pUVar1[1]._padding_ = param_1->___count_0;
    return (Il2CppObject *)pUVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
