// RVA 0x4eef80 | Placemaker.Ui.KeyboardControlsMenu$$OnEnable
// PDB: KeyboardControlsMenu_OnEnable_mDA446133A86F26F05A9F0B320CA3A363F6CAED2B
// Body: [[104eef80, 104ef05e]]
// Direct callees:
// 1003e420 Invoke
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 104ef540 KeyboardControlsMenu_SetupMenu_mD30F4DB61DB8CC32085B5A5CB4B7DB860FD2AC47
// 1066d8c0 Time_get_frameCount_m8601F5FB5B701680076B40D2F31405F304D963F0
// 107d18d0 ReInput_get_userDataStore_m85E83BFADA168D3B9A540B3C6ACAC4583DEB780D
// 10906300 Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411
// 10a3cbf0 Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8
// 10f02470 String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B

void __cdecl
KeyboardControlsMenu_OnEnable_mDA446133A86F26F05A9F0B320CA3A363F6CAED2B
          (KeyboardControlsMenu_t8A1421617C595C06F6BA074D899E4D4C458562D2 *param_1,
          MethodInfo *param_2)

{
  String_t *pSVar1;
  Il2CppObject *pIVar2;
  int local_8;

  if (DAT_1151d212 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IUserDataStore_tB5636525C5CAE151DD0907DA295F34387A65DEE2_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralF4560F71B903D10E9469EDD1CC9140B1F5E0D555);
    DAT_1151d212 = '\x01';
  }
  local_8 = Time_get_frameCount_m8601F5FB5B701680076B40D2F31405F304D963F0((MethodInfo *)0x0);
  pSVar1 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411(&local_8,(MethodInfo *)0x0);
  pSVar1 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B
                     (_stringLiteralF4560F71B903D10E9469EDD1CC9140B1F5E0D555,pSVar1,
                      (MethodInfo *)0x0);
  if ((Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
  }
  Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8((Il2CppObject *)pSVar1,(MethodInfo *)0x0);
  if ((ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var)
    ;
  }
  pIVar2 = ReInput_get_userDataStore_m85E83BFADA168D3B9A540B3C6ACAC4583DEB780D((MethodInfo *)0x0);
  if (pIVar2 != (Il2CppObject *)0x0) {
    InterfaceFuncInvoker0<int>::Invoke
              (5,IUserDataStore_tB5636525C5CAE151DD0907DA295F34387A65DEE2_il2cpp_TypeInfo_var,pIVar2
              );
  }
  KeyboardControlsMenu_SetupMenu_mD30F4DB61DB8CC32085B5A5CB4B7DB860FD2AC47
            (param_1,(MethodInfo *)0x0);
  return;
}
