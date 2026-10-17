// RVA 0x8746c0 | Placemaker.BaseModule$$.ctor
// PDB: BaseModule__ctor_m7A0EB99101A86000E2B8E4B44BE3E78A2321442C
// Body: [[108746c0, 10874779]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 101d9d50 U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
// 105d32b0 List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared

void __cdecl
BaseModule__ctor_m7A0EB99101A86000E2B8E4B44BE3E78A2321442C
          (BaseModule_tF6D857CD20641F35DA541A5C3D3CD1446D6EEEC8 *param_1,MethodInfo *param_2)

{
  List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *pLVar1;
  List_1_t89922E1A6A20FA901C684AAD5F1B883DCE5FEC8B *pLVar2;

  if (DAT_1151f5a3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1__ctor_m01D6A0C37A11AF0B818BC8F17819242D0B3CCCAB_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1__ctor_m5472F0C3283E04E18F00CBAF91E1BBE9027BAF28_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1__ctor_mD935015AF49CE08B192CBDA6EE73F4CB26BC6C8A_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_t89922E1A6A20FA901C684AAD5F1B883DCE5FEC8B_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_tAC387D40AA794C98425777894B362093CF4E78AC_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_tBBC4E953860E582A3E060CC10B1387AFC5A36FC5_il2cpp_TypeInfo_var);
    DAT_1151f5a3 = '\x01';
  }
  pLVar1 = (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)
           il2cpp_codegen_object_new
                     (List_1_tBBC4E953860E582A3E060CC10B1387AFC5A36FC5_il2cpp_TypeInfo_var);
  List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
            (pLVar1,List_1__ctor_m01D6A0C37A11AF0B818BC8F17819242D0B3CCCAB_RuntimeMethod_var);
  param_1->___profileIndexes_1 = (List_1_tBBC4E953860E582A3E060CC10B1387AFC5A36FC5 *)pLVar1;
  pLVar1 = (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)
           il2cpp_codegen_object_new
                     (List_1_tAC387D40AA794C98425777894B362093CF4E78AC_il2cpp_TypeInfo_var);
  List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
            (pLVar1,List_1__ctor_mD935015AF49CE08B192CBDA6EE73F4CB26BC6C8A_RuntimeMethod_var);
  param_1->___orientedModuleMeshes_2 = (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pLVar1;
  pLVar2 = (List_1_t89922E1A6A20FA901C684AAD5F1B883DCE5FEC8B *)
           il2cpp_codegen_object_new
                     (List_1_t89922E1A6A20FA901C684AAD5F1B883DCE5FEC8B_il2cpp_TypeInfo_var);
  List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
            ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)pLVar2,
             List_1__ctor_m5472F0C3283E04E18F00CBAF91E1BBE9027BAF28_RuntimeMethod_var);
  param_1->___propPlacements_3 = pLVar2;
  U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
            ((U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)param_1,
             (MethodInfo *)0x0);
  return;
}
