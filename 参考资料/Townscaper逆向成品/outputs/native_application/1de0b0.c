// RVA 0x1de0b0 | Placemaker.Ui.ScreenshotButtons.<>c__DisplayClass20_0$$<Placemaker.Ui.UiMaster.IUiSetup.OnSetup>g__CheckFrameState|0
// PDB: U3CU3Ec__DisplayClass20_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eg__CheckFrameStateU7C0_m8C080B31E66BCF84A353F42B5280BD1242CCA55C
// Body: [[101de0b0, 101de1f7]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103e9500 UpdateState_get_targetBool_m46A8B6EC49CDAA67B6301431418CB0F23E1F915F
// 103e9590 UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15

void __cdecl
U3CU3Ec__DisplayClass20_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eg__CheckFrameStateU7C0_m8C080B31E66BCF84A353F42B5280BD1242CCA55C
          (U3CU3Ec__DisplayClass20_0_t7B4BB739803156022C6247A2D79724DD8FB9530D *param_1,
          float param_2,MethodInfo *param_3)

{
  UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *pUVar1;
  InputModeManager_t01E99A79BA01878A68D72A50C3060B585610CF08 *pIVar2;
  UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *pUVar3;
  SideMenu_tD900EEBEF28F284D7567E3D721E0DA61C0F5D1DF *pSVar4;
  bool bVar5;

  if (param_1->___U3CU3E4__this_0 ==
      (ScreenshotButtons_t36FF37FF4142755CD948572FF8DFA7B3E9E67307 *)0x0) goto LAB_101de1f3;
  pUVar1 = param_1->___U3CU3E4__this_0->___frameState_10;
  if (((param_1->___master_1 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) ||
      (pIVar2 = param_1->___master_1->___inputModeManager_19,
      pIVar2 == (InputModeManager_t01E99A79BA01878A68D72A50C3060B585610CF08 *)0x0)) ||
     (pUVar3 = pIVar2->___touchAndMouseState_7,
     pUVar3 == (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0)) goto LAB_101de1f3;
  bVar5 = UpdateState_get_targetBool_m46A8B6EC49CDAA67B6301431418CB0F23E1F915F
                    (pUVar3,(MethodInfo *)0x0);
  if (bVar5) {
LAB_101de120:
    if (((param_1->___master_1 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) ||
        (pSVar4 = param_1->___master_1->___sideMenu_8,
        pSVar4 == (SideMenu_tD900EEBEF28F284D7567E3D721E0DA61C0F5D1DF *)0x0)) ||
       (pUVar3 = pSVar4->___openState_8,
       pUVar3 == (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0)) goto LAB_101de1f3;
    bVar5 = UpdateState_get_targetBool_m46A8B6EC49CDAA67B6301431418CB0F23E1F915F
                      (pUVar3,(MethodInfo *)0x0);
  }
  else {
    if ((param_1->___navigable_2 == (NavigableButton_t3E3EB83A5B5751D717C13A670A721528CD3059A1 *)0x0
        ) || (pUVar3 = param_1->___navigable_2->___selectedState_6,
             pUVar3 == (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0))
    goto LAB_101de1f3;
    bVar5 = UpdateState_get_targetBool_m46A8B6EC49CDAA67B6301431418CB0F23E1F915F
                      (pUVar3,(MethodInfo *)0x0);
    if (bVar5) goto LAB_101de120;
    bVar5 = false;
  }
  if (pUVar1 == (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) goto LAB_101de1f3;
  UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
            (pUVar1,bVar5,(MethodInfo *)0x0);
  if (param_1->___U3CU3E4__this_0 ==
      (ScreenshotButtons_t36FF37FF4142755CD948572FF8DFA7B3E9E67307 *)0x0) goto LAB_101de1f3;
  pUVar1 = param_1->___U3CU3E4__this_0->___sideDimState_11;
  if (((param_1->___master_1 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) ||
      (pIVar2 = param_1->___master_1->___inputModeManager_19,
      pIVar2 == (InputModeManager_t01E99A79BA01878A68D72A50C3060B585610CF08 *)0x0)) ||
     (pUVar3 = pIVar2->___gamepadState_6,
     pUVar3 == (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0)) goto LAB_101de1f3;
  bVar5 = UpdateState_get_targetBool_m46A8B6EC49CDAA67B6301431418CB0F23E1F915F
                    (pUVar3,(MethodInfo *)0x0);
  if (bVar5) {
    if ((param_1->___navigable_2 == (NavigableButton_t3E3EB83A5B5751D717C13A670A721528CD3059A1 *)0x0
        ) || (pUVar3 = param_1->___navigable_2->___selectedState_6,
             pUVar3 == (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0))
    goto LAB_101de1f3;
    bVar5 = UpdateState_get_targetBool_m46A8B6EC49CDAA67B6301431418CB0F23E1F915F
                      (pUVar3,(MethodInfo *)0x0);
    if (!bVar5) goto LAB_101de1d9;
    if (((param_1->___master_1 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) ||
        (pSVar4 = param_1->___master_1->___sideMenu_8,
        pSVar4 == (SideMenu_tD900EEBEF28F284D7567E3D721E0DA61C0F5D1DF *)0x0)) ||
       (pUVar3 = pSVar4->___openState_8,
       pUVar3 == (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0)) goto LAB_101de1f3;
    param_1._0_1_ =
         UpdateState_get_targetBool_m46A8B6EC49CDAA67B6301431418CB0F23E1F915F
                   (pUVar3,(MethodInfo *)0x0);
  }
  else {
LAB_101de1d9:
    param_1._0_1_ = false;
  }
  if (pUVar1 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
    UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
              (pUVar1,param_1._0_1_,(MethodInfo *)0x0);
    return;
  }
LAB_101de1f3:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
