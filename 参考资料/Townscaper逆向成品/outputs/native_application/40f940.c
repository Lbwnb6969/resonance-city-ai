// RVA 0x40f940 | Placemaker.Quads.GridGeneration.HexPatch$$.ctor
// PDB: HexPatch__ctor_mC5223B7CF66276BA0A585165218731B2EB92D6AF
// Body: [[1040f940, 1040f9d3]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 101d9d50 U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
// 105d2dc0 List_1__ctor_m26649CC81E6E841879C726F4B0713A31F580A556_gshared

void __cdecl
HexPatch__ctor_mC5223B7CF66276BA0A585165218731B2EB92D6AF
          (HexPatch_t441C0D4878B2BC34A093EB0359C723F5DFD697C5 *param_1,MethodInfo *param_2)

{
  List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *pLVar1;

  if (DAT_1151ca8f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1__ctor_m0CB6039559979A57B8859EB771376DBDDACD6103_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1__ctor_m0CECF0E0C6353819C2F25DA649985BA3B8E466F5_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_tB0F39AA9932C0CBAB5ABE300843C20A72BBB544E_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF_il2cpp_TypeInfo_var);
    DAT_1151ca8f = '\x01';
  }
  pLVar1 = (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)
           il2cpp_codegen_object_new
                     (List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF_il2cpp_TypeInfo_var);
  List_1__ctor_m26649CC81E6E841879C726F4B0713A31F580A556_gshared
            (pLVar1,900,List_1__ctor_m0CB6039559979A57B8859EB771376DBDDACD6103_RuntimeMethod_var);
  param_1->___quads_2 = (List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *)pLVar1;
  pLVar1 = (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)
           il2cpp_codegen_object_new
                     (List_1_tB0F39AA9932C0CBAB5ABE300843C20A72BBB544E_il2cpp_TypeInfo_var);
  List_1__ctor_m26649CC81E6E841879C726F4B0713A31F580A556_gshared
            (pLVar1,0x100,List_1__ctor_m0CECF0E0C6353819C2F25DA649985BA3B8E466F5_RuntimeMethod_var);
  param_1->___verts_3 = (List_1_tB0F39AA9932C0CBAB5ABE300843C20A72BBB544E *)pLVar1;
  U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
            ((U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)param_1,
             (MethodInfo *)0x0);
  return;
}
