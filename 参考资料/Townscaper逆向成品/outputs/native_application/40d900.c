// RVA 0x40d900 | Placemaker.Quads.GridGeneration.HexCluster$$.ctor
// PDB: HexCluster__ctor_m1D677B43F8BFB90F5366863B970B50AC9E452E77
// Body: [[1040d900, 1040d993]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 101d9d50 U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
// 105d2dc0 List_1__ctor_m26649CC81E6E841879C726F4B0713A31F580A556_gshared

void __cdecl
HexCluster__ctor_m1D677B43F8BFB90F5366863B970B50AC9E452E77
          (HexCluster_tBF30C42359904C9666E094787C2C4DB5F36A5C9B *param_1,MethodInfo *param_2)

{
  List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *pLVar1;

  if (DAT_1151ca86 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1__ctor_mD79DF2346C315695E056B0437EEC0E976C566E73_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1__ctor_mDD7A9668F14A4CB621393F5D88C7A4F79DF3D17A_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_t4DAF4DE3AB09856B0B497582060C41D9B45A575D_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_t985353431229C8151763A38589D03FBD829D85E5_il2cpp_TypeInfo_var);
    DAT_1151ca86 = '\x01';
  }
  pLVar1 = (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)
           il2cpp_codegen_object_new
                     (List_1_t985353431229C8151763A38589D03FBD829D85E5_il2cpp_TypeInfo_var);
  List_1__ctor_m26649CC81E6E841879C726F4B0713A31F580A556_gshared
            (pLVar1,700,List_1__ctor_mDD7A9668F14A4CB621393F5D88C7A4F79DF3D17A_RuntimeMethod_var);
  param_1->___vertIndexes_6 = (List_1_t985353431229C8151763A38589D03FBD829D85E5 *)pLVar1;
  pLVar1 = (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)
           il2cpp_codegen_object_new
                     (List_1_t4DAF4DE3AB09856B0B497582060C41D9B45A575D_il2cpp_TypeInfo_var);
  List_1__ctor_m26649CC81E6E841879C726F4B0713A31F580A556_gshared
            (pLVar1,700,List_1__ctor_mD79DF2346C315695E056B0437EEC0E976C566E73_RuntimeMethod_var);
  param_1->___relaxedVerts_7 = (List_1_t4DAF4DE3AB09856B0B497582060C41D9B45A575D *)pLVar1;
  U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
            ((U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)param_1,
             (MethodInfo *)0x0);
  return;
}
