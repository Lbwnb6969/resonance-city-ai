// RVA 0x750660 | Placemaker.Ui.GridButtons$$Button_Toggle0
// PDB: PinUiButton_Button_Toggle0_m001342DBD548E5B9CA6312126174B6D98C4FA829
// Body: [[10750660, 10750691]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103e9500 UpdateState_get_targetBool_m46A8B6EC49CDAA67B6301431418CB0F23E1F915F
// 103e9590 UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15

void __cdecl
PinUiButton_Button_Toggle0_m001342DBD548E5B9CA6312126174B6D98C4FA829
          (PinUiButton_t2DC79017B20F3160890B4C6B99A638ACBBCA49A0 *param_1,MethodInfo *param_2)

{
  UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *pUVar1;
  bool bVar2;

  pUVar1 = param_1->___state_6;
  if (pUVar1 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
    bVar2 = UpdateState_get_targetBool_m46A8B6EC49CDAA67B6301431418CB0F23E1F915F
                      (pUVar1,(MethodInfo *)0x0);
    UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
              (pUVar1,!bVar2,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
