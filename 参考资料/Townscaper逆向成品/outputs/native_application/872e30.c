// RVA 0x872e30 | Placemaker.AoBaker$$.ctor
// PDB: AoBaker__ctor_m96CB51B5A57C030DDAAF7E2D2F8089BD5711B9F2
// Body: [[10872e30, 10872e8d]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 105d32b0 List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
// 10a36df0 Behaviour__ctor_mCACD3614226521EA607B0F3640C0FAC7EACCBCE0

void __cdecl
AoBaker__ctor_m96CB51B5A57C030DDAAF7E2D2F8089BD5711B9F2
          (AoBaker_t9129C481C867A370E0057056B761ECEB59BE1C20 *param_1,MethodInfo *param_2)

{
  List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *pLVar1;

  if (DAT_1151f595 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1__ctor_m1F5F8175846798F40E76375C119B87F637B2D9B2_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_t3B442DC7BE6A015A52219BC7596D07391CD69EFD_il2cpp_TypeInfo_var);
    DAT_1151f595 = '\x01';
  }
  pLVar1 = (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)
           il2cpp_codegen_object_new
                     (List_1_t3B442DC7BE6A015A52219BC7596D07391CD69EFD_il2cpp_TypeInfo_var);
  List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
            (pLVar1,List_1__ctor_m1F5F8175846798F40E76375C119B87F637B2D9B2_RuntimeMethod_var);
  param_1->___shadowMeshes_6 = (List_1_t3B442DC7BE6A015A52219BC7596D07391CD69EFD *)pLVar1;
  Behaviour__ctor_mCACD3614226521EA607B0F3640C0FAC7EACCBCE0
            ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)param_1,(MethodInfo *)0x0);
  return;
}
