// RVA 0x4bd300 | Placemaker.Graphs.Corner$$.ctor
// PDB: Corner__ctor_m589960B4F59B55843DDFF8059756DFDD45C29F07
// Body: [[104bd300, 104bd3bb]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 105d2dc0 List_1__ctor_m26649CC81E6E841879C726F4B0713A31F580A556_gshared
// 105d32b0 List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
// 10a36df0 Behaviour__ctor_mCACD3614226521EA607B0F3640C0FAC7EACCBCE0

void __cdecl
Corner__ctor_m589960B4F59B55843DDFF8059756DFDD45C29F07
          (Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *param_1,MethodInfo *param_2)

{
  List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *pLVar1;
  List_1_t569265593A89FA799E916FF2D345C50EFB59729A *pLVar2;

  if (DAT_1151d0f6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1__ctor_m7D4C116027E66F8C32D2BB0F481A8A43BC844AD0_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1__ctor_mDC4D7DF8F916E24A027C06B4401638A5E5E9A28C_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1__ctor_mEEF11D7EC2785390CA53626B1728375A79F713CE_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_t4E89C88A812BE3D2F69EB42534537782B7FA1EB3_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_t569265593A89FA799E916FF2D345C50EFB59729A_il2cpp_TypeInfo_var);
    DAT_1151d0f6 = '\x01';
  }
  pLVar1 = (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)
           il2cpp_codegen_object_new
                     (List_1_t4E89C88A812BE3D2F69EB42534537782B7FA1EB3_il2cpp_TypeInfo_var);
  List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
            (pLVar1,List_1__ctor_mEEF11D7EC2785390CA53626B1728375A79F713CE_RuntimeMethod_var);
  param_1->___squares_5 = (List_1_t4E89C88A812BE3D2F69EB42534537782B7FA1EB3 *)pLVar1;
  pLVar1 = (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)
           il2cpp_codegen_object_new
                     (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9_il2cpp_TypeInfo_var);
  List_1__ctor_m26649CC81E6E841879C726F4B0713A31F580A556_gshared
            (pLVar1,0xc,List_1__ctor_mDC4D7DF8F916E24A027C06B4401638A5E5E9A28C_RuntimeMethod_var);
  param_1->___blitVerts_7 = (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)pLVar1;
  pLVar2 = (List_1_t569265593A89FA799E916FF2D345C50EFB59729A *)
           il2cpp_codegen_object_new
                     (List_1_t569265593A89FA799E916FF2D345C50EFB59729A_il2cpp_TypeInfo_var);
  List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
            ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)pLVar2,
             List_1__ctor_m7D4C116027E66F8C32D2BB0F481A8A43BC844AD0_RuntimeMethod_var);
  param_1->___flowDatas_8 = pLVar2;
  Behaviour__ctor_mCACD3614226521EA607B0F3640C0FAC7EACCBCE0
            ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)param_1,(MethodInfo *)0x0);
  return;
}
