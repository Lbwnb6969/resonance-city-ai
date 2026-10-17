// RVA 0x10cd260 | FuryStudios.FurySDK.Utils.DebugMenu.ButtonEntry$$Submit
// PDB: ButtonEntry_Submit_m1EFC6633840CE166FB5CFFFE5E64597F504D9CCB
// Body: [[110cd260, 110cd294]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d8380 OnLocalizeCallback_Invoke_m8B28CFE294965737AFDCB15C1BFD40C7B4A43906

void __cdecl
ButtonEntry_Submit_m1EFC6633840CE166FB5CFFFE5E64597F504D9CCB
          (ButtonEntry_tAFF9133AE7228CAA250AF3D7692C8F51996A5978 *param_1,MethodInfo *param_2)

{
  DebugMenu_t13A4D5599214DB89C01F159602718CF05EFC9573 *pDVar1;

  pDVar1 = param_1->___debugMenu_3;
  if (pDVar1 == (DebugMenu_t13A4D5599214DB89C01F159602718CF05EFC9573 *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_null_reference_exception();
  }
  pDVar1->___U3CActiveU3Ek__BackingField_0 = pDVar1->___U3CActiveU3Ek__BackingField_0 == false;
  if ((OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)param_1->___callback_2 !=
      (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)0x0) {
    OnLocalizeCallback_Invoke_m8B28CFE294965737AFDCB15C1BFD40C7B4A43906
              ((OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
               param_1->___callback_2,(MethodInfo *)0x0);
    return;
  }
  return;
}
