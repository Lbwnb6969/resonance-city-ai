// RVA 0x3d28f0 | Placemaker.Maker$$get_grid
// PDB: Maker_get_grid_mDC153F189E9622428A54815ADBAF513D1A232C6A
// Body: [[103d28f0, 103d2906]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception

GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0 * __cdecl
Maker_get_grid_mDC153F189E9622428A54815ADBAF513D1A232C6A
          (Maker_t537981F2ED20294ACF4C94693B3268049739203D *param_1,MethodInfo *param_2)

{
  if (param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) {
    return param_1->___master_4->___grid_5;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
