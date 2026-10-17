// RVA 0xe0eee0 | Placemaker.Ui.GridButtons$$Button_Toggle1
// PDB: GridButtons_Button_Toggle1_m0FD02DD5E64E07F9AA1355FA1FBCA58B7A2E5E74
// Body: [[10e0eee0, 10e0ef11]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103e9500 UpdateState_get_targetBool_m46A8B6EC49CDAA67B6301431418CB0F23E1F915F
// 103e9590 UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15

void __cdecl
GridButtons_Button_Toggle1_m0FD02DD5E64E07F9AA1355FA1FBCA58B7A2E5E74
          (GridButtons_tEB999C547B3175D466CA76D10396006C41BFD0E2 *param_1,MethodInfo *param_2)

{
  UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *pUVar1;
  bool bVar2;

  pUVar1 = param_1->___gridState1_7;
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
