// RVA 0x3002d0 | Placemaker.Ui.SunSlider$$.ctor
// PDB: SunSlider__ctor_mFE99FD64739BC3BEE8E37DEAB4179081696886AE
// Body: [[103002d0, 10300376]]
// Direct callees:
// 101275a0 il2cpp_array_new_specific
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 102322c0 CanvasScalerFitter__ctor_mABF7349539C90DE1EEA9195A6859DC8653C58D21
// 103e8fa0 UpdateState__ctor_m01EDA66F473C3B671CEAC53B590884913324808A

void __cdecl
SunSlider__ctor_mFE99FD64739BC3BEE8E37DEAB4179081696886AE
          (SunSlider_t5377A5354C7D2E09BF671D1681C1B608D4007427 *param_1,MethodInfo *param_2)

{
  TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D *pTVar1;
  UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *pUVar2;

  if (DAT_1151c20b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C_il2cpp_TypeInfo_var);
    DAT_1151c20b = '\x01';
  }
  pTVar1 = (TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D *)
           il2cpp_array_new_specific
                     (TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D_il2cpp_TypeInfo_var,
                      2);
  param_1->___handlesToScale_7 = pTVar1;
  pUVar2 = (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)
           il2cpp_codegen_object_new
                     (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C_il2cpp_TypeInfo_var);
  UpdateState__ctor_m01EDA66F473C3B671CEAC53B590884913324808A(pUVar2,1.0,(MethodInfo *)0x0);
  if (pUVar2 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
    pUVar2->___speed_7 = 24.0;
    param_1->___scaleZ_8 = pUVar2;
    pUVar2 = (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)
             il2cpp_codegen_object_new
                       (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C_il2cpp_TypeInfo_var);
    UpdateState__ctor_m01EDA66F473C3B671CEAC53B590884913324808A(pUVar2,1.0,(MethodInfo *)0x0);
    param_1->___scaleXY_9 = pUVar2;
    CanvasScalerFitter__ctor_mABF7349539C90DE1EEA9195A6859DC8653C58D21
              ((CanvasScalerFitter_t7CDF0284DC89B01D6C79EF924DAF49D9DA4263C8 *)param_1,
               (MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
