// RVA 0x7508e0 | Placemaker.Ui.PinUiButton$$.ctor
// PDB: PinUiButton__ctor_mC8A8BFEC3A7BB00CD18856C28B79B60CDFDDF0D3
// Body: [[107508e0, 1075093a]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 102322c0 CanvasScalerFitter__ctor_mABF7349539C90DE1EEA9195A6859DC8653C58D21
// 103e8fa0 UpdateState__ctor_m01EDA66F473C3B671CEAC53B590884913324808A

void __cdecl
PinUiButton__ctor_mC8A8BFEC3A7BB00CD18856C28B79B60CDFDDF0D3
          (PinUiButton_t2DC79017B20F3160890B4C6B99A638ACBBCA49A0 *param_1,MethodInfo *param_2)

{
  UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *pUVar1;

  if (DAT_1151ebff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C_il2cpp_TypeInfo_var);
    DAT_1151ebff = '\x01';
  }
  pUVar1 = (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)
           il2cpp_codegen_object_new
                     (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C_il2cpp_TypeInfo_var);
  UpdateState__ctor_m01EDA66F473C3B671CEAC53B590884913324808A(pUVar1,1.0,(MethodInfo *)0x0);
  param_1->___state_6 = pUVar1;
  CanvasScalerFitter__ctor_mABF7349539C90DE1EEA9195A6859DC8653C58D21
            ((CanvasScalerFitter_t7CDF0284DC89B01D6C79EF924DAF49D9DA4263C8 *)param_1,
             (MethodInfo *)0x0);
  return;
}
