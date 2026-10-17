// RVA 0x87fad0 | Placemaker.Life.BirdFlock$$.ctor
// PDB: BirdFlock__ctor_m1425C08F4B72A03E8991113165B49BC09ADFCA7C
// Body: [[1087fad0, 1087fb2d]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 105d32b0 List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
// 10a36df0 Behaviour__ctor_mCACD3614226521EA607B0F3640C0FAC7EACCBCE0

void __cdecl
BirdFlock__ctor_m1425C08F4B72A03E8991113165B49BC09ADFCA7C
          (BirdFlock_tB63DB4CEF81D7D9D17C18531A0BEEEA771442436 *param_1,MethodInfo *param_2)

{
  List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *pLVar1;

  if (DAT_1151f5ca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1__ctor_mDF9A4C2DFD7B820FBEC843593C6930872C4CA7F9_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_tF12B8ECABFB01DFF6CE11CBC139AC6115179DCC9_il2cpp_TypeInfo_var);
    DAT_1151f5ca = '\x01';
  }
  pLVar1 = (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)
           il2cpp_codegen_object_new
                     (List_1_tF12B8ECABFB01DFF6CE11CBC139AC6115179DCC9_il2cpp_TypeInfo_var);
  List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
            (pLVar1,List_1__ctor_mDF9A4C2DFD7B820FBEC843593C6930872C4CA7F9_RuntimeMethod_var);
  param_1->___birds_17 = (List_1_tF12B8ECABFB01DFF6CE11CBC139AC6115179DCC9 *)pLVar1;
  Behaviour__ctor_mCACD3614226521EA607B0F3640C0FAC7EACCBCE0
            ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)param_1,(MethodInfo *)0x0);
  return;
}
