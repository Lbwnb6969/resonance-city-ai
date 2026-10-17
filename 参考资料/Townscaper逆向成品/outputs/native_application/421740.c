// RVA 0x421740 | Placemaker.Ui.KeyboardAndMouseControlRemap$$<OnSetup>b__17_2
// PDB: KeyboardAndMouseControlRemap_U3COnSetupU3Eb__17_2_mC9A331FF281F5065E15B40CB1FF95D08F8C71D4A
// Body: [[10421740, 104217c7]]
// Direct callees:
// 1003e420 Invoke
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 107d18d0 ReInput_get_userDataStore_m85E83BFADA168D3B9A540B3C6ACAC4583DEB780D

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
KeyboardAndMouseControlRemap_U3COnSetupU3Eb__17_2_mC9A331FF281F5065E15B40CB1FF95D08F8C71D4A
          (KeyboardAndMouseControlRemap_t2C7DF50DD90CC4E9372E1B2BB2E5935B9578EC37 *param_1,
          float param_2,MethodInfo *param_3)

{
  Il2CppObject *pIVar1;

  if ((param_2 == ___real_00000000) && (param_1->___hasSetup_20 != false)) {
    if (DAT_1151cb15 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                ((uint *)&
                         IUserDataStore_tB5636525C5CAE151DD0907DA295F34387A65DEE2_il2cpp_TypeInfo_var
                );
      il2cpp_codegen_initialize_runtime_metadata
                ((uint *)&ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var);
      DAT_1151cb15 = '\x01';
    }
    if ((ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var->has_cctor != '\0')
       && (ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var->cctor_finished ==
           0)) {
      il2cpp_runtime_class_init
                (ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var);
    }
    pIVar1 = ReInput_get_userDataStore_m85E83BFADA168D3B9A540B3C6ACAC4583DEB780D((MethodInfo *)0x0);
    if (pIVar1 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_null_reference_exception();
    }
    InterfaceFuncInvoker0<int>::Invoke
              (0,IUserDataStore_tB5636525C5CAE151DD0907DA295F34387A65DEE2_il2cpp_TypeInfo_var,pIVar1
              );
  }
  return;
}
