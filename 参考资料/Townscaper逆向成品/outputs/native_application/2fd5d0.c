// RVA 0x2fd5d0 | Placemaker.StorageUtils$$FillSaveCard
// PDB: StorageUtils_FillSaveCard_m148444ACC728AA55B28333C5C98116FDCB0072ED
// Body: [[102fd5d0, 102fd624]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d9d60 U3CBlockingU3Ed__3__ctor_mA08CA85A410A10DCD75D8FDB012AB6E42BB045C8

Il2CppObject * __cdecl
StorageUtils_FillSaveCard_m148444ACC728AA55B28333C5C98116FDCB0072ED
          (StorageUtils_t6E9DFB789C54B9B5604E6701C1D0E230BB7FAEF3 *param_1,
          SaveCard_t0D4BB910CDF8BB065BDBE2557107FC323BDAAC67 *param_2,MethodInfo *param_3)

{
  U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *pUVar1;

  if (DAT_1151c1ed == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CFillSaveCardU3Ed__22_t65F010375508E19A2E6634FBF3AC38F11D3BB4E9_il2cpp_TypeInfo_var
              );
    DAT_1151c1ed = '\x01';
  }
  pUVar1 = (U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)
           il2cpp_codegen_object_new
                     (
                     U3CFillSaveCardU3Ed__22_t65F010375508E19A2E6634FBF3AC38F11D3BB4E9_il2cpp_TypeInfo_var
                     );
  U3CBlockingU3Ed__3__ctor_mA08CA85A410A10DCD75D8FDB012AB6E42BB045C8(pUVar1,0,(MethodInfo *)0x0);
  if (pUVar1 != (U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)0x0) {
    pUVar1[1]._padding_ = (int)param_2;
    pUVar1->___U3CU3E4__this_2 = (ExampleScript_t8136B28DAEAEB4EBE20ED43B160950E4CA03C089 *)param_1;
    return (Il2CppObject *)pUVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
