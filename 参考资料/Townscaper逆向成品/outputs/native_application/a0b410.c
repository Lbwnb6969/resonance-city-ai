// RVA 0xa0b410 | Placemaker.Graphs.ShadowMesh$$.ctor
// PDB: ShadowMesh__ctor_mD1C188F18BCBE363158FADB0E061781B14866D20
// Body: [[10a0b410, 10a0b4c9]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 105d32b0 List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
// 10a36df0 Behaviour__ctor_mCACD3614226521EA607B0F3640C0FAC7EACCBCE0

void __cdecl
ShadowMesh__ctor_mD1C188F18BCBE363158FADB0E061781B14866D20
          (ShadowMesh_t242AFD9598DDF08516763DB2C10CADE97E9C6A35 *param_1,MethodInfo *param_2)

{
  List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *pLVar1;
  List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *pLVar2;

  if (DAT_115201e9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1__ctor_m0ED1CF21DC6B8863BF9FB9E9CE08331E11258F53_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_il2cpp_TypeInfo_var);
    DAT_115201e9 = '\x01';
  }
  pLVar1 = (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)
           il2cpp_codegen_object_new
                     (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_il2cpp_TypeInfo_var);
  List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
            ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)pLVar1,
             List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_RuntimeMethod_var);
  param_1->___shadowMeshVerts_4 = pLVar1;
  pLVar2 = (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)
           il2cpp_codegen_object_new
                     (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9_il2cpp_TypeInfo_var);
  List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
            (pLVar2,List_1__ctor_m0ED1CF21DC6B8863BF9FB9E9CE08331E11258F53_RuntimeMethod_var);
  param_1->___shadowMeshUvs_5 = (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)pLVar2;
  pLVar2 = (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)
           il2cpp_codegen_object_new
                     (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
  List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
            (pLVar2,List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var);
  param_1->___shadowMeshTris_6 = (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)pLVar2;
  Behaviour__ctor_mCACD3614226521EA607B0F3640C0FAC7EACCBCE0
            ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)param_1,(MethodInfo *)0x0);
  return;
}
