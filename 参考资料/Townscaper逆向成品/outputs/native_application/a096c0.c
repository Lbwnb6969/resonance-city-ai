// RVA 0xa096c0 | Placemaker.Ui.ShadingButtons$$<Placemaker.Ui.UiMaster.IUiSetup.OnSetup>b__15_5
// PDB: ShadingButtons_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__15_5_mBAE1F05B7148561E15E45300A54B7A1BC20F20AF
// Body: [[10a096c0, 10a09738]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103e9500 UpdateState_get_targetBool_m46A8B6EC49CDAA67B6301431418CB0F23E1F915F
// 10873f30 BaseButton_Click_m1FFE7BF8CE93267D334CC4BD0E78336566B1CC28

void __cdecl
ShadingButtons_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__15_5_mBAE1F05B7148561E15E45300A54B7A1BC20F20AF
          (ShadingButtons_t2ED81F76F9E0A03D3A7A629AC27B30AF05EE4DB0 *param_1,MethodInfo *param_2)

{
  UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *pUVar1;
  UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *pUVar2;
  bool bVar3;
  BaseButton_tAC6372317B2E4EDCF629E5ED7D229B2876B82F0C *pBVar4;

  pUVar1 = param_1->___litState_11;
  pUVar2 = param_1->___lightState_12;
  if (param_1->___texState_10 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
    bVar3 = UpdateState_get_targetBool_m46A8B6EC49CDAA67B6301431418CB0F23E1F915F
                      (param_1->___texState_10,(MethodInfo *)0x0);
    if (bVar3) {
      pBVar4 = param_1->___litButton_7;
    }
    else {
      if (pUVar1 == (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) goto LAB_10a09734;
      bVar3 = UpdateState_get_targetBool_m46A8B6EC49CDAA67B6301431418CB0F23E1F915F
                        (pUVar1,(MethodInfo *)0x0);
      if (bVar3) {
        pBVar4 = param_1->___lightButton_8;
      }
      else {
        if (pUVar2 == (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0)
        goto LAB_10a09734;
        bVar3 = UpdateState_get_targetBool_m46A8B6EC49CDAA67B6301431418CB0F23E1F915F
                          (pUVar2,(MethodInfo *)0x0);
        if (!bVar3) {
          return;
        }
        pBVar4 = param_1->___textureButton_6;
      }
    }
    if (pBVar4 != (BaseButton_tAC6372317B2E4EDCF629E5ED7D229B2876B82F0C *)0x0) {
      BaseButton_Click_m1FFE7BF8CE93267D334CC4BD0E78336566B1CC28(pBVar4,(MethodInfo *)0x0);
      return;
    }
  }
LAB_10a09734:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
