// RVA 0x10d02e0 | FuryStudios.FurySDK.Utils.DebugMenu.MenuNavigationEntry$$.ctor
// PDB: MenuNavigationEntry__ctor_m4522ED770D078AC60D05AD1D459756C0E24C1A0E
// Body: [[110d02e0, 110d0385]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d9d50 U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
// 105d32b0 List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
// 1102ffd0 List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared

void __cdecl
MenuNavigationEntry__ctor_m4522ED770D078AC60D05AD1D459756C0E24C1A0E
          (MenuNavigationEntry_t55A28B8978894C993D29C5B1123FA8C1B571C7FA *param_1,String_t *param_2,
          MenuNavigationEntry_t55A28B8978894C993D29C5B1123FA8C1B571C7FA *param_3,MethodInfo *param_4
          )

{
  MenuNavigationEntry_t55A28B8978894C993D29C5B1123FA8C1B571C7FA *pMVar1;
  List_1_tAC387D40AA794C98425777894B362093CF4E78AC *pLVar2;
  List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *pLVar3;

  if (DAT_11523aba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1__ctor_m8BD2267369F0EA4A3AF23B0BB26D228E674E5291_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_t5D64C8FC795A8577207851EF7EB4031102F46740_il2cpp_TypeInfo_var);
    DAT_11523aba = '\x01';
  }
  U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
            ((U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)param_1,
             (MethodInfo *)0x0);
  param_1->_padding_ = (int)param_2;
  param_1->___U3CParentU3Ek__BackingField_2 = param_3;
  pLVar3 = (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)
           il2cpp_codegen_object_new
                     (List_1_t5D64C8FC795A8577207851EF7EB4031102F46740_il2cpp_TypeInfo_var);
  List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
            (pLVar3,List_1__ctor_m8BD2267369F0EA4A3AF23B0BB26D228E674E5291_RuntimeMethod_var);
  param_1->___U3CChildEntriesU3Ek__BackingField_3 =
       (List_1_t5D64C8FC795A8577207851EF7EB4031102F46740 *)pLVar3;
  pMVar1 = param_1->___U3CParentU3Ek__BackingField_2;
  if (pMVar1 != (MenuNavigationEntry_t55A28B8978894C993D29C5B1123FA8C1B571C7FA *)0x0) {
    if (DAT_11523abc == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                ((uint *)&List_1_Add_m1C5DEF20131414F0F8B6DD8BDC12DFC23A2E50A8_RuntimeMethod_var);
      DAT_11523abc = '\x01';
    }
    pLVar2 = (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)
             pMVar1->___U3CChildEntriesU3Ek__BackingField_3;
    if (pLVar2 == (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_null_reference_exception();
    }
    List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
              (pLVar2,(OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)param_1,
               List_1_Add_m1C5DEF20131414F0F8B6DD8BDC12DFC23A2E50A8_RuntimeMethod_var);
  }
  return;
}
