// RVA 0x805a00 | Placemaker.Props.PropWireAnchor$$.ctor
// PDB: PropWireAnchor__ctor_mBEFE3A083636CF6267715D67D16A5A2214925509
// Body: [[10805a00, 10805a5d]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 105d32b0 List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
// 10a36df0 Behaviour__ctor_mCACD3614226521EA607B0F3640C0FAC7EACCBCE0

void __cdecl
PropWireAnchor__ctor_mBEFE3A083636CF6267715D67D16A5A2214925509
          (PropWireAnchor_tCB7650546235D6E4FD7E7A3A450C2D9B9491BF1A *param_1,MethodInfo *param_2)

{
  List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *pLVar1;

  if (DAT_1151f1f3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1__ctor_m44DDA041973D8BC6FD21BBC41995832C52462FC6_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_tC2530B698BF7ADA7346BFF63CE9E2BE4564C6286_il2cpp_TypeInfo_var);
    DAT_1151f1f3 = '\x01';
  }
  pLVar1 = (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)
           il2cpp_codegen_object_new
                     (List_1_tC2530B698BF7ADA7346BFF63CE9E2BE4564C6286_il2cpp_TypeInfo_var);
  List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
            (pLVar1,List_1__ctor_m44DDA041973D8BC6FD21BBC41995832C52462FC6_RuntimeMethod_var);
  param_1->___propWires_5 = (List_1_tC2530B698BF7ADA7346BFF63CE9E2BE4564C6286 *)pLVar1;
  Behaviour__ctor_mCACD3614226521EA607B0F3640C0FAC7EACCBCE0
            ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)param_1,(MethodInfo *)0x0);
  return;
}
