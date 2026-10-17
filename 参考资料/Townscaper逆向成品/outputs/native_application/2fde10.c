// RVA 0x2fde10 | StoreAssetExporter$$.ctor
// PDB: StoreAssetExporter__ctor_mC36970A609FE69F8C60CC7A207DAF33FE0C6B6B2
// Body: [[102fde10, 102fde6d]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 105d32b0 List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
// 10a36df0 Behaviour__ctor_mCACD3614226521EA607B0F3640C0FAC7EACCBCE0

void __cdecl
StoreAssetExporter__ctor_mC36970A609FE69F8C60CC7A207DAF33FE0C6B6B2
          (StoreAssetExporter_t61E948B6489EF0B64C8D77D38992AF4B46102A3B *param_1,MethodInfo *param_2
          )

{
  List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *pLVar1;

  if (DAT_1151c1f8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1__ctor_mD04CAD03BDE2013E799D002230D9D16EFD84FEFC_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7_il2cpp_TypeInfo_var);
    DAT_1151c1f8 = '\x01';
  }
  pLVar1 = (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)
           il2cpp_codegen_object_new
                     (List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7_il2cpp_TypeInfo_var);
  List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
            (pLVar1,List_1__ctor_mD04CAD03BDE2013E799D002230D9D16EFD84FEFC_RuntimeMethod_var);
  param_1->___outputTextures_6 = (List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 *)pLVar1;
  Behaviour__ctor_mCACD3614226521EA607B0F3640C0FAC7EACCBCE0
            ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)param_1,(MethodInfo *)0x0);
  return;
}
