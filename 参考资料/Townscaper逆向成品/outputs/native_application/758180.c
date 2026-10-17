// RVA 0x758180 | Placemaker.Props.PropMeshReference$$.ctor
// PDB: PropMeshReference__ctor_m20D9BB25DEDE5B241B655A58935E3D2475A955DB
// Body: [[10758180, 107581dd]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 105d32b0 List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
// 10a36df0 Behaviour__ctor_mCACD3614226521EA607B0F3640C0FAC7EACCBCE0

void __cdecl
PropMeshReference__ctor_m20D9BB25DEDE5B241B655A58935E3D2475A955DB
          (PropMeshReference_t3675C7FF17B0DAAD79E80C0EA6B32A7278245E69 *param_1,MethodInfo *param_2)

{
  List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *pLVar1;

  if (DAT_1151ec33 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1__ctor_mB070756069E05D03973453A77CCE65279D53F600_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_t50D95A50AAF957E0226D6EBB9C69FFD83FE727A8_il2cpp_TypeInfo_var);
    DAT_1151ec33 = '\x01';
  }
  pLVar1 = (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)
           il2cpp_codegen_object_new
                     (List_1_t50D95A50AAF957E0226D6EBB9C69FFD83FE727A8_il2cpp_TypeInfo_var);
  List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
            (pLVar1,List_1__ctor_mB070756069E05D03973453A77CCE65279D53F600_RuntimeMethod_var);
  param_1->___items_4 = (List_1_t50D95A50AAF957E0226D6EBB9C69FFD83FE727A8 *)pLVar1;
  Behaviour__ctor_mCACD3614226521EA607B0F3640C0FAC7EACCBCE0
            ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)param_1,(MethodInfo *)0x0);
  return;
}
