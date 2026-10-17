// RVA 0x4bc9d0 | Placemaker.Modules.CornerLookup$$.ctor
// PDB: CornerLookup__ctor_m6096E3B13E6A85C6D2E5AC6420802B8155913B3E
// Body: [[104bc9d0, 104bca2d]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 101d9d50 U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
// 105d32b0 List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared

void __cdecl
CornerLookup__ctor_m6096E3B13E6A85C6D2E5AC6420802B8155913B3E
          (CornerLookup_tAD1BFD0C974B73D0EC5A35B72790FA297C65E6F9 *param_1,MethodInfo *param_2)

{
  List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *pLVar1;

  if (DAT_1151d0fa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1__ctor_mD935015AF49CE08B192CBDA6EE73F4CB26BC6C8A_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_tAC387D40AA794C98425777894B362093CF4E78AC_il2cpp_TypeInfo_var);
    DAT_1151d0fa = '\x01';
  }
  pLVar1 = (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)
           il2cpp_codegen_object_new
                     (List_1_tAC387D40AA794C98425777894B362093CF4E78AC_il2cpp_TypeInfo_var);
  List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
            (pLVar1,List_1__ctor_mD935015AF49CE08B192CBDA6EE73F4CB26BC6C8A_RuntimeMethod_var);
  param_1->___orientedModules_1 = (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pLVar1;
  U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
            ((U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)param_1,
             (MethodInfo *)0x0);
  return;
}
