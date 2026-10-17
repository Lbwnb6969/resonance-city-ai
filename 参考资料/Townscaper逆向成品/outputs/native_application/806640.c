// RVA 0x806640 | Placemaker.Modules.Processing.ProtoModuleMesh$$.ctor
// PDB: ProtoModuleMesh__ctor_mA3F029401E8E6EADCEF16701863E10F5093EB0AA
// Body: [[10806640, 10806792]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 101d9d50 U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
// 103dccb0 ModuleMesh__ctor_m6C213DCF1F2962F3F7662E9B26E2A5B23AF1885E
// 105d32b0 List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
ProtoModuleMesh__ctor_mA3F029401E8E6EADCEF16701863E10F5093EB0AA
          (ProtoModuleMesh_t310D92577588971FD86091572B3D3AD7E74513F0 *param_1,MethodInfo *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ModuleMesh_tA9FBBCC0E1B523A721675DDCE17A18A16F054391 *pMVar4;
  List_1_tA4D4E08BCC82493E480EA9F1B340FC3FA1919763 *pLVar5;
  List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *pLVar6;
  List_1_t495FF7AE4BE0F47A6E81AD8BCF116BDAEF11196D *pLVar7;
  List_1_t65FE8AD150BA17D90876BDDBD0EB5066A4FA19D9 *pLVar8;

  if (DAT_1151f1f8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1__ctor_m193409DD664DD1A4577B6CA486275309318AF08C_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1__ctor_m1EB1B3C686A0553DB7D449A499BA8BA9BD63C56D_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1__ctor_m8204FF6E5D13BE198964E52FA4FCEC4459F9F4A4_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1__ctor_mE5FD0825985DD3658E706C9D84027B512774D9C1_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_t495FF7AE4BE0F47A6E81AD8BCF116BDAEF11196D_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_t5CD8CD8527D8ED0B797DE28513701B3D20EAF6F7_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_t65FE8AD150BA17D90876BDDBD0EB5066A4FA19D9_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_tA4D4E08BCC82493E480EA9F1B340FC3FA1919763_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ModuleMesh_tA9FBBCC0E1B523A721675DDCE17A18A16F054391_il2cpp_TypeInfo_var);
    DAT_1151f1f8 = '\x01';
  }
  pMVar4 = (ModuleMesh_tA9FBBCC0E1B523A721675DDCE17A18A16F054391 *)
           il2cpp_codegen_object_new
                     (ModuleMesh_tA9FBBCC0E1B523A721675DDCE17A18A16F054391_il2cpp_TypeInfo_var);
  ModuleMesh__ctor_m6C213DCF1F2962F3F7662E9B26E2A5B23AF1885E(pMVar4,(MethodInfo *)0x0);
  iVar3 = _UNK_111f167c;
  iVar2 = _UNK_111f1678;
  iVar1 = _UNK_111f1674;
  (param_1->___bounds_2).___c0_0.___x_0 = ___xmm_ffffff80000000800000008000000080;
  (param_1->___bounds_2).___c0_0.___y_1 = iVar1;
  (param_1->___bounds_2).___c0_0.___z_2 = iVar2;
  (param_1->___bounds_2).___c1_1.___x_0 = iVar3;
  param_1->___moduleMesh_0 = pMVar4;
  (param_1->___bounds_2).___c1_1.___y_1 = -0x80;
  (param_1->___bounds_2).___c1_1.___z_2 = -0x80;
  pLVar5 = (List_1_tA4D4E08BCC82493E480EA9F1B340FC3FA1919763 *)
           il2cpp_codegen_object_new
                     (List_1_tA4D4E08BCC82493E480EA9F1B340FC3FA1919763_il2cpp_TypeInfo_var);
  List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
            ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)pLVar5,
             List_1__ctor_m8204FF6E5D13BE198964E52FA4FCEC4459F9F4A4_RuntimeMethod_var);
  param_1->___corners_3 = pLVar5;
  pLVar5 = (List_1_tA4D4E08BCC82493E480EA9F1B340FC3FA1919763 *)
           il2cpp_codegen_object_new
                     (List_1_tA4D4E08BCC82493E480EA9F1B340FC3FA1919763_il2cpp_TypeInfo_var);
  List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
            ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)pLVar5,
             List_1__ctor_m8204FF6E5D13BE198964E52FA4FCEC4459F9F4A4_RuntimeMethod_var);
  param_1->___looseEdges_4 = pLVar5;
  pLVar6 = (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)
           il2cpp_codegen_object_new
                     (List_1_t5CD8CD8527D8ED0B797DE28513701B3D20EAF6F7_il2cpp_TypeInfo_var);
  List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
            (pLVar6,List_1__ctor_mE5FD0825985DD3658E706C9D84027B512774D9C1_RuntimeMethod_var);
  param_1->___cornerTouches_5 = (List_1_t5CD8CD8527D8ED0B797DE28513701B3D20EAF6F7 *)pLVar6;
  pLVar7 = (List_1_t495FF7AE4BE0F47A6E81AD8BCF116BDAEF11196D *)
           il2cpp_codegen_object_new
                     (List_1_t495FF7AE4BE0F47A6E81AD8BCF116BDAEF11196D_il2cpp_TypeInfo_var);
  List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
            ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)pLVar7,
             List_1__ctor_m1EB1B3C686A0553DB7D449A499BA8BA9BD63C56D_RuntimeMethod_var);
  param_1->___sideProfiles_6 = pLVar7;
  pLVar8 = (List_1_t65FE8AD150BA17D90876BDDBD0EB5066A4FA19D9 *)
           il2cpp_codegen_object_new
                     (List_1_t65FE8AD150BA17D90876BDDBD0EB5066A4FA19D9_il2cpp_TypeInfo_var);
  List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
            ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)pLVar8,
             List_1__ctor_m193409DD664DD1A4577B6CA486275309318AF08C_RuntimeMethod_var);
  param_1->___decorPoints_7 = pLVar8;
  U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
            ((U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)param_1,
             (MethodInfo *)0x0);
  return;
}
