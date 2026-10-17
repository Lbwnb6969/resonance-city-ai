// RVA 0x3e68f0 | Placemaker.Ui.UiMaster$$StartNew
// PDB: UiMaster_StartNew_mFD3E10F73443B8ADF3A39463CEECFED7ABB7B556
// Body: [[103e68f0, 103e6948]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d9d60 U3CBlockingU3Ed__3__ctor_mA08CA85A410A10DCD75D8FDB012AB6E42BB045C8
// 10a48ec0 MonoBehaviour_StartCoroutine_Auto_m78A5B32C9E51A3C64C19BB73ED4A9A9B7536677A

void __cdecl
UiMaster_StartNew_mFD3E10F73443B8ADF3A39463CEECFED7ABB7B556
          (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *param_1,MethodInfo *param_2)

{
  U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *pUVar1;

  if (DAT_1151c8bd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3CStartNewU3Eg__RoutineU7C73_0U3Ed_t6ACA15295957A15C1D212E506345D7793C3B1274_il2cpp_TypeInfo_var
              );
    DAT_1151c8bd = '\x01';
  }
  pUVar1 = (U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)
           il2cpp_codegen_object_new
                     (
                     U3CU3CStartNewU3Eg__RoutineU7C73_0U3Ed_t6ACA15295957A15C1D212E506345D7793C3B1274_il2cpp_TypeInfo_var
                     );
  U3CBlockingU3Ed__3__ctor_mA08CA85A410A10DCD75D8FDB012AB6E42BB045C8(pUVar1,0,(MethodInfo *)0x0);
  if (pUVar1 != (U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)0x0) {
    pUVar1->___U3CU3E4__this_2 = (ExampleScript_t8136B28DAEAEB4EBE20ED43B160950E4CA03C089 *)param_1;
    MonoBehaviour_StartCoroutine_Auto_m78A5B32C9E51A3C64C19BB73ED4A9A9B7536677A
              ((MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A *)param_1,
               (Il2CppObject *)pUVar1,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
