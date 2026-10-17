// RVA 0x3f09f0 | Placemaker.VoxelBounceEffect$$.ctor
// PDB: VoxelBounceEffect__ctor_m70F9C0B7EEA887CA8797684AF6438A7AA79887E2
// Body: [[103f09f0, 103f0aa9]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 105d32b0 List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
// 10a36df0 Behaviour__ctor_mCACD3614226521EA607B0F3640C0FAC7EACCBCE0

void __cdecl
VoxelBounceEffect__ctor_m70F9C0B7EEA887CA8797684AF6438A7AA79887E2
          (VoxelBounceEffect_t9A0497D3BDA6C41FE20D42092A7FC74B8253BE98 *param_1,MethodInfo *param_2)

{
  List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *pLVar1;
  List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *pLVar2;

  if (DAT_1151c913 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1__ctor_m0004DFFA855F04212161673C8E84E9AE9BC83F4E_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5_il2cpp_TypeInfo_var);
    DAT_1151c913 = '\x01';
  }
  pLVar1 = (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)
           il2cpp_codegen_object_new
                     (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_il2cpp_TypeInfo_var);
  List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
            ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)pLVar1,
             List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_RuntimeMethod_var);
  param_1->___verts_11 = pLVar1;
  pLVar2 = (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)
           il2cpp_codegen_object_new
                     (List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5_il2cpp_TypeInfo_var);
  List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
            (pLVar2,List_1__ctor_m0004DFFA855F04212161673C8E84E9AE9BC83F4E_RuntimeMethod_var);
  param_1->___colors_12 = (List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 *)pLVar2;
  pLVar2 = (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)
           il2cpp_codegen_object_new
                     (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
  List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
            (pLVar2,List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var);
  param_1->___tris_13 = (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)pLVar2;
  Behaviour__ctor_mCACD3614226521EA607B0F3640C0FAC7EACCBCE0
            ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)param_1,(MethodInfo *)0x0);
  return;
}
