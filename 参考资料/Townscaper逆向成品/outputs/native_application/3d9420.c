// RVA 0x3d9420 | Placemaker.ModuleBuilder$$.ctor
// PDB: ModuleBuilder__ctor_m40BE0269D67C8E0E6E7E4B6B82EB59C0116FB709
// Body: [[103d9420, 103d947d]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 105d32b0 List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
// 10a36df0 Behaviour__ctor_mCACD3614226521EA607B0F3640C0FAC7EACCBCE0

void __cdecl
ModuleBuilder__ctor_m40BE0269D67C8E0E6E7E4B6B82EB59C0116FB709
          (ModuleBuilder_tFCFAE83D48DBD41C4857996F87A7E264CB31D6B0 *param_1,MethodInfo *param_2)

{
  List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *pLVar1;

  if (DAT_1151c87c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1__ctor_mD8A4DF8C4333E1B9FAEB719157A43F6DD1B209BC_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_t9135BBA17EC44986E18786359559A3877CE31660_il2cpp_TypeInfo_var);
    DAT_1151c87c = '\x01';
  }
  pLVar1 = (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)
           il2cpp_codegen_object_new
                     (List_1_t9135BBA17EC44986E18786359559A3877CE31660_il2cpp_TypeInfo_var);
  List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
            (pLVar1,List_1__ctor_mD8A4DF8C4333E1B9FAEB719157A43F6DD1B209BC_RuntimeMethod_var);
  param_1->___qubesToGrass_7 = (List_1_t9135BBA17EC44986E18786359559A3877CE31660 *)pLVar1;
  Behaviour__ctor_mCACD3614226521EA607B0F3640C0FAC7EACCBCE0
            ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)param_1,(MethodInfo *)0x0);
  return;
}
