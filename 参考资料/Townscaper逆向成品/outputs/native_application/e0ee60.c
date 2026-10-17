// RVA 0xe0ee60 | Placemaker.GridBit$$.ctor
// PDB: GridBit__ctor_m1E3C412DA601D22FC68AB09EE85E42BAEFD826FE
// Body: [[10e0ee60, 10e0eec2]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 105d2dc0 List_1__ctor_m26649CC81E6E841879C726F4B0713A31F580A556_gshared
// 10a36df0 Behaviour__ctor_mCACD3614226521EA607B0F3640C0FAC7EACCBCE0

void __cdecl
GridBit__ctor_m1E3C412DA601D22FC68AB09EE85E42BAEFD826FE
          (GridBit_t23465B0696352D0154A3D888F98761FDAED90C75 *param_1,MethodInfo *param_2)

{
  List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *pLVar1;

  if (DAT_11522650 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1__ctor_mD79DF2346C315695E056B0437EEC0E976C566E73_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_t4DAF4DE3AB09856B0B497582060C41D9B45A575D_il2cpp_TypeInfo_var);
    DAT_11522650 = '\x01';
  }
  pLVar1 = (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)
           il2cpp_codegen_object_new
                     (List_1_t4DAF4DE3AB09856B0B497582060C41D9B45A575D_il2cpp_TypeInfo_var);
  List_1__ctor_m26649CC81E6E841879C726F4B0713A31F580A556_gshared
            (pLVar1,0x100,List_1__ctor_mD79DF2346C315695E056B0437EEC0E976C566E73_RuntimeMethod_var);
  param_1->___verts_10 = (List_1_t4DAF4DE3AB09856B0B497582060C41D9B45A575D *)pLVar1;
  Behaviour__ctor_mCACD3614226521EA607B0F3640C0FAC7EACCBCE0
            ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)param_1,(MethodInfo *)0x0);
  return;
}
