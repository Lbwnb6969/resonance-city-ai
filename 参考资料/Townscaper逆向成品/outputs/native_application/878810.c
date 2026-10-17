// RVA 0x878810 | Placemaker.BigMesh$$.ctor
// PDB: BigMesh__ctor_mB5035CAA9094E6D29E8D4A321CAD2BC36DAF824A
// Body: [[10878810, 10878964]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 105d32b0 List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
// 10a36df0 Behaviour__ctor_mCACD3614226521EA607B0F3640C0FAC7EACCBCE0

void __cdecl
BigMesh__ctor_mB5035CAA9094E6D29E8D4A321CAD2BC36DAF824A
          (BigMesh_t210F22099D8F21B93EF9ABEB33418A400DBD22BA *param_1,MethodInfo *param_2)

{
  List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *pLVar1;
  List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *pLVar2;
  List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *pLVar3;

  if (DAT_1151f5af == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1__ctor_m01D6A0C37A11AF0B818BC8F17819242D0B3CCCAB_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1__ctor_m0ED1CF21DC6B8863BF9FB9E9CE08331E11258F53_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1__ctor_m8C48C3F6EF447031F54430F3EF5AEB57666345E6_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_tBBC4E953860E582A3E060CC10B1387AFC5A36FC5_il2cpp_TypeInfo_var);
    DAT_1151f5af = '\x01';
  }
  pLVar1 = (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)
           il2cpp_codegen_object_new
                     (List_1_tBBC4E953860E582A3E060CC10B1387AFC5A36FC5_il2cpp_TypeInfo_var);
  List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
            (pLVar1,List_1__ctor_m01D6A0C37A11AF0B818BC8F17819242D0B3CCCAB_RuntimeMethod_var);
  param_1->___availableIndexes_8 = (List_1_tBBC4E953860E582A3E060CC10B1387AFC5A36FC5 *)pLVar1;
  pLVar1 = (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)
           il2cpp_codegen_object_new
                     (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
  List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
            (pLVar1,List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var);
  param_1->___availableTris_9 = (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)pLVar1;
  pLVar2 = (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)
           il2cpp_codegen_object_new
                     (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_il2cpp_TypeInfo_var);
  List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
            ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)pLVar2,
             List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_RuntimeMethod_var);
  param_1->___verts_10 = pLVar2;
  pLVar2 = (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)
           il2cpp_codegen_object_new
                     (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_il2cpp_TypeInfo_var);
  List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
            ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)pLVar2,
             List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_RuntimeMethod_var);
  param_1->___normals_11 = pLVar2;
  pLVar3 = (List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *)
           il2cpp_codegen_object_new
                     (List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A_il2cpp_TypeInfo_var);
  List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
            ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)pLVar3,
             List_1__ctor_m8C48C3F6EF447031F54430F3EF5AEB57666345E6_RuntimeMethod_var);
  param_1->___tangents_12 = pLVar3;
  pLVar1 = (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)
           il2cpp_codegen_object_new
                     (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9_il2cpp_TypeInfo_var);
  List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
            (pLVar1,List_1__ctor_m0ED1CF21DC6B8863BF9FB9E9CE08331E11258F53_RuntimeMethod_var);
  param_1->___uvs_13 = (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)pLVar1;
  pLVar1 = (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)
           il2cpp_codegen_object_new
                     (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
  List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
            (pLVar1,List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var);
  param_1->___tris_14 = (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)pLVar1;
  Behaviour__ctor_mCACD3614226521EA607B0F3640C0FAC7EACCBCE0
            ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)param_1,(MethodInfo *)0x0);
  return;
}
