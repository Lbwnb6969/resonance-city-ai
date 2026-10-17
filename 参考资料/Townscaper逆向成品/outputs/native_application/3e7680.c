// RVA 0x3e7680 | Placemaker.Ui.UiMaster$$get_maker
// PDB: UiMaster_get_maker_mA567D1B87101A1318D89E3956439C85A98433C58
// Body: [[103e7680, 103e7696]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception

Maker_t537981F2ED20294ACF4C94693B3268049739203D * __cdecl
UiMaster_get_maker_mA567D1B87101A1318D89E3956439C85A98433C58
          (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *param_1,MethodInfo *param_2)

{
  if (param_1->___worldMaster_5 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) {
    return param_1->___worldMaster_5->___maker_6;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
