// RVA 0x3075a0 | Placemaker.Ui.Toucher$$Placemaker.Ui.UiMaster.IUiSetup.OnSetup
// PDB: Toucher_Placemaker_Ui_UiMaster_IUiSetup_OnSetup_m1EB08956030DBD64D46C4D4B9E32BCA9BF39CC67
// Body: [[103075a0, 103076a2]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d17c0 BreakPoint__ctor_m1900245FA061B6C11A6ADD2176B3A5BEF5D8C8B0
// 101d8560 OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
// 103e6950 UiMaster_SubscribeToMenuState_mE782237CD39DD56FB441C83148B723D4C4940272
// 107baff0 EventSystem_get_current_m4B9C11F490297AE55428038DACD240596D6CE5F2
// 10c68520 PointerEventData__ctor_m3A877590C20995B4F549C6923BBE2B0901A684F2

void __cdecl
Toucher_Placemaker_Ui_UiMaster_IUiSetup_OnSetup_m1EB08956030DBD64D46C4D4B9E32BCA9BF39CC67
          (Toucher_tE538137A40B930BDCF3263642CE03F76BF793CD7 *param_1,
          UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *param_2,MethodInfo *param_3)

{
  UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *pUVar1;
  BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *pBVar2;
  EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C *pEVar3;
  PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *pPVar4;
  OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *pOVar5;

  if (DAT_1151c237 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_2__ctor_m62ADD57C1B772087EF2883885445E71CA7293100_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_2_t4DD01329FC38EBF9CEAC744A13C1C3E37D93C169_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass15_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__0_m9E3C25000D5982105C24644A27D4A5B80BD886D0_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass15_0_tB60BC81E9228583B7D49B37C16F3AB3FE398BEAB_il2cpp_TypeInfo_var
              );
    DAT_1151c237 = '\x01';
  }
  pBVar2 = (BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *)
           il2cpp_codegen_object_new
                     (
                     U3CU3Ec__DisplayClass15_0_tB60BC81E9228583B7D49B37C16F3AB3FE398BEAB_il2cpp_TypeInfo_var
                     );
  BreakPoint__ctor_m1900245FA061B6C11A6ADD2176B3A5BEF5D8C8B0(pBVar2,(MethodInfo *)0x0);
  if (pBVar2 != (BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *)0x0) {
    pBVar2->___name_0 = (String_t *)param_1;
    pBVar2->___screenAspectRatio_1 = (float)param_2;
    if ((EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_il2cpp_TypeInfo_var->has_cctor !=
         '\0') &&
       (EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_il2cpp_TypeInfo_var->cctor_finished ==
        0)) {
      il2cpp_runtime_class_init
                (EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_il2cpp_TypeInfo_var);
    }
    pEVar3 = EventSystem_get_current_m4B9C11F490297AE55428038DACD240596D6CE5F2((MethodInfo *)0x0);
    pPVar4 = (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *)
             il2cpp_codegen_object_new
                       (
                       PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954_il2cpp_TypeInfo_var
                       );
    PointerEventData__ctor_m3A877590C20995B4F549C6923BBE2B0901A684F2
              (pPVar4,pEVar3,(MethodInfo *)0x0);
    param_1->___pointerEventData_7 = pPVar4;
    pUVar1 = (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)pBVar2->___screenAspectRatio_1;
    pOVar5 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
             il2cpp_codegen_object_new
                       (Action_2_t4DD01329FC38EBF9CEAC744A13C1C3E37D93C169_il2cpp_TypeInfo_var);
    OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
              (pOVar5,(Il2CppObject *)pBVar2,
               (int)
               U3CU3Ec__DisplayClass15_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__0_m9E3C25000D5982105C24644A27D4A5B80BD886D0_RuntimeMethod_var
               ,Action_2__ctor_m62ADD57C1B772087EF2883885445E71CA7293100_RuntimeMethod_var);
    if (pUVar1 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) {
      UiMaster_SubscribeToMenuState_mE782237CD39DD56FB441C83148B723D4C4940272
                (pUVar1,(Action_2_t4DD01329FC38EBF9CEAC744A13C1C3E37D93C169 *)pOVar5,
                 (MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
