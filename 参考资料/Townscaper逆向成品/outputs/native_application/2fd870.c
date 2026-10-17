// RVA 0x2fd870 | Placemaker.StorageUtils$$LoadSaveToByteArray
// PDB: StorageUtils_LoadSaveToByteArray_mBE7F76FE3F9179AEE47062F6FDDB89A0E7D9292C
// Body: [[102fd870, 102fd8c4]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d9d60 U3CBlockingU3Ed__3__ctor_mA08CA85A410A10DCD75D8FDB012AB6E42BB045C8

Il2CppObject * __cdecl
StorageUtils_LoadSaveToByteArray_mBE7F76FE3F9179AEE47062F6FDDB89A0E7D9292C
          (StorageUtils_t6E9DFB789C54B9B5604E6701C1D0E230BB7FAEF3 *param_1,String_t *param_2,
          Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *param_3,MethodInfo *param_4)

{
  U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *pUVar1;

  if (DAT_1151c1eb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CLoadSaveToByteArrayU3Ed__20_t60847319D5CBA774FB2569173055A77B8382162A_il2cpp_TypeInfo_var
              );
    DAT_1151c1eb = '\x01';
  }
  pUVar1 = (U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)
           il2cpp_codegen_object_new
                     (
                     U3CLoadSaveToByteArrayU3Ed__20_t60847319D5CBA774FB2569173055A77B8382162A_il2cpp_TypeInfo_var
                     );
  U3CBlockingU3Ed__3__ctor_mA08CA85A410A10DCD75D8FDB012AB6E42BB045C8(pUVar1,0,(MethodInfo *)0x0);
  if (pUVar1 != (U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)0x0) {
    pUVar1[1]._padding_ = (int)param_3;
    pUVar1->___U3CU3E4__this_2 = (ExampleScript_t8136B28DAEAEB4EBE20ED43B160950E4CA03C089 *)param_2;
    return (Il2CppObject *)pUVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
