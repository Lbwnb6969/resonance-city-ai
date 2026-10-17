// RVA 0x3f77c0 | Placemaker.Props.Window$$.cctor
// PDB: Window__cctor_m7433ECC3DD79112175EB124906D41971F37D5FB4
// Body: [[103f77c0, 103f781a]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 105d32b0 List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared

void __cdecl Window__cctor_m7433ECC3DD79112175EB124906D41971F37D5FB4(MethodInfo *param_1)

{
  List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *pLVar1;

  if (DAT_1151c929 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1__ctor_mC231E09D7F26F0B1F61263B105FCD625F94AFB98_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_tC4F348E4AB2D2B0C505D1B56D6CBE2CFDB59784B_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Window_tF268360B358A768EB2632DE63E5B7351562643B7_il2cpp_TypeInfo_var);
    DAT_1151c929 = '\x01';
  }
  pLVar1 = (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)
           il2cpp_codegen_object_new
                     (List_1_tC4F348E4AB2D2B0C505D1B56D6CBE2CFDB59784B_il2cpp_TypeInfo_var);
  List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
            (pLVar1,List_1__ctor_mC231E09D7F26F0B1F61263B105FCD625F94AFB98_RuntimeMethod_var);
  *(List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 **)
   Window_tF268360B358A768EB2632DE63E5B7351562643B7_il2cpp_TypeInfo_var->static_fields = pLVar1;
  return;
}
