// RVA 0x3e5d90 | Placemaker.Ui.UiMaster$$LoadString
// PDB: UiMaster_LoadString_m23F7DC6FD3E4C490B155F325C23738343F2E8FF7
// Body: [[103e5d90, 103e5e6d]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d17c0 BreakPoint__ctor_m1900245FA061B6C11A6ADD2176B3A5BEF5D8C8B0
// 10301d60 TextSaveSystem_LoadFromString_mCADEA552BBD342F6290459E31BB3F0CC6C4857E3
// 109c9e20 U3CU3Ec__DisplayClass74_0_U3CLoadStringU3Eg__RoutineU7C0_mD8F4EC28458E42BE238FA72C7A25E275EC710687
// 109fdb90 SaveData_Clear_m7F698094AF5725EDB07E9F4A06994B837FD9DE52
// 10a48ec0 MonoBehaviour_StartCoroutine_Auto_m78A5B32C9E51A3C64C19BB73ED4A9A9B7536677A

bool __cdecl
UiMaster_LoadString_m23F7DC6FD3E4C490B155F325C23738343F2E8FF7
          (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *param_1,String_t *param_2,
          MethodInfo *param_3)

{
  SaveData_t108FDD1E782E68BC3B924BE75B58816350034188 *pSVar1;
  float fVar2;
  List_1_tF9A565374BF86F9FF1DA3261675EC468D2A0EC4B *pLVar3;
  List_1_t65B5CE5C2CCE2EE12BA01A686F7853869760B043 *pLVar4;
  bool bVar5;
  BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *pBVar6;
  Il2CppObject *pIVar7;

  if (DAT_1151c8b4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass74_0_tFBA021529326D7C7753D1F662704FA392D67AD69_il2cpp_TypeInfo_var
              );
    DAT_1151c8b4 = '\x01';
  }
  pBVar6 = (BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *)
           il2cpp_codegen_object_new
                     (
                     U3CU3Ec__DisplayClass74_0_tFBA021529326D7C7753D1F662704FA392D67AD69_il2cpp_TypeInfo_var
                     );
  BreakPoint__ctor_m1900245FA061B6C11A6ADD2176B3A5BEF5D8C8B0(pBVar6,(MethodInfo *)0x0);
  if (pBVar6 != (BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *)0x0) {
    pBVar6->___name_0 = (String_t *)param_1;
    if (param_1->___worldMaster_5 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) {
      pSVar1 = param_1->___worldMaster_5->___saveData_42;
      pBVar6->___screenAspectRatio_1 = (float)pSVar1;
      if (pSVar1 != (SaveData_t108FDD1E782E68BC3B924BE75B58816350034188 *)0x0) {
        SaveData_Clear_m7F698094AF5725EDB07E9F4A06994B837FD9DE52(pSVar1,(MethodInfo *)0x0);
        fVar2 = pBVar6->___screenAspectRatio_1;
        if (fVar2 != 0.0) {
          pLVar3 = *(List_1_tF9A565374BF86F9FF1DA3261675EC468D2A0EC4B **)((int)fVar2 + 0x24);
          pLVar4 = *(List_1_t65B5CE5C2CCE2EE12BA01A686F7853869760B043 **)((int)fVar2 + 0x20);
          if ((TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->
               has_cctor != '\0') &&
             (TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->
              cctor_finished == 0)) {
            il2cpp_runtime_class_init
                      (TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var)
            ;
          }
          bVar5 = TextSaveSystem_LoadFromString_mCADEA552BBD342F6290459E31BB3F0CC6C4857E3
                            (param_2,pLVar4,pLVar3,(MethodInfo *)0x0);
          if (!bVar5) {
            return false;
          }
          pIVar7 = U3CU3Ec__DisplayClass74_0_U3CLoadStringU3Eg__RoutineU7C0_mD8F4EC28458E42BE238FA72C7A25E275EC710687
                             ((U3CU3Ec__DisplayClass74_0_tFBA021529326D7C7753D1F662704FA392D67AD69 *
                              )pBVar6,(MethodInfo *)0x0);
          MonoBehaviour_StartCoroutine_Auto_m78A5B32C9E51A3C64C19BB73ED4A9A9B7536677A
                    ((MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A *)param_1,pIVar7,
                     (MethodInfo *)0x0);
          return true;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
