// RVA 0x3dce10 | Placemaker.Module$$.ctor
// PDB: Module__ctor_m8D2079B0F5D4DCDE083904218007AB5E4928E039
// Body: [[103dce10, 103dce6d]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 105d32b0 List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
// 108746c0 BaseModule__ctor_m7A0EB99101A86000E2B8E4B44BE3E78A2321442C

void __cdecl
Module__ctor_m8D2079B0F5D4DCDE083904218007AB5E4928E039
          (Module_tA72D5ECDF34DC5C0C5242795BFDE74E36D836467 *param_1,MethodInfo *param_2)

{
  List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *pLVar1;

  if (DAT_1151c871 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1__ctor_mD935015AF49CE08B192CBDA6EE73F4CB26BC6C8A_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_tAC387D40AA794C98425777894B362093CF4E78AC_il2cpp_TypeInfo_var);
    DAT_1151c871 = '\x01';
  }
  pLVar1 = (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)
           il2cpp_codegen_object_new
                     (List_1_tAC387D40AA794C98425777894B362093CF4E78AC_il2cpp_TypeInfo_var);
  List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
            (pLVar1,List_1__ctor_mD935015AF49CE08B192CBDA6EE73F4CB26BC6C8A_RuntimeMethod_var);
  param_1->___decorModules_4 = (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pLVar1;
  BaseModule__ctor_m7A0EB99101A86000E2B8E4B44BE3E78A2321442C
            ((BaseModule_tF6D857CD20641F35DA541A5C3D3CD1446D6EEEC8 *)param_1,(MethodInfo *)0x0);
  return;
}
