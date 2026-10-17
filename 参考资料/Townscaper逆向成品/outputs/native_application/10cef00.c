// RVA 0x10cef00 | FuryStudios.FurySDK.Utils.DebugMenu$$.ctor
// PDB: DebugMenu__ctor_m08666F73635860942CC30BB78305B01143714FB4
// Body: [[110cef00, 110cef60]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 101d9d50 U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
// 110d02e0 MenuNavigationEntry__ctor_m4522ED770D078AC60D05AD1D459756C0E24C1A0E

void __cdecl
DebugMenu__ctor_m08666F73635860942CC30BB78305B01143714FB4
          (DebugMenu_t13A4D5599214DB89C01F159602718CF05EFC9573 *param_1,String_t *param_2,
          MethodInfo *param_3)

{
  MenuNavigationEntry_t55A28B8978894C993D29C5B1123FA8C1B571C7FA *pMVar1;
  bool bVar2;

  U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
            ((U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)param_1,
             (MethodInfo *)0x0);
  bVar2 = DAT_11523a6f == '\0';
  param_1->___name_1 = param_2;
  if (bVar2) {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       MenuNavigationEntry_t55A28B8978894C993D29C5B1123FA8C1B571C7FA_il2cpp_TypeInfo_var
              );
    param_2 = param_1->___name_1;
    DAT_11523a6f = '\x01';
  }
  pMVar1 = (MenuNavigationEntry_t55A28B8978894C993D29C5B1123FA8C1B571C7FA *)
           il2cpp_codegen_object_new
                     (
                     MenuNavigationEntry_t55A28B8978894C993D29C5B1123FA8C1B571C7FA_il2cpp_TypeInfo_var
                     );
  MenuNavigationEntry__ctor_m4522ED770D078AC60D05AD1D459756C0E24C1A0E
            (pMVar1,param_2,(MenuNavigationEntry_t55A28B8978894C993D29C5B1123FA8C1B571C7FA *)0x0,
             (MethodInfo *)0x0);
  param_1->___root_2 = pMVar1;
  param_1->___U3CActiveU3Ek__BackingField_0 = false;
  return;
}
