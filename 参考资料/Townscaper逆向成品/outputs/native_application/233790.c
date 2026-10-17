// RVA 0x233790 | Placemaker.ClickEffect$$.ctor
// PDB: ClickEffect__ctor_mF8B84AED23BFD72FE3F87DBBAE7B739F75F08460
// Body: [[10233790, 10233885]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 105d32b0 List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
// 10a36df0 Behaviour__ctor_mCACD3614226521EA607B0F3640C0FAC7EACCBCE0

void __cdecl
ClickEffect__ctor_mF8B84AED23BFD72FE3F87DBBAE7B739F75F08460
          (ClickEffect_tBCD86683B07033E006B57D3C879935BD4A547F85 *param_1,MethodInfo *param_2)

{
  List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *pLVar1;

  if (DAT_1151b58d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1__ctor_mA7F3A9988682FD71873AC72212E2F2A65DE06079_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8_il2cpp_TypeInfo_var);
    DAT_1151b58d = '\x01';
  }
  param_1->___lastVoxelType_9 = '\x12';
  param_1->___lastColorPickType_10 = '\x12';
  pLVar1 = (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)
           il2cpp_codegen_object_new
                     (List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8_il2cpp_TypeInfo_var);
  List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
            (pLVar1,List_1__ctor_mA7F3A9988682FD71873AC72212E2F2A65DE06079_RuntimeMethod_var);
  param_1->___addClips_11 = (List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 *)pLVar1;
  pLVar1 = (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)
           il2cpp_codegen_object_new
                     (List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8_il2cpp_TypeInfo_var);
  List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
            (pLVar1,List_1__ctor_mA7F3A9988682FD71873AC72212E2F2A65DE06079_RuntimeMethod_var);
  param_1->___removeClips_12 = (List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 *)pLVar1;
  pLVar1 = (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)
           il2cpp_codegen_object_new
                     (List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8_il2cpp_TypeInfo_var);
  List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
            (pLVar1,List_1__ctor_mA7F3A9988682FD71873AC72212E2F2A65DE06079_RuntimeMethod_var);
  param_1->___addClips1_13 = (List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 *)pLVar1;
  pLVar1 = (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)
           il2cpp_codegen_object_new
                     (List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8_il2cpp_TypeInfo_var);
  List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
            (pLVar1,List_1__ctor_mA7F3A9988682FD71873AC72212E2F2A65DE06079_RuntimeMethod_var);
  param_1->___removeClips1_14 = (List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 *)pLVar1;
  pLVar1 = (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)
           il2cpp_codegen_object_new
                     (List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8_il2cpp_TypeInfo_var);
  List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
            (pLVar1,List_1__ctor_mA7F3A9988682FD71873AC72212E2F2A65DE06079_RuntimeMethod_var);
  param_1->___splashClips_15 = (List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 *)pLVar1;
  pLVar1 = (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)
           il2cpp_codegen_object_new
                     (List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8_il2cpp_TypeInfo_var);
  List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
            (pLVar1,List_1__ctor_mA7F3A9988682FD71873AC72212E2F2A65DE06079_RuntimeMethod_var);
  param_1->___colorPickClips_16 = (List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 *)pLVar1;
  param_1->___lastPitch_18 = 0.5;
  Behaviour__ctor_mCACD3614226521EA607B0F3640C0FAC7EACCBCE0
            ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)param_1,(MethodInfo *)0x0);
  return;
}
