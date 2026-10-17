// RVA 0x837df0 | Placemaker.FastCoroutines$$.cctor
// PDB: FastCoroutines__cctor_m1A6D4D505DFCA222BA54801B994D586A1C106C87
// Body: [[10837df0, 10837e75]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 101d17c0 BreakPoint__ctor_m1900245FA061B6C11A6ADD2176B3A5BEF5D8C8B0
// 105d32b0 List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared

void __cdecl FastCoroutines__cctor_m1A6D4D505DFCA222BA54801B994D586A1C106C87(MethodInfo *param_1)

{
  List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *pLVar1;
  BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *pBVar2;

  if (DAT_1151f3d3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&FastCoroutines_t3ABB2BDAC5D7EC1B904E8CDCDB49D749D153C60F_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1__ctor_m552C681AADAA40233C6ACAB02DE04D09BBD0006F_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_t995996FCFBE3686436937DD838F80EF96F7E6B6D_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_il2cpp_TypeInfo_var);
    DAT_1151f3d3 = '\x01';
  }
  pLVar1 = (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)
           il2cpp_codegen_object_new
                     (List_1_t995996FCFBE3686436937DD838F80EF96F7E6B6D_il2cpp_TypeInfo_var);
  List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
            (pLVar1,List_1__ctor_m552C681AADAA40233C6ACAB02DE04D09BBD0006F_RuntimeMethod_var);
  *(List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 **)
   FastCoroutines_t3ABB2BDAC5D7EC1B904E8CDCDB49D749D153C60F_il2cpp_TypeInfo_var->static_fields =
       pLVar1;
  pBVar2 = (BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *)
           il2cpp_codegen_object_new
                     (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_il2cpp_TypeInfo_var);
  BreakPoint__ctor_m1900245FA061B6C11A6ADD2176B3A5BEF5D8C8B0(pBVar2,(MethodInfo *)0x0);
  *(BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 **)
   ((int)FastCoroutines_t3ABB2BDAC5D7EC1B904E8CDCDB49D749D153C60F_il2cpp_TypeInfo_var->static_fields
   + 4) = pBVar2;
  return;
}
