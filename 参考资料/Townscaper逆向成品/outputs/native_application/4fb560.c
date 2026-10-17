// RVA 0x4fb560 | Placemaker.Ui.LoadingUi$$.ctor
// PDB: LoadingUi__ctor_mDE325C92E4A87FC05BDD90F711E748B7D9F4C06E
// Body: [[104fb560, 104fb5ea]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 103e8fa0 UpdateState__ctor_m01EDA66F473C3B671CEAC53B590884913324808A
// 105d32b0 List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
// 10a36df0 Behaviour__ctor_mCACD3614226521EA607B0F3640C0FAC7EACCBCE0

void __cdecl
LoadingUi__ctor_mDE325C92E4A87FC05BDD90F711E748B7D9F4C06E
          (LoadingUi_t8BEFBE0AEDF33AF64CC6768876AA348D3AF5619F *param_1,MethodInfo *param_2)

{
  UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *pUVar1;
  List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E *pLVar2;

  if (DAT_1151d27e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1__ctor_mB2F7CCB002CAC8ADE6AAC80A37E8AA25DEA75AE1_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C_il2cpp_TypeInfo_var);
    DAT_1151d27e = '\x01';
  }
  pUVar1 = (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)
           il2cpp_codegen_object_new
                     (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C_il2cpp_TypeInfo_var);
  UpdateState__ctor_m01EDA66F473C3B671CEAC53B590884913324808A(pUVar1,1.0,(MethodInfo *)0x0);
  param_1->___openState_5 = pUVar1;
  pLVar2 = (List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E *)
           il2cpp_codegen_object_new
                     (List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E_il2cpp_TypeInfo_var);
  List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
            ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)pLVar2,
             List_1__ctor_mB2F7CCB002CAC8ADE6AAC80A37E8AA25DEA75AE1_RuntimeMethod_var);
  param_1->___targetColors_10 = pLVar2;
  param_1->___first_13 = true;
  Behaviour__ctor_mCACD3614226521EA607B0F3640C0FAC7EACCBCE0
            ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)param_1,(MethodInfo *)0x0);
  return;
}
