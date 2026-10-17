// RVA 0x880640 | Placemaker.BootMaster$$BootRoutine
// PDB: BootMaster_BootRoutine_mE3C67DADEE02041AE9E6DE1A9C1859AF73CF857F
// Body: [[10880640, 1088068e]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d9d60 U3CBlockingU3Ed__3__ctor_mA08CA85A410A10DCD75D8FDB012AB6E42BB045C8

Il2CppObject * __cdecl
BootMaster_BootRoutine_mE3C67DADEE02041AE9E6DE1A9C1859AF73CF857F
          (BootMaster_tCDF54DE575746AC67218D4F2A3134013E3DD1391 *param_1,MethodInfo *param_2)

{
  U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *pUVar1;

  if (DAT_1151f5cc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CBootRoutineU3Ed__11_tE91A7954F486E79AC32D606E758003FB9D1E217C_il2cpp_TypeInfo_var
              );
    DAT_1151f5cc = '\x01';
  }
  pUVar1 = (U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)
           il2cpp_codegen_object_new
                     (
                     U3CBootRoutineU3Ed__11_tE91A7954F486E79AC32D606E758003FB9D1E217C_il2cpp_TypeInfo_var
                     );
  U3CBlockingU3Ed__3__ctor_mA08CA85A410A10DCD75D8FDB012AB6E42BB045C8(pUVar1,0,(MethodInfo *)0x0);
  if (pUVar1 != (U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)0x0) {
    pUVar1->___U3CU3E4__this_2 = (ExampleScript_t8136B28DAEAEB4EBE20ED43B160950E4CA03C089 *)param_1;
    return (Il2CppObject *)pUVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
