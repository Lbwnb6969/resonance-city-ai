// RVA 0x837d40 | Placemaker.FastCoroutines$$StartFastCoroutine
// PDB: FastCoroutines_StartFastCoroutine_mF3A44251085B261F9BE9D310DBD8DE49223C3E6E
// Body: [[10837d40, 10837ddf]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d9d60 U3CBlockingU3Ed__3__ctor_mA08CA85A410A10DCD75D8FDB012AB6E42BB045C8
// 10a48ec0 MonoBehaviour_StartCoroutine_Auto_m78A5B32C9E51A3C64C19BB73ED4A9A9B7536677A

void __cdecl
FastCoroutines_StartFastCoroutine_mF3A44251085B261F9BE9D310DBD8DE49223C3E6E
          (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A *param_1,Il2CppObject *param_2,
          int param_3,MethodInfo *param_4)

{
  U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *pUVar1;

  if (DAT_1151f3d0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&FastCoroutines_t3ABB2BDAC5D7EC1B904E8CDCDB49D749D153C60F_il2cpp_TypeInfo_var
              );
    DAT_1151f3d0 = '\x01';
  }
  if ((FastCoroutines_t3ABB2BDAC5D7EC1B904E8CDCDB49D749D153C60F_il2cpp_TypeInfo_var->has_cctor !=
       '\0') &&
     (FastCoroutines_t3ABB2BDAC5D7EC1B904E8CDCDB49D749D153C60F_il2cpp_TypeInfo_var->cctor_finished
      == 0)) {
    il2cpp_runtime_class_init
              (FastCoroutines_t3ABB2BDAC5D7EC1B904E8CDCDB49D749D153C60F_il2cpp_TypeInfo_var);
  }
  if (DAT_1151f3d2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CFastCoroutineU3Ed__9_tBC25476FF1A321395E01428E559C83413AFC0B5C_il2cpp_TypeInfo_var
              );
    DAT_1151f3d2 = '\x01';
  }
  pUVar1 = (U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)
           il2cpp_codegen_object_new
                     (
                     U3CFastCoroutineU3Ed__9_tBC25476FF1A321395E01428E559C83413AFC0B5C_il2cpp_TypeInfo_var
                     );
  U3CBlockingU3Ed__3__ctor_mA08CA85A410A10DCD75D8FDB012AB6E42BB045C8(pUVar1,0,(MethodInfo *)0x0);
  if (pUVar1 != (U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)0x0) {
    pUVar1->___U3CU3E4__this_2 = (ExampleScript_t8136B28DAEAEB4EBE20ED43B160950E4CA03C089 *)param_3;
    pUVar1[1]._padding_ = (int)param_2;
    if (param_1 != (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A *)0x0) {
      MonoBehaviour_StartCoroutine_Auto_m78A5B32C9E51A3C64C19BB73ED4A9A9B7536677A
                (param_1,(Il2CppObject *)pUVar1,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
