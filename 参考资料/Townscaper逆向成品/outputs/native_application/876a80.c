// RVA 0x876a80 | Placemaker.BigMeshGroup$$.ctor
// PDB: BigMeshGroup__ctor_m078E569228B1BF439C3761A918687EAD3B520319
// Body: [[10876a80, 10876add]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 105d32b0 List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
// 10a36df0 Behaviour__ctor_mCACD3614226521EA607B0F3640C0FAC7EACCBCE0

void __cdecl
BigMeshGroup__ctor_m078E569228B1BF439C3761A918687EAD3B520319
          (BigMeshGroup_tB2D1DB71F09DC046B11A7F58D3F4D80EB4A6B542 *param_1,MethodInfo *param_2)

{
  List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *pLVar1;

  if (DAT_1151f5b0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1__ctor_m3C2FC8496D269322350939C9FBAF0C8DA0ED7ABE_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_t2A3632E7A253464FD54F0F3EDDBE0EF59FD1571F_il2cpp_TypeInfo_var);
    DAT_1151f5b0 = '\x01';
  }
  pLVar1 = (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)
           il2cpp_codegen_object_new
                     (List_1_t2A3632E7A253464FD54F0F3EDDBE0EF59FD1571F_il2cpp_TypeInfo_var);
  List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
            (pLVar1,List_1__ctor_m3C2FC8496D269322350939C9FBAF0C8DA0ED7ABE_RuntimeMethod_var);
  param_1->___bigMeshes_5 = (List_1_t2A3632E7A253464FD54F0F3EDDBE0EF59FD1571F *)pLVar1;
  Behaviour__ctor_mCACD3614226521EA607B0F3640C0FAC7EACCBCE0
            ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)param_1,(MethodInfo *)0x0);
  return;
}
