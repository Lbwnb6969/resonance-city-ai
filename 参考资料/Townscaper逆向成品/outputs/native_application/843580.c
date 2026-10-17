// RVA 0x843580 | Placemaker.Ui.GenericMenuNavigator$$Update
// PDB: GenericMenuNavigator_Update_mC341A532482E1F92B3BA9F06E3A39D29B323C9AA
// Body: [[10843580, 108435c8]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103e9500 UpdateState_get_targetBool_m46A8B6EC49CDAA67B6301431418CB0F23E1F915F
// 10842eb0 GenericMenuNavigator_UpdateControls_m74B7C2586361C2C4857B9155F755D9228898DC02
// 10843200 GenericMenuNavigator_UpdateScroll_m1A9865B43A1AE63AD23D09ECC77FA8EC59131A9E

void __cdecl
GenericMenuNavigator_Update_mC341A532482E1F92B3BA9F06E3A39D29B323C9AA
          (GenericMenuNavigator_t8DD7647D5CEEB4AE0E944F8565B0F21478F1A333 *param_1,
          MethodInfo *param_2)

{
  InputModeManager_t01E99A79BA01878A68D72A50C3060B585610CF08 *pIVar1;
  UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *pUVar2;
  bool bVar3;

  GenericMenuNavigator_UpdateControls_m74B7C2586361C2C4857B9155F755D9228898DC02
            (param_1,(MethodInfo *)0x0);
  if (((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
      (pIVar1 = param_1->___master_4->___inputModeManager_19,
      pIVar1 != (InputModeManager_t01E99A79BA01878A68D72A50C3060B585610CF08 *)0x0)) &&
     (pUVar2 = pIVar1->___gamepadState_6,
     pUVar2 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0)) {
    bVar3 = UpdateState_get_targetBool_m46A8B6EC49CDAA67B6301431418CB0F23E1F915F
                      (pUVar2,(MethodInfo *)0x0);
    if (bVar3) {
      GenericMenuNavigator_UpdateScroll_m1A9865B43A1AE63AD23D09ECC77FA8EC59131A9E
                (param_1,(MethodInfo *)0x0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
