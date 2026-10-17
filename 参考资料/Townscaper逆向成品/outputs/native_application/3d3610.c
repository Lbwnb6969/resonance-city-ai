// RVA 0x3d3610 | Placemaker.Audio.ManySoundsManager$$.ctor
// PDB: ManySoundsManager__ctor_mE81384E40903D14344E9622440228C7DB5FBBA02
// Body: [[103d3610, 103d3699]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 10226660 Dictionary_2__ctor_mAA4C8F456AA58EC1FB154441680BCFAA27AD6183_gshared
// 105d32b0 List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
// 10a36df0 Behaviour__ctor_mCACD3614226521EA607B0F3640C0FAC7EACCBCE0

void __cdecl
ManySoundsManager__ctor_mE81384E40903D14344E9622440228C7DB5FBBA02
          (ManySoundsManager_tC683AA822F4F7736E44162B15F0992C96CD684D6 *param_1,MethodInfo *param_2)

{
  List_1_t18384671DF6690B758BBE06344985BDB7DBEAD53 *pLVar1;
  Dictionary_2_tBF9E2338C61ABCF5ED32053F509AFB44385F774C *pDVar2;

  if (DAT_1151c85a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2__ctor_m4061B27675505437EF99E63E245DE98A34CC9DF9_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Dictionary_2_t2E52634626767436BB40F9B9B936564B4A53B08A_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1__ctor_m10C91D5147B9E721D3302843DAF308E60BE9AED1_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_t18384671DF6690B758BBE06344985BDB7DBEAD53_il2cpp_TypeInfo_var);
    DAT_1151c85a = '\x01';
  }
  pLVar1 = (List_1_t18384671DF6690B758BBE06344985BDB7DBEAD53 *)
           il2cpp_codegen_object_new
                     (List_1_t18384671DF6690B758BBE06344985BDB7DBEAD53_il2cpp_TypeInfo_var);
  List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
            ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)pLVar1,
             List_1__ctor_m10C91D5147B9E721D3302843DAF308E60BE9AED1_RuntimeMethod_var);
  param_1->___soundQueue_5 = pLVar1;
  pDVar2 = (Dictionary_2_tBF9E2338C61ABCF5ED32053F509AFB44385F774C *)
           il2cpp_codegen_object_new
                     (Dictionary_2_t2E52634626767436BB40F9B9B936564B4A53B08A_il2cpp_TypeInfo_var);
  Dictionary_2__ctor_mAA4C8F456AA58EC1FB154441680BCFAA27AD6183_gshared
            (pDVar2,Dictionary_2__ctor_m4061B27675505437EF99E63E245DE98A34CC9DF9_RuntimeMethod_var);
  param_1->___soundDict_6 = (Dictionary_2_t2E52634626767436BB40F9B9B936564B4A53B08A *)pDVar2;
  Behaviour__ctor_mCACD3614226521EA607B0F3640C0FAC7EACCBCE0
            ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)param_1,(MethodInfo *)0x0);
  return;
}
