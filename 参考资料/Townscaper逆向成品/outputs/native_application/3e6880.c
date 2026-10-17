// RVA 0x3e6880 | Placemaker.Ui.UiMaster$$StartFinishLoading
// PDB: UiMaster_StartFinishLoading_m3CA24611C1CF91CFF08C18DD6D2C2F7CB9298C5D
// Body: [[103e6880, 103e68e6]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d17c0 BreakPoint__ctor_m1900245FA061B6C11A6ADD2176B3A5BEF5D8C8B0
// 109c9e70 U3CU3Ec__DisplayClass75_0_U3CStartFinishLoadingU3Eg__RoutineU7C0_m295240BFB90869D81EFA5A293643FC2E28271C71
// 10a48ec0 MonoBehaviour_StartCoroutine_Auto_m78A5B32C9E51A3C64C19BB73ED4A9A9B7536677A

void __cdecl
UiMaster_StartFinishLoading_m3CA24611C1CF91CFF08C18DD6D2C2F7CB9298C5D
          (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *param_1,bool param_2,
          MethodInfo *param_3)

{
  BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *pBVar1;
  Il2CppObject *pIVar2;

  if (DAT_1151c8b5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass75_0_t249EC1AA889B3C20E41E679B209A83CE8E1F8543_il2cpp_TypeInfo_var
              );
    DAT_1151c8b5 = '\x01';
  }
  pBVar1 = (BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *)
           il2cpp_codegen_object_new
                     (
                     U3CU3Ec__DisplayClass75_0_t249EC1AA889B3C20E41E679B209A83CE8E1F8543_il2cpp_TypeInfo_var
                     );
  BreakPoint__ctor_m1900245FA061B6C11A6ADD2176B3A5BEF5D8C8B0(pBVar1,(MethodInfo *)0x0);
  if (pBVar1 != (BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *)0x0) {
    pBVar1->___name_0 = (String_t *)param_1;
    *(bool *)&pBVar1->___screenAspectRatio_1 = param_2;
    pIVar2 = U3CU3Ec__DisplayClass75_0_U3CStartFinishLoadingU3Eg__RoutineU7C0_m295240BFB90869D81EFA5A293643FC2E28271C71
                       ((U3CU3Ec__DisplayClass75_0_t249EC1AA889B3C20E41E679B209A83CE8E1F8543 *)
                        pBVar1,(MethodInfo *)0x0);
    MonoBehaviour_StartCoroutine_Auto_m78A5B32C9E51A3C64C19BB73ED4A9A9B7536677A
              ((MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A *)param_1,pIVar2,
               (MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
