// RVA 0x74ff80 | Placemaker.Ui.PalettePicker$$<Placemaker.Ui.PaletteMenu.IPaletteSetup.OnSetup>b__4_1
// PDB: PalettePicker_U3CPlacemaker_Ui_PaletteMenu_IPaletteSetup_OnSetupU3Eb__4_1_mFFD5329EC702080758935812E1AAFA6FCC37460B
// Body: [[1074ff80, 1074ffcc]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103e9500 UpdateState_get_targetBool_m46A8B6EC49CDAA67B6301431418CB0F23E1F915F
// 103e9560 UpdateState_set_current_m4572798247E29F668F5B2D3BDDFC6BC78D302BE5

void __cdecl
PalettePicker_U3CPlacemaker_Ui_PaletteMenu_IPaletteSetup_OnSetupU3Eb__4_1_mFFD5329EC702080758935812E1AAFA6FCC37460B
          (PalettePicker_t7DE72AF9D552804578E6E75218808113F2153103 *param_1,MethodInfo *param_2)

{
  UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *pUVar1;
  bool bVar2;

  if (param_1->___selectedState_6 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
    bVar2 = UpdateState_get_targetBool_m46A8B6EC49CDAA67B6301431418CB0F23E1F915F
                      (param_1->___selectedState_6,(MethodInfo *)0x0);
    if (bVar2) {
      pUVar1 = param_1->___selectedState_6;
      if (pUVar1 == (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) goto LAB_1074ffc8;
      if (__real_3e99999a < pUVar1->____current_0) {
        UpdateState_set_current_m4572798247E29F668F5B2D3BDDFC6BC78D302BE5
                  (pUVar1,0.3,(MethodInfo *)0x0);
      }
    }
    return;
  }
LAB_1074ffc8:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
