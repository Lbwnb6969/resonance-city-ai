// RVA 0x4c4920 | Placemaker.Ui.Dim$$get_awaitingDarkDim
// PDB: Dim_get_awaitingDarkDim_mEF4E437EBBAD831912856C8F80A8BF70A97DC064
// Body: [[104c4920, 104c497a]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103e9500 UpdateState_get_targetBool_m46A8B6EC49CDAA67B6301431418CB0F23E1F915F

bool __cdecl
Dim_get_awaitingDarkDim_mEF4E437EBBAD831912856C8F80A8BF70A97DC064
          (Dim_tDEE64760B7C8CB136E65987008BB21CB16FDA5C6 *param_1,MethodInfo *param_2)

{
  UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *pUVar1;
  bool bVar2;

  pUVar1 = param_1->___alphaState_5;
  if (pUVar1 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
    if (pUVar1->____current_0 <= __real_3f666666 && __real_3f666666 != pUVar1->____current_0) {
      bVar2 = UpdateState_get_targetBool_m46A8B6EC49CDAA67B6301431418CB0F23E1F915F
                        (pUVar1,(MethodInfo *)0x0);
      if (bVar2) {
        pUVar1 = param_1->___dimOrDark_6;
        if (pUVar1 == (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0)
        goto LAB_104c4976;
        if (pUVar1->____current_0 <= __real_3f666666 && __real_3f666666 != pUVar1->____current_0) {
          bVar2 = UpdateState_get_targetBool_m46A8B6EC49CDAA67B6301431418CB0F23E1F915F
                            (pUVar1,(MethodInfo *)0x0);
          return bVar2;
        }
      }
    }
    return false;
  }
LAB_104c4976:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
