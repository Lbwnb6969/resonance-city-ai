// RVA 0x3d1d30 | Placemaker.Maker$$CanRedo
// PDB: Maker_CanRedo_m92BE5F394F3A88CDBF10297F9CC92985B2901E3B
// Body: [[103d1d30, 103d1d69]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception

bool __cdecl
Maker_CanRedo_m92BE5F394F3A88CDBF10297F9CC92985B2901E3B
          (Maker_t537981F2ED20294ACF4C94693B3268049739203D *param_1,MethodInfo *param_2)

{
  if (DAT_1151c852 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_mB1D3E0F73A4AC5C0641BFEBD257139A23EDFAF0B_RuntimeMethod_var
              );
    DAT_1151c852 = '\x01';
  }
  if (param_1->___actions_5 != (List_1_tB3BD89AB8461F1F93A48898145C094951CFC2F0B *)0x0) {
    return param_1->___actionIndex_6 != param_1->___actions_5->____size_2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
