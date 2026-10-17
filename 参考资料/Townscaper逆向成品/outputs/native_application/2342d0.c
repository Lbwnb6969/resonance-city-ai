// RVA 0x2342d0 | Placemaker.Ui.ControlBinding$$Confirm
// PDB: ControlBinding_Confirm_m5997FE7324F341BA0757852E010C777CB42922DE
// Body: [[102342d0, 1023434a]]
// Direct callees:
// 1003e420 Invoke
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 107d18d0 ReInput_get_userDataStore_m85E83BFADA168D3B9A540B3C6ACAC4583DEB780D

void __cdecl
ControlBinding_Confirm_m5997FE7324F341BA0757852E010C777CB42922DE
          (ControlBinding_tC850FCC2A9AEB8764F07FB598BB1125043AAB3EA *param_1,MethodInfo *param_2)

{
  Il2CppObject *pIVar1;

  if (DAT_1151b596 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IUserDataStore_tB5636525C5CAE151DD0907DA295F34387A65DEE2_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralF2E740F2454EE7076058E162D3AFD71ABB2E2CEE);
    DAT_1151b596 = '\x01';
  }
  if (param_1->___buttonMapState_15 == false) {
    if ((ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var->has_cctor != '\0')
       && (ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var->cctor_finished ==
           0)) {
      il2cpp_runtime_class_init
                (ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var);
    }
    pIVar1 = ReInput_get_userDataStore_m85E83BFADA168D3B9A540B3C6ACAC4583DEB780D((MethodInfo *)0x0);
    if (pIVar1 != (Il2CppObject *)0x0) {
      InterfaceFuncInvoker0<int>::Invoke
                (0,IUserDataStore_tB5636525C5CAE151DD0907DA295F34387A65DEE2_il2cpp_TypeInfo_var,
                 pIVar1);
    }
  }
  return;
}
