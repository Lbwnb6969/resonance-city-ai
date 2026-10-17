// RVA 0xa09740 | Placemaker.Ui.ShadingButtons$$.ctor
// PDB: ShadingButtons__ctor_m98FD909634AF902B03F712931308D58E024C2B37
// Body: [[10a09740, 10a097ff]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 102322c0 CanvasScalerFitter__ctor_mABF7349539C90DE1EEA9195A6859DC8653C58D21
// 103e8fa0 UpdateState__ctor_m01EDA66F473C3B671CEAC53B590884913324808A

void __cdecl
ShadingButtons__ctor_m98FD909634AF902B03F712931308D58E024C2B37
          (ShadingButtons_t2ED81F76F9E0A03D3A7A629AC27B30AF05EE4DB0 *param_1,MethodInfo *param_2)

{
  UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *pUVar1;

  if (DAT_115201e1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C_il2cpp_TypeInfo_var);
    DAT_115201e1 = '\x01';
  }
  pUVar1 = (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)
           il2cpp_codegen_object_new
                     (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C_il2cpp_TypeInfo_var);
  UpdateState__ctor_m01EDA66F473C3B671CEAC53B590884913324808A(pUVar1,0.0,(MethodInfo *)0x0);
  param_1->___texState_10 = pUVar1;
  pUVar1 = (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)
           il2cpp_codegen_object_new
                     (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C_il2cpp_TypeInfo_var);
  UpdateState__ctor_m01EDA66F473C3B671CEAC53B590884913324808A(pUVar1,1.0,(MethodInfo *)0x0);
  param_1->___litState_11 = pUVar1;
  pUVar1 = (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)
           il2cpp_codegen_object_new
                     (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C_il2cpp_TypeInfo_var);
  UpdateState__ctor_m01EDA66F473C3B671CEAC53B590884913324808A(pUVar1,0.0,(MethodInfo *)0x0);
  param_1->___lightState_12 = pUVar1;
  pUVar1 = (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)
           il2cpp_codegen_object_new
                     (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C_il2cpp_TypeInfo_var);
  UpdateState__ctor_m01EDA66F473C3B671CEAC53B590884913324808A(pUVar1,0.0,(MethodInfo *)0x0);
  param_1->___stackState_13 = pUVar1;
  CanvasScalerFitter__ctor_mABF7349539C90DE1EEA9195A6859DC8653C58D21
            ((CanvasScalerFitter_t7CDF0284DC89B01D6C79EF924DAF49D9DA4263C8 *)param_1,
             (MethodInfo *)0x0);
  return;
}
