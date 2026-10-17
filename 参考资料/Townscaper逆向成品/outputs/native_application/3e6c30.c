// RVA 0x3e6c30 | Placemaker.Ui.UiMaster$$<LoadMetaSave>g__LoadMetaSaveRoutine|72_0
// PDB: UiMaster_U3CLoadMetaSaveU3Eg__LoadMetaSaveRoutineU7C72_0_mF864F1A7750A2E828312205CED17E09D60155275
// Body: [[103e6c30, 103e6c84]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d9d60 U3CBlockingU3Ed__3__ctor_mA08CA85A410A10DCD75D8FDB012AB6E42BB045C8

Il2CppObject * __cdecl
UiMaster_U3CLoadMetaSaveU3Eg__LoadMetaSaveRoutineU7C72_0_mF864F1A7750A2E828312205CED17E09D60155275
          (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *param_1,
          MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *param_2,MethodInfo *param_3)

{
  U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *pUVar1;

  if (DAT_1151c8bc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3CLoadMetaSaveU3Eg__LoadMetaSaveRoutineU7C72_0U3Ed_t00285F872887FDD33BBCD5B03B87F10919F86E0D_il2cpp_TypeInfo_var
              );
    DAT_1151c8bc = '\x01';
  }
  pUVar1 = (U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)
           il2cpp_codegen_object_new
                     (
                     U3CU3CLoadMetaSaveU3Eg__LoadMetaSaveRoutineU7C72_0U3Ed_t00285F872887FDD33BBCD5B03B87F10919F86E0D_il2cpp_TypeInfo_var
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
