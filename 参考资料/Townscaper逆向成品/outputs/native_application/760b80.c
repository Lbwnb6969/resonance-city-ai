// RVA 0x760b80 | Placemaker.PropPlacer$$.ctor
// PDB: PropPlacer__ctor_m437C1203A6C979830EDF39B282D2DDB6EA6E4A1D
// Body: [[10760b80, 10760c39]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 10226660 Dictionary_2__ctor_mAA4C8F456AA58EC1FB154441680BCFAA27AD6183_gshared
// 105d32b0 List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
// 10a36df0 Behaviour__ctor_mCACD3614226521EA607B0F3640C0FAC7EACCBCE0

void __cdecl
PropPlacer__ctor_m437C1203A6C979830EDF39B282D2DDB6EA6E4A1D
          (PropPlacer_t7A1CA1B6B595666ECD64B1E747D73CCB16533245 *param_1,MethodInfo *param_2)

{
  List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *pLVar1;
  Dictionary_2_tBF9E2338C61ABCF5ED32053F509AFB44385F774C *pDVar2;

  if (DAT_1151ec4f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2__ctor_mDDE6CAE8E2CC5A9C16453060FB8F9DB6AE51884D_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Dictionary_2_t1A8318F2C5C0DB567720F5B5AB1E33696F69D0BC_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1__ctor_m437C187F721608530E8EBEEA5B0B46686FF13118_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1__ctor_mC231E09D7F26F0B1F61263B105FCD625F94AFB98_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_tC4F348E4AB2D2B0C505D1B56D6CBE2CFDB59784B_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_tFE549FD498ED34A4D4F0083DC8C23515183299FC_il2cpp_TypeInfo_var);
    DAT_1151ec4f = '\x01';
  }
  pLVar1 = (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)
           il2cpp_codegen_object_new
                     (List_1_tFE549FD498ED34A4D4F0083DC8C23515183299FC_il2cpp_TypeInfo_var);
  List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
            (pLVar1,List_1__ctor_m437C187F721608530E8EBEEA5B0B46686FF13118_RuntimeMethod_var);
  param_1->___srcProps_5 = (List_1_tFE549FD498ED34A4D4F0083DC8C23515183299FC *)pLVar1;
  pDVar2 = (Dictionary_2_tBF9E2338C61ABCF5ED32053F509AFB44385F774C *)
           il2cpp_codegen_object_new
                     (Dictionary_2_t1A8318F2C5C0DB567720F5B5AB1E33696F69D0BC_il2cpp_TypeInfo_var);
  Dictionary_2__ctor_mAA4C8F456AA58EC1FB154441680BCFAA27AD6183_gshared
            (pDVar2,Dictionary_2__ctor_mDDE6CAE8E2CC5A9C16453060FB8F9DB6AE51884D_RuntimeMethod_var);
  param_1->___colliderDict_10 = (Dictionary_2_t1A8318F2C5C0DB567720F5B5AB1E33696F69D0BC *)pDVar2;
  pLVar1 = (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)
           il2cpp_codegen_object_new
                     (List_1_tC4F348E4AB2D2B0C505D1B56D6CBE2CFDB59784B_il2cpp_TypeInfo_var);
  List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
            (pLVar1,List_1__ctor_mC231E09D7F26F0B1F61263B105FCD625F94AFB98_RuntimeMethod_var);
  param_1->___materialMeshes_11 = (List_1_tC4F348E4AB2D2B0C505D1B56D6CBE2CFDB59784B *)pLVar1;
  Behaviour__ctor_mCACD3614226521EA607B0F3640C0FAC7EACCBCE0
            ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)param_1,(MethodInfo *)0x0);
  return;
}
