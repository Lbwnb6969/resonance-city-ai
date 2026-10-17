// RVA 0x758ad0 | Placemaker.Props.PropNode$$.ctor
// PDB: PropNode__ctor_m4F3C45FCEC61187353C92C1373CB8C7E2872AC58
// Body: [[10758ad0, 10758b2d]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 105d32b0 List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
// 10a36df0 Behaviour__ctor_mCACD3614226521EA607B0F3640C0FAC7EACCBCE0

void __cdecl
PropNode__ctor_m4F3C45FCEC61187353C92C1373CB8C7E2872AC58
          (PropNode_t2B7B710DA9BFB110770C3D9CA688CC5F3BD5A952 *param_1,MethodInfo *param_2)

{
  List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *pLVar1;

  if (DAT_1151ec40 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1__ctor_m993EBD7A55DD590BB3084FEBBCEE3A8E814CF997_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_t9B100DCC6CBE60AC19792B75D2F9FE7EBF80DB94_il2cpp_TypeInfo_var);
    DAT_1151ec40 = '\x01';
  }
  param_1->___motivations_10 = '\x01';
  pLVar1 = (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)
           il2cpp_codegen_object_new
                     (List_1_t9B100DCC6CBE60AC19792B75D2F9FE7EBF80DB94_il2cpp_TypeInfo_var);
  List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
            (pLVar1,List_1__ctor_m993EBD7A55DD590BB3084FEBBCEE3A8E814CF997_RuntimeMethod_var);
  param_1->___relations_11 = (List_1_t9B100DCC6CBE60AC19792B75D2F9FE7EBF80DB94 *)pLVar1;
  Behaviour__ctor_mCACD3614226521EA607B0F3640C0FAC7EACCBCE0
            ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)param_1,(MethodInfo *)0x0);
  return;
}
