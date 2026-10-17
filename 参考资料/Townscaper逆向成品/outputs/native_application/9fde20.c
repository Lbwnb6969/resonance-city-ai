// RVA 0x9fde20 | Placemaker.SaveData$$.ctor
// PDB: SaveData__ctor_m54D969F11736980DA37FE2AF8CE92BC49FB3E927
// Body: [[109fde20, 109fded3]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 101d9d50 U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
// 105d32b0 List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared

void __cdecl
SaveData__ctor_m54D969F11736980DA37FE2AF8CE92BC49FB3E927
          (SaveData_t108FDD1E782E68BC3B924BE75B58816350034188 *param_1,MethodInfo *param_2)

{
  List_1_t65B5CE5C2CCE2EE12BA01A686F7853869760B043 *pLVar1;
  List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *pLVar2;

  if (DAT_11520195 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1__ctor_m0C958192C9BDB86D1808AA821DD9F98CBB7AC802_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1__ctor_mFDA6442D329E5DF2C627CF30FB28A694D0CAEF50_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_t65B5CE5C2CCE2EE12BA01A686F7853869760B043_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_tF9A565374BF86F9FF1DA3261675EC468D2A0EC4B_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
    DAT_11520195 = '\x01';
  }
  param_1->___saveString_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
  (param_1->___cam_2).___x_0 = '\x7f';
  (param_1->___cam_2).___y_1 = '\0';
  (param_1->___cam_2).___z_2 = '\x7f';
  (param_1->___sun_3).___h_0 = '\x7f';
  (param_1->___sun_3).___r_1 = '\x7f';
  pLVar1 = (List_1_t65B5CE5C2CCE2EE12BA01A686F7853869760B043 *)
           il2cpp_codegen_object_new
                     (List_1_t65B5CE5C2CCE2EE12BA01A686F7853869760B043_il2cpp_TypeInfo_var);
  List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
            ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)pLVar1,
             List_1__ctor_m0C958192C9BDB86D1808AA821DD9F98CBB7AC802_RuntimeMethod_var);
  param_1->___corners_4 = pLVar1;
  pLVar2 = (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)
           il2cpp_codegen_object_new
                     (List_1_tF9A565374BF86F9FF1DA3261675EC468D2A0EC4B_il2cpp_TypeInfo_var);
  List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
            (pLVar2,List_1__ctor_mFDA6442D329E5DF2C627CF30FB28A694D0CAEF50_RuntimeMethod_var);
  param_1->___voxels_5 = (List_1_tF9A565374BF86F9FF1DA3261675EC468D2A0EC4B *)pLVar2;
  U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
            ((U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)param_1,
             (MethodInfo *)0x0);
  return;
}
