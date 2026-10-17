// RVA 0x3d97f0 | Placemaker.Modules.ModuleLibrary$$.ctor
// PDB: ModuleLibrary__ctor_mF62737BB7A1DBB90E1169F26764C21685A3341DF
// Body: [[103d97f0, 103d9940]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 105d32b0 List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
// 10667a00 ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063

void __cdecl
ModuleLibrary__ctor_mF62737BB7A1DBB90E1169F26764C21685A3341DF
          (ModuleLibrary_tA9594D369D9806033EAF0CC489599A44D547BC52 *param_1,MethodInfo *param_2)

{
  List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *pLVar1;
  List_1_t495FF7AE4BE0F47A6E81AD8BCF116BDAEF11196D *pLVar2;

  if (DAT_1151c884 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1__ctor_m1729202EF154A9686E3A4EDA0A13899A70022ACC_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1__ctor_m1EB1B3C686A0553DB7D449A499BA8BA9BD63C56D_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1__ctor_m3492789D02C09FDB50FF99933B77D75EC495346A_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1__ctor_mBB8336254627D0736B15305AFCDEE140130284DE_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1__ctor_mD24E39E47128757BCDC8DAA2B48055CF23F3252F_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_t495FF7AE4BE0F47A6E81AD8BCF116BDAEF11196D_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_t956D5C6306CA2DECEC1CAF84DAB8CFDF607148A2_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_tAA228D15B95A5CCAAAFA849CB41C29B035B24F7E_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_tDF39F0070295AEA28704D5911074570BAA2FA4F3_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_tF141C4F883AC5C4EBC64559EB11AEDA279A5058A_il2cpp_TypeInfo_var);
    DAT_1151c884 = '\x01';
  }
  pLVar1 = (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)
           il2cpp_codegen_object_new
                     (List_1_t956D5C6306CA2DECEC1CAF84DAB8CFDF607148A2_il2cpp_TypeInfo_var);
  List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
            (pLVar1,List_1__ctor_m3492789D02C09FDB50FF99933B77D75EC495346A_RuntimeMethod_var);
  param_1->___modules_5 = (List_1_t956D5C6306CA2DECEC1CAF84DAB8CFDF607148A2 *)pLVar1;
  pLVar1 = (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)
           il2cpp_codegen_object_new
                     (List_1_tAA228D15B95A5CCAAAFA849CB41C29B035B24F7E_il2cpp_TypeInfo_var);
  List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
            (pLVar1,List_1__ctor_m1729202EF154A9686E3A4EDA0A13899A70022ACC_RuntimeMethod_var);
  param_1->___decorModules_6 = (List_1_tAA228D15B95A5CCAAAFA849CB41C29B035B24F7E *)pLVar1;
  pLVar1 = (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)
           il2cpp_codegen_object_new
                     (List_1_tDF39F0070295AEA28704D5911074570BAA2FA4F3_il2cpp_TypeInfo_var);
  List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
            (pLVar1,List_1__ctor_mBB8336254627D0736B15305AFCDEE140130284DE_RuntimeMethod_var);
  param_1->___cornerLookups_7 = (List_1_tDF39F0070295AEA28704D5911074570BAA2FA4F3 *)pLVar1;
  pLVar2 = (List_1_t495FF7AE4BE0F47A6E81AD8BCF116BDAEF11196D *)
           il2cpp_codegen_object_new
                     (List_1_t495FF7AE4BE0F47A6E81AD8BCF116BDAEF11196D_il2cpp_TypeInfo_var);
  List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
            ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)pLVar2,
             List_1__ctor_m1EB1B3C686A0553DB7D449A499BA8BA9BD63C56D_RuntimeMethod_var);
  param_1->___sideLookups_8 = pLVar2;
  pLVar1 = (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)
           il2cpp_codegen_object_new
                     (List_1_tF141C4F883AC5C4EBC64559EB11AEDA279A5058A_il2cpp_TypeInfo_var);
  List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
            (pLVar1,List_1__ctor_mD24E39E47128757BCDC8DAA2B48055CF23F3252F_RuntimeMethod_var);
  param_1->___moduleMeshes_9 = (List_1_tF141C4F883AC5C4EBC64559EB11AEDA279A5058A *)pLVar1;
  pLVar1 = (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)
           il2cpp_codegen_object_new
                     (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
  List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
            (pLVar1,List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var);
  param_1->___decorOverlaps_10 = (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)pLVar1;
  ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063
            ((ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A *)param_1,(MethodInfo *)0x0
            );
  return;
}
