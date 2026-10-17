// RVA 0x3d95d0 | Placemaker.Modules.Processing.ModuleImporter$$.ctor
// PDB: ModuleImporter__ctor_mA93BB3234C219D88635AEF93B0F52B99E786EF93
// Body: [[103d95d0, 103d962d]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 105d32b0 List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
// 10a36df0 Behaviour__ctor_mCACD3614226521EA607B0F3640C0FAC7EACCBCE0

void __cdecl
ModuleImporter__ctor_mA93BB3234C219D88635AEF93B0F52B99E786EF93
          (ModuleImporter_t33A2FDE718D9410873818057F73F9EC8BD7FF00A *param_1,MethodInfo *param_2)

{
  List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *pLVar1;

  if (DAT_1151c881 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1__ctor_m34349A47AAA9ED638057B03C4D79EB6088A08314_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_t7A248EABB42171EADC811FF6E97EA928AD4C6C45_il2cpp_TypeInfo_var);
    DAT_1151c881 = '\x01';
  }
  pLVar1 = (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)
           il2cpp_codegen_object_new
                     (List_1_t7A248EABB42171EADC811FF6E97EA928AD4C6C45_il2cpp_TypeInfo_var);
  List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
            (pLVar1,List_1__ctor_m34349A47AAA9ED638057B03C4D79EB6088A08314_RuntimeMethod_var);
  param_1->___protoModuleMeshes_13 = (List_1_t7A248EABB42171EADC811FF6E97EA928AD4C6C45 *)pLVar1;
  Behaviour__ctor_mCACD3614226521EA607B0F3640C0FAC7EACCBCE0
            ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)param_1,(MethodInfo *)0x0);
  return;
}
