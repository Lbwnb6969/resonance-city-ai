// RVA 0x3d9480 | Placemaker.Graphs.ModuleContainer$$.ctor
// PDB: ModuleContainer__ctor_m41C9755F0635FCF52CDBFC96E0F279E26030ED0E
// Body: [[103d9480, 103d94dd]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 105d32b0 List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
// 10a36df0 Behaviour__ctor_mCACD3614226521EA607B0F3640C0FAC7EACCBCE0

void __cdecl
ModuleContainer__ctor_m41C9755F0635FCF52CDBFC96E0F279E26030ED0E
          (ModuleContainer_t7AAD86D2920DB1DE173C29BEC8556CCCACDECD18 *param_1,MethodInfo *param_2)

{
  List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *pLVar1;

  if (DAT_1151c87f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1__ctor_m3A408E2596338AD835CBFE59B349F00B4AD087A1_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_t2C4900CD521971848CC77E564E7BAD6B2CECD405_il2cpp_TypeInfo_var);
    DAT_1151c87f = '\x01';
  }
  pLVar1 = (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)
           il2cpp_codegen_object_new
                     (List_1_t2C4900CD521971848CC77E564E7BAD6B2CECD405_il2cpp_TypeInfo_var);
  List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
            (pLVar1,List_1__ctor_m3A408E2596338AD835CBFE59B349F00B4AD087A1_RuntimeMethod_var);
  param_1->___bigMeshParts_6 = (List_1_t2C4900CD521971848CC77E564E7BAD6B2CECD405 *)pLVar1;
  Behaviour__ctor_mCACD3614226521EA607B0F3640C0FAC7EACCBCE0
            ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)param_1,(MethodInfo *)0x0);
  return;
}
