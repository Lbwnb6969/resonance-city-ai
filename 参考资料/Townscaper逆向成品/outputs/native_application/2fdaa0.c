// RVA 0x2fdaa0 | Placemaker.StorageUtils$$SaveToPath
// PDB: StorageUtils_SaveToPath_m6B7C8E01A7F67A4A7D6D2D4AEC84DCEECE4EBD02
// Body: [[102fdaa0, 102fdafa]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d9d60 U3CBlockingU3Ed__3__ctor_mA08CA85A410A10DCD75D8FDB012AB6E42BB045C8

Il2CppObject * __cdecl
StorageUtils_SaveToPath_m6B7C8E01A7F67A4A7D6D2D4AEC84DCEECE4EBD02
          (StorageUtils_t6E9DFB789C54B9B5604E6701C1D0E230BB7FAEF3 *param_1,String_t *param_2,
          SaveData_t108FDD1E782E68BC3B924BE75B58816350034188 *param_3,MethodInfo *param_4)

{
  U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *pUVar1;

  if (DAT_1151c1ee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CSaveToPathU3Ed__23_t11F7B785B626EF11BF8E7674654FEB20D8E0F6CF_il2cpp_TypeInfo_var
              );
    DAT_1151c1ee = '\x01';
  }
  pUVar1 = (U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)
           il2cpp_codegen_object_new
                     (
                     U3CSaveToPathU3Ed__23_t11F7B785B626EF11BF8E7674654FEB20D8E0F6CF_il2cpp_TypeInfo_var
                     );
  U3CBlockingU3Ed__3__ctor_mA08CA85A410A10DCD75D8FDB012AB6E42BB045C8(pUVar1,0,(MethodInfo *)0x0);
  if (pUVar1 != (U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)0x0) {
    pUVar1->___U3CU3E4__this_2 = (ExampleScript_t8136B28DAEAEB4EBE20ED43B160950E4CA03C089 *)param_2;
    pUVar1[1]._padding_ = (int)param_3;
    pUVar1[1]._padding_ = (int)param_1;
    return (Il2CppObject *)pUVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
