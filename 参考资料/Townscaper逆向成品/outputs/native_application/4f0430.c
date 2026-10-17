// RVA 0x4f0430 | Placemaker.Ui.KeyboardControlsMenu$$.ctor
// PDB: KeyboardControlsMenu__ctor_mAEC3DEA8F2A4665694C401648FCC32C9C9FC5119
// Body: [[104f0430, 104f04b5]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 102322c0 CanvasScalerFitter__ctor_mABF7349539C90DE1EEA9195A6859DC8653C58D21
// 103e9240 UpdateState__ctor_m4FA115E5F4FDC20495FA72780F11CD43FCF0497B
// 10db5fe0 InputMapper__ctor_mABCE367311101099596247D87F1B1B8B6ABCC6F3

void __cdecl
KeyboardControlsMenu__ctor_mAEC3DEA8F2A4665694C401648FCC32C9C9FC5119
          (KeyboardControlsMenu_t8A1421617C595C06F6BA074D899E4D4C458562D2 *param_1,
          MethodInfo *param_2)

{
  UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *pUVar1;
  InputMapper_tEA4DC41995ECCD501FE44781A16D568B91806505 *pIVar2;

  if (DAT_1151d219 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&InputMapper_tEA4DC41995ECCD501FE44781A16D568B91806505_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C_il2cpp_TypeInfo_var);
    DAT_1151d219 = '\x01';
  }
  pUVar1 = (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)
           il2cpp_codegen_object_new
                     (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C_il2cpp_TypeInfo_var);
  UpdateState__ctor_m4FA115E5F4FDC20495FA72780F11CD43FCF0497B(pUVar1,(MethodInfo *)0x0);
  param_1->___darkenState_8 = pUVar1;
  pIVar2 = (InputMapper_tEA4DC41995ECCD501FE44781A16D568B91806505 *)
           il2cpp_codegen_object_new
                     (InputMapper_tEA4DC41995ECCD501FE44781A16D568B91806505_il2cpp_TypeInfo_var);
  InputMapper__ctor_mABCE367311101099596247D87F1B1B8B6ABCC6F3(pIVar2,(MethodInfo *)0x0);
  param_1->___inputMapperJoystickKeyboard_15 = pIVar2;
  pIVar2 = (InputMapper_tEA4DC41995ECCD501FE44781A16D568B91806505 *)
           il2cpp_codegen_object_new
                     (InputMapper_tEA4DC41995ECCD501FE44781A16D568B91806505_il2cpp_TypeInfo_var);
  InputMapper__ctor_mABCE367311101099596247D87F1B1B8B6ABCC6F3(pIVar2,(MethodInfo *)0x0);
  param_1->___inputMapperMouse_16 = pIVar2;
  CanvasScalerFitter__ctor_mABF7349539C90DE1EEA9195A6859DC8653C58D21
            ((CanvasScalerFitter_t7CDF0284DC89B01D6C79EF924DAF49D9DA4263C8 *)param_1,
             (MethodInfo *)0x0);
  return;
}
