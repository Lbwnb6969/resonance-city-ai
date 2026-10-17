// RVA 0x880960 | Placemaker.BootMaster$$Start
// PDB: BootMaster_Start_m61FCFE4450E4587746FEE652C174367986C32BF1
// Body: [[10880960, 108809f6]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d9d60 U3CBlockingU3Ed__3__ctor_mA08CA85A410A10DCD75D8FDB012AB6E42BB045C8
// 10837d40 FastCoroutines_StartFastCoroutine_mF3A44251085B261F9BE9D310DBD8DE49223C3E6E

void __cdecl
BootMaster_Start_m61FCFE4450E4587746FEE652C174367986C32BF1
          (BootMaster_tCDF54DE575746AC67218D4F2A3134013E3DD1391 *param_1,MethodInfo *param_2)

{
  U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *pUVar1;

  if (DAT_1151f5cb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&FastCoroutines_t3ABB2BDAC5D7EC1B904E8CDCDB49D749D153C60F_il2cpp_TypeInfo_var
              );
    DAT_1151f5cb = '\x01';
  }
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
    if ((FastCoroutines_t3ABB2BDAC5D7EC1B904E8CDCDB49D749D153C60F_il2cpp_TypeInfo_var->has_cctor !=
         '\0') &&
       (FastCoroutines_t3ABB2BDAC5D7EC1B904E8CDCDB49D749D153C60F_il2cpp_TypeInfo_var->cctor_finished
        == 0)) {
      il2cpp_runtime_class_init
                (FastCoroutines_t3ABB2BDAC5D7EC1B904E8CDCDB49D749D153C60F_il2cpp_TypeInfo_var);
    }
    FastCoroutines_StartFastCoroutine_mF3A44251085B261F9BE9D310DBD8DE49223C3E6E
              ((MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A *)param_1,
               (Il2CppObject *)pUVar1,6,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
