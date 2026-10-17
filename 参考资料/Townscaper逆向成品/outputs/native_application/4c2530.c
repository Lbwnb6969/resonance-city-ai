// RVA 0x4c2530 | Placemaker.Quads.GridGeneration.CustomGridPatch$$.ctor
// PDB: CustomGridPatch__ctor_m59CE3ED2FB15614127CA6267621571D2E3E01B49
// Body: [[104c2530, 104c25b9]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 101d9d50 U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
// 105d32b0 List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared

void __cdecl
CustomGridPatch__ctor_m59CE3ED2FB15614127CA6267621571D2E3E01B49
          (CustomGridPatch_tDB4C184FBDA8288935A3B1B000D1B4A27BDBCBD4 *param_1,MethodInfo *param_2)

{
  List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *pLVar1;

  if (DAT_1151d118 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1__ctor_m42BD5721699395D9FC6B6D889CE5A29C4C2F1778_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1__ctor_m9AD43CB429E639144668BF0E837C354D2B94630A_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_tB0F39AA9932C0CBAB5ABE300843C20A72BBB544E_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF_il2cpp_TypeInfo_var);
    DAT_1151d118 = '\x01';
  }
  pLVar1 = (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)
           il2cpp_codegen_object_new
                     (List_1_tB0F39AA9932C0CBAB5ABE300843C20A72BBB544E_il2cpp_TypeInfo_var);
  List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
            (pLVar1,List_1__ctor_m9AD43CB429E639144668BF0E837C354D2B94630A_RuntimeMethod_var);
  param_1->___verts_0 = (List_1_tB0F39AA9932C0CBAB5ABE300843C20A72BBB544E *)pLVar1;
  pLVar1 = (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)
           il2cpp_codegen_object_new
                     (List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF_il2cpp_TypeInfo_var);
  List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
            (pLVar1,List_1__ctor_m42BD5721699395D9FC6B6D889CE5A29C4C2F1778_RuntimeMethod_var);
  param_1->___quads_1 = (List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *)pLVar1;
  U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
            ((U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)param_1,
             (MethodInfo *)0x0);
  return;
}
