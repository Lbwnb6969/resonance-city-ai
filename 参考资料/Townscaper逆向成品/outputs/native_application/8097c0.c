// RVA 0x8097c0 | Placemaker.Graphs.Qube$$.ctor
// PDB: Qube__ctor_m2222DDBB5117AFD9ED7814D2B6ECAF97654DC89C
// Body: [[108097c0, 10809846]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1022f6f0 ByteQube__ctor_mF13A84A5D835B6F581E0F5FBE6B2A696828C0D3F
// 105d32b0 List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
// 10a36df0 Behaviour__ctor_mCACD3614226521EA607B0F3640C0FAC7EACCBCE0

void __cdecl
Qube__ctor_m2222DDBB5117AFD9ED7814D2B6ECAF97654DC89C
          (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *param_1,MethodInfo *param_2)

{
  ByteQube_tF71134A3E9F43437AFBE59D8B5F352AE75B814B2 BVar1;
  List_1_t055157F886B0514D33D42DFE1FDEE241DF29A367 *pLVar2;
  ByteQube_tF71134A3E9F43437AFBE59D8B5F352AE75B814B2 local_c;

  if (DAT_1151f1fd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1__ctor_m4893D8C9EB0091BB8D66D3F876B0F0A132137778_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_t055157F886B0514D33D42DFE1FDEE241DF29A367_il2cpp_TypeInfo_var);
    DAT_1151f1fd = '\x01';
  }
  param_1->___shadowIndex_7 = -1;
  local_c.___v0_0 = '\0';
  local_c.___v1_1 = '\0';
  local_c.___v2_2 = '\0';
  local_c.___v3_3 = '\0';
  local_c.___v4_4 = '\0';
  local_c.___v5_5 = '\0';
  local_c.___v6_6 = '\0';
  local_c.___v7_7 = '\0';
  ByteQube__ctor_mF13A84A5D835B6F581E0F5FBE6B2A696828C0D3F(&local_c,'\x12',(MethodInfo *)0x0);
  BVar1 = local_c;
  (param_1->___cornerValues_13).___v0_0 = local_c.___v0_0;
  (param_1->___cornerValues_13).___v1_1 = local_c.___v1_1;
  (param_1->___cornerValues_13).___v2_2 = local_c.___v2_2;
  (param_1->___cornerValues_13).___v3_3 = local_c.___v3_3;
  local_c._4_4_ = BVar1._4_4_;
  (param_1->___cornerValues_13).___v4_4 = local_c.___v4_4;
  (param_1->___cornerValues_13).___v5_5 = local_c.___v5_5;
  (param_1->___cornerValues_13).___v6_6 = local_c.___v6_6;
  (param_1->___cornerValues_13).___v7_7 = local_c.___v7_7;
  local_c = BVar1;
  pLVar2 = (List_1_t055157F886B0514D33D42DFE1FDEE241DF29A367 *)
           il2cpp_codegen_object_new
                     (List_1_t055157F886B0514D33D42DFE1FDEE241DF29A367_il2cpp_TypeInfo_var);
  List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
            ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)pLVar2,
             List_1__ctor_m4893D8C9EB0091BB8D66D3F876B0F0A132137778_RuntimeMethod_var);
  param_1->___possibleModules_18 = pLVar2;
  Behaviour__ctor_mCACD3614226521EA607B0F3640C0FAC7EACCBCE0
            ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)param_1,(MethodInfo *)0x0);
  return;
}
