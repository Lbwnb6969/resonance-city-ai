// RVA 0x301490 | TextFps$$Start
// PDB: TextFps_Start_m9B260256A62EFFAC42B515C39D95E472B4F25F23
// Body: [[10301490, 1030152d]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d9d60 U3CBlockingU3Ed__3__ctor_mA08CA85A410A10DCD75D8FDB012AB6E42BB045C8
// 10a48ec0 MonoBehaviour_StartCoroutine_Auto_m78A5B32C9E51A3C64C19BB73ED4A9A9B7536677A
// 111005a0 WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4

void __cdecl
TextFps_Start_m9B260256A62EFFAC42B515C39D95E472B4F25F23
          (TextFps_t2E68405F76B6D147E838580426F41D0245F129A0 *param_1,MethodInfo *param_2)

{
  WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *pWVar1;
  U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *pUVar2;
  bool bVar3;

  if (DAT_1151c218 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var
              );
    DAT_1151c218 = '\x01';
  }
  pWVar1 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)
           il2cpp_codegen_object_new
                     (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
  WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(pWVar1,0.15,(MethodInfo *)0x0);
  bVar3 = DAT_1151c21a == '\0';
  param_1->___wait_5 = pWVar1;
  if (bVar3) {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CFpsCounterU3Ed__5_t1AA93DFC96E56AFEC7A068DC0C9E5ABCA7BAF289_il2cpp_TypeInfo_var
              );
    DAT_1151c21a = '\x01';
  }
  pUVar2 = (U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)
           il2cpp_codegen_object_new
                     (
                     U3CFpsCounterU3Ed__5_t1AA93DFC96E56AFEC7A068DC0C9E5ABCA7BAF289_il2cpp_TypeInfo_var
                     );
  U3CBlockingU3Ed__3__ctor_mA08CA85A410A10DCD75D8FDB012AB6E42BB045C8(pUVar2,0,(MethodInfo *)0x0);
  if (pUVar2 != (U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)0x0) {
    pUVar2->___U3CU3E4__this_2 = (ExampleScript_t8136B28DAEAEB4EBE20ED43B160950E4CA03C089 *)param_1;
    MonoBehaviour_StartCoroutine_Auto_m78A5B32C9E51A3C64C19BB73ED4A9A9B7536677A
              ((MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A *)param_1,
               (Il2CppObject *)pUVar2,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
