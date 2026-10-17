// RVA 0xe0f1a0 | Placemaker.Ui.GridButtons$$.ctor
// PDB: GridButtons__ctor_mCC036A3FD9965C7DB1458F46598AFB1681B6F7DE
// Body: [[10e0f1a0, 10e0f219]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 102322c0 CanvasScalerFitter__ctor_mABF7349539C90DE1EEA9195A6859DC8653C58D21
// 103e8fa0 UpdateState__ctor_m01EDA66F473C3B671CEAC53B590884913324808A

void __cdecl
GridButtons__ctor_mCC036A3FD9965C7DB1458F46598AFB1681B6F7DE
          (GridButtons_tEB999C547B3175D466CA76D10396006C41BFD0E2 *param_1,MethodInfo *param_2)

{
  UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *pUVar1;

  if (DAT_11522652 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C_il2cpp_TypeInfo_var);
    DAT_11522652 = '\x01';
  }
  pUVar1 = (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)
           il2cpp_codegen_object_new
                     (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C_il2cpp_TypeInfo_var);
  UpdateState__ctor_m01EDA66F473C3B671CEAC53B590884913324808A(pUVar1,0.0,(MethodInfo *)0x0);
  param_1->___gridState0_6 = pUVar1;
  pUVar1 = (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)
           il2cpp_codegen_object_new
                     (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C_il2cpp_TypeInfo_var);
  UpdateState__ctor_m01EDA66F473C3B671CEAC53B590884913324808A(pUVar1,0.0,(MethodInfo *)0x0);
  param_1->___gridState1_7 = pUVar1;
  CanvasScalerFitter__ctor_mABF7349539C90DE1EEA9195A6859DC8653C58D21
            ((CanvasScalerFitter_t7CDF0284DC89B01D6C79EF924DAF49D9DA4263C8 *)param_1,
             (MethodInfo *)0x0);
  return;
}
