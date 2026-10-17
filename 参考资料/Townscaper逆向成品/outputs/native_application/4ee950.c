// RVA 0x4ee950 | Placemaker.Ui.KeyboardControlsMenu$$Confirm
// PDB: KeyboardControlsMenu_Confirm_mF51A5CAEDD8F0127C431CC0D9029C39B037AA667
// Body: [[104ee950, 104ee9b3]]
// Direct callees:
// 1003e420 Invoke
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 107d18d0 ReInput_get_userDataStore_m85E83BFADA168D3B9A540B3C6ACAC4583DEB780D

void __cdecl
KeyboardControlsMenu_Confirm_mF51A5CAEDD8F0127C431CC0D9029C39B037AA667
          (KeyboardControlsMenu_t8A1421617C595C06F6BA074D899E4D4C458562D2 *param_1,
          MethodInfo *param_2)

{
  Il2CppObject *pIVar1;

  if (DAT_1151d214 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IUserDataStore_tB5636525C5CAE151DD0907DA295F34387A65DEE2_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var);
    DAT_1151d214 = '\x01';
  }
  if ((ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var)
    ;
  }
  pIVar1 = ReInput_get_userDataStore_m85E83BFADA168D3B9A540B3C6ACAC4583DEB780D((MethodInfo *)0x0);
  if (pIVar1 != (Il2CppObject *)0x0) {
    InterfaceFuncInvoker0<int>::Invoke
              (0,IUserDataStore_tB5636525C5CAE151DD0907DA295F34387A65DEE2_il2cpp_TypeInfo_var,pIVar1
              );
  }
  return;
}
