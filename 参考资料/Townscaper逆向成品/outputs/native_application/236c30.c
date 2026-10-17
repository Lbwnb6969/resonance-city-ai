// RVA 0x236c30 | Placemaker.Ui.ControlBinding$$.ctor
// PDB: ControlBinding__ctor_mDECC73753E8FFBB8E7017FA5880C1A4CF1D17E56
// Body: [[10236c30, 10236cb5]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 102322c0 CanvasScalerFitter__ctor_mABF7349539C90DE1EEA9195A6859DC8653C58D21
// 103e9240 UpdateState__ctor_m4FA115E5F4FDC20495FA72780F11CD43FCF0497B
// 10db5fe0 InputMapper__ctor_mABCE367311101099596247D87F1B1B8B6ABCC6F3

void __cdecl
ControlBinding__ctor_mDECC73753E8FFBB8E7017FA5880C1A4CF1D17E56
          (ControlBinding_tC850FCC2A9AEB8764F07FB598BB1125043AAB3EA *param_1,MethodInfo *param_2)

{
  UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *pUVar1;
  InputMapper_tEA4DC41995ECCD501FE44781A16D568B91806505 *pIVar2;

  if (DAT_1151b5a1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&InputMapper_tEA4DC41995ECCD501FE44781A16D568B91806505_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C_il2cpp_TypeInfo_var);
    DAT_1151b5a1 = '\x01';
  }
  pUVar1 = (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)
           il2cpp_codegen_object_new
                     (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C_il2cpp_TypeInfo_var);
  UpdateState__ctor_m4FA115E5F4FDC20495FA72780F11CD43FCF0497B(pUVar1,(MethodInfo *)0x0);
  param_1->___openState_10 = pUVar1;
  pIVar2 = (InputMapper_tEA4DC41995ECCD501FE44781A16D568B91806505 *)
           il2cpp_codegen_object_new
                     (InputMapper_tEA4DC41995ECCD501FE44781A16D568B91806505_il2cpp_TypeInfo_var);
  InputMapper__ctor_mABCE367311101099596247D87F1B1B8B6ABCC6F3(pIVar2,(MethodInfo *)0x0);
  param_1->___inputMapperJoystickKeyboard_18 = pIVar2;
  pIVar2 = (InputMapper_tEA4DC41995ECCD501FE44781A16D568B91806505 *)
           il2cpp_codegen_object_new
                     (InputMapper_tEA4DC41995ECCD501FE44781A16D568B91806505_il2cpp_TypeInfo_var);
  InputMapper__ctor_mABCE367311101099596247D87F1B1B8B6ABCC6F3(pIVar2,(MethodInfo *)0x0);
  param_1->___inputMapperMouse_19 = pIVar2;
  CanvasScalerFitter__ctor_mABF7349539C90DE1EEA9195A6859DC8653C58D21
            ((CanvasScalerFitter_t7CDF0284DC89B01D6C79EF924DAF49D9DA4263C8 *)param_1,
             (MethodInfo *)0x0);
  return;
}
