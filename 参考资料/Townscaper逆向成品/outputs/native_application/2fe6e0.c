// RVA 0x2fe6e0 | Placemaker.Ui.SunButtonGamepad$$Toggle
// PDB: SunButtonGamepad_Toggle_m5BA9D72DE0B7082C99F325E96C53FC82A19A1493
// Body: [[102fe6e0, 102fe711]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103e9500 UpdateState_get_targetBool_m46A8B6EC49CDAA67B6301431418CB0F23E1F915F
// 103e9590 UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15

void __cdecl
SunButtonGamepad_Toggle_m5BA9D72DE0B7082C99F325E96C53FC82A19A1493
          (SunButtonGamepad_tCDC81D6FE61C37B5713FFE96C01FD96152CAFE07 *param_1,MethodInfo *param_2)

{
  UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *pUVar1;
  bool bVar2;

  pUVar1 = param_1->___focusedState_5;
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
