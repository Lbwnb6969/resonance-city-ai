// RVA 0x81c2a0 | Placemaker.Sandbanker$$.ctor
// PDB: Sandbanker__ctor_mA57A94A7A21E80D884F09D83C0A799891FB3E0B8
// Body: [[1081c2a0, 1081c389]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 10226660 Dictionary_2__ctor_mAA4C8F456AA58EC1FB154441680BCFAA27AD6183_gshared
// 105d32b0 List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
// 10a36df0 Behaviour__ctor_mCACD3614226521EA607B0F3640C0FAC7EACCBCE0

void __cdecl
Sandbanker__ctor_mA57A94A7A21E80D884F09D83C0A799891FB3E0B8
          (Sandbanker_t40E4E38CA328AA7AA0BA6530A0D474792DEA22E3 *param_1,MethodInfo *param_2)

{
  List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *pLVar1;
  List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *pLVar2;
  Dictionary_2_tBF9E2338C61ABCF5ED32053F509AFB44385F774C *pDVar3;

  if (DAT_1151f27f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2__ctor_mE4D6F6FA5A737865159110CFFF4034001E7F75C1_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1__ctor_m893CC03BA01C82718A6ED996182C83EA91A0E74C_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA_il2cpp_TypeInfo_var);
    DAT_1151f27f = '\x01';
  }
  pLVar1 = (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)
           il2cpp_codegen_object_new
                     (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA_il2cpp_TypeInfo_var);
  List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
            (pLVar1,List_1__ctor_m893CC03BA01C82718A6ED996182C83EA91A0E74C_RuntimeMethod_var);
  param_1->___coverage_5 = (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA *)pLVar1;
  pLVar2 = (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)
           il2cpp_codegen_object_new
                     (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_il2cpp_TypeInfo_var);
  List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
            ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)pLVar2,
             List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_RuntimeMethod_var);
  param_1->___verts_6 = pLVar2;
  pLVar1 = (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)
           il2cpp_codegen_object_new
                     (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
  List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
            (pLVar1,List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var);
  param_1->___tris_7 = (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)pLVar1;
  pDVar3 = (Dictionary_2_tBF9E2338C61ABCF5ED32053F509AFB44385F774C *)
           il2cpp_codegen_object_new
                     (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08_il2cpp_TypeInfo_var);
  Dictionary_2__ctor_mAA4C8F456AA58EC1FB154441680BCFAA27AD6183_gshared
            (pDVar3,Dictionary_2__ctor_mE4D6F6FA5A737865159110CFFF4034001E7F75C1_RuntimeMethod_var);
  param_1->___dict_14 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)pDVar3;
  Behaviour__ctor_mCACD3614226521EA607B0F3640C0FAC7EACCBCE0
            ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)param_1,(MethodInfo *)0x0);
  return;
}
