// RVA 0x9c4650 | Placemaker.Ui.Toucher.Tracker$$.ctor
// PDB: Tracker__ctor_mAAE30F225785179B3CCB142E82886701788A7966
// Body: [[109c4650, 109c46ad]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 101d9d50 U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
// 105d32b0 List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared

void __cdecl
Tracker__ctor_mAAE30F225785179B3CCB142E82886701788A7966
          (Tracker_tAB086F4C154CF70017305D0BE24AE72D4A817C63 *param_1,MethodInfo *param_2)

{
  List_1_tA26CAE48E9EC63069FE2DBAE3829BD4E5CA3767C *pLVar1;

  if (DAT_1151ff54 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1__ctor_m6AFB312E923AC302FE4491582DFEB3B6AC26E774_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_tA26CAE48E9EC63069FE2DBAE3829BD4E5CA3767C_il2cpp_TypeInfo_var);
    DAT_1151ff54 = '\x01';
  }
  pLVar1 = (List_1_tA26CAE48E9EC63069FE2DBAE3829BD4E5CA3767C *)
           il2cpp_codegen_object_new
                     (List_1_tA26CAE48E9EC63069FE2DBAE3829BD4E5CA3767C_il2cpp_TypeInfo_var);
  List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
            ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)pLVar1,
             List_1__ctor_m6AFB312E923AC302FE4491582DFEB3B6AC26E774_RuntimeMethod_var);
  param_1->___datas_6 = pLVar1;
  U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
            ((U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)param_1,
             (MethodInfo *)0x0);
  return;
}
