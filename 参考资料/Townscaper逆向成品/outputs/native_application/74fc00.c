// RVA 0x74fc00 | Placemaker.Ui.PalettePicker$$OnClicked
// PDB: PalettePicker_OnClicked_mAA76C7EB3D9DA2EFAD9B5433E64DC36B23676678
// Body: [[1074fc00, 1074fc49]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1043f090 Component_GetComponentInParent_TisRuntimeObject_mADA186D1675BEA6779C469918206294354385EC3_gshared
// 1074f130 PaletteMenu_SelectPicker_m28CA7372D3A143994038A7623C92A08A48C029FA

void __cdecl
PalettePicker_OnClicked_mAA76C7EB3D9DA2EFAD9B5433E64DC36B23676678
          (PalettePicker_t7DE72AF9D552804578E6E75218808113F2153103 *param_1,MethodInfo *param_2)

{
  PaletteMenu_tF5DC99C89B93E9D402B3CFF9C429F936BDDE3D4F *pPVar1;

  if (DAT_1151ebf1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponentInParent_TisPaletteMenu_tF5DC99C89B93E9D402B3CFF9C429F936BDDE3D4F_m9FF64FF521EFA8276860EEA62EC2ADF8B2860C4D_RuntimeMethod_var
              );
    DAT_1151ebf1 = '\x01';
  }
  pPVar1 = (PaletteMenu_tF5DC99C89B93E9D402B3CFF9C429F936BDDE3D4F *)
           Component_GetComponentInParent_TisRuntimeObject_mADA186D1675BEA6779C469918206294354385EC3_gshared
                     ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                      Component_GetComponentInParent_TisPaletteMenu_tF5DC99C89B93E9D402B3CFF9C429F936BDDE3D4F_m9FF64FF521EFA8276860EEA62EC2ADF8B2860C4D_RuntimeMethod_var
                     );
  if (pPVar1 != (PaletteMenu_tF5DC99C89B93E9D402B3CFF9C429F936BDDE3D4F *)0x0) {
    PaletteMenu_SelectPicker_m28CA7372D3A143994038A7623C92A08A48C029FA
              (pPVar1,param_1,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
