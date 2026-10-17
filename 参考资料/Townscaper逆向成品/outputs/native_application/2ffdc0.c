// RVA 0x2ffdc0 | Placemaker.Ui.SunButton$$.ctor
// PDB: SunButton__ctor_m77722852DCD82C837FC0CF4BB4B26A561D41C07E
// Body: [[102ffdc0, 102ffe5b]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 102322c0 CanvasScalerFitter__ctor_mABF7349539C90DE1EEA9195A6859DC8653C58D21
// 103e8fa0 UpdateState__ctor_m01EDA66F473C3B671CEAC53B590884913324808A
// 10a3ec20 Gradient__ctor_m4B95822B3C5187566CE4FA66E283600DCC916C5A

void __cdecl
SunButton__ctor_m77722852DCD82C837FC0CF4BB4B26A561D41C07E
          (SunButton_t215E5C834FF2974681639E044A8C9F4D225EAE67 *param_1,MethodInfo *param_2)

{
  UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *pUVar1;
  Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 *pGVar2;

  if (DAT_1151c206 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C_il2cpp_TypeInfo_var);
    DAT_1151c206 = '\x01';
  }
  pUVar1 = (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)
           il2cpp_codegen_object_new
                     (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C_il2cpp_TypeInfo_var);
  UpdateState__ctor_m01EDA66F473C3B671CEAC53B590884913324808A(pUVar1,1.0,(MethodInfo *)0x0);
  param_1->___handle0scale_19 = pUVar1;
  pUVar1 = (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)
           il2cpp_codegen_object_new
                     (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C_il2cpp_TypeInfo_var);
  UpdateState__ctor_m01EDA66F473C3B671CEAC53B590884913324808A(pUVar1,0.0,(MethodInfo *)0x0);
  param_1->___handle1scale_20 = pUVar1;
  pGVar2 = (Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 *)
           il2cpp_codegen_object_new
                     (Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2_il2cpp_TypeInfo_var);
  Gradient__ctor_m4B95822B3C5187566CE4FA66E283600DCC916C5A(pGVar2,(MethodInfo *)0x0);
  param_1->___bulbColor_23 = pGVar2;
  CanvasScalerFitter__ctor_mABF7349539C90DE1EEA9195A6859DC8653C58D21
            ((CanvasScalerFitter_t7CDF0284DC89B01D6C79EF924DAF49D9DA4263C8 *)param_1,
             (MethodInfo *)0x0);
  return;
}
