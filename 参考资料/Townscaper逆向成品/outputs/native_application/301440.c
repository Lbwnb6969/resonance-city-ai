// RVA 0x301440 | TextFps$$FpsCounter
// PDB: TextFps_FpsCounter_mE2FA2C168BA7BC5DA4FF733D50122F537B136879
// Body: [[10301440, 1030148e]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d9d60 U3CBlockingU3Ed__3__ctor_mA08CA85A410A10DCD75D8FDB012AB6E42BB045C8

Il2CppObject * __cdecl
TextFps_FpsCounter_mE2FA2C168BA7BC5DA4FF733D50122F537B136879
          (TextFps_t2E68405F76B6D147E838580426F41D0245F129A0 *param_1,MethodInfo *param_2)

{
  U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *pUVar1;

  if (DAT_1151c21a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CFpsCounterU3Ed__5_t1AA93DFC96E56AFEC7A068DC0C9E5ABCA7BAF289_il2cpp_TypeInfo_var
              );
    DAT_1151c21a = '\x01';
  }
  pUVar1 = (U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)
           il2cpp_codegen_object_new
                     (
                     U3CFpsCounterU3Ed__5_t1AA93DFC96E56AFEC7A068DC0C9E5ABCA7BAF289_il2cpp_TypeInfo_var
                     );
  U3CBlockingU3Ed__3__ctor_mA08CA85A410A10DCD75D8FDB012AB6E42BB045C8(pUVar1,0,(MethodInfo *)0x0);
  if (pUVar1 != (U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)0x0) {
    pUVar1->___U3CU3E4__this_2 = (ExampleScript_t8136B28DAEAEB4EBE20ED43B160950E4CA03C089 *)param_1;
    return (Il2CppObject *)pUVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
