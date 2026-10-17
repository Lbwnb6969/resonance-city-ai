// RVA 0x10ce3d0 | FuryStudios.FurySDK.Utils.DebugMenu$$Clear
// PDB: DebugMenu_Clear_m3D5961069A068270362D760FD5C6B8B30B277AFE
// Body: [[110ce3d0, 110ce41f]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 110d02e0 MenuNavigationEntry__ctor_m4522ED770D078AC60D05AD1D459756C0E24C1A0E

void __cdecl
DebugMenu_Clear_m3D5961069A068270362D760FD5C6B8B30B277AFE
          (DebugMenu_t13A4D5599214DB89C01F159602718CF05EFC9573 *param_1,MethodInfo *param_2)

{
  String_t *pSVar1;
  MenuNavigationEntry_t55A28B8978894C993D29C5B1123FA8C1B571C7FA *pMVar2;

  if (DAT_11523a6f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       MenuNavigationEntry_t55A28B8978894C993D29C5B1123FA8C1B571C7FA_il2cpp_TypeInfo_var
              );
    DAT_11523a6f = '\x01';
  }
  pSVar1 = param_1->___name_1;
  pMVar2 = (MenuNavigationEntry_t55A28B8978894C993D29C5B1123FA8C1B571C7FA *)
           il2cpp_codegen_object_new
                     (
                     MenuNavigationEntry_t55A28B8978894C993D29C5B1123FA8C1B571C7FA_il2cpp_TypeInfo_var
                     );
  MenuNavigationEntry__ctor_m4522ED770D078AC60D05AD1D459756C0E24C1A0E
            (pMVar2,pSVar1,(MenuNavigationEntry_t55A28B8978894C993D29C5B1123FA8C1B571C7FA *)0x0,
             (MethodInfo *)0x0);
  param_1->___root_2 = pMVar2;
  param_1->___U3CActiveU3Ek__BackingField_0 = false;
  return;
}
