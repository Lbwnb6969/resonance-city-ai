// RVA 0x4ee9f0 | Placemaker.Ui.KeyboardControlsMenu$$LoadDefaultControls
// PDB: KeyboardControlsMenu_LoadDefaultControls_m93A5BF59EC1163F3D7A3393902D187A59BAC5488
// Body: [[104ee9f0, 104eeafd]]
// Direct callees:
// 1003e420 Invoke
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 107d18d0 ReInput_get_userDataStore_m85E83BFADA168D3B9A540B3C6ACAC4583DEB780D
// 10e5f670 MapHelper_LoadDefaultMaps_m25CC1F3FF95AECA82FB310518E8DF38E0F13021A

void __cdecl
KeyboardControlsMenu_LoadDefaultControls_m93A5BF59EC1163F3D7A3393902D187A59BAC5488
          (KeyboardControlsMenu_t8A1421617C595C06F6BA074D899E4D4C458562D2 *param_1,
          MethodInfo *param_2)

{
  Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E *pPVar1;
  ControllerHelper_t7321E4C8D92738EAD49659BFD68FB9A9C7E6D268 *pCVar2;
  MapHelper_t58AB9B830B39654835B74258921F7F6D30F7B00D *pMVar3;
  Il2CppObject *pIVar4;

  if (DAT_1151d215 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IUserDataStore_tB5636525C5CAE151DD0907DA295F34387A65DEE2_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var);
    DAT_1151d215 = '\x01';
  }
  if ((((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
       (pPVar1 = param_1->___master_4->___player_43,
       pPVar1 != (Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E *)0x0)) &&
      (pCVar2 = pPVar1->___controllers_7,
      pCVar2 != (ControllerHelper_t7321E4C8D92738EAD49659BFD68FB9A9C7E6D268 *)0x0)) &&
     (pMVar3 = pCVar2->___maps_12,
     pMVar3 != (MapHelper_t58AB9B830B39654835B74258921F7F6D30F7B00D *)0x0)) {
    MapHelper_LoadDefaultMaps_m25CC1F3FF95AECA82FB310518E8DF38E0F13021A(pMVar3,0,(MethodInfo *)0x0);
    if (((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
        (pPVar1 = param_1->___master_4->___player_43,
        pPVar1 != (Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E *)0x0)) &&
       ((pCVar2 = pPVar1->___controllers_7,
        pCVar2 != (ControllerHelper_t7321E4C8D92738EAD49659BFD68FB9A9C7E6D268 *)0x0 &&
        (pMVar3 = pCVar2->___maps_12,
        pMVar3 != (MapHelper_t58AB9B830B39654835B74258921F7F6D30F7B00D *)0x0)))) {
      MapHelper_LoadDefaultMaps_m25CC1F3FF95AECA82FB310518E8DF38E0F13021A
                (pMVar3,1,(MethodInfo *)0x0);
      if (((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
          (pPVar1 = param_1->___master_4->___player_43,
          pPVar1 != (Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E *)0x0)) &&
         ((pCVar2 = pPVar1->___controllers_7,
          pCVar2 != (ControllerHelper_t7321E4C8D92738EAD49659BFD68FB9A9C7E6D268 *)0x0 &&
          (pMVar3 = pCVar2->___maps_12,
          pMVar3 != (MapHelper_t58AB9B830B39654835B74258921F7F6D30F7B00D *)0x0)))) {
        MapHelper_LoadDefaultMaps_m25CC1F3FF95AECA82FB310518E8DF38E0F13021A
                  (pMVar3,2,(MethodInfo *)0x0);
        if ((ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var->has_cctor !=
             '\0') &&
           (ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var->cctor_finished ==
            0)) {
          il2cpp_runtime_class_init
                    (ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var);
        }
        pIVar4 = ReInput_get_userDataStore_m85E83BFADA168D3B9A540B3C6ACAC4583DEB780D
                           ((MethodInfo *)0x0);
        if (pIVar4 != (Il2CppObject *)0x0) {
          InterfaceFuncInvoker0<int>::Invoke
                    (0,IUserDataStore_tB5636525C5CAE151DD0907DA295F34387A65DEE2_il2cpp_TypeInfo_var,
                     pIVar4);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
