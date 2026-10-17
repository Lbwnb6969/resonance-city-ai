// RVA 0x3f58c0 | Placemaker.WaveFunctionCollapse$$.ctor
// PDB: WaveFunctionCollapse__ctor_mFA7370D99E5CA8F4E608445261D1E68B25299E8A
// Body: [[103f58c0, 103f5aab]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1058b010 HashSet_1__ctor_m2CDA40DEC2900A9CB00F8348FF386DF44ABD0EC7_gshared
// 105d32b0 List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
// 10a36df0 Behaviour__ctor_mCACD3614226521EA607B0F3640C0FAC7EACCBCE0

void __cdecl
WaveFunctionCollapse__ctor_mFA7370D99E5CA8F4E608445261D1E68B25299E8A
          (WaveFunctionCollapse_t70F8917FC43B0A37E3BD8CD8D6F6B4C59214F8A9 *param_1,
          MethodInfo *param_2)

{
  List_1_tBA1C0F33226FF5217F175C563096EEB54FFE152C *pLVar1;
  List_1_tD74220FCA74EB315456406C4B64587ABE39EE0B8 *pLVar2;
  List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *pLVar3;
  HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B *pHVar4;

  if (DAT_1151c926 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&HashSet_1__ctor_m9B21BAAD4C19CA98ED32C01B726F2582CBA60B77_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1__ctor_m72F03CFCA3F18767CF0A2EA88CFAB88695F90681_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1__ctor_mD8A4DF8C4333E1B9FAEB719157A43F6DD1B209BC_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1__ctor_mE42F235821AA59558A77A308BF1C03AB11B31DCF_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_t9135BBA17EC44986E18786359559A3877CE31660_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_tBA1C0F33226FF5217F175C563096EEB54FFE152C_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_tD74220FCA74EB315456406C4B64587ABE39EE0B8_il2cpp_TypeInfo_var);
    DAT_1151c926 = '\x01';
  }
  pLVar1 = (List_1_tBA1C0F33226FF5217F175C563096EEB54FFE152C *)
           il2cpp_codegen_object_new
                     (List_1_tBA1C0F33226FF5217F175C563096EEB54FFE152C_il2cpp_TypeInfo_var);
  List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
            ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)pLVar1,
             List_1__ctor_m72F03CFCA3F18767CF0A2EA88CFAB88695F90681_RuntimeMethod_var);
  param_1->___removeNeighbors_7 = pLVar1;
  pLVar1 = (List_1_tBA1C0F33226FF5217F175C563096EEB54FFE152C *)
           il2cpp_codegen_object_new
                     (List_1_tBA1C0F33226FF5217F175C563096EEB54FFE152C_il2cpp_TypeInfo_var);
  List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
            ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)pLVar1,
             List_1__ctor_m72F03CFCA3F18767CF0A2EA88CFAB88695F90681_RuntimeMethod_var);
  param_1->___updates_8 = pLVar1;
  pLVar1 = (List_1_tBA1C0F33226FF5217F175C563096EEB54FFE152C *)
           il2cpp_codegen_object_new
                     (List_1_tBA1C0F33226FF5217F175C563096EEB54FFE152C_il2cpp_TypeInfo_var);
  List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
            ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)pLVar1,
             List_1__ctor_m72F03CFCA3F18767CF0A2EA88CFAB88695F90681_RuntimeMethod_var);
  param_1->___propagations_9 = pLVar1;
  pLVar1 = (List_1_tBA1C0F33226FF5217F175C563096EEB54FFE152C *)
           il2cpp_codegen_object_new
                     (List_1_tBA1C0F33226FF5217F175C563096EEB54FFE152C_il2cpp_TypeInfo_var);
  List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
            ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)pLVar1,
             List_1__ctor_m72F03CFCA3F18767CF0A2EA88CFAB88695F90681_RuntimeMethod_var);
  param_1->___validations_10 = pLVar1;
  pLVar1 = (List_1_tBA1C0F33226FF5217F175C563096EEB54FFE152C *)
           il2cpp_codegen_object_new
                     (List_1_tBA1C0F33226FF5217F175C563096EEB54FFE152C_il2cpp_TypeInfo_var);
  List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
            ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)pLVar1,
             List_1__ctor_m72F03CFCA3F18767CF0A2EA88CFAB88695F90681_RuntimeMethod_var);
  param_1->___toCollapse_11 = pLVar1;
  pLVar1 = (List_1_tBA1C0F33226FF5217F175C563096EEB54FFE152C *)
           il2cpp_codegen_object_new
                     (List_1_tBA1C0F33226FF5217F175C563096EEB54FFE152C_il2cpp_TypeInfo_var);
  List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
            ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)pLVar1,
             List_1__ctor_m72F03CFCA3F18767CF0A2EA88CFAB88695F90681_RuntimeMethod_var);
  param_1->___decorUpdates_12 = pLVar1;
  pLVar1 = (List_1_tBA1C0F33226FF5217F175C563096EEB54FFE152C *)
           il2cpp_codegen_object_new
                     (List_1_tBA1C0F33226FF5217F175C563096EEB54FFE152C_il2cpp_TypeInfo_var);
  List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
            ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)pLVar1,
             List_1__ctor_m72F03CFCA3F18767CF0A2EA88CFAB88695F90681_RuntimeMethod_var);
  param_1->___decorPropagations_13 = pLVar1;
  pLVar1 = (List_1_tBA1C0F33226FF5217F175C563096EEB54FFE152C *)
           il2cpp_codegen_object_new
                     (List_1_tBA1C0F33226FF5217F175C563096EEB54FFE152C_il2cpp_TypeInfo_var);
  List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
            ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)pLVar1,
             List_1__ctor_m72F03CFCA3F18767CF0A2EA88CFAB88695F90681_RuntimeMethod_var);
  param_1->___decorToCollapse_14 = pLVar1;
  pLVar1 = (List_1_tBA1C0F33226FF5217F175C563096EEB54FFE152C *)
           il2cpp_codegen_object_new
                     (List_1_tBA1C0F33226FF5217F175C563096EEB54FFE152C_il2cpp_TypeInfo_var);
  List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
            ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)pLVar1,
             List_1__ctor_m72F03CFCA3F18767CF0A2EA88CFAB88695F90681_RuntimeMethod_var);
  param_1->___decorToBuild_15 = pLVar1;
  pLVar2 = (List_1_tD74220FCA74EB315456406C4B64587ABE39EE0B8 *)
           il2cpp_codegen_object_new
                     (List_1_tD74220FCA74EB315456406C4B64587ABE39EE0B8_il2cpp_TypeInfo_var);
  List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
            ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)pLVar2,
             List_1__ctor_mE42F235821AA59558A77A308BF1C03AB11B31DCF_RuntimeMethod_var);
  param_1->___lastRemovals_16 = pLVar2;
  pLVar2 = (List_1_tD74220FCA74EB315456406C4B64587ABE39EE0B8 *)
           il2cpp_codegen_object_new
                     (List_1_tD74220FCA74EB315456406C4B64587ABE39EE0B8_il2cpp_TypeInfo_var);
  List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
            ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)pLVar2,
             List_1__ctor_mE42F235821AA59558A77A308BF1C03AB11B31DCF_RuntimeMethod_var);
  param_1->___lastDecorRemovals_17 = pLVar2;
  pLVar3 = (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)
           il2cpp_codegen_object_new
                     (List_1_t9135BBA17EC44986E18786359559A3877CE31660_il2cpp_TypeInfo_var);
  List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
            (pLVar3,List_1__ctor_mD8A4DF8C4333E1B9FAEB719157A43F6DD1B209BC_RuntimeMethod_var);
  param_1->___qubesToRebuild_18 = (List_1_t9135BBA17EC44986E18786359559A3877CE31660 *)pLVar3;
  pHVar4 = (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B *)
           il2cpp_codegen_object_new
                     (HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5_il2cpp_TypeInfo_var);
  HashSet_1__ctor_m2CDA40DEC2900A9CB00F8348FF386DF44ABD0EC7_gshared
            (pHVar4,HashSet_1__ctor_m9B21BAAD4C19CA98ED32C01B726F2582CBA60B77_RuntimeMethod_var);
  param_1->___hashset_19 = (HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 *)pHVar4;
  Behaviour__ctor_mCACD3614226521EA607B0F3640C0FAC7EACCBCE0
            ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)param_1,(MethodInfo *)0x0);
  return;
}
