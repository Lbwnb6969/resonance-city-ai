// RVA 0x1e52c0 | Placemaker.WorldMeshes$$.ctor
// PDB: WorldMeshes__ctor_m9411AF09B41D64C0AEF9E1F8D43FA8C24D07B239
// Body: [[101e52c0, 101e531d]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 105d32b0 List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
// 10a36df0 Behaviour__ctor_mCACD3614226521EA607B0F3640C0FAC7EACCBCE0

void __cdecl
WorldMeshes__ctor_m9411AF09B41D64C0AEF9E1F8D43FA8C24D07B239
          (WorldMeshes_tBC69BAAEC2CD491EAC0C4E24380060AD1397DBB6 *param_1,MethodInfo *param_2)

{
  List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *pLVar1;

  if (DAT_1151af35 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1__ctor_mC231E09D7F26F0B1F61263B105FCD625F94AFB98_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_tC4F348E4AB2D2B0C505D1B56D6CBE2CFDB59784B_il2cpp_TypeInfo_var);
    DAT_1151af35 = '\x01';
  }
  pLVar1 = (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)
           il2cpp_codegen_object_new
                     (List_1_tC4F348E4AB2D2B0C505D1B56D6CBE2CFDB59784B_il2cpp_TypeInfo_var);
  List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
            (pLVar1,List_1__ctor_mC231E09D7F26F0B1F61263B105FCD625F94AFB98_RuntimeMethod_var);
  param_1->___meshStack_6 = (List_1_tC4F348E4AB2D2B0C505D1B56D6CBE2CFDB59784B *)pLVar1;
  Behaviour__ctor_mCACD3614226521EA607B0F3640C0FAC7EACCBCE0
            ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)param_1,(MethodInfo *)0x0);
  return;
}
